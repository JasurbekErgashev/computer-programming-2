<h1> Operators Overloading</h1>
 operators that can not be overloaded

 (dot.) operator (myObj.SetName(); for instance)
 </br>
 (.*) pointer to member operator (alternative for "->"; myObj->setSomething());
 </br>
 ::Unary operator (cout << ::x << x; referring global and local x respectively)
 </br>
 ?: Ternary operator (x > 5 ? "Haha": "Hehe") :)) vahava
</hr>
 <h1>MUST HAVE RULES</h1>
<ul>
 <li><em>An operator's precedence cannot be changed by overloading.</em> Parantheses can be used to <i>force</i> the order of evaluation of overloaded operators in an expression.</li>
 <li><em>An operator's associativity cannot be changed by overloading</em>-If an operator normally associates from left to right, then so do all of its overloaded version.</li>
 <li><em>An operator's "arity"</em>(that is, the number of operands an operator takes) <em>cannot be changed</em> - overloaded unary operators remain unary operators; overloaded binary operators remain binary operators. C++'s only ternary operator, ?: cannot be overloaded. Operators &, + and - all have both unary and binary versions that can be separately overloaded.</li>
 <li></li>
 <li></li>
 <li></li>
 <li></li>
</ul>
