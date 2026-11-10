/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016a29fc; name: FUN_016a29fc
 */


void FUN_016a29fc(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 local_28;
  
  FUN_0146cce0();
  plVar8 = (long *)(param_1 + 0x3c0);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_016a2a34;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3c8));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3c8));
        while (*plVar8 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_016a2a34;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_016a2a34:
  puVar10 = *(undefined8 **)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x240) = 0;
  if (puVar10 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar10 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar10 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar7 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar7;
        local_28 = *puVar10;
        FUN_00c44438(lVar7 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(param_1 + 0x248) = 0;
  lVar7 = *(long *)(param_1 + 0x310);
  lVar12 = *(long *)(param_1 + 0x318);
  if (((lVar12 != lVar7) && (FUN_00f91cdc(lVar12 + -0x40), lVar12 + -0x40 != lVar7)) &&
     (FUN_00f91cdc(lVar12 + -0x80), lVar12 + -0x80 != lVar7)) {
    do {
      FUN_00f91cdc(lVar12 + -0xc0);
      lVar12 = lVar12 + -0x40;
    } while (lVar7 + 0x80 != lVar12);
  }
  *(long *)(param_1 + 0x318) = lVar7;
  FUN_00fdce8c(param_1 + 0x2c8);
  plVar8 = *(long **)(param_1 + 0x308);
  *(undefined8 *)(param_1 + 0x308) = 0;
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_016a3158;
  }
  plVar8 = *(long **)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 0x290) = 0;
  if (plVar8 != (long *)0x0) {
    plVar11 = plVar8 + 5;
    do {
      lVar7 = *plVar11;
      iVar6 = (int)lVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *(int *)plVar11 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_01024c18(param_1 + 0x250);
  FUN_00db2500(param_1 + 0x48);
  for (plVar8 = *(long **)(param_1 + 0x378); plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
    for (plVar11 = (long *)plVar8[9]; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if ((plVar11[4] != 0) && ((*(byte *)(plVar11[4] + 0x1e8) & 1) != 0)) {
        FUN_00ff9e1c(plVar11 + 3);
      }
    }
  }
  if (*(long *)(param_1 + 0x3a0) != 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x378);
    if (puVar10 != (undefined8 *)0x0) {
      plVar8 = (long *)*puVar10;
      FUN_01446674(puVar10 + 3);
      plVar11 = *(long **)(param_1 + 0x380);
      uVar9 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,puVar10,0x80,8);
      }
      else {
        FUN_00c48fe8(plVar11,puVar10,0x80,8);
      }
      if (plVar8 != (long *)0x0) {
        plVar11 = (long *)*plVar8;
        FUN_01446674(plVar8 + 3);
        plVar13 = *(long **)(param_1 + 0x380);
        uVar9 = (**(code **)(*plVar13 + 0xf8))(plVar13);
        if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar13 + 0x18))(plVar13,plVar8,0x80,8);
        }
        else {
          FUN_00c48fe8(plVar13,plVar8,0x80,8);
        }
        while (plVar11 != (long *)0x0) {
          plVar13 = (long *)*plVar11;
          FUN_01446674(plVar11 + 3);
          plVar8 = *(long **)(param_1 + 0x380);
          uVar9 = (**(code **)(*plVar8 + 0xf8))(plVar8);
          if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
            (**(code **)(*plVar8 + 0x18))(plVar8,plVar11,0x80,8);
            plVar11 = plVar13;
          }
          else {
            FUN_00c48fe8(plVar8,plVar11,0x80,8);
            plVar11 = plVar13;
          }
        }
      }
    }
    lVar7 = *(long *)(param_1 + 0x350);
    *(undefined8 *)(param_1 + 0x378) = 0;
    if ((((lVar7 != 0) && (**(undefined8 **)(param_1 + 0x348) = 0, lVar7 != 1)) &&
        (*(undefined8 *)(*(long *)(param_1 + 0x348) + 8) = 0, lVar7 != 2)) &&
       (*(undefined8 *)(*(long *)(param_1 + 0x348) + 0x10) = 0, lVar7 != 3)) {
      lVar12 = 3;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x348) + lVar12 * 8) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar7 != lVar12);
    }
    *(undefined8 *)(param_1 + 0x3a0) = 0;
  }
  for (plVar8 = *(long **)(param_1 + 0xb8); plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
    if ((plVar8[4] != 0) && ((*(byte *)(plVar8[4] + 0x1e8) & 1) != 0)) {
      FUN_01185f44(plVar8 + 3);
    }
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    puVar10 = *(undefined8 **)(param_1 + 0xb8);
    if (puVar10 != (undefined8 *)0x0) {
      plVar8 = (long *)*puVar10;
      FUN_01185de0(puVar10 + 3);
      plVar11 = *(long **)(param_1 + 0xc0);
      uVar9 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,puVar10,0x58,8);
      }
      else {
        FUN_00c48fe8(plVar11,puVar10,0x58,8);
      }
      if (plVar8 != (long *)0x0) {
        plVar11 = (long *)*plVar8;
        FUN_01185de0(plVar8 + 3);
        plVar13 = *(long **)(param_1 + 0xc0);
        uVar9 = (**(code **)(*plVar13 + 0xf8))(plVar13);
        if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar13 + 0x18))(plVar13,plVar8,0x58,8);
        }
        else {
          FUN_00c48fe8(plVar13,plVar8,0x58,8);
        }
        while (plVar11 != (long *)0x0) {
          plVar13 = (long *)*plVar11;
          FUN_01185de0(plVar11 + 3);
          plVar8 = *(long **)(param_1 + 0xc0);
          uVar9 = (**(code **)(*plVar8 + 0xf8))(plVar8);
          if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
            (**(code **)(*plVar8 + 0x18))(plVar8,plVar11,0x58,8);
            plVar11 = plVar13;
          }
          else {
            FUN_00c48fe8(plVar8,plVar11,0x58,8);
            plVar11 = plVar13;
          }
        }
      }
    }
    lVar7 = *(long *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    if ((((lVar7 != 0) && (**(undefined8 **)(param_1 + 0x88) = 0, lVar7 != 1)) &&
        (*(undefined8 *)(*(long *)(param_1 + 0x88) + 8) = 0, lVar7 != 2)) &&
       (*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x10) = 0, lVar7 != 3)) {
      lVar12 = 3;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x88) + lVar12 * 8) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar7 != lVar12);
    }
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    plVar8 = (long *)*(long *)(param_1 + 0x120);
    while (plVar8 != (long *)0x0) {
      plVar13 = (long *)*plVar8;
      plVar11 = (long *)plVar8[3];
      if (plVar11 != (long *)0x0) {
        lVar7 = plVar11[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_016a3158;
      }
      plVar11 = *(long **)(param_1 + 0x128);
      uVar9 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,plVar8,0x20,8);
        plVar8 = plVar13;
      }
      else {
        FUN_00c48fe8(plVar11,plVar8,0x20,8);
        plVar8 = plVar13;
      }
    }
    lVar7 = *(long *)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0x120) = 0;
    if (((lVar7 != 0) && (**(undefined8 **)(param_1 + 0xf0) = 0, lVar7 != 1)) &&
       ((*(undefined8 *)(*(long *)(param_1 + 0xf0) + 8) = 0, lVar7 != 2 &&
        (*(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x10) = 0, lVar7 != 3)))) {
      lVar12 = 3;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0xf0) + lVar12 * 8) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar7 != lVar12);
    }
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  if (*(long *)(param_1 + 0x1b0) != 0) {
    plVar8 = (long *)*(long *)(param_1 + 0x188);
    while (plVar8 != (long *)0x0) {
      plVar13 = (long *)*plVar8;
      plVar11 = (long *)plVar8[3];
      if (plVar11 != (long *)0x0) {
        lVar7 = plVar11[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))();
        }
        else if (sVar3 == 0) {
LAB_016a3158:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      plVar11 = *(long **)(param_1 + 400);
      uVar9 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,plVar8,0x20,8);
        plVar8 = plVar13;
      }
      else {
        FUN_00c48fe8(plVar11,plVar8,0x20,8);
        plVar8 = plVar13;
      }
    }
    lVar7 = *(long *)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x188) = 0;
    if ((((lVar7 != 0) && (**(undefined8 **)(param_1 + 0x158) = 0, lVar7 != 1)) &&
        (*(undefined8 *)(*(long *)(param_1 + 0x158) + 8) = 0, lVar7 != 2)) &&
       (*(undefined8 *)(*(long *)(param_1 + 0x158) + 0x10) = 0, lVar7 != 3)) {
      lVar12 = 3;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x158) + lVar12 * 8) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar7 != lVar12);
    }
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x3c8));
  return;
}


