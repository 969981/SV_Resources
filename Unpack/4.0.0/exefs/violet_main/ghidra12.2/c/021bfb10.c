/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021bfb10; name: FUN_021bfb10
 */


void FUN_021bfb10(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_00ca0ae4(param_2,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[3] = uVar1;
  plVar2 = *(long **)(param_1 + 0x20);
  param_2[4] = plVar2;
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x021bfb64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))();
  return;
}


