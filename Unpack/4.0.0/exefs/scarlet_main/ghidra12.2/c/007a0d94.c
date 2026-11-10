/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a0d94; name: FUN_007a0d94
 */


void FUN_007a0d94(int *param_1,long param_2,byte param_3)

{
  undefined1 auStack_30 [16];
  
  FUN_007a0058(param_2,*(undefined8 *)(param_2 + 0x148));
  if (*param_1 == 0) {
    if ((*(int *)(param_2 + 0x1148) != 0) && (*(int *)(param_2 + 0x1118) != 1)) {
      FUN_0078cac8(param_2 + 0x1118);
      *(undefined4 *)(param_2 + 0x1148) = 0;
    }
    FUN_007ac52c(auStack_30,*(undefined8 *)(param_2 + 0x148),param_2 + 0x1118,0);
    FUN_018ff39c(param_1,auStack_30);
    if (*param_1 == 0) {
      FUN_0078cd58(*(undefined8 *)(param_2 + 0x148),0);
      *(undefined4 *)(param_2 + 0x1148) = 3;
      *(byte *)(param_2 + 0x284) = param_3 & 1;
      if (*(char *)(param_2 + 0x1168) != '\0') {
        *(char *)(param_2 + 0x1168) = '\0';
        return;
      }
    }
  }
  return;
}


