import { cloneUpwork as CloneUpwork } from './Component/CloneUpwork/cloneUpwork';
import { BrowserRouter as Router, Route, Switch } from 'react-router-dom';
import SignupPage from './Component/CloneUpwork/SignupPage';
function App() {
  return (
    <Router>
      <Switch>
        <Route path='/' exact component={CloneUpwork} />
        <Route path='/signup' component={SignupPage} />
      </Switch>
    </Router>

  );
}
export default App;
