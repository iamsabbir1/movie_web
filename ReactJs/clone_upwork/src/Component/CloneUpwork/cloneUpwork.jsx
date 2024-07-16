import React from 'react'
import './cloneUpwork.css'
import User from '../Asset/user.png'

export const cloneUpwork = () => {
  return (
    <div className="cloneUpwork">
      <div className="header">
        <div className="header__left">
          <img src="https://www.upwork.com/ab/brontes/favicon.ico" alt="Upwork" />
        </div>
      </div>


      <div className="login">
        <h1>Login to Clone Upwork</h1>
        <div className="top">
          <div className="user">
            <input type="text" placeholder="Username or Email" />
            <img src={User} alt="User" className='user-icon' />
          </div>
          {/* <div className="continue">
            <button type='submit' className='continue'>Continue</button>
          </div> */}

          <button type='submit' className='continue'>Continue</button>

          <div className="or">
            <hr style={{ flex: '1' }}></hr>
            <span style={{ padding: '0 10px' }}>or</span>
            <hr style={{ flex: '1' }}></hr>
          </div>

          <div className="google">
            <button type='submit'>Continue with Google</button>
          </div>

          <div className="facebook">
            <button type='submit'>Continue with Facebook</button>
          </div>

          <div class="account">
            <p>Don't have an account? <span>Sign Up</span></p>
          </div>

          <div class="signup">
            <button type='submit'>Sign Up</button>
          </div>
        </div>
      </div>



      <footer>
        © 2015 - 2024 Upwork® Global Inc. • Privacy Policy
      </footer>
    </div>
  )
}
