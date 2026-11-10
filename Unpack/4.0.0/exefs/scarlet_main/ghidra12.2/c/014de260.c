/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014de260; name: FUN_014de260
 */


long * FUN_014de260(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  
  param_1 = param_1 + (param_3 & 0xffffffff) * 0x20;
  *(undefined8 *)(param_1 + 0x10) = param_5;
  *(undefined8 *)(param_1 + 0x20) = 0x128;
  plVar1 = (long *)(**(code **)(*param_5 + 0x10))(param_5,0x128,8);
  *(long **)(param_1 + 0x18) = plVar1;
  if (plVar1 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0xe8))();
  }
  else {
    FUN_014de418(plVar1,param_4,param_5,1);
    *plVar1 = (long)&PTR_FUN_045a7fc0;
    plVar1[1] = (long)&PTR_LAB_045a80d8;
    FUN_014de348(plVar1 + 0xb,param_5);
    plVar1[0x22] = 0;
    *(undefined4 *)((long)plVar1 + 0x124) = 1;
    nn::os::InitializeLightEvent(plVar1 + 0x23,0,1);
    *(long **)(param_1 + 8) = plVar1;
    (**(code **)(*plVar1 + 0xe0))(plVar1,param_2);
  }
  return plVar1;
}


