/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01760108; name: FUN_01760108
 */


void FUN_01760108(long param_1,undefined8 param_2,ulong param_3,long param_4,long *param_5)

{
  long *plVar1;
  
  param_1 = param_1 + (param_3 & 0xffffffff) * 0x20;
  *(undefined8 *)(param_1 + 0x10) = param_5;
  *(long *)(param_1 + 0x20) = param_4;
  plVar1 = (long *)(**(code **)(*param_5 + 0x10))(param_5,param_4,0x10);
  *(long **)(param_1 + 0x18) = plVar1;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x017601ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0xe8))();
    return;
  }
  FUN_021e81f0(plVar1,plVar1 + 0x16,param_4 + -0xb0);
  *(long **)(param_1 + 8) = plVar1;
                    /* WARNING: Could not recover jumptable at 0x0176018c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xe0))(plVar1,param_2);
  return;
}


