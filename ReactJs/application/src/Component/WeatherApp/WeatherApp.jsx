
import './WeatherApp.css'
import search from '../Asset/search.png';
import cloud from '../Asset/sunny.png';
import humidity_icon from '../Asset/humidity.png';
import wind_icon from '../Asset/wind.png';
//import broken_icon from '../Asset/brokenicon.png';


export const WeatherApp = () => {


let api_key = "05fa344b844d65848cb49ac8c34d3cd5";

const searchf = async () =>{
      const element = document.getElementsByClassName("cityInput")

      if(element[0].value==="")
      {
        return 0;
      }

      let url = `https://api.openweathermap.org/data/2.5/weather?q=${element[0].value}&units=Metric&appid=${api_key}`;

      let response = await fetch(url);
      let data = await response.json();

      const humidity = document.getElementsByClassName("humidity-percentage");
      const windspeed = document.getElementsByClassName("wind-speed");
      const temp = document.getElementsByClassName("weather-temp");
      const location = document.getElementsByClassName("weather-location");


      humidity[0].innerHTML = data.main.humidity +" %";
      windspeed[0].innerHTML = data.wind.speed +" kmph";
      temp[0].innerHTML = data.main.temp +" °C";
      location[0].innerHTML = data.name;



    }



  return (
    <div className='container'>
        <div className='top-bar'>
            <input type="text" className="cityInput" placeholder='Search City'/>
            <div className="search-icon" onClick={()=>{searchf()}}>
                <img src={search} alt=''/>
            </div> 
        </div>
        <div className="weather-image">
            <img src={cloud} alt='' class='cloud'/>
        </div>
        <div className="weather-temp">24°C</div>
        <div className="weather-location">London</div>
        <div className="data-container">
          <div className="element">
            <img src={humidity_icon} alt="" className="image-icon" />
            <div className="data">
              <div className="humidity-percentage">64%</div>
              <div className="text">Humidity</div>
            </div>
          </div>

          <div className="element">
            <img src={wind_icon} alt="" className="image-icon" />
            <div className="data">
              <div className="wind-speed">18kmph</div>
              <div className="text">Wind Speed</div>
            </div>
          </div>
        </div>
    </div>
  )
}
