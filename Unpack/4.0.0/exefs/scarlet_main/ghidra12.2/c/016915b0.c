/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016915b0; name: FUN_016915b0
 */


void FUN_016915b0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  
  *param_1 = 1;
  local_60[0] = *param_2;
  local_58 = *(undefined8 *)(param_2 + 8);
  uStack_50 = *(undefined8 *)(param_2 + 0x10);
  local_48 = *(undefined8 *)(param_2 + 0x18);
  local_40 = *(long **)(param_2 + 0x20);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x18))();
  }
  uStack_28 = *(undefined8 *)(param_2 + 0x38);
  local_30 = *(undefined8 *)(param_2 + 0x30);
  FUN_016918c4(param_1 + 8,local_60);
  if (local_40 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01691640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*local_40 + 0x20))();
  return;
}


