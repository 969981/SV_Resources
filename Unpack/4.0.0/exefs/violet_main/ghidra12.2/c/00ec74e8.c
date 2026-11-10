/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ec74e8; name: FUN_00ec74e8
 */


void FUN_00ec74e8(long *param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  long *local_68;
  long *local_60 [2];
  long local_38;
  
  FUN_00d1a240(param_1,0x8009808a);
  *param_1 = (long)&PTR_FUN_045de9e8;
  param_1[4] = (long)&PTR_LAB_045deb80;
  param_1[5] = (long)&DAT_045deca8;
  param_1[6] = (long)&PTR_LAB_045ded00;
  plVar15 = param_1 + 7;
  *plVar15 = (long)&PTR_LAB_045ded28;
  param_1[0x24] = 0;
  param_1[0x25] = (long)&PTR_LAB_045ded60;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x2b] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar13 == 0) || (*(long *)(lVar13 + 0x80) == 0)) ||
     (lVar13 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8), lVar13 == 0)) {
    lVar7 = tpidr_el0;
    lVar13 = *(long *)(lVar7 + 0x30);
    if (lVar13 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_04859438), iVar12 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar13 = DAT_04859430;
      *(long *)(lVar7 + 0x30) = DAT_04859430;
    }
  }
  param_1[0x2c] = lVar13;
  param_1[0x2d] = 0x333333333333333;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)((long)param_1 + 0x194) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x31,0,1);
  (**(code **)(*param_1 + 0x70))(param_1,0);
  if (((char)param_1[0xb] != '\0') || (*(char *)((long)param_1 + 0x59) != '\0')) {
    lVar13 = param_1[0xb];
    *(undefined2 *)(param_1 + 0xb) = 0;
    if (param_1[9] != 0) {
      FUN_00c6a584(param_1[9],plVar15);
    }
    (**(code **)(*plVar15 + 0x20))(plVar15,(short)lVar13);
  }
  FUN_00c9e664(&local_70,param_1 + 0x1d);
  puVar8 = PTR_DAT_047d88d0;
  if (local_70 != (long *)0x0) {
    if (((*PTR_DAT_047d88d0 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d88d0);
    }
    puVar10 = PTR_DAT_047d88e0;
    puVar9 = PTR_DAT_047d88d8;
    uVar14 = *(undefined8 *)PTR_DAT_047d88d8;
    *(undefined8 *)PTR_DAT_047d88e0 = uVar14;
    if (local_68 == (long *)0x0) {
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)local_68[9];
    }
    (**(code **)(*plVar15 + 0x18))(local_60,plVar15);
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    plVar3 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      plVar3 = plVar15 + 5;
    }
    if ((long *)local_60[0][2] == plVar3) {
      FUN_00c9ea00(&local_80,local_60);
    }
    plVar15 = local_60[0];
    if (local_60[0] != (long *)0x0) {
      plVar3 = local_60[0] + 3;
      do {
        sVar4 = (short)*plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(short *)plVar3 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_60[0] + 0x1c);
        do {
          iVar12 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_38 = *plVar15;
          FUN_00c44438(lVar13 + 0x8040,&local_38);
        }
      }
      else if (sVar4 == 0) goto LAB_00ec7854;
    }
    FUN_01035a9c(&local_38,uVar14,&local_80);
    plVar15 = (long *)param_1[0x28];
    param_1[0x28] = 0;
    if (plVar15 != (long *)0x0) {
      lVar13 = plVar15[6];
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar15 + 0x50))();
      }
      else if (sVar4 == 0) goto LAB_00ec77e4;
    }
    lVar13 = local_38;
    puVar11 = local_80;
    local_38 = 0;
    param_1[0x28] = lVar13;
    if (local_80 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_80 + 0x1c);
        do {
          iVar12 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_60[0] = (long *)*puVar11;
          FUN_00c44438(lVar13 + 0x8040,local_60);
        }
      }
      else if (sVar4 == 0) {
LAB_00ec7854:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d88d0);
    }
    *(undefined8 *)puVar10 = *(undefined8 *)puVar9;
    FUN_00ee410c(local_60);
    FUN_00e21f0c(local_60[0]);
    if (local_60[0] != (long *)0x0) {
      lVar13 = local_60[0][6];
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*local_60[0] + 0x50))();
      }
      else if (sVar4 == 0) goto LAB_00ec77e4;
    }
    if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d88d0);
    }
    *(undefined8 *)puVar10 = *(undefined8 *)puVar9;
    FUN_012fd150(local_60);
    FUN_00e21f0c(local_60[0]);
    if (local_60[0] != (long *)0x0) {
      lVar13 = local_60[0][6];
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*local_60[0] + 0x50))();
      }
      else if (sVar4 == 0) {
LAB_00ec77e4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  if (local_68 != (long *)0x0) {
    plVar15 = local_68 + 5;
    do {
      lVar13 = *plVar15;
      iVar12 = (int)lVar13 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x60))();
  }
  param_1[0xc] = param_1[0xc] | 0xe;
  return;
}


