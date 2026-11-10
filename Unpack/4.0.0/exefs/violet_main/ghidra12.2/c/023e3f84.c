/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023e3f84; name: FUN_023e3f84
 */


void FUN_023e3f84(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_00c43ef0(param_2,param_1);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  plVar1 = *(long **)(param_1 + 0x28);
  param_2[5] = plVar1;
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023e3fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


