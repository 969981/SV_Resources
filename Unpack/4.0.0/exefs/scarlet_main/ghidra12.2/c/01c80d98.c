/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c80d98; name: FUN_01c80d98
 */


void FUN_01c80d98(char *param_1,long param_2,long param_3)

{
  if (*param_1 == '\x01') {
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    param_2 = *(long *)(param_1 + 8) + param_2;
    FUN_00d8e6c4(param_2,param_3);
    FUN_01c45238(param_2 + 0x10,*(undefined8 *)(param_3 + 0x10));
    return;
  }
  if ((*param_1 == '\0') && (*(long *)(param_1 + 8) != 0)) {
    param_2 = *(long *)(param_1 + 8) + param_2;
    FUN_00d8e6c4(param_2,param_3);
    FUN_01c45238(param_2 + 0x10,*(undefined8 *)(param_3 + 0x10));
    return;
  }
  return;
}


