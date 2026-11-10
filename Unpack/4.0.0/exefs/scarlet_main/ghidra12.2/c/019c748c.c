/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019c748c; name: FUN_019c748c
 */


void FUN_019c748c(long param_1)

{
  short *psVar1;
  int *piVar2;
  code *pcVar3;
  long lVar4;
  short sVar5;
  bool bVar6;
  undefined8 *puVar7;
  code *pcVar8;
  char cVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *local_120;
  undefined8 uStack_118;
  long local_110;
  undefined1 local_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined1 local_e8;
  code *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long alStack_c0 [12];
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  FUN_00d8e6c4(&local_60);
  FUN_019c79f8(auStack_50,&local_60);
  puVar7 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_60 + 3);
    do {
      sVar5 = *psVar1;
      cVar9 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar5 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_60 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar9 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_e0 = (code *)*puVar7;
        FUN_00c44438(lVar12 + 0x8040,&local_e0);
      }
    }
    else if (sVar5 == 0) goto LAB_019c7520;
  }
  uVar11 = FUN_019c7a40(auStack_50);
  if (((uVar11 & 1) != 0) && (cVar9 = FUN_019c7a20(auStack_50), cVar9 == '\a')) {
    lVar12 = param_1 + 0x38;
    FUN_00d8e6c4(lVar12,auStack_50);
    FUN_01c45238(param_1 + 0x48,local_40);
    local_e0 = FUN_01eb6d30;
    local_d8 = FUN_00b1cc74;
    local_d0 = &LAB_00b1cc78;
    local_c8 = &LAB_00b1cc84;
    alStack_c0[0] = param_1;
    FUN_01a47180(lVar12,&local_e0);
    pcVar8 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = (undefined1 *)0x0;
      local_c8 = (undefined1 *)0x0;
      local_e0 = (code *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar8)(alStack_c0);
    }
    lVar4 = 0;
    if (param_1 != 0) {
      lVar4 = param_1 + 0x28;
    }
    local_100 = (undefined8 *)0x0;
    uStack_f8 = 0;
    local_e8 = 1;
    local_f0 = lVar4;
    FUN_01e66630(&local_e0,lVar12,0x2e,&local_100);
    FUN_0178f674(param_1 + 0x50,&local_e0);
    pcVar8 = local_e0;
    if (local_e0 != (code *)0x0) {
      pcVar3 = local_e0 + 0x18;
      do {
        sVar5 = *(short *)pcVar3;
        cVar9 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
        if (bVar6) {
          *(short *)pcVar3 = sVar5 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar5 == 1) {
        pcVar3 = local_e0 + 0x1c;
        do {
          iVar10 = *(int *)pcVar3;
          cVar9 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar6) {
            *(int *)pcVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_38 = *(undefined8 *)pcVar8;
          FUN_00c44438(lVar13 + 0x8040,&local_38);
        }
      }
      else if (sVar5 == 0) goto LAB_019c7520;
    }
    puVar7 = local_100;
    if (local_100 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_100 + 3);
      do {
        sVar5 = *psVar1;
        cVar9 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar5 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar5 == 1) {
        piVar2 = (int *)((long)local_100 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar9 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_38 = *puVar7;
          FUN_00c44438(lVar13 + 0x8040,&local_38);
        }
      }
      else if (sVar5 == 0) goto LAB_019c7520;
    }
    local_108 = 1;
    local_120 = (undefined8 *)0x0;
    uStack_118 = 0;
    local_110 = lVar4;
    FUN_01eb4c58(&local_e0,lVar12,0x2f,&local_120);
    FUN_0178f674(param_1 + 0x60,&local_e0);
    pcVar8 = local_e0;
    if (local_e0 != (code *)0x0) {
      pcVar3 = local_e0 + 0x18;
      do {
        sVar5 = *(short *)pcVar3;
        cVar9 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
        if (bVar6) {
          *(short *)pcVar3 = sVar5 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar5 == 1) {
        pcVar3 = local_e0 + 0x1c;
        do {
          iVar10 = *(int *)pcVar3;
          cVar9 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
          if (bVar6) {
            *(int *)pcVar3 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_38 = *(undefined8 *)pcVar8;
          FUN_00c44438(lVar12 + 0x8040,&local_38);
        }
      }
      else if (sVar5 == 0) goto LAB_019c7520;
    }
    puVar7 = local_120;
    if (local_120 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_120 + 3);
      do {
        sVar5 = *psVar1;
        cVar9 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar5 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar5 == 1) {
        piVar2 = (int *)((long)local_120 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar9 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_38 = *puVar7;
          FUN_00c44438(lVar12 + 0x8040,&local_38);
        }
      }
      else if (sVar5 == 0) {
LAB_019c7520:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  FUN_00d8e444(auStack_50);
  return;
}


