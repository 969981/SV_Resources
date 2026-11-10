/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f7ca8; name: FUN_021f7ca8
 */


void FUN_021f7ca8(long param_1,undefined2 param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  
  uVar1 = FUN_020e7e5c();
  if (3 < (uVar1 & 0xff)) {
    return;
  }
  uVar2 = FUN_00eee950(*(undefined8 *)(param_1 + 0x70),uVar1);
  FUN_00eee5f0(*(undefined8 *)(param_1 + 0x70),uVar1,param_3);
  uVar3 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),uVar1);
  uVar4 = FUN_00cf61d4(*(undefined8 *)(param_1 + 0x70),uVar1);
  uVar5 = FUN_00cf5fe0(uVar3,uVar4);
  if ((uVar5 & 0xff) < (uVar2 & 0xff)) {
    FUN_00eedf30(*(undefined8 *)(param_1 + 0x70),uVar1,uVar5);
  }
  if (param_4 == 0) {
    return;
  }
  if (*(short *)(param_4 + 0x10) == 0) {
    lVar6 = 0;
  }
  else if (*(short *)(param_4 + 0x12) == 0) {
    lVar6 = 1;
  }
  else if (*(short *)(param_4 + 0x14) == 0) {
    lVar6 = 2;
  }
  else {
    if (*(short *)(param_4 + 0x16) != 0) goto LAB_021f7d80;
    lVar6 = 3;
  }
  *(undefined2 *)(param_4 + lVar6 * 2 + 0x10) = param_2;
LAB_021f7d80:
  if (*(short *)(param_4 + 8) == 0) {
    lVar6 = 0;
  }
  else if (*(short *)(param_4 + 10) == 0) {
    lVar6 = 1;
  }
  else if (*(short *)(param_4 + 0xc) == 0) {
    lVar6 = 2;
  }
  else {
    if (*(short *)(param_4 + 0xe) != 0) {
      return;
    }
    lVar6 = 3;
  }
  *(short *)(param_4 + lVar6 * 2 + 8) = (short)param_3;
  return;
}


