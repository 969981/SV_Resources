/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0131fc3c; name: FUN_0131fc3c
 */


int FUN_0131fc3c(long *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  short *psVar1;
  code *pcVar2;
  int *piVar3;
  short sVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  int *piVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float local_120;
  float fStack_11c;
  float fStack_118;
  undefined8 *local_108;
  undefined8 uStack_100;
  int local_f4;
  code *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_68;
  
  if (*(char *)((long)param_1 + 0x311) == '\0') {
    local_f4 = param_4;
    FUN_01064488();
    if (*(char *)((long)param_1 + 0x323) == '\0') {
      (**(code **)(*param_1 + 0x180))(param_1);
    }
    uVar12 = FUN_01320390(param_2);
    if ((uVar12 & 1) == 0) {
      if (((*PTR_DAT_047d8280 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      lVar16 = *(long *)PTR_DAT_047d8288;
      *(long *)PTR_DAT_047d8290 = lVar16;
      lVar15 = param_1[99];
      memset(&local_f0,0,0x80);
      plVar13 = *(long **)(*(long *)(lVar16 + 0x200) + 0x60);
      iVar10 = (**(code **)(*plVar13 + 0xd0))
                         (plVar13,param_2[1],lVar15,1,&LAB_01080c70,lVar16,0,0,0);
      if (iVar10 == 0) {
        return 0;
      }
      FUN_0104f218(*(undefined8 *)(lVar16 + 0x220),param_2,iVar10,lVar15,0,&local_f0,0);
      pcVar2 = local_e8;
    }
    else {
      lVar15 = param_1[0x61];
      if (lVar15 != 0) {
        iVar10 = param_4;
        if ((*(int *)(lVar15 + 0x54) < 0) && (iVar10 = param_4, 0 < *(int *)(lVar15 + 0x58))) {
          auVar18 = *(undefined1 (*) [16])(param_1 + 0x66);
          if (((*PTR_DAT_047d8280 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d8280);
          }
          lVar16 = *(long *)PTR_DAT_047d8288;
          *(long *)PTR_DAT_047d8290 = lVar16;
          nn::os::LockMutex((MutexType *)(lVar16 + 0x150));
          uVar14 = *(undefined8 *)(lVar16 + 0x120);
          uVar9 = *(undefined8 *)(lVar16 + 0x128);
          nn::os::UnlockMutex((MutexType *)(lVar16 + 0x150));
          local_120 = auVar18._0_4_;
          fStack_11c = auVar18._4_4_;
          fStack_118 = auVar18._8_4_;
          local_120 = local_120 - (float)uVar14;
          fStack_11c = fStack_11c - (float)((ulong)uVar14 >> 0x20);
          fStack_118 = fStack_118 - (float)uVar9;
          piVar3 = (int *)(lVar15 + 0x54);
          piVar8 = (int *)(lVar15 + 0x58);
          lVar15 = param_1[0x61];
          local_120 = local_120 * local_120;
          fStack_11c = fStack_11c * fStack_11c;
          fStack_118 = fStack_118 * fStack_118;
          auVar18._0_4_ = local_120 + fStack_11c;
          auVar18._4_4_ = fStack_118 + 0.0;
          auVar18._8_4_ = local_120 + fStack_11c;
          auVar18._12_4_ = fStack_118 + 0.0;
          auVar18 = NEON_ext(auVar18,auVar18,4,1);
          fVar17 = (float)NEON_fminnm(SQRT(auVar18._0_4_ + auVar18._4_4_) / (float)*piVar8,
                                      0x3f800000);
          iVar10 = (int)(fVar17 * (float)*piVar3) + param_4;
        }
        local_f4 = iVar10;
        uVar12 = FUN_00f1dff8(lVar15,local_f4,param_2);
        if ((uVar12 & 1) == 0) goto LAB_0131ff74;
      }
      (**(code **)(*param_1 + 0x18))(&local_f0,param_1);
      local_108 = (undefined8 *)0x0;
      uStack_100 = 0;
      if (*(long **)(local_f0 + 0x10) == param_1 + 5) {
        FUN_0132044c(&local_108,&local_f0);
      }
      if (local_f0 != (code *)0x0) {
        pcVar2 = local_f0 + 0x18;
        do {
          sVar4 = *(short *)pcVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
          if (bVar7) {
            *(short *)pcVar2 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          pcVar2 = local_f0 + 0x1c;
          do {
            iVar10 = *(int *)pcVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
            if (bVar7) {
              *(int *)pcVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_68 = *(undefined8 *)local_f0;
            FUN_00c44438(lVar15 + 0x8040,&local_68);
          }
        }
        else if (sVar4 == 0) goto LAB_0131ffc0;
      }
      local_f0 = (code *)0x0;
      local_e8 = (code *)0x0;
      local_e0 = (undefined1 *)0x0;
      puStack_d8 = (undefined1 *)0x0;
      local_d0 = 0;
      uStack_c8 = 0;
      FUN_010e57b0(&local_d0,&local_108);
      puVar5 = local_108;
      local_f0 = FUN_0299b80c;
      local_e8 = FUN_0299b8f8;
      local_e0 = &LAB_0299ba08;
      puStack_d8 = &LAB_010e579c;
      if (local_108 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_108 + 3);
        do {
          sVar4 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)local_108 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar15 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar15;
            local_68 = *puVar5;
            FUN_00c44438(lVar15 + 0x8040,&local_68);
          }
        }
        else if (sVar4 == 0) {
LAB_0131ffc0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      if (((*PTR_DAT_047d8280 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8280);
      }
      lVar16 = *(long *)PTR_DAT_047d8288;
      *(long *)PTR_DAT_047d8290 = lVar16;
      plVar13 = *(long **)(*(long *)(lVar16 + 0x200) + 0x60);
      lVar15 = param_1[99];
      iVar10 = (**(code **)(*plVar13 + 0xd0))
                         (plVar13,param_2[1],lVar15,1,&LAB_01080c70,lVar16,0,0,0);
      if (iVar10 == 0) {
        local_108 = (undefined8 *)((ulong)local_108 & 0xffffffff00000000);
        for (lVar15 = param_1[0x61]; pcVar2 = local_e8, lVar15 != 0;
            lVar15 = *(long *)(lVar15 + 0x68)) {
          nn::os::LockMutex((MutexType *)(lVar15 + 0x100));
          iVar11 = *(int *)(lVar15 + 0x120) + -1;
          if (*(int *)(lVar15 + 0x120) < 1) {
            iVar11 = 0;
          }
          *(int *)(lVar15 + 0x120) = iVar11;
          nn::os::UnlockMutex((MutexType *)(lVar15 + 0x100));
        }
      }
      else {
        FUN_0104f218(*(undefined8 *)(lVar16 + 0x220),param_2,iVar10,lVar15,0,&local_f0,0);
        local_108 = (undefined8 *)CONCAT44(local_108._4_4_,iVar10);
        nn::os::LockMutex((MutexType *)(param_1 + 0x25));
        puVar5 = (undefined8 *)param_1[0x3e];
        if (puVar5 < (undefined8 *)param_1[0x3f]) {
          lVar15 = param_1[0x40];
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar16 = nn::os::GetTlsValue(DAT_04865a30);
          iVar11 = local_f4;
          if (lVar16 != 0) {
            if (0xf < *(ulong *)(lVar16 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = lVar15;
            *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
          }
          *puVar5 = *param_2;
          puVar5[1] = param_2[1];
          puVar5[2] = param_2[2];
          plVar13 = (long *)param_2[3];
          puVar5[3] = plVar13;
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x18))();
          }
          puVar5[6] = 0;
          *(int *)(puVar5 + 4) = iVar10;
          *(int *)((long)puVar5 + 0x24) = iVar11;
          puVar5[7] = 0;
          puVar5[8] = 0;
          puVar5[9] = 0;
          if ((code *)param_3[2] != (code *)0x0) {
            (*(code *)param_3[2])(param_3 + 4,puVar5 + 10);
            uVar14 = param_3[3];
            puVar5[7] = param_3[1];
            puVar5[9] = uVar14;
            uVar14 = *param_3;
            puVar5[8] = param_3[2];
            puVar5[6] = uVar14;
          }
          if (lVar16 != 0) {
            *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
          }
          param_1[0x3e] = (long)(puVar5 + 0x16);
        }
        else {
          FUN_0132081c(param_1 + 0x3d,param_2,&local_108,&local_f4,param_3);
        }
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x25));
        pcVar2 = local_e8;
      }
    }
    if (pcVar2 != (code *)0x0) {
      puStack_d8 = (undefined1 *)0x0;
      local_e0 = (undefined1 *)0x0;
      local_f0 = (code *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar2)(&local_d0);
    }
  }
  else {
LAB_0131ff74:
    iVar10 = 0;
  }
  return iVar10;
}


