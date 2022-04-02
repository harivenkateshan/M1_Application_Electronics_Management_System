
# TEST PLAN
### High Level TestPlan
| TEST ID       | Description       | Expected Input | Expected output|Actual Output| Type of Test|
| ------------- |:-------------:| -----:|-----:|-----:|-----:|
| HLR 1     | Generate Bill |   Tax also included   |Total Bill amount with tax|Exact price with tax|Requirement based|
| HLR 2      | Search filter      |  filter by prices and products |Specified Item price|Exact price of the Item| Scenario based|
| HLR 3 | Get customer and cashier details    | manage the user and customer details   |Name of the cashier and customer|Name given|Boundary based|

### Low Level TestPlan
| TEST ID       | Description       | Expected Input |Expected output|Actual Output|Type of Test|
| ------------- |:-------------:| -----:|-----:|-----:|-----:|
| LLR 1     | Basic operation |  To generate bills  |Price of the items| Items exact price and quantity|Requirement based|
| LLR 2      |   float   |  to detect the tax of the product |tax included| Tax based on the items chosen|Scenario based|
| LLR 3 |  Multifile   |  to reduce a code structure   |precise code format|code structure reduced|Boundary based|
