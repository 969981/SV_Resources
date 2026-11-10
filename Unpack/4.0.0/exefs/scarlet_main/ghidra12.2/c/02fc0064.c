/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fc0064; name: FUN_02fc0064
 */


void FUN_02fc0064(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong local_58;
  
  puVar4 = PTR_DAT_047d1a08;
  uVar8 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar8 <= param_3) {
    uVar8 = param_3;
  }
  if (0x7ffffffe < uVar8) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar8 = 0x7ffffffe;
  }
  local_58 = uVar8 * 0x20;
  plVar6 = (long *)(**(code **)PTR_DAT_047d1a08)
                             (*(undefined1 *)(param_2 + 8),&local_58,*(undefined4 *)(param_2 + 0xc))
  ;
  puVar5 = PTR_DAT_047e4988;
  uVar14 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar14) {
    plVar7 = (long *)*param_1;
    plVar9 = plVar6;
    plVar10 = plVar7;
    if (uVar14 != 1) {
      iVar11 = -(uVar14 & 0xfffffffe);
      puVar1 = PTR_DAT_047e4988 + 0x10;
      do {
        *plVar9 = (long)puVar1;
        lVar3 = plVar10[2];
        lVar12 = plVar10[3];
        plVar9[1] = plVar10[1];
        plVar9[2] = lVar3;
        plVar9[3] = lVar12;
        plVar9[4] = (long)puVar1;
        lVar12 = plVar10[7];
        lVar3 = plVar10[6];
        plVar9[5] = plVar10[5];
        plVar9[6] = lVar3;
        plVar9[7] = lVar12;
        plVar9 = plVar9 + 8;
        plVar10 = plVar10 + 8;
        iVar11 = iVar11 + 2;
      } while (iVar11 != 0);
    }
    if ((uVar14 & 1) != 0) {
      *plVar9 = (long)(puVar5 + 0x10);
      lVar3 = plVar10[1];
      lVar12 = plVar10[3];
      plVar9[2] = plVar10[2];
      plVar9[3] = lVar12;
      plVar9[1] = lVar3;
    }
    do {
      (**(code **)(*plVar7 + 8))(plVar7);
      uVar14 = uVar14 - 1;
      plVar7 = plVar7 + 4;
    } while (uVar14 != 0);
  }
  uVar2 = uVar8 * 0x20 + 0x20;
  uVar13 = uVar8;
  if (uVar2 <= local_58) {
    local_58 = local_58 - 0x20;
    uVar13 = uVar8 + 1 + (local_58 + uVar8 * -0x20 >> 5);
    if (local_58 < uVar2) {
      uVar13 = uVar8 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar4 + 8))(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar13;
  *param_1 = plVar6;
  return;
}


