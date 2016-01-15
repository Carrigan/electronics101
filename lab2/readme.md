# Lab 2: Adding an Arduino

## Intro

In the first lab, we learned the basics of voltage, current, and resistance. Now, we will use what
we know from the LED circuit to create a stop light using Arduino.

## Requirements

- One [Arduino Starter Kit](https://www.arduino.cc/en/Main/ArduinoStarterKit)

## Do It

### The Basic Setup

# TODO: Fritzing Diagram

The companion file, `stoplight.ino`, has the code needed to turn on and off the red light. Try to
use this to make a fully working program. If you get stuck or frustrated, don't worry; just check
the `lab2/basic` branch for the working code and try to see where the mistake was.

### Making it Modular

You may have noticed the redundant copy and pasting of the following:

```
digitalWrite(red_light, HIGH);
delay(1000);
digitalWrite(red_light, LOW);
```

Any time you are copy and pasting code, there is likely a better way of doing it. In this case, why
not make a function that abstracts toggling one of the lights? When we abstract something, we define
it by what changes between the similar examples - in this case the light that is being toggles, and
perhaps even the delay time. In C, functions can be defined as follows:

```
return_type function_name(arg1_type arg1_name, arg2_type arg2_name, ...)
{

}
```

Here, `return_type` is the type of what you are returning. If you are making a function `add(x, y)`,
the `return_type` will likely be an integer. In this case we are not returning anything, so we use the
keyword `void` to represent this.

```
int add(x, y)
{
  return x + y;
}
```

The above code won't compile though since the arguments x and y do not have types. In this case we
want them both to be integers:

```
int add(int x, int y)
{
  return x + y;
}
```

For those coming from a weakly typed system, types will prevent a lot of runtime errors since the
compiler will no let you pass incorrect types in to a function. Trying to call `add(1, 3.14159)`
will throw an error that add takes an integer, not a float.

Going back to our example, try making a function that abstracts the `toggle_light` as follows:

```
void toggle_light(int light)
{

}
```

There should not be a return statement. You can optionally add an `int delay_ms` to the arguments to
make the delay variable too. If you get stuck, the answer can be found in the `lab2/modular` branch.

# TODO: make this branch

### Changing the Brightness with a Potentiometer

# TODO

## Extra Reading

- [Beginning C For Arduino](http://www.dsc.ufcg.edu.br/~rangel/Beginning%20C%20For%20Arduino%20(2012).pdf)
