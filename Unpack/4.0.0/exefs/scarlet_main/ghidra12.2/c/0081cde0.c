/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0081cde0; name: FUN_0081cde0
 */


undefined8
FUN_0081cde0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  if (plVar1 != (long *)0x0) {
    FUN_0081d40c(plVar1,param_1);
  }
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
  if (lVar2 == 0) {
    (**(code **)*plVar1)(plVar1);
    uVar3 = 0;
  }
  else {
                    /* try { // try from 0081ce44 to 0081ce6b has its CatchHandler @ 0081cec0 */
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3);
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,param_4,param_5);
    (**(code **)*plVar1)(plVar1);
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar1);
  return uVar3;
}


