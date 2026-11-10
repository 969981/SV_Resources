/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021009c0; name: FUN_021009c0
 */


void FUN_021009c0(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar4 = FUN_00f7e28c(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),0);
  uVar6 = 0;
  uVar3 = 0;
  if ((uVar4 & 1) != 0) {
    if (*(short *)(*(long *)(param_1 + 0x30) + 0x98) == 0) {
      uVar3 = FUN_01242ecc(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),
                           *(undefined1 *)(param_1 + 0x11c),0);
      uVar6 = uVar3 ^ 1;
    }
    else {
      uVar6 = 0;
      uVar3 = 0;
    }
  }
  uVar4 = FUN_00f7e28c(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),1);
  if (((uVar4 & 1) != 0) && (*(short *)(*(long *)(param_1 + 0x30) + 0x9a) == 0)) {
    uVar2 = FUN_01242ecc(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),
                         *(undefined1 *)(param_1 + 0x11c),1);
    uVar6 = uVar6 | uVar2 ^ 1;
    uVar3 = uVar3 | uVar2;
  }
  uVar4 = FUN_00f7e28c(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),2);
  if (((uVar4 & 1) != 0) && (*(short *)(*(long *)(param_1 + 0x30) + 0x9c) == 0)) {
    uVar2 = FUN_01242ecc(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),
                         *(undefined1 *)(param_1 + 0x11c),2);
    uVar6 = uVar6 | uVar2 ^ 1;
    uVar3 = uVar3 | uVar2;
  }
  uVar4 = FUN_00f7e28c(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),3);
  if (((uVar4 & 1) != 0) && (*(short *)(*(long *)(param_1 + 0x30) + 0x9e) == 0)) {
    uVar2 = FUN_01242ecc(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),
                         *(undefined1 *)(param_1 + 0x11c),3);
    uVar6 = uVar6 | uVar2 ^ 1;
    uVar3 = uVar3 | uVar2;
  }
  uVar4 = FUN_00f7e28c(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),4);
  if (((uVar4 & 1) != 0) && (*(short *)(*(long *)(param_1 + 0x30) + 0xa0) == 0)) {
    uVar2 = FUN_01242ecc(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),
                         *(undefined1 *)(param_1 + 0x11c),4);
    uVar6 = uVar6 | uVar2 ^ 1;
    uVar3 = uVar3 | uVar2;
  }
  uVar5 = 0x2af;
  if ((uVar3 & 1) != 0) {
    uVar5 = 0x2b0;
  }
  uVar1 = 0x2ae;
  if ((uVar6 & uVar3 & 1) == 0) {
    uVar1 = uVar5;
  }
  *param_2 = uVar1;
  *param_3 = 1;
  return;
}


