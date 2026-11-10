/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d3d0dc; name: FUN_00d3d0dc
 */


void FUN_00d3d0dc(long param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
  float fVar16;
  float fVar22;
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar23 [16];
  long *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  FUN_00cbb48c(&local_40);
  if (local_40 == (undefined8 *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_40 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_40 + 0x1a);
      sVar9 = *(short *)((long)local_40 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00d3d27c;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00d3d27c:
          bVar5 = false;
        }
        if (bVar5) {
          plVar10 = (long *)0x0;
          if (local_40[2] != 0) {
            plVar10 = (long *)(local_40[2] + -0x28);
          }
          goto LAB_00d3d2a8;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
    plVar10 = (long *)0x0;
LAB_00d3d2a8:
    psVar1 = (short *)(local_40 + 3);
    do {
      sVar9 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      piVar2 = (int *)((long)local_40 + 0x1c);
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
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_18 = *local_40;
        FUN_00c44438(lVar8 + 0x8040,&local_18);
      }
    }
    else if (sVar9 == 0) goto LAB_00d3d2cc;
  }
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_00cbb698(&local_40,param_1 + 0x120);
  puVar6 = local_40;
  local_48 = (long *)0x0;
  if (local_40 != (undefined8 *)0x0) {
    if (*(short *)((long)local_40 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_40 + 0x1a);
      sVar9 = *(short *)((long)local_40 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00d3d328;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00d3d328:
          bVar5 = false;
        }
        if (bVar5) {
          local_48 = (long *)0x0;
          if (local_40[2] != 0) {
            local_48 = (long *)(local_40[2] + -0x28);
          }
          goto LAB_00d3d354;
        }
        sVar9 = sVar3;
      } while (sVar3 != 0);
    }
    local_48 = (long *)0x0;
LAB_00d3d354:
    psVar1 = (short *)(local_40 + 3);
    do {
      sVar9 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      piVar2 = (int *)((long)local_40 + 0x1c);
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
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_18 = *puVar6;
        FUN_00c44438(lVar8 + 0x8040,&local_18);
      }
    }
    else if (sVar9 == 0) {
LAB_00d3d2cc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if ((param_2 != 0) && (plVar10 != (long *)0x0)) {
    lVar8 = *(long *)(param_2 + 0x530);
    auVar23 = NEON_fmov(0x3f800000,4);
    plVar10[0x51] = *(long *)(param_2 + 0x538);
    plVar10[0x50] = lVar8;
    lVar8 = *(long *)(param_2 + 0x570);
    plVar10[0x53] = *(long *)(param_2 + 0x578);
    plVar10[0x52] = lVar8;
    lVar8 = *(long *)(param_2 + 0x540);
    plVar10[0x55] = *(long *)(param_2 + 0x548);
    plVar10[0x54] = lVar8;
    lVar8 = *(long *)(param_2 + 0x560);
    plVar10[0x4f] = *(long *)(param_2 + 0x568);
    plVar10[0x4e] = lVar8;
    fVar11 = *(float *)(param_2 + 0x530) - (float)*(undefined8 *)(param_2 + 0x560);
    fVar13 = *(float *)(param_2 + 0x534) - (float)((ulong)*(undefined8 *)(param_2 + 0x560) >> 0x20);
    fVar15 = *(float *)(param_2 + 0x538) - (float)*(undefined8 *)(param_2 + 0x568);
    fVar11 = fVar11 * fVar11;
    fVar13 = fVar13 * fVar13;
    fVar15 = fVar15 * fVar15;
    auVar12._0_4_ = fVar11 + fVar13;
    auVar12._4_4_ = fVar15 + 0.0;
    auVar12._8_4_ = fVar11 + fVar13;
    auVar12._12_4_ = fVar15 + 0.0;
    auVar12 = NEON_ext(auVar12,auVar12,4,1);
    *(float *)(plVar10 + 0x60) = SQRT(auVar12._0_4_ + auVar12._4_4_);
    auVar12 = *(undefined1 (*) [16])(param_2 + 0x540);
    auVar17 = NEON_ext(auVar12,auVar12,0xc,1);
    fVar11 = auVar12._0_4_;
    fVar15 = auVar12._4_4_;
    auVar18._4_12_ = auVar17._4_12_;
    auVar18._0_4_ = fVar11;
    auVar20._12_4_ = auVar17._12_4_;
    auVar20._0_8_ = auVar18._0_8_;
    auVar20._8_4_ = fVar15;
    auVar19._8_8_ = auVar20._8_8_;
    auVar19._4_4_ = auVar17._0_4_;
    auVar19._0_4_ = fVar11;
    auVar21._0_12_ = auVar19._0_12_;
    auVar21._12_4_ = auVar17._4_4_;
    auVar17 = NEON_ext(auVar21,auVar21,8,1);
    fVar13 = fVar11 * auVar12._12_4_;
    fVar14 = fVar15 * auVar12._12_4_;
    fVar16 = auVar17._0_4_ * auVar12._8_4_;
    fVar22 = auVar17._4_4_ * auVar12._8_4_;
    auVar17._0_8_ =
         CONCAT44(-((fVar16 + fVar16) - (fVar13 + fVar13)),-(fVar22 + fVar22 + fVar14 + fVar14));
    auVar17._8_4_ =
         -((auVar23._0_4_ - (fVar11 * fVar11 + fVar11 * fVar11)) -
          (fVar15 * fVar15 + fVar15 * fVar15));
    auVar17._12_4_ = 0x80000000;
    plVar10[0x4b] = auVar17._8_8_;
    plVar10[0x4a] = auVar17._0_8_;
  }
  if (local_48 != (long *)0x0) {
    lVar8 = local_48[0x13];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar9 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x60))(plVar10);
  }
  return;
}


