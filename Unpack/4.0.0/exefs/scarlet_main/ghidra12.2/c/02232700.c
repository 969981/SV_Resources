/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02232700; name: FUN_02232700
 */


void FUN_02232700(long param_1)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  ulong *puVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  short sVar12;
  undefined8 local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  ulong local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  ulong local_88;
  undefined1 auStack_80 [24];
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  ulong *local_40;
  undefined8 uStack_38;
  
  local_60 = *(undefined8 *)(param_1 + 0x110);
  uStack_58 = *(undefined8 *)(param_1 + 0x118);
  local_50 = *(undefined8 *)(param_1 + 0x120);
  plVar8 = *(long **)(param_1 + 0x128);
  local_48 = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_40 = (ulong *)0x0;
    uStack_38 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_40,param_1 + 0x30,&local_60);
    plVar8 = local_48;
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if (local_40 != (ulong *)0x0) {
    if (*(short *)((long)local_40 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_40 + 0x1a);
      sVar12 = *(short *)((long)local_40 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar12) {
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar11) {
            *psVar1 = sVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_022327cc;
          bVar11 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_022327cc:
          bVar11 = false;
        }
        if (bVar11) {
          uVar9 = local_40[2];
          if (uVar9 == 0) goto LAB_022328f0;
          plVar8 = (long *)FUN_01026aa0(uVar9 + 0xe0,&local_88);
          if (plVar8 != (long *)0x0) {
            local_b0 = 0xe0a845cb85acfd0b;
            pcStack_a8 = "SwitchGroupName";
            local_a0 = 0xf;
            local_98 = (long *)0x0;
            FUN_01315eac(&local_88,param_1,&local_b0);
            if (local_98 != (long *)0x0) {
              (**(code **)(*local_98 + 0x20))();
            }
            if ((char)local_88 != '\0') {
              local_d0 = 0xc518c6a0849dc7ca;
              pcStack_c8 = "SwitchName";
              local_c0 = 10;
              local_b8 = (long *)0x0;
              FUN_01315eac(&local_b0,param_1,&local_d0);
              if (local_b8 != (long *)0x0) {
                (**(code **)(*local_b8 + 0x20))();
              }
              if ((char)local_b0 != '\0') {
                (**(code **)(*plVar8 + 0x130))(plVar8,auStack_80,&pcStack_a8);
                if ((char)local_b0 != '\0') {
                  if (local_90 != (long *)0x0) {
                    (**(code **)(*local_90 + 0x20))();
                  }
                  local_b0 = local_b0 & 0xffffffffffffff00;
                }
              }
              if ((char)local_88 != '\0') {
                if (local_68 != (long *)0x0) {
                  (**(code **)(*local_68 + 0x20))();
                }
                local_88 = local_88 & 0xffffffffffffff00;
              }
            }
          }
          (**(code **)(*(long *)(uVar9 - 0x28) + 0x60))((long *)(uVar9 - 0x28));
          break;
        }
        sVar12 = sVar4;
      } while (sVar4 != 0);
      if (local_40 == (ulong *)0x0) {
        return;
      }
    }
LAB_022328f0:
    puVar6 = local_40;
    puVar2 = local_40 + 3;
    do {
      sVar12 = (short)*puVar2;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar11) {
        *(short *)puVar2 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 1) {
      piVar3 = (int *)((long)local_40 + 0x1c);
      do {
        iVar7 = *piVar3;
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar11) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_88 = *puVar6;
        FUN_00c44438(lVar10 + 0x8040,&local_88);
      }
    }
    else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


