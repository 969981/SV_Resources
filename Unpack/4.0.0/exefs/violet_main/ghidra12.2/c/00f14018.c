/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f14018; name: FUN_00f14018
 */


void FUN_00f14018(long param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  sVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),0);
  sVar2 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),1);
  uVar6 = 2;
  if (sVar1 == 0) {
    uVar6 = 1;
  }
  uVar9 = (uint)(sVar1 != 0);
  uVar7 = uVar9;
  if (sVar2 != 0) {
    uVar7 = uVar6;
  }
  sVar1 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),2);
  if (sVar1 != 0) {
    uVar7 = uVar7 + 1;
  }
  sVar3 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),3);
  if (sVar3 != 0) {
    uVar7 = uVar7 + 1;
  }
  if (uVar7 != 0) {
    iVar8 = 0;
    do {
      uVar4 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),iVar8);
      uVar5 = FUN_00cf61d4(*(undefined8 *)(param_1 + 0x70),iVar8);
      uVar6 = FUN_00cf5fe0(uVar4,uVar5);
      uVar7 = FUN_00eee950(*(undefined8 *)(param_1 + 0x70),iVar8);
      if ((uVar6 & 0xff) < (uVar7 & 0xff)) {
        uVar4 = FUN_00eedbc8(*(undefined8 *)(param_1 + 0x70),iVar8);
        uVar5 = FUN_00cf61d4(*(undefined8 *)(param_1 + 0x70),iVar8);
        uVar7 = FUN_00cf5fe0(uVar4,uVar5);
        if ((uVar6 & 0xff) <= (uVar7 & 0xff)) {
          uVar7 = uVar6;
        }
        FUN_00eedf30(*(undefined8 *)(param_1 + 0x70),iVar8,uVar7);
      }
      iVar8 = iVar8 + 1;
    } while (uVar9 + (sVar1 != 0) + (uint)(sVar3 != 0) + (uint)(sVar2 != 0) != iVar8);
  }
  return;
}


