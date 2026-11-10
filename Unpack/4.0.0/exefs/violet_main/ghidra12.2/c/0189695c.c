/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0189695c; name: FUN_0189695c
 */


void FUN_0189695c(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  short sVar11;
  long *plVar12;
  long *local_b0;
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  
  local_60 = *(undefined8 *)(param_1 + 0x110);
  uStack_58 = *(undefined8 *)(param_1 + 0x118);
  local_50 = *(undefined8 *)(param_1 + 0x120);
  plVar12 = *(long **)(param_1 + 0x128);
  local_48 = plVar12;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_40,param_1 + 0x30,&local_60);
    plVar12 = local_48;
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (local_40 != (undefined8 *)0x0) {
    if (*(short *)((long)local_40 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_40 + 0x1a);
      sVar11 = *(short *)((long)local_40 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar11) {
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01896a28;
          bVar10 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01896a28:
          bVar10 = false;
        }
        if (bVar10) {
          lVar9 = local_40[2];
          if (lVar9 == 0) goto LAB_01896b3c;
          lVar8 = FUN_00e641c0(lVar9 + 0xe0,&local_b0);
          if (lVar8 != 0) {
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            local_80 = *(undefined8 *)PTR_DAT_047d3e30;
            local_78 = *(char **)(PTR_DAT_047d3e30 + 8);
            local_70 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
            local_68 = *(long **)(PTR_DAT_047d3e30 + 0x18);
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x18))();
            }
            FUN_01340a44(&local_b0,param_1,1);
            plVar12 = local_90;
            if ((char)local_b0 != '\0') {
              local_80 = local_a8;
              local_78 = pcStack_a0;
              local_70 = local_98;
              if (local_90 != (long *)0x0) {
                (**(code **)(*local_90 + 0x18))(local_90);
              }
              plVar5 = local_68;
              local_68 = plVar12;
              if (plVar5 != (long *)0x0) {
                (**(code **)(*plVar5 + 0x20))();
              }
              if ((char)local_b0 != '\0') {
                if (local_90 != (long *)0x0) {
                  (**(code **)(*local_90 + 0x20))();
                }
                local_b0 = (long *)((ulong)local_b0 & 0xffffffffffffff00);
              }
            }
            if (*local_78 != '\0') {
              FUN_00cbf4c0(&local_b0,&local_80);
              FUN_0156c490(lVar8,&local_b0);
              if (local_90 != (long *)0x0) {
                (**(code **)(*local_90 + 0x20))();
              }
              if (local_b0 != (long *)0x0) {
                (**(code **)(*local_b0 + 0x20))();
              }
            }
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x20))();
            }
          }
          (**(code **)(*(long *)(lVar9 + -0x28) + 0x60))((long *)(lVar9 + -0x28));
          break;
        }
        sVar11 = sVar3;
      } while (sVar3 != 0);
      if (local_40 == (undefined8 *)0x0) {
        return;
      }
    }
LAB_01896b3c:
    puVar6 = local_40;
    psVar1 = (short *)(local_40 + 3);
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
      piVar2 = (int *)((long)local_40 + 0x1c);
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
        local_b0 = (long *)*puVar6;
        FUN_00c44438(lVar9 + 0x8040,&local_b0);
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


