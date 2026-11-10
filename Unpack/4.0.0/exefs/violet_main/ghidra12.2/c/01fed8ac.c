/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fed8ac; name: FUN_01fed8ac
 */


void FUN_01fed8ac(long param_1,undefined8 *param_2)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  short sVar13;
  long *plVar14;
  uint uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float local_60;
  float fStack_5c;
  float fStack_58;
  long *local_50;
  long *local_48;
  
  if (((*(char *)(param_1 + 0x1a0) != '\0') && (lVar10 = *(long *)(param_1 + 0x130), lVar10 != 0))
     && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar13 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar13) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01fed924;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01fed924:
        bVar5 = false;
      }
      if (bVar5) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          return;
        }
        plVar14 = (long *)(lVar10 + -0x28);
        if (0.0 < *(float *)(param_1 + 0x1a4)) {
          lVar11 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
          fVar16 = *(float *)(param_1 + 0x1a4) +
                   (float)((double)*(long *)(lVar11 + 8) / -1000000000.0);
          *(float *)(param_1 + 0x1a4) = fVar16;
          if (fVar16 <= 0.0) {
            *(undefined1 *)(param_1 + 0x1a1) = 0;
            *(undefined4 *)(param_1 + 0x1a4) = 0;
            FUN_010e29c8(param_1,param_1,*(undefined1 *)(param_1 + 0x1a9));
          }
        }
        if ((*(char *)(param_1 + 0x1a1) != '\0') || (*(char *)(param_1 + 0x160) == '\0'))
        goto LAB_01feda60;
        lVar11 = *(long *)(param_1 + 0x150);
        if ((lVar11 == 0) || (*(short *)(lVar11 + 0x1a) == 0)) goto LAB_01fed970;
        psVar1 = (short *)(lVar11 + 0x1a);
        sVar13 = *(short *)(lVar11 + 0x1a);
        goto LAB_01fedbd0;
      }
      sVar13 = sVar3;
    } while (sVar3 != 0);
  }
  return;
code_r0x01fedc44:
  sVar13 = sVar3;
  if (sVar3 == 0) goto LAB_01fed9d8;
  goto LAB_01fedc18;
LAB_01fedbd0:
  sVar3 = *psVar1;
  if (sVar3 == sVar13) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar13 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_01fedbf4;
    bVar5 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01fedbf4:
    bVar5 = false;
  }
  if (!bVar5) {
    sVar13 = sVar3;
    if (sVar3 == 0) goto LAB_01fed970;
    goto LAB_01fedbd0;
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if (lVar11 == 0) goto LAB_01fed970;
  plVar7 = (long *)(lVar11 + -0x28);
  uVar9 = FUN_01fed794(plVar7);
  lVar11 = *(long *)(lVar11 + 0x70);
  psVar1 = (short *)(lVar11 + 0x1a);
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
    *(undefined8 *)(lVar11 + 0x10) = 0;
    (**(code **)(*plVar7 + 0x50))(plVar7);
  }
  else if (sVar13 == 0) goto LAB_01feda84;
  if ((uVar9 & 1) == 0) {
LAB_01fed970:
    FUN_00c9e664(&local_50,param_1 + 0xe8);
    if (local_50 != (long *)0x0) {
      lVar11 = (**(code **)(*(long *)local_48[9] + 0x68))();
      auVar18 = *(undefined1 (*) [16])(lVar11 + 0x30);
      if (((*PTR_DAT_047d4df8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4df8);
      }
      *(undefined8 *)PTR_DAT_047d4e08 = *(undefined8 *)PTR_DAT_047d4e00;
      auVar17 = FUN_01fedd78();
      lVar11 = *(long *)(param_1 + 0x150);
      if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar11 + 0x1a);
        sVar13 = *(short *)(lVar11 + 0x1a);
LAB_01fedc18:
        sVar3 = *psVar1;
        if (sVar3 == sVar13) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01fedc3c;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01fedc3c:
          bVar5 = false;
        }
        if (!bVar5) goto code_r0x01fedc44;
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 == 0) goto LAB_01fed9d8;
        plVar7 = (long *)(lVar11 + -0x28);
        uVar9 = FUN_01fed794(plVar7);
        lVar11 = *(long *)(lVar11 + 0x70);
        psVar1 = (short *)(lVar11 + 0x1a);
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
          *(undefined8 *)(lVar11 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))(plVar7);
        }
        else if (sVar13 == 0) goto LAB_01feda84;
        if ((uVar9 & 1) == 0) goto LAB_01fed9d8;
        uVar15 = FUN_01fed7a4(param_1);
        goto LAB_01fed9dc;
      }
LAB_01fed9d8:
      uVar15 = (uint)*(byte *)(param_1 + 0x128);
LAB_01fed9dc:
      local_60 = auVar18._0_4_;
      fStack_5c = auVar18._4_4_;
      fStack_58 = auVar18._8_4_;
      local_60 = local_60 - auVar17._0_4_;
      fStack_5c = fStack_5c - auVar17._4_4_;
      fStack_58 = fStack_58 - auVar17._8_4_;
      local_60 = local_60 * local_60;
      fStack_5c = fStack_5c * fStack_5c;
      fStack_58 = fStack_58 * fStack_58;
      auVar18._0_4_ = local_60 + fStack_5c;
      auVar18._4_4_ = fStack_58 + 0.0;
      auVar18._8_4_ = local_60 + fStack_5c;
      auVar18._12_4_ = fStack_58 + 0.0;
      auVar18 = NEON_ext(auVar18,auVar18,4,1);
      fVar16 = auVar18._0_4_ + auVar18._4_4_;
      if ((*(char *)(*(long *)(param_1 + 0x1b0) + 0x69) == '\0') &&
         (*(char *)(*(long *)(param_1 + 0x1b0) + 0x6a) == '\0')) {
        if (2500.0 <= fVar16) {
          puVar12 = &UNK_03d605a0;
        }
        else if (1600.0 <= fVar16) {
          puVar12 = &UNK_03d605a8;
        }
        else {
          if (fVar16 < 900.0) goto LAB_01feda1c;
          puVar12 = &UNK_03d605b0;
        }
        uVar15 = (uint)(byte)puVar12[4];
      }
      else if (fVar16 < 900.0) {
        plVar7 = (long *)FUN_010fee00(plVar14);
        if (*plVar7 != 0) {
          piVar8 = (int *)FUN_01e5cc38();
          uVar2 = 8;
          if (1 < *piVar8) {
            uVar2 = uVar15;
          }
          uVar15 = uVar2;
        }
      }
      else {
        uVar15 = 8;
      }
LAB_01feda1c:
      FUN_010e29c8(param_1,uVar15);
    }
    if (local_48 != (long *)0x0) {
      plVar7 = local_48 + 5;
      do {
        lVar11 = *plVar7;
        iVar6 = (int)lVar11 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *(int *)plVar7 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x60))();
    }
  }
LAB_01feda60:
  lVar10 = *(long *)(lVar10 + 0x70);
  psVar1 = (short *)(lVar10 + 0x1a);
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
    *(undefined8 *)(lVar10 + 0x10) = 0;
    (**(code **)(*plVar14 + 0x50))(plVar14);
    return;
  }
  if (sVar13 != 0) {
    return;
  }
LAB_01feda84:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


