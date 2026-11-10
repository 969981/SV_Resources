/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01998460; name: FUN_01998460
 */


void FUN_01998460(undefined8 param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  int *piVar3;
  short *psVar4;
  short sVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  short sVar14;
  long *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined8 *local_a8 [2];
  ulong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  ulong *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  ulong *local_40 [2];
  undefined8 local_18;
  
  puVar8 = (undefined8 *)FUN_0140f310();
  local_60 = *puVar8;
  uStack_58 = puVar8[1];
  local_50 = puVar8[2];
  local_48 = (long *)puVar8[3];
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  FUN_0140f318(local_40,param_1,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_70 = (ulong *)0x0;
  uStack_68 = 0;
  FUN_01340a44(&local_98,param_1,1);
  if ((char)local_98 != '\0') {
    local_c8 = local_90;
    uStack_c0 = uStack_88;
    local_b8 = local_80;
    local_b0 = local_78;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))();
    }
    FUN_0140f318(local_a8,param_1,&local_c8);
    FUN_00d0a34c(&local_70,local_a8);
    if (local_a8[0] != (undefined8 *)0x0) {
      psVar4 = (short *)(local_a8[0] + 3);
      do {
        sVar14 = *psVar4;
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar4,0x10);
        if (bVar13) {
          *psVar4 = sVar14 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar14 == 1) {
        piVar3 = (int *)((long)local_a8[0] + 0x1c);
        do {
          iVar7 = *piVar3;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar13) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_18 = *local_a8[0];
          FUN_00c44438(lVar10 + 0x8040,&local_18);
        }
      }
      else if (sVar14 == 0) goto LAB_019985a4;
    }
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    if ((char)local_98 != '\0') {
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      local_98 = local_98 & 0xffffffffffffff00;
    }
  }
  if ((local_40[0] != (ulong *)0x0) && (*(short *)((long)local_40[0] + 0x1a) != 0)) {
    psVar4 = (short *)((long)local_40[0] + 0x1a);
    sVar14 = *(short *)((long)local_40[0] + 0x1a);
    do {
      sVar5 = *psVar4;
      if (sVar5 == sVar14) {
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar4,0x10);
        if (bVar13) {
          *psVar4 = sVar14 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_01998774;
        bVar13 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01998774:
        bVar13 = false;
      }
      if (bVar13) {
        uVar11 = local_40[0][2];
        if (uVar11 != 0) {
          lVar10 = FUN_01491340(uVar11 + 0xe0,&local_98);
          if (((lVar10 == 0) || (local_70 == (ulong *)0x0)) ||
             (*(short *)((long)local_70 + 0x1a) == 0)) goto LAB_019987b4;
          psVar4 = (short *)((long)local_70 + 0x1a);
          sVar14 = *(short *)((long)local_70 + 0x1a);
          goto LAB_01998890;
        }
        break;
      }
      sVar14 = sVar5;
    } while (sVar5 != 0);
  }
  goto LAB_0199853c;
  while (sVar14 = sVar5, sVar5 != 0) {
LAB_01998890:
    sVar5 = *psVar4;
    if (sVar5 == sVar14) {
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar13) {
        *psVar4 = sVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_019988b4;
      bVar13 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_019988b4:
      bVar13 = false;
    }
    if (bVar13) {
      uVar12 = local_70[2];
      if (uVar12 != 0) {
        plVar9 = (long *)FUN_00ded3a0(uVar12 + 0xe0,&local_98);
        if (plVar9 != (long *)0x0) {
          local_d0 = plVar9;
          (**(code **)(*plVar9 + 0x58))();
          FUN_02249370(lVar10,&local_d0);
          if (local_d0 != (long *)0x0) {
            (**(code **)(*local_d0 + 0x60))();
          }
        }
        (**(code **)(*(long *)(uVar12 - 0x28) + 0x60))((long *)(uVar12 - 0x28));
      }
      break;
    }
  }
LAB_019987b4:
  (**(code **)(*(long *)(uVar11 - 0x28) + 0x60))((long *)(uVar11 - 0x28));
LAB_0199853c:
  puVar2 = local_70;
  if (local_70 != (ulong *)0x0) {
    puVar1 = local_70 + 3;
    do {
      sVar14 = (short)*puVar1;
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar13) {
        *(short *)puVar1 = sVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar14 == 1) {
      piVar3 = (int *)((long)local_70 + 0x1c);
      do {
        iVar7 = *piVar3;
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar13) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_98 = *puVar2;
        FUN_00c44438(lVar10 + 0x8040,&local_98);
      }
    }
    else if (sVar14 == 0) goto LAB_019985a4;
  }
  if (local_40[0] != (ulong *)0x0) {
    puVar2 = local_40[0] + 3;
    do {
      sVar14 = (short)*puVar2;
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar13) {
        *(short *)puVar2 = sVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar14 == 1) {
      piVar3 = (int *)((long)local_40[0] + 0x1c);
      do {
        iVar7 = *piVar3;
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar13) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_98 = *local_40[0];
        FUN_00c44438(lVar10 + 0x8040,&local_98);
      }
    }
    else if (sVar14 == 0) {
LAB_019985a4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


