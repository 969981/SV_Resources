/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00871308; name: FUN_00871308
 */


void FUN_00871308(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined *puVar10;
  void *__dest;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  void *pvVar16;
  uint uVar17;
  ulong uVar18;
  undefined4 local_5c;
  ulong local_58;
  undefined *puStack_50;
  undefined8 local_48;
  
  iVar7 = *(int *)(param_1 + 0x48) * 8;
  iVar14 = *(int *)(param_1 + 8) + 0x1f;
  iVar4 = *(int *)(param_1 + 8) + 0x3e;
  if (-1 < iVar14) {
    iVar4 = iVar14;
  }
  if (*(int *)((long)param_2 + 0xc) < 0) {
    lVar12 = 0;
    if (*param_2 != 0) {
      lVar12 = *param_2 + (long)param_2;
    }
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar12,0);
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  if ((iVar4 >> 5) + iVar7 == 0) {
    local_5c = 0;
    lVar12 = 0;
  }
  else {
    local_5c = 0;
    uVar17 = (iVar4 >> 5) + iVar7;
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    if ((int)uVar17 < 1) {
      lVar12 = 0;
      *(uint *)(param_2 + 1) = uVar17;
    }
    else {
      uVar8 = uVar17 - 1 | (int)(uVar17 - 1) >> 0x10;
      uVar8 = uVar8 | (int)uVar8 >> 8;
      uVar8 = uVar8 | (int)uVar8 >> 4;
      uVar8 = uVar8 | (int)uVar8 >> 2;
      uVar8 = (uVar8 | (int)uVar8 >> 1) + 1;
      if ((int)uVar8 < (int)uVar17) {
        local_48 = 0;
        local_58 = 0;
        puStack_50 = PTR_DAT_047d1b38;
        FUN_01f9d9b0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                     "Capacity reservation overflow",&local_58);
      }
      puVar10 = PTR_DAT_047d1a08;
      local_58 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2;
      __dest = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
      pvVar16 = (void *)0x0;
      if (*param_2 != 0) {
        pvVar16 = (void *)(*param_2 + (long)param_2);
      }
      memcpy(__dest,pvVar16,(long)(int)param_2[1] << 2);
      if (*(int *)((long)param_2 + 0xc) < 0) {
        lVar12 = 0;
        if (*param_2 != 0) {
          lVar12 = *param_2 + (long)param_2;
        }
        (**(code **)(puVar10 + 8))(0,lVar12,0);
      }
      lVar12 = 0;
      if (__dest != (void *)0x0) {
        lVar12 = (long)__dest - (long)param_2;
      }
      *(uint *)(param_2 + 1) = uVar17;
      *(uint *)((long)param_2 + 0xc) = uVar8 | 0x80000000;
      *param_2 = lVar12;
      pvVar16 = (void *)(lVar12 + (long)param_2);
      uVar18 = (ulong)uVar17;
      do {
        memcpy(pvVar16,&local_5c,4);
        uVar18 = uVar18 - 1;
        pvVar16 = (void *)((long)pvVar16 + 4);
      } while (uVar18 != 0);
      lVar12 = *param_2;
    }
  }
  iVar14 = *(int *)(param_1 + 0x48);
  lVar11 = 0;
  if (lVar12 != 0) {
    lVar11 = lVar12 + (long)param_2;
  }
  if (iVar14 < 1) {
    lVar11 = lVar11 + (long)(iVar14 << 3) * 4;
  }
  else {
    plVar2 = (long *)(param_1 + 0x40);
    lVar15 = *plVar2;
    lVar13 = 0;
    do {
      if (*(char *)((long)plVar2 + lVar13 * 0x60 + lVar15 + 0x59) != '\0') {
        lVar11 = lVar11 + (long)((int)lVar13 << 3) * 4;
        uVar17 = 0;
        uVar18 = 0;
        do {
          uVar9 = uVar18 >> 4;
          uVar8 = (int)uVar18 + 1;
          uVar18 = (ulong)uVar8;
          lVar12 = uVar9 * 4;
          uVar3 = uVar17 & 0x1e;
          uVar17 = uVar17 + 2;
          *(uint *)(lVar11 + lVar12) = *(uint *)(lVar11 + lVar12) | 3 << (ulong)uVar3;
          lVar15 = *plVar2;
        } while (uVar8 < *(byte *)((long)plVar2 + lVar13 * 0x60 + lVar15 + 0x59));
        iVar14 = *(int *)(param_1 + 0x48);
        lVar12 = *param_2;
      }
      lVar13 = lVar13 + 1;
      lVar11 = 0;
      if (lVar12 != 0) {
        lVar11 = lVar12 + (long)param_2;
      }
    } while (lVar13 < iVar14);
    lVar11 = lVar11 + (long)(iVar14 << 3) * 4;
    if (0 < iVar14) {
      iVar14 = 0;
      lVar15 = 0x5c;
      lVar13 = 1;
      while( true ) {
        lVar5 = 0;
        if (lVar12 != 0) {
          lVar5 = lVar12 + (long)param_2;
        }
        piVar1 = (int *)(lVar5 + (long)iVar14 * 4);
        uVar6 = *(ushort *)((long)plVar2 + lVar15 + *(long *)(param_1 + 0x40));
        uVar18 = (ulong)(uVar6 >> 3) & 0x1ffc;
        *(uint *)(lVar11 + uVar18) =
             (uint)(((((((piVar1[1] != 0 || *piVar1 != 0) || piVar1[2] != 0) || piVar1[3] != 0) ||
                      piVar1[4] != 0) || piVar1[5] != 0) || piVar1[6] != 0) || piVar1[7] != 0) <<
             (ulong)(uVar6 & 0x1f) |
             *(uint *)(lVar11 + uVar18) & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
        if (*(int *)(param_1 + 0x48) <= lVar13) break;
        lVar12 = *param_2;
        lVar13 = lVar13 + 1;
        iVar14 = iVar14 + 8;
        lVar15 = lVar15 + 0x60;
      }
    }
  }
  FUN_00871890(param_1,lVar11);
  return;
}


