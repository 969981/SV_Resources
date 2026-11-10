/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03168240; name: FUN_03168240
 */


undefined8 FUN_03168240(long param_1,ushort *param_2,long *param_3,long param_4)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  short *psVar12;
  long local_58;
  ulong local_38;
  
  iVar2 = *(int *)(param_4 + 0x10);
  lVar10 = (long)*(int *)(param_1 + 0x128);
  *(int *)(param_4 + 0x10) = iVar2 + 1;
  psVar12 = (short *)(*(long *)(param_4 + 8) + (long)iVar2 * 6);
  psVar12[0] = 0;
  psVar12[1] = 0;
  psVar12[2] = param_2[2];
  lVar11 = tpidr_el0;
  lVar3 = *(long *)(lVar11 + 0x1000b8);
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar11 + 0x1000b8) = lVar3;
  }
  lVar11 = *(long *)(*(long *)(lVar3 + 0x3d0) + 0x10);
  local_58 = lVar10;
  if ((*(long *)(lVar11 + 8) == 0) && (lVar11 != 0)) {
    local_38 = lVar10 + 0x3fU & 0xffffffffffffffc0;
    if (local_38 <= *(ulong *)(lVar11 + 0x28)) {
      lVar3 = *(long *)(lVar11 + 0x38);
      if (local_38 + lVar3 <= *(ulong *)(lVar11 + 0x40)) {
        *(ulong *)(lVar11 + 0x38) = local_38 + lVar3;
        goto LAB_03168354;
      }
    }
    lVar3 = FUN_031cf3b4(lVar11,&local_38);
  }
  else {
    lVar3 = (**(code **)PTR_DAT_047d1a08)(1,&local_58,0x40);
    lVar11 = 0;
  }
LAB_03168354:
  uVar1 = *param_2;
  uVar4 = (ulong)uVar1;
  do {
    iVar2 = *(int *)(param_4 + 0x30);
    *(int *)(param_4 + 0x30) = iVar2 + 1;
    lVar5 = *(long *)(param_4 + 0x28);
    *psVar12 = *psVar12 + 1;
    uVar6 = *(ulong *)(*(long *)(param_1 + 0x120) + (uVar4 & 0xffff) * 8);
    *(short *)(lVar5 + (long)iVar2 * 8) = (short)uVar6;
    uVar7 = (uint)(uVar6 >> 0x20) & 3;
    uVar4 = uVar6 >> 0x10;
    uVar9 = uVar6 >> 0x22 & 0x3fff;
    uVar8 = (undefined4)uVar9;
    if (uVar7 == 2) {
      uVar8 = *(undefined4 *)(*param_3 + uVar9 * 4);
    }
    lVar5 = lVar5 + (long)iVar2 * 8;
    *(undefined4 *)(lVar5 + 4) = uVar8;
    *(byte *)(lVar5 + 2) = (byte)uVar7 | 4;
  } while ((uint)uVar1 != (uint)uVar6 >> 0x10);
  if (lVar11 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar3,lVar10);
    return 1;
  }
  uVar4 = lVar10 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar11 + 0x28) < uVar4) || (*(long *)(lVar11 + 0x38) != uVar4 + lVar3)) {
    if (lVar3 == 0) {
      return 1;
    }
    if (*(ulong *)(lVar11 + 0x28) < uVar4 + 0x40) {
      *(int *)(*(long *)(lVar11 + 0x30) + 0x20) = *(int *)(*(long *)(lVar11 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar11 + 0x10) + 0x18))
                (*(long **)(lVar11 + 0x10),lVar3 - *(int *)(lVar3 + -4),uVar4 + 0x44);
      return 1;
    }
    if (*(long *)(lVar11 + 0x38) != uVar4 + lVar3) {
      FUN_031cf778(lVar11);
      return 1;
    }
    *(long *)(lVar11 + 0x38) = lVar3;
  }
  else {
    *(long *)(lVar11 + 0x38) = lVar3;
    if (*(long *)(lVar11 + 0x48) != lVar3) {
      return 1;
    }
  }
  FUN_031cf578(lVar11);
  return 1;
}


