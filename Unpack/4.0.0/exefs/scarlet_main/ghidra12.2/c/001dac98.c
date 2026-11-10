/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001dac98; name: FUN_001dac98
 */


void FUN_001dac98(long param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 extraout_w1;
  undefined4 extraout_var;
  long *plVar5;
  
  uVar4 = FUN_001e0dfc();
  switch(param_2) {
  case 1:
    *(undefined8 *)(param_1 + 0x1018) = uVar4;
    *(ulong *)(param_1 + 0x1020) = CONCAT44(extraout_var,extraout_w1);
    return;
  case 2:
    *(undefined8 *)(param_1 + 0x1008) = uVar4;
    *(ulong *)(param_1 + 0x1010) = CONCAT44(extraout_var,extraout_w1);
    *(byte *)(param_1 + 0x10fc) = *(byte *)(param_1 + 0x10fc) & 0xfd;
    return;
  case 3:
    plVar5 = (long *)(param_1 + 0xfc8);
    break;
  case 4:
    plVar5 = (long *)(param_1 + 0xfd0);
    break;
  case 5:
    plVar5 = (long *)(param_1 + 0xfd8);
    break;
  case 6:
    plVar5 = (long *)(param_1 + 0xfe0);
    break;
  case 7:
    bVar1 = *(byte *)(param_1 + 0x10fc);
    if ((bVar1 >> 1 & 1) != 0) {
      return;
    }
    plVar5 = (long *)(param_1 + 0xfe8);
    *(byte *)(param_1 + 0x10fc) = bVar1 | 2;
    break;
  default:
    goto switchD_001dacd0_caseD_8;
  case 9:
    *(undefined8 *)(param_1 + 0x1028) = uVar4;
    *(ulong *)(param_1 + 0x1030) = CONCAT44(extraout_var,extraout_w1);
    return;
  case 10:
    iVar3 = FUN_001e0e84((int)uVar4,extraout_w1,*(undefined8 *)(param_1 + 0xff8),
                         *(undefined8 *)(param_1 + 0x1000));
    *(long *)(param_1 + 0xff0) = (long)iVar3;
    goto switchD_001dacd0_caseD_8;
  }
  uVar2 = FUN_001e0e84((int)uVar4,extraout_w1,*(undefined8 *)(param_1 + 0x1008),
                       *(undefined8 *)(param_1 + 0x1010));
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  *plVar5 = *plVar5 + (ulong)uVar2;
switchD_001dacd0_caseD_8:
  return;
}


