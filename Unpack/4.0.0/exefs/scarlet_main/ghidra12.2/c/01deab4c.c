/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01deab4c; name: FUN_01deab4c
 */


uint FUN_01deab4c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0x4d2f24a72ca9d491;
  pcStack_38 = "L_window_marking_00/in";
  local_30 = 0x16;
  local_28 = (long *)0x0;
  lVar2 = FUN_00e895ec(*(undefined8 *)(param_1 + 0x38),&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_01992e2c(lVar2);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}


