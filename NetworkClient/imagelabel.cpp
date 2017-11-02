#include "imagelabel.h"
#include <QFileDialog>
#include <QImageReader>
imagelabel::imagelabel(QWidget *parent)
	: QLabel(parent)
{
}

imagelabel::~imagelabel()
{
}

void imagelabel::setImage(const QString & file)
{
	QImageReader ir(file);
	QPixmap image = QPixmap::fromImageReader(&ir);

	this->setPixmap(image.scaled(this->size()));
	m_file = file;
}

const QString & imagelabel::getImage() const
{
	return m_file;
	// TODO: insert return statement here
}

void imagelabel::mousePressEvent(QMouseEvent * event)
{
	QLabel::mousePressEvent(event);
	QFileDialog dialog(this);
	dialog.setNameFilter("Images(*.png *.xpm *.jpg *.JPEG *.ico)");
	dialog.setViewMode(QFileDialog::Detail);

	if (dialog.exec() == QDialog::Rejected)
	{
		return;
	}
	QStringList files = dialog.selectedFiles();
	setImage(*files.begin());
	/*QImageReader ir(*files.begin());
	QPixmap image = QPixmap::fromImageReader(&ir);

	this->setPixmap(image.scaled(this->size()));*/
	//dialog.exec();
}
