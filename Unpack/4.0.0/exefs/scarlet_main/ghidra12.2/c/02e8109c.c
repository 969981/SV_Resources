/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e8109c; name: FUN_02e8109c
 */


void FUN_02e8109c(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  ulong local_58;
  
  puVar6 = PTR_PTR_047d1a50;
  puVar5 = PTR_DAT_047d1a08;
  uVar9 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar9 <= param_2) {
    uVar9 = param_2;
  }
  if (0x7ffffffe < uVar9) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar9 = 0x7ffffffe;
  }
  local_58 = uVar9 * 0x50;
  lVar7 = (**(code **)PTR_DAT_047d1a08)
                    (PTR_PTR_047d1a50[8],&local_58,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  iVar13 = (int)param_1[1];
  if (0 < iVar13) {
    plVar8 = (long *)*param_1;
    lVar10 = 0;
    iVar11 = iVar13;
    do {
      puVar2 = (undefined8 *)(lVar7 + lVar10);
      puVar2[1] = 0xffffffff;
      puVar2[2] = 1;
      iVar11 = iVar11 + -1;
      uVar3 = *(undefined8 *)((long)plVar8 + lVar10 + 0x28);
      uVar4 = *(undefined8 *)((long)plVar8 + lVar10 + 0x30);
      *puVar2 = &PTR_LAB_0460d170;
      puVar2[5] = uVar3;
      puVar2[6] = uVar4;
      puVar2[4] = &PTR_LAB_0460d1b8;
      puVar2[7] = *(undefined8 *)((long)plVar8 + lVar10 + 0x38);
      *(undefined4 *)(puVar2 + 8) = *(undefined4 *)((long)plVar8 + lVar10 + 0x40);
      lVar10 = lVar10 + 0x50;
    } while (iVar11 != 0);
    do {
      (**(code **)(*plVar8 + 8))(plVar8);
      iVar13 = iVar13 + -1;
      plVar8 = plVar8 + 10;
    } while (iVar13 != 0);
  }
  uVar1 = uVar9 * 0x50 + 0x50;
  uVar12 = uVar9;
  if (uVar1 <= local_58) {
    local_58 = local_58 - 0x50;
    uVar12 = uVar9 + 1;
    if (uVar1 <= local_58) {
      uVar12 = uVar12 + (local_58 + uVar9 * -0x50) / 0x50;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar5 + 8))(puVar6[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar12;
  *param_1 = lVar7;
  return;
}


