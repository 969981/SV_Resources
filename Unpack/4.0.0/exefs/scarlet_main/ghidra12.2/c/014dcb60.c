/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014dcb60; name: FUN_014dcb60
 */


void FUN_014dcb60(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  code *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  short sVar11;
  long *plVar12;
  undefined8 local_120;
  code *local_118;
  undefined8 local_110;
  long *local_108;
  undefined1 auStack_100 [104];
  char local_98 [8];
  undefined1 auStack_90 [24];
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  
  local_70 = *(undefined8 *)(param_1 + 0x110);
  uStack_68 = *(undefined8 *)(param_1 + 0x118);
  local_60 = *(undefined8 *)(param_1 + 0x120);
  plVar12 = *(long **)(param_1 + 0x128);
  local_58 = plVar12;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_50,param_1 + 0x30,&local_70);
    plVar12 = local_58;
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (local_50 != (undefined8 *)0x0) {
    if (*(short *)((long)local_50 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_50 + 0x1a);
      sVar11 = *(short *)((long)local_50 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar11) {
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_014dcc34;
          bVar10 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_014dcc34:
          bVar10 = false;
        }
        if (bVar10) {
          lVar9 = local_50[2];
          if (lVar9 == 0) goto LAB_014dcd18;
          lVar8 = FUN_01026aa0(lVar9 + 0xe0,&local_120);
          if (lVar8 != 0) {
            local_120 = 0xa5d87c9ff14c683c;
            local_118 = (code *)0x3c2f425;
            local_110 = 9;
            local_108 = (long *)0x0;
            FUN_01315eac(local_98,param_1,&local_120);
            if (local_108 != (long *)0x0) {
              (**(code **)(*local_108 + 0x20))();
            }
            if (local_98[0] != '\0') {
              memset(&local_120,0,0x80);
              FUN_0131fc3c(lVar8,auStack_90,&local_120,100);
              pcVar5 = local_118;
              if (local_118 != (code *)0x0) {
                local_110 = 0;
                local_108 = (long *)0x0;
                local_120 = 0;
                local_118 = (code *)0x0;
                (*pcVar5)(auStack_100);
              }
              if (local_98[0] != '\0') {
                if (local_78 != (long *)0x0) {
                  (**(code **)(*local_78 + 0x20))();
                }
                local_98[0] = '\0';
              }
            }
          }
          (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))((long *)(lVar9 + -0x28));
          break;
        }
        sVar11 = sVar3;
      } while (sVar3 != 0);
      if (local_50 == (undefined8 *)0x0) {
        return;
      }
    }
LAB_014dcd18:
    puVar6 = local_50;
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
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
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_120 = *puVar6;
        FUN_00c44438(lVar9 + 0x8040,&local_120);
      }
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


