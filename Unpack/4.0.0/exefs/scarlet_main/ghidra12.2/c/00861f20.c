/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00861f20; name: FUN_00861f20
 */


void FUN_00861f20(long *param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 local_48;
  undefined *puStack_40;
  undefined8 local_38;
  
  if (0x7ffffffe < param_3) {
    local_38 = 0;
    local_48 = 0;
    puStack_40 = PTR_DAT_047d1b38;
    FUN_01f9d9b0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity",&local_48);
  }
  lVar5 = (**(code **)(*param_2 + 0x18))(param_2,param_3 << 6);
  uVar4 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar4) {
    lVar6 = *param_1;
    lVar7 = lVar5;
    if (uVar4 != 1) {
      iVar9 = (uVar4 & 1) - uVar4;
      do {
        *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar6 + 0x10);
        iVar9 = iVar9 + 2;
        uVar2 = *(undefined8 *)(lVar6 + 0x20);
        uVar8 = *(undefined8 *)(lVar6 + 0x28);
        uVar3 = *(undefined8 *)(lVar6 + 0x30);
        *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar6 + 0x18);
        *(undefined8 *)(lVar7 + 0x20) = uVar2;
        *(undefined8 *)(lVar7 + 0x28) = uVar8;
        *(undefined8 *)(lVar7 + 0x30) = uVar3;
        *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)(lVar6 + 0x50);
        uVar8 = *(undefined8 *)(lVar6 + 0x58);
        uVar2 = *(undefined8 *)(lVar6 + 0x60);
        puVar1 = (undefined8 *)(lVar6 + 0x68);
        uVar3 = *(undefined8 *)(lVar6 + 0x70);
        lVar6 = lVar6 + 0x80;
        *(undefined8 *)(lVar7 + 0x68) = *puVar1;
        *(undefined8 *)(lVar7 + 0x70) = uVar3;
        *(undefined8 *)(lVar7 + 0x58) = uVar8;
        *(undefined8 *)(lVar7 + 0x60) = uVar2;
        lVar7 = lVar7 + 0x80;
      } while (iVar9 != 0);
    }
    if ((uVar4 & 1) != 0) {
      uVar8 = *(undefined8 *)(lVar6 + 0x28);
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar6 + 0x18);
      *(undefined8 *)(lVar7 + 0x28) = uVar8;
      *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar6 + 0x10);
      uVar8 = *(undefined8 *)(lVar6 + 0x20);
      *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(lVar6 + 0x30);
      *(undefined8 *)(lVar7 + 0x20) = uVar8;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = lVar5;
  return;
}


