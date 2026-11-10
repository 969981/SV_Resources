/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e81240; name: FUN_02e81240
 */


void FUN_02e81240(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  ulong local_58;
  
  puVar5 = PTR_PTR_047d1a50;
  uVar12 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar8 = uVar12 * 2;
  if (uVar8 <= param_2) {
    uVar8 = param_2;
  }
  if (0x7ffffffe < uVar8) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar8 = 0x7ffffffe;
  }
  lVar6 = (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar8 * 0x50,&local_58);
  iVar13 = (int)param_1[1];
  if (0 < iVar13) {
    plVar7 = (long *)*param_1;
    lVar9 = 0;
    iVar10 = iVar13;
    do {
      puVar2 = (undefined8 *)(lVar6 + lVar9);
      puVar2[1] = 0xffffffff;
      puVar2[2] = 1;
      iVar10 = iVar10 + -1;
      uVar3 = *(undefined8 *)((long)plVar7 + lVar9 + 0x28);
      uVar4 = *(undefined8 *)((long)plVar7 + lVar9 + 0x30);
      *puVar2 = &PTR_LAB_0460d170;
      puVar2[5] = uVar3;
      puVar2[6] = uVar4;
      puVar2[4] = &PTR_LAB_0460d1b8;
      puVar2[7] = *(undefined8 *)((long)plVar7 + lVar9 + 0x38);
      *(undefined4 *)(puVar2 + 8) = *(undefined4 *)((long)plVar7 + lVar9 + 0x40);
      lVar9 = lVar9 + 0x50;
    } while (iVar10 != 0);
    do {
      (**(code **)(*plVar7 + 8))(plVar7);
      iVar13 = iVar13 + -1;
      plVar7 = plVar7 + 10;
    } while (iVar13 != 0);
  }
  uVar1 = uVar8 * 0x50 + 0x50;
  uVar11 = uVar8;
  if (uVar1 <= local_58) {
    local_58 = local_58 - 0x50;
    uVar11 = uVar8 + 1;
    if (uVar1 <= local_58) {
      uVar11 = uVar11 + (local_58 + uVar8 * -0x50) / 0x50;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar5 + 0x20))(puVar5,*param_1,uVar12 * 0x50);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar11;
  *param_1 = lVar6;
  return;
}


