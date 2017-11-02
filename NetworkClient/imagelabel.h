#pragma once

#include <QLabel>
 
class imagelabel : public QLabel
{
	Q_OBJECT

public:
	imagelabel(QWidget *parent);
	~imagelabel();
	void setImage(const QString& file);
	const QString& getImage() const;
protected:
	void mousePressEvent(QMouseEvent *event);
private:
	QString m_file;
};
