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
 <li><em>Only existing operators can be overloaded </em> - you cannot create new ones.</li>
 <li>You cannot overload operators to change how an operator works on fundamental - type values. For example, you cannot make the + operator subtract two ints. Operator overloading works only with <em>objects of user-defined types or with a mixture of an object of a user-defined type and an object of a fundamental type.</em></li>
 <li>Related operators, like + and +=, must be overloaded separately.</li>
 <li>When overloading <strong>(), [], -></strong> or any of the assignment operators, the operator overloading function must be declared as a class member. For all other overloadable operators, the operator overloading functions can be member functions or non-member functions.</li>
</ul>
