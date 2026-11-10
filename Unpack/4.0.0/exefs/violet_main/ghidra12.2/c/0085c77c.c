/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0085c77c; name: FUN_0085c77c
 */


void FUN_0085c77c(long *param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_58;
  undefined *puStack_50;
  undefined8 local_48;
  
  uVar12 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar7 = uVar12 * 2;
  if (uVar7 <= param_3) {
    uVar7 = param_3;
  }
  if (0x7ffffffe < uVar7) {
    if (0x7ffffffe < param_3) {
      local_48 = 0;
      local_58 = 0;
      puStack_50 = PTR_DAT_047d1b38;
      FUN_01f9d9b0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity",&local_58);
    }
    uVar7 = 0x7ffffffe;
  }
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x40,&local_58);
  uVar5 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar5) {
    lVar8 = *param_1;
    lVar9 = lVar6;
    if (uVar5 != 1) {
      iVar11 = (uVar5 & 1) - uVar5;
      do {
        *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
        iVar11 = iVar11 + 2;
        uVar3 = *(undefined8 *)(lVar8 + 0x20);
        uVar10 = *(undefined8 *)(lVar8 + 0x28);
        uVar4 = *(undefined8 *)(lVar8 + 0x30);
        *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
        *(undefined8 *)(lVar9 + 0x20) = uVar3;
        *(undefined8 *)(lVar9 + 0x28) = uVar10;
        *(undefined8 *)(lVar9 + 0x30) = uVar4;
        *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)(lVar8 + 0x50);
        uVar10 = *(undefined8 *)(lVar8 + 0x58);
        uVar3 = *(undefined8 *)(lVar8 + 0x60);
        puVar1 = (undefined8 *)(lVar8 + 0x68);
        uVar4 = *(undefined8 *)(lVar8 + 0x70);
        lVar8 = lVar8 + 0x80;
        *(undefined8 *)(lVar9 + 0x68) = *puVar1;
        *(undefined8 *)(lVar9 + 0x70) = uVar4;
        *(undefined8 *)(lVar9 + 0x58) = uVar10;
        *(undefined8 *)(lVar9 + 0x60) = uVar3;
        lVar9 = lVar9 + 0x80;
      } while (iVar11 != 0);
    }
    if ((uVar5 & 1) != 0) {
      uVar10 = *(undefined8 *)(lVar8 + 0x28);
      *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)(lVar9 + 0x28) = uVar10;
      *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
      uVar10 = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)(lVar8 + 0x30);
      *(undefined8 *)(lVar9 + 0x20) = uVar10;
    }
  }
  uVar2 = uVar7 * 0x40 + 0x40;
  uVar13 = uVar7;
  if (uVar2 <= local_58) {
    local_58 = local_58 - 0x40;
    uVar13 = uVar7 + 1 + (local_58 + uVar7 * -0x40 >> 6);
    if (local_58 < uVar2) {
      uVar13 = uVar7 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x20))(param_2,*param_1,uVar12 << 6);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar13;
  *param_1 = lVar6;
  return;
}


