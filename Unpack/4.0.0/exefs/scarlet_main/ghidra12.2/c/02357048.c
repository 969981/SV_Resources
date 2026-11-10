/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02357048; name: FUN_02357048
 */


void FUN_02357048(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long *local_40;
  undefined8 local_38;
  undefined1 local_30;
  long *local_28;
  
  *param_1 = 1;
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_48 = param_2[2];
  local_40 = (long *)param_2[3];
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x18))();
  }
  local_38 = param_2[4];
  local_30 = *(undefined1 *)(param_2 + 5);
  local_28 = (long *)param_2[6];
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x18))();
  }
  FUN_023574c8(param_1 + 8,&local_58);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (local_40 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02357104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*local_40 + 0x20))();
  return;
}


