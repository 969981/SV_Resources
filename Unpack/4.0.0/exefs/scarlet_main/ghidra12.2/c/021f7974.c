/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021f7974; name: FUN_021f7974
 */


void FUN_021f7974(long param_1,ulong param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ushort *puVar7;
  
  param_2 = param_2 & 0xffff;
  uVar4 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),0);
  uVar2 = (&DAT_03d62cb0)[param_2];
  bVar3 = FUN_021ec154(0x286);
  if (bVar3 != 0) {
    uVar5 = (ulong)bVar3;
    puVar7 = &DAT_03d62cb0;
    uVar6 = param_2;
    do {
      if ((uVar6 != 0) && ((uint)*puVar7 == (uVar4 & 0xffff))) {
        FUN_021f7ca8(param_1,uVar4,uVar2,param_3);
      }
      uVar5 = uVar5 - 1;
      uVar6 = uVar6 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar5 != 0);
  }
  uVar1 = (&DAT_03d62cb6)[param_2];
  bVar3 = FUN_021ec154(0x286);
  if (bVar3 != 0) {
    uVar5 = (ulong)bVar3;
    puVar7 = &DAT_03d62cb6;
    uVar6 = param_2;
    do {
      if ((uVar6 != 0) && ((uint)*puVar7 == (uVar4 & 0xffff))) {
        FUN_021f7ca8(param_1,uVar4,uVar1,param_3);
      }
      uVar5 = uVar5 - 1;
      uVar6 = uVar6 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar5 != 0);
  }
  uVar4 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),1);
  bVar3 = FUN_021ec154(0x286);
  if (bVar3 != 0) {
    uVar5 = (ulong)bVar3;
    puVar7 = &DAT_03d62cb0;
    uVar6 = param_2;
    do {
      if ((uVar6 != 0) && ((uint)*puVar7 == (uVar4 & 0xffff))) {
        FUN_021f7ca8(param_1,uVar4,uVar2,param_3);
      }
      uVar5 = uVar5 - 1;
      uVar6 = uVar6 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar5 != 0);
  }
  bVar3 = FUN_021ec154(0x286);
  if (bVar3 != 0) {
    uVar5 = (ulong)bVar3;
    puVar7 = &DAT_03d62cb6;
    uVar6 = param_2;
    do {
      if ((uVar6 != 0) && ((uint)*puVar7 == (uVar4 & 0xffff))) {
        FUN_021f7ca8(param_1,uVar4,uVar1,param_3);
      }
      uVar5 = uVar5 - 1;
      uVar6 = uVar6 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar5 != 0);
  }
  uVar4 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),2);
  bVar3 = FUN_021ec154(0x286);
  if (bVar3 != 0) {
    uVar5 = (ulong)bVar3;
    puVar7 = &DAT_03d62cb0;
    uVar6 = param_2;
    do {
      if ((uVar6 != 0) && ((uint)*puVar7 == (uVar4 & 0xffff))) {
        FUN_021f7ca8(param_1,uVar4,uVar2,param_3);
      }
      uVar5 = uVar5 - 1;
      uVar6 = uVar6 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar5 != 0);
  }
  bVar3 = FUN_021ec154(0x286);
  if (bVar3 != 0) {
    uVar5 = (ulong)bVar3;
    puVar7 = &DAT_03d62cb6;
    uVar6 = param_2;
    do {
      if ((uVar6 != 0) && ((uint)*puVar7 == (uVar4 & 0xffff))) {
        FUN_021f7ca8(param_1,uVar4,uVar1,param_3);
      }
      uVar5 = uVar5 - 1;
      uVar6 = uVar6 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar5 != 0);
  }
  uVar4 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),3);
  bVar3 = FUN_021ec154(0x286);
  if (bVar3 != 0) {
    uVar5 = (ulong)bVar3;
    puVar7 = &DAT_03d62cb0;
    uVar6 = param_2;
    do {
      if ((uVar6 != 0) && ((uint)*puVar7 == (uVar4 & 0xffff))) {
        FUN_021f7ca8(param_1,uVar4,uVar2,param_3);
      }
      uVar5 = uVar5 - 1;
      uVar6 = uVar6 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar5 != 0);
  }
  bVar3 = FUN_021ec154(0x286);
  if (bVar3 != 0) {
    uVar6 = (ulong)bVar3;
    puVar7 = &DAT_03d62cb6;
    do {
      if ((param_2 != 0) && ((uint)*puVar7 == (uVar4 & 0xffff))) {
        FUN_021f7ca8(param_1,uVar4,uVar1,param_3);
      }
      uVar6 = uVar6 - 1;
      param_2 = param_2 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar6 != 0);
  }
  return;
}


