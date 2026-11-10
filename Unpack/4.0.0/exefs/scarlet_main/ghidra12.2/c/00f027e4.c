/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f027e4; name: FUN_00f027e4
 */


void FUN_00f027e4(long param_1,float *param_2)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  code *pcVar9;
  float *pfVar10;
  float *pfVar11;
  undefined4 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
  long local_110;
  long lStack_108;
  long local_100;
  long *local_f8;
  long local_f0;
  code *pcStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [112];
  
  plVar13 = *(long **)(param_1 + 0x1270);
  *(long **)(param_1 + 0x1278) = plVar13;
  puVar2 = PTR_LAB_047d3900;
  plVar15 = *(long **)(param_1 + 0x12d8);
  if (plVar15 == (long *)0x0) {
    plVar15 = plVar13;
  }
  else {
    while( true ) {
      pcVar9 = (code *)plVar15[5];
      lVar6 = plVar15[4];
      fVar17 = *param_2 - (float)lVar6;
      fVar19 = param_2[2] - SUB84(pcVar9,0);
      fVar20 = param_2[3] - (float)((ulong)pcVar9 >> 0x20);
      fVar17 = fVar17 * fVar17;
      fVar19 = fVar19 * fVar19;
      fVar20 = fVar20 * fVar20;
      auVar18._0_4_ = fVar17 + 0.0;
      auVar18._4_4_ = fVar19 + fVar20;
      auVar18._8_4_ = fVar17 + 0.0;
      auVar18._12_4_ = fVar19 + fVar20;
      auVar18 = NEON_ext(auVar18,auVar18,4,1);
      fVar17 = auVar18._0_4_ + auVar18._4_4_;
      auVar16._0_8_ = CONCAT44(auVar18._8_4_ + auVar18._12_4_,fVar17);
      auVar16._8_4_ = auVar18._0_4_ + auVar18._4_4_;
      auVar16._12_4_ = auVar18._8_4_ + auVar18._12_4_;
      lStack_108 = auVar16._8_8_;
      local_110 = auVar16._0_8_;
      local_f0 = lVar6;
      pcStack_e8 = pcVar9;
      if (plVar13 < *(long **)(param_1 + 0x1280)) {
        uVar14 = *(undefined8 *)(param_1 + 0x1288);
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar2,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar4 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar4 == 0) {
          *(float *)(plVar13 + 2) = fVar17;
          plVar13[1] = (long)pcVar9;
          *plVar13 = lVar6;
        }
        else {
          if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar14;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
          *(undefined4 *)(plVar13 + 2) = (undefined4)local_110;
          plVar13[1] = (long)pcStack_e8;
          *plVar13 = local_f0;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
        *(long **)(param_1 + 0x1278) = plVar13 + 4;
      }
      else {
        FUN_00f07a78(param_1 + 0x1270,&local_f0,&local_110);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) break;
      plVar13 = *(long **)(param_1 + 0x1278);
    }
    plVar13 = *(long **)(param_1 + 0x1270);
    plVar15 = *(long **)(param_1 + 0x1278);
  }
  FUN_00f031f0(plVar13,plVar15);
  pfVar11 = *(float **)(param_1 + 0x1278);
  if (*(float **)(param_1 + 0x1270) == pfVar11) {
    uVar7 = 0;
  }
  else {
    fVar17 = *(float *)(param_1 + 0x40);
    pfVar10 = (float *)(param_1 + 0x90);
    pfVar8 = *(float **)(param_1 + 0x1270);
    lVar6 = 1;
    do {
      if (fVar17 * fVar17 < pfVar8[4]) {
        uVar7 = (ulong)((int)lVar6 - 1);
        goto LAB_00f02910;
      }
      pfVar10[-2] = *pfVar8;
      pfVar10[-1] = pfVar8[1];
      lVar4 = lVar6 + 1;
      *pfVar10 = -(float)*(undefined8 *)(pfVar8 + 2);
    } while ((pfVar11 + -8 != pfVar8) &&
            (pfVar10 = pfVar10 + 9, bVar1 = lVar6 < DAT_0457f880, pfVar8 = pfVar8 + 8, lVar6 = lVar4
            , bVar1));
    uVar7 = (ulong)((int)lVar4 - 1);
  }
LAB_00f02910:
  iVar3 = *(int *)(param_1 + 0x6c);
  iVar5 = (int)uVar7;
  if (iVar5 < iVar3) {
    lVar6 = param_1 + uVar7 * 0x24;
    *(undefined8 *)(lVar6 + 0x88) = 0;
    *(undefined4 *)(lVar6 + 0x90) = 0;
    lVar6 = uVar7 + 1;
    if (lVar6 < iVar3) {
      puVar12 = (undefined4 *)(param_1 + uVar7 * 0x24 + 0xb4);
      do {
        lVar6 = lVar6 + 1;
        *(undefined8 *)(puVar12 + -2) = 0;
        *puVar12 = 0;
        puVar12 = puVar12 + 9;
      } while (lVar6 < iVar3);
    }
  }
  *(int *)(param_1 + 0x6c) = iVar5;
  if (*(int *)(param_1 + 0x68) == 0) {
    if (iVar5 < 1) {
      return;
    }
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar6 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar6;
    plVar15 = *(long **)(param_1 + 0x58);
    plVar13 = (long *)PTR_DAT_047d8b70;
    if (plVar15 != (long *)0x0) {
      plVar13 = plVar15 + 6;
    }
    local_110 = *plVar13;
    plVar13 = (long *)PTR_PTR_047d4508;
    if (plVar15 != (long *)0x0) {
      plVar13 = plVar15 + 7;
    }
    lVar4 = *plVar13;
    if (plVar15 == (long *)0x0) {
      local_100 = 0;
    }
    else {
      local_100 = plVar15[8];
    }
    local_f8 = (long *)0x0;
    lStack_108 = lVar4;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    local_f8 = plVar15;
    uVar14 = FUN_00f03dc8(param_1);
    memset(&local_f0,0,0x80);
    plVar13 = *(long **)(*(long *)(lVar6 + 0x200) + 0x60);
    iVar3 = (**(code **)(*plVar13 + 0xd0))(plVar13,lVar4,uVar14,1,&LAB_01080c70,lVar6,0,0,0);
    if ((iVar3 != 0) &&
       (FUN_0104f218(*(undefined8 *)(lVar6 + 0x220),&local_110,iVar3,uVar14,0,&local_f0,0),
       pcVar9 = pcStack_e8, pcStack_e8 != (code *)0x0)) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      pcStack_e8 = (code *)0x0;
      (*pcVar9)(auStack_d0);
    }
    *(int *)(param_1 + 0x68) = iVar3;
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 0x20))();
    }
  }
  else {
    if (iVar5 != 0) goto LAB_00f029d0;
    FUN_00f074a0(param_1);
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    return;
  }
LAB_00f029d0:
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar6 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar6;
  uVar14 = FUN_00f03dc8(param_1);
  if (*(int *)(param_1 + 0x6c) != 0) {
    plVar13 = *(long **)(*(long *)(lVar6 + 0x200) + 0x60);
    (**(code **)(*plVar13 + 0x78))(plVar13,uVar14,param_1 + 0x70,*(int *)(param_1 + 0x6c),2);
  }
  return;
}


