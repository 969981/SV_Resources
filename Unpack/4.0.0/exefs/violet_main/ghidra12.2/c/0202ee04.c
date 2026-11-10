/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0202ee04; name: FUN_0202ee04
 */


void FUN_0202ee04(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  short sVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  float extraout_s0;
  float fVar17;
  float extraout_var;
  float fVar19;
  float extraout_var_00;
  float fVar20;
  undefined1 auVar18 [16];
  float fVar21;
  char local_d8 [8];
  undefined1 auStack_d0 [56];
  char local_98 [8];
  undefined1 auStack_90 [56];
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  lVar15 = *param_4;
  lVar14 = *(long *)(lVar15 + (ulong)*(uint *)(param_2 + 0xe4));
  if (lVar14 == 0) {
    lVar14 = *(long *)(lVar15 + (ulong)*(uint *)(param_2 + 8));
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      plVar16 = (long *)(*(code *)**(undefined8 **)(lVar14 + 0x28))((undefined8 *)(lVar14 + 0x28));
      if (((*PTR_DAT_047db160 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047db160), iVar7 != 0)) {
        uVar11 = FUN_01fb90e4();
        *(undefined8 *)PTR_DAT_047db168 = uVar11;
        __cxa_guard_release(PTR_DAT_047db160);
      }
      for (; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
        if (plVar16 == (long *)PTR_DAT_047db168) goto LAB_0202eed8;
      }
      lVar14 = 0;
LAB_0202eed8:
      *(long *)(lVar15 + (ulong)*(uint *)(param_2 + 0xe4)) = lVar14;
    }
  }
  if ((((*(long *)(lVar14 + 0x88) == 0) || (*(short *)(*(long *)(lVar14 + 0x88) + 0x1a) == 0)) &&
      (uVar8 = FUN_013f7d04(lVar14 + 0x70), (uVar8 & 1) == 0)) ||
     ((lVar15 = *(long *)(lVar14 + 0x80), lVar15 == 0 ||
      (FUN_00e92dbc(local_58,lVar15), local_58[0] == (undefined8 *)0x0)))) {
LAB_0202ee6c:
    *param_1 = *PTR_DAT_047db188;
    return;
  }
  if (*(short *)((long)local_58[0] + 0x1a) != 0) {
    psVar1 = (short *)((long)local_58[0] + 0x1a);
    sVar13 = *(short *)((long)local_58[0] + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar13) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0202ef38;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0202ef38:
        bVar5 = false;
      }
      if (bVar5) {
        plVar16 = (long *)0x0;
        if (local_58[0][2] != 0) {
          plVar16 = (long *)(local_58[0][2] + -0x28);
        }
        goto LAB_0202ef4c;
      }
      sVar13 = sVar3;
    } while (sVar3 != 0);
  }
  plVar16 = (long *)0x0;
LAB_0202ef4c:
  psVar1 = (short *)(local_58[0] + 3);
  do {
    sVar13 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar13 == 1) {
    piVar2 = (int *)((long)local_58[0] + 0x1c);
    do {
      iVar7 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar12 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar12;
      local_48 = *local_58[0];
      FUN_00c44438(lVar12 + 0x8040,&local_48);
    }
  }
  else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  if (plVar16 == (long *)0x0) goto LAB_0202ee6c;
  if (*(char *)(*param_4 + (ulong)*(uint *)(param_2 + 0x110)) == '\0') {
    uVar8 = FUN_0200b008(plVar16);
    if ((uVar8 & 1) == 0) {
      uVar8 = FUN_0200b04c(plVar16);
      if ((uVar8 & 1) == 0) {
        FUN_019587b4(lVar15);
        lVar14 = *param_4;
        puVar6 = (undefined8 *)(lVar14 + (ulong)*(uint *)(param_2 + 0x108));
        uVar11 = *puVar6;
        fVar17 = extraout_s0 - (float)uVar11;
        fVar19 = extraout_var - (float)((ulong)uVar11 >> 0x20);
        fVar20 = extraout_var_00 - (float)puVar6[1];
        fVar21 = *(float *)(lVar14 + (ulong)*(uint *)(param_2 + 0x104));
        fVar17 = fVar17 * fVar17;
        fVar19 = fVar19 * fVar19;
        fVar20 = fVar20 * fVar20;
        auVar18._0_4_ = fVar17 + fVar19;
        auVar18._4_4_ = fVar20 + 0.0;
        auVar18._8_4_ = fVar17 + fVar19;
        auVar18._12_4_ = fVar20 + 0.0;
        auVar18 = NEON_ext(auVar18,auVar18,4,1);
        if (auVar18._0_4_ + auVar18._4_4_ < fVar21 * fVar21) {
          pcVar10 = (char *)FUN_0200cd6c();
          if (*pcVar10 != '\0') {
            lVar14 = (**(code **)**(undefined8 **)param_4[1])(*(undefined8 **)param_4[1],1);
            *(float *)(*param_4 + (ulong)*(uint *)(param_2 + 0x10c)) =
                 *(float *)(*param_4 + (ulong)*(uint *)(param_2 + 0x10c)) +
                 (float)((double)*(long *)(lVar14 + 8) / 1000000000.0);
          }
          if (*(float *)(*param_4 + (ulong)*(uint *)(param_2 + 0x100)) <=
              *(float *)(*param_4 + (ulong)*(uint *)(param_2 + 0x10c))) goto LAB_0202f124;
        }
        else {
          *(undefined4 *)(lVar14 + (ulong)*(uint *)(param_2 + 0x10c)) = 0;
        }
        auVar18 = FUN_019587b4(lVar15);
        puVar6 = (undefined8 *)(*param_4 + (ulong)*(uint *)(param_2 + 0x108));
        puVar6[1] = auVar18._8_8_;
        *puVar6 = auVar18._0_8_;
        puVar9 = (undefined1 *)FUN_015a7158();
        goto LAB_0202effc;
      }
LAB_0202f124:
      FUN_0200b034(plVar16);
    }
    else if ((((*(long *)(lVar14 + 0xd8) != 0) && (*(short *)(*(long *)(lVar14 + 0xd8) + 0x1a) != 0)
              ) || (uVar8 = FUN_01473a8c(lVar14 + 0xc0), (uVar8 & 1) != 0)) &&
            (*(long *)(lVar14 + 0xd0) != 0)) {
      local_d8[0] = '\0';
      FUN_018458cc(*(long *)(lVar14 + 0xd0),local_d8);
      if (local_d8[0] != '\0') {
        FUN_0193777c(auStack_d0);
        local_d8[0] = '\0';
      }
      puVar9 = (undefined1 *)FUN_015c0588();
      goto LAB_0202effc;
    }
  }
  else if ((((*(long *)(lVar14 + 0xd8) != 0) && (*(short *)(*(long *)(lVar14 + 0xd8) + 0x1a) != 0))
           || (uVar8 = FUN_01473a8c(lVar14 + 0xc0), (uVar8 & 1) != 0)) &&
          (*(long *)(lVar14 + 0xd0) != 0)) {
    local_98[0] = '\0';
    FUN_018458cc(*(long *)(lVar14 + 0xd0),local_98);
    if (local_98[0] != '\0') {
      FUN_0193777c(auStack_90);
      local_98[0] = '\0';
    }
  }
  puVar9 = PTR_DAT_047db188;
LAB_0202effc:
  *param_1 = *puVar9;
  lVar14 = plVar16[6];
  psVar1 = (short *)(lVar14 + 0x1a);
  do {
    sVar13 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar13 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar13 == 1) {
    *(undefined8 *)(lVar14 + 0x10) = 0;
    (**(code **)(*plVar16 + 0x50))(plVar16);
    return;
  }
  if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


