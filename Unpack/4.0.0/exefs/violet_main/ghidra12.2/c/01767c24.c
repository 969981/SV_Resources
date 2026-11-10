/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01767c24; name: FUN_01767c24
 */


void FUN_01767c24(long *param_1)

{
  bool bVar1;
  
  if (param_1[5] == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = *(short *)(param_1[5] + 0x1a) == 0;
  }
  if ((((param_1[3] == 0) || (*(short *)(param_1[3] + 0x1a) == 0)) || (param_1[5] == 0)) ||
     (*(short *)(param_1[5] + 0x1a) == 0)) {
    FUN_01767ce4(param_1);
    if ((param_1[5] != 0) && ((bool)(bVar1 & *(short *)(param_1[5] + 0x1a) != 0))) {
LAB_01767cbc:
      (**(code **)(*param_1 + 0x30))(param_1);
                    /* WARNING: Could not recover jumptable at 0x01767ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))(param_1);
      return;
    }
  }
  else if (bVar1) goto LAB_01767cbc;
  return;
}


