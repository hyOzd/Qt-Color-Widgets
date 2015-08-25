/**

@author Calle Laakkonen

@section License

    Copyright (C) 2014 Calle Laakkonen
    Copyright (C) 2015 Mattia Basaglia

    This software is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This software is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Color Widgets.  If not, see <http://www.gnu.org/licenses/>.

*/
#ifndef HUE_SLIDER_HPP
#define HUE_SLIDER_HPP

#include "gradient_slider.hpp"

namespace color_widgets {

/**
 * \brief A slider for selecting a hue value
 */
class QCP_EXPORT HueSlider : public GradientSlider
{
    Q_OBJECT
    /**
     * \brief Saturation used in the rainbow gradient, as a [0-1] float
     */
    Q_PROPERTY(qreal colorSaturation READ colorSaturation WRITE setColorSaturation)
    /**
     * \brief Value used in the rainbow gradient, as a [0-1] float
     */
    Q_PROPERTY(qreal colorValue READ colorValue WRITE setColorValue)
    /**
     * \brief Alpha used in the rainbow gradient, as a [0-1] float
     */
    Q_PROPERTY(qreal colorAlpha READ colorAlpha WRITE setColorAlpha)

public:
    explicit HueSlider(QWidget *parent = nullptr);
    explicit HueSlider(Qt::Orientation orientation, QWidget *parent = nullptr);
    ~HueSlider();

    qreal colorSaturation() const;
    qreal colorValue() const;
    qreal colorAlpha() const;

public slots:
    void setColorValue(qreal value);
    void setColorSaturation(qreal value);
    void setColorAlpha(qreal alpha);

private:
    class Private;
    Private * const p;
};

} // namespace color_widgets

#endif // HUE_SLIDER_HPP

