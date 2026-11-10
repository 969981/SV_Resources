/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01832da0; name: FUN_01832da0
 */


void FUN_01832da0(short *param_1,long *param_2)

{
  int *piVar1;
  short sVar2;
  short *psVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  short *psVar13;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined8 *local_50 [4];
  undefined8 local_28;
  
  if (((DAT_04839b78 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04839b78), iVar7 != 0)) {
    FUN_00100190(&LAB_00b1ecf8,&DAT_04839b68,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839b78);
  }
  lVar9 = DAT_04839b68;
  DAT_04839b60 = DAT_04839b68;
  if (DAT_04839b68 == 0) {
    return;
  }
  if (*param_2 == 0) {
    return;
  }
  if (*(short *)(*param_2 + 0x1a) == 0) {
    return;
  }
  uVar8 = FUN_01833780(param_1);
  local_58 = param_2;
  if ((uVar8 & 1) == 0) {
    psVar13 = *(short **)(lVar9 + 0x88);
    psVar3 = *(short **)(lVar9 + 0x90);
    if (psVar13 != psVar3) {
      while (*psVar13 != *param_1) {
        psVar13 = psVar13 + 0x60;
        if (psVar3 == psVar13) {
          return;
        }
      }
    }
    if (psVar13 == psVar3) {
      return;
    }
    FUN_00ca1a48(psVar13 + 0x3c,param_2);
    FUN_01ebad90(local_50,&local_58);
    FUN_00c93a38(psVar13 + 0x54,local_50);
    puVar6 = local_50[0];
    if (local_50[0] != (undefined8 *)0x0) {
      psVar3 = (short *)(local_50[0] + 3);
      do {
        sVar2 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        piVar1 = (int *)((long)local_50[0] + 0x1c);
        do {
          iVar7 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_28 = *puVar6;
          FUN_00c44438(lVar12 + 0x8040,&local_28);
        }
      }
      else if (sVar2 == 0) goto LAB_0183303c;
    }
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_00ca1a48(&local_78,psVar13 + 0x3c);
    FUN_015bb800(psVar13,&local_78,4);
    puVar6 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      psVar3 = (short *)(local_78 + 3);
      do {
        sVar2 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        piVar1 = (int *)((long)local_78 + 0x1c);
        do {
          iVar7 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_50[0] = (undefined8 *)*puVar6;
          FUN_00c44438(lVar12 + 0x8040,local_50);
        }
      }
      else if (sVar2 == 0) goto LAB_0183303c;
    }
    lVar9 = FUN_01833b10(*(undefined8 *)(lVar9 + 8),param_2);
    if (lVar9 != 0) {
      FUN_01837a80(lVar9);
    }
    plVar10 = *(long **)(psVar13 + 0x5c);
    psVar13[0x5c] = 0;
    psVar13[0x5d] = 0;
    psVar13[0x5e] = 0;
    psVar13[0x5f] = 0;
    if (plVar10 != (long *)0x0) {
      lVar12 = plVar10[6];
      psVar3 = (short *)(lVar12 + 0x1a);
      do {
        sVar2 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01833094;
    }
    *(long *)(psVar13 + 0x5c) = lVar9;
    if (lVar9 == 0) {
      return;
    }
    uVar11 = 0;
  }
  else {
    psVar13 = *(short **)(lVar9 + 0x50);
    psVar3 = *(short **)(lVar9 + 0x58);
    if (psVar13 != psVar3) {
      while (*psVar13 != *param_1) {
        psVar13 = psVar13 + 0x68;
        if (psVar3 == psVar13) {
          return;
        }
      }
    }
    if (psVar13 == psVar3) {
      return;
    }
    FUN_00ca1a48(psVar13 + 0x3c,param_2);
    FUN_01834690(local_50,&local_58);
    FUN_00c93a38(psVar13 + 0x4c,local_50);
    puVar6 = local_50[0];
    if (local_50[0] != (undefined8 *)0x0) {
      psVar3 = (short *)(local_50[0] + 3);
      do {
        sVar2 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        piVar1 = (int *)((long)local_50[0] + 0x1c);
        do {
          iVar7 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_28 = *puVar6;
          FUN_00c44438(lVar12 + 0x8040,&local_28);
        }
      }
      else if (sVar2 == 0) goto LAB_0183303c;
    }
    local_58 = param_2;
    FUN_01834a04(local_50,&local_58);
    FUN_013dc33c(psVar13 + 0x54,local_50);
    puVar6 = local_50[0];
    if (local_50[0] != (undefined8 *)0x0) {
      psVar3 = (short *)(local_50[0] + 3);
      do {
        sVar2 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        piVar1 = (int *)((long)local_50[0] + 0x1c);
        do {
          iVar7 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_28 = *puVar6;
          FUN_00c44438(lVar12 + 0x8040,&local_28);
        }
      }
      else if (sVar2 == 0) goto LAB_0183303c;
    }
    local_58 = param_2;
    FUN_01834320(local_50,&local_58);
    FUN_00f5a410(psVar13 + 0x5c,local_50);
    puVar6 = local_50[0];
    if (local_50[0] != (undefined8 *)0x0) {
      psVar3 = (short *)(local_50[0] + 3);
      do {
        sVar2 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        piVar1 = (int *)((long)local_50[0] + 0x1c);
        do {
          iVar7 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_28 = *puVar6;
          FUN_00c44438(lVar12 + 0x8040,&local_28);
        }
      }
      else if (sVar2 == 0) goto LAB_0183303c;
    }
    FUN_018335f0(lVar9,param_1);
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    FUN_00ca1a48(&local_68,psVar13 + 0x3c);
    FUN_01833968(psVar13,&local_68,4);
    puVar6 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar3 = (short *)(local_68 + 3);
      do {
        sVar2 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        piVar1 = (int *)((long)local_68 + 0x1c);
        do {
          iVar7 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_50[0] = (undefined8 *)*puVar6;
          FUN_00c44438(lVar12 + 0x8040,local_50);
        }
      }
      else if (sVar2 == 0) {
LAB_0183303c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    lVar9 = FUN_01833b10(*(undefined8 *)(lVar9 + 8),param_2);
    if (lVar9 != 0) {
      FUN_01837a80(lVar9);
    }
    plVar10 = *(long **)(psVar13 + 100);
    psVar13[100] = 0;
    psVar13[0x65] = 0;
    psVar13[0x66] = 0;
    psVar13[0x67] = 0;
    if (plVar10 != (long *)0x0) {
      lVar12 = plVar10[6];
      psVar3 = (short *)(lVar12 + 0x1a);
      do {
        sVar2 = *psVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar5) {
          *psVar3 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_01833094:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    *(long *)(psVar13 + 100) = lVar9;
    if (lVar9 == 0) {
      return;
    }
    uVar11 = 1;
  }
  FUN_01837b34(lVar9,uVar11);
  return;
}


