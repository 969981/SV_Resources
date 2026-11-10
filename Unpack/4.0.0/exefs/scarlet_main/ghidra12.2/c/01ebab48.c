/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ebab48; name: FUN_01ebab48
 */


void FUN_01ebab48(char *param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar2 = param_2[1];
  param_1[0x20] = *(char *)(param_2 + 2);
  pcVar1 = param_1 + 0x30;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  if (*param_1 == '\0') {
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    param_1[0x44] = '\0';
    param_1[0x45] = '\0';
    param_1[0x46] = '\0';
    param_1[0x47] = '\0';
    param_1[0x48] = '\0';
    param_1[0x49] = '\0';
    param_1[0x4a] = '\0';
    param_1[0x4b] = '\0';
    param_1[0x4c] = '\0';
    param_1[0x4d] = '\0';
    param_1[0x4e] = '\0';
    param_1[0x4f] = '\0';
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
    if ((code *)param_2[6] != (code *)0x0) {
      (*(code *)param_2[6])(param_2 + 8,param_1 + 0x50);
      uVar4 = param_2[7];
      *(undefined8 *)(param_1 + 0x38) = param_2[5];
      *(undefined8 *)(param_1 + 0x48) = uVar4;
      uVar4 = param_2[4];
      *(undefined8 *)(param_1 + 0x40) = param_2[6];
      *(undefined8 *)pcVar1 = uVar4;
    }
    *param_1 = '\x01';
  }
  else {
    pcVar3 = *(code **)(param_1 + 0x38);
    if (pcVar3 != (code *)0x0) {
      param_1[0x40] = '\0';
      param_1[0x41] = '\0';
      param_1[0x42] = '\0';
      param_1[0x43] = '\0';
      param_1[0x44] = '\0';
      param_1[0x45] = '\0';
      param_1[0x46] = '\0';
      param_1[0x47] = '\0';
      param_1[0x48] = '\0';
      param_1[0x49] = '\0';
      param_1[0x4a] = '\0';
      param_1[0x4b] = '\0';
      param_1[0x4c] = '\0';
      param_1[0x4d] = '\0';
      param_1[0x4e] = '\0';
      param_1[0x4f] = '\0';
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      param_1[0x38] = '\0';
      param_1[0x39] = '\0';
      param_1[0x3a] = '\0';
      param_1[0x3b] = '\0';
      param_1[0x3c] = '\0';
      param_1[0x3d] = '\0';
      param_1[0x3e] = '\0';
      param_1[0x3f] = '\0';
      (*pcVar3)(param_1 + 0x50);
    }
    if ((code *)param_2[6] != (code *)0x0) {
      (*(code *)param_2[6])(param_2 + 8,param_1 + 0x50);
      uVar4 = param_2[7];
      *(undefined8 *)(param_1 + 0x38) = param_2[5];
      *(undefined8 *)(param_1 + 0x48) = uVar4;
      uVar4 = param_2[4];
      *(undefined8 *)(param_1 + 0x40) = param_2[6];
      *(undefined8 *)pcVar1 = uVar4;
    }
  }
  return;
}


