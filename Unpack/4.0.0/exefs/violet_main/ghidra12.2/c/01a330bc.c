/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a330bc; name: FUN_01a330bc
 */


void FUN_01a330bc(long param_1)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  long **pplVar5;
  short sVar6;
  char cVar7;
  ulong *puVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  short sVar13;
  long *plVar14;
  undefined8 local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  long *local_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
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
  plVar14 = *(long **)(param_1 + 0x128);
  local_48 = plVar14;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_40 = (ulong *)0x0;
    uStack_38 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_40,param_1 + 0x30,&local_60);
    plVar14 = local_48;
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if (local_40 != (ulong *)0x0) {
    if (*(short *)((long)local_40 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_40 + 0x1a);
      sVar13 = *(short *)((long)local_40 + 0x1a);
      do {
        sVar6 = *psVar1;
        if (sVar6 == sVar13) {
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar13 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_01a33188;
          bVar9 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01a33188:
          bVar9 = false;
        }
        if (bVar9) {
          uVar11 = local_40[2];
          if (uVar11 == 0) goto LAB_01a332c4;
          lVar12 = FUN_0197022c(uVar11 + 0xe0,&local_a8);
          if (lVar12 != 0) {
            local_c8 = 0x1955520cf959aeef;
            pcStack_c0 = "PartName";
            local_b8 = 8;
            local_b0 = (long *)0x0;
            FUN_01315eac(&local_a8,param_1,&local_c8);
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            bVar9 = (char)local_a8 != '\0';
            puVar4 = (undefined8 *)PTR_DAT_047d3e30;
            if (bVar9) {
              puVar4 = &local_a0;
            }
            local_80 = *puVar4;
            puVar4 = (undefined8 *)(PTR_DAT_047d3e30 + 8);
            if (bVar9) {
              puVar4 = &local_98;
            }
            local_78 = *puVar4;
            puVar4 = (undefined8 *)(PTR_DAT_047d3e30 + 0x10);
            if (bVar9) {
              puVar4 = &local_90;
            }
            local_70 = *puVar4;
            pplVar5 = (long **)(PTR_DAT_047d3e30 + 0x18);
            if (bVar9) {
              pplVar5 = &local_88;
            }
            local_68 = *pplVar5;
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x18))();
            }
            if ((char)local_a8 != '\0') {
              if (local_88 != (long *)0x0) {
                (**(code **)(*local_88 + 0x20))();
              }
              local_a8 = local_a8 & 0xffffffffffffff00;
            }
            if (local_b0 != (long *)0x0) {
              (**(code **)(*local_b0 + 0x20))();
            }
            FUN_01ea5f3c(lVar12,1,&local_80);
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x20))();
            }
          }
          (**(code **)(*(long *)(uVar11 - 0x28) + 0x60))((long *)(uVar11 - 0x28));
          break;
        }
        sVar13 = sVar6;
      } while (sVar6 != 0);
      if (local_40 == (ulong *)0x0) {
        return;
      }
    }
LAB_01a332c4:
    puVar8 = local_40;
    puVar2 = local_40 + 3;
    do {
      sVar13 = (short)*puVar2;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar9) {
        *(short *)puVar2 = sVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)local_40 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar9) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_a8 = *puVar8;
        FUN_00c44438(lVar12 + 0x8040,&local_a8);
      }
    }
    else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


