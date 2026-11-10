/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014def50; name: FUN_014def50
 */


void FUN_014def50(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *param_1 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = uVar2;
  plVar1 = *(long **)(param_2 + 0x38);
  param_1[2] = *(undefined8 *)(param_2 + 0x30);
  param_1[3] = plVar1;
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x014def74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


