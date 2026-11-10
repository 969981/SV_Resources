/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01deaa78; name: FUN_01deaa78
 */


void FUN_01deaa78(long param_1)

{
  long lVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x7689058fe8fbbd5;
  pcStack_38 = "L_window_marking_00";
  local_30 = 0x13;
  local_28 = (long *)0x0;
  lVar1 = FUN_00c8c7ac(*(undefined8 *)(param_1 + 0x38),&local_40);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_40 = 0x4d2f24a72ca9d491;
  pcStack_38 = "L_window_marking_00/in";
  local_30 = 0x16;
  local_28 = (long *)0x0;
  lVar1 = FUN_00e895ec(*(undefined8 *)(param_1 + 0x38),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (lVar1 != 0) {
    FUN_00dfcea4(lVar1);
  }
  return;
}


