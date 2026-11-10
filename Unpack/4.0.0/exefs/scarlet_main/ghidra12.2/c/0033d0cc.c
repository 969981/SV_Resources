/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033d0cc; name: FUN_0033d0cc
 */


void FUN_0033d0cc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_0033d0cc(param_1,*param_2);
  FUN_0033d0cc(param_1,param_2[1]);
  puVar1 = (undefined8 *)param_2[5];
  param_2[5] = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 0033d108 to 0033d10b has its CatchHandler @ 0033d130 */
    (**(code **)*puVar1)();
  }
  FUN_0049e790(PTR_LAB_047cba48,param_2);
  return;
}


