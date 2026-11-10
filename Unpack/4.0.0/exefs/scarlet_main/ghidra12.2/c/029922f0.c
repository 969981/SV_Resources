/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029922f0; name: FUN_029922f0
 */


undefined8 FUN_029922f0(long param_1,int *param_2)

{
  if (*param_2 == 0) {
    *(undefined1 *)(param_1 + 0x95) = 0;
    *(char *)(param_1 + 0x95) = (char)*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x90);
    FUN_010a0930(param_1);
    FUN_0109fd14(param_1);
    FUN_010a2cb0(param_1,*(undefined8 *)(param_1 + 8));
    FUN_010a0210(param_1);
    *param_2 = *param_2 + 1;
  }
  else if (*param_2 != 1) {
    return 1;
  }
  *(code **)(param_1 + 0x68) = FUN_010c3528;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return 1;
}


