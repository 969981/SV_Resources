/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011f3544; name: FUN_011f3544
 */


void FUN_011f3544(undefined8 *param_1)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  undefined8 local_28;
  
  *param_1 = &DAT_04606ef0;
  param_1[4] = &PTR_LAB_04607040;
  param_1[5] = &DAT_04607168;
  param_1[6] = &PTR_LAB_046071c0;
  param_1[7] = &PTR_LAB_046071e8;
  if (((*(byte *)((long)param_1 + 0x11f) & 1) != 0) || ((*(byte *)(param_1 + 0x24) & 1) != 0)) {
LAB_011f358c:
    plVar8 = (long *)param_1[0x5d];
    if (plVar8 != (long *)0x0) {
      lVar13 = plVar8[6];
      psVar2 = (short *)(lVar13 + 0x1a);
      do {
        sVar4 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar8 + 0x50))();
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    pcVar11 = (code *)param_1[0x4d];
    if (pcVar11 != (code *)0x0) {
      param_1[0x4f] = 0;
      param_1[0x4e] = 0;
      param_1[0x4d] = 0;
      param_1[0x4c] = 0;
      (*pcVar11)(param_1 + 0x50);
    }
    plVar8 = (long *)param_1[0x45];
    while (plVar8 != (long *)0x0) {
      plVar16 = (long *)*plVar8;
      FUN_011f3af8(plVar8 + 7);
      if ((long *)plVar8[6] != (long *)0x0) {
        (**(code **)(*(long *)plVar8[6] + 0x20))();
      }
      if ((long *)plVar8[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar8[5] + 0x20))();
      }
      plVar15 = (long *)param_1[0x46];
      uVar9 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar9 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,plVar8,0x88,8);
        plVar8 = plVar16;
      }
      else {
        FUN_00c48fe8(plVar15,plVar8,0x88,8);
        plVar8 = plVar16;
      }
    }
    lVar13 = param_1[0x3f];
    param_1[0x3f] = 0;
    if (lVar13 != 0) {
      lVar12 = param_1[0x40];
      plVar8 = (long *)param_1[0x41];
      uVar9 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar13,lVar12 << 3,8);
      }
      else {
        FUN_00c48fe8(plVar8,lVar13,lVar12 << 3,8);
      }
    }
    lVar13 = param_1[0x37];
    if (lVar13 != 0) {
      lVar12 = param_1[0x38];
      if (lVar12 == lVar13) {
        lVar12 = lVar13;
      }
      else {
        FUN_0118da34(lVar12 + -0x20);
        if ((((lVar12 + -0x20 != lVar13) && (FUN_0118da34(lVar12 + -0x40), lVar12 + -0x40 != lVar13)
             ) && (FUN_0118da34(lVar12 + -0x60), lVar12 + -0x60 != lVar13)) &&
           (FUN_0118da34(lVar12 + -0x80), lVar12 + -0x80 != lVar13)) {
          do {
            FUN_0118da34(lVar12 + -0xa0);
            lVar12 = lVar12 + -0x20;
          } while (lVar13 + 0x80 != lVar12);
        }
        lVar12 = param_1[0x37];
      }
      lVar10 = param_1[0x39];
      plVar8 = (long *)param_1[0x3a];
      param_1[0x38] = lVar13;
      uVar9 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar9 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar12,lVar10 - lVar12,8);
      }
      else {
        FUN_00c48fe8(plVar8,lVar12,lVar10 - lVar12,8);
      }
    }
    plVar8 = (long *)param_1[0x30];
    while (plVar8 != (long *)0x0) {
      plVar15 = (long *)*plVar8;
      plVar16 = (long *)plVar8[3];
      if (plVar16 != (long *)0x0) {
        plVar1 = plVar16 + 5;
        do {
          lVar13 = *plVar1;
          iVar7 = (int)lVar13 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
        else if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      plVar16 = (long *)param_1[0x31];
      uVar9 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar9 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,plVar8,0x20,8);
        plVar8 = plVar15;
      }
      else {
        FUN_00c48fe8(plVar16,plVar8,0x20,8);
        plVar8 = plVar15;
      }
    }
    lVar13 = param_1[0x2a];
    param_1[0x2a] = 0;
    if (lVar13 != 0) {
      lVar12 = param_1[0x2b];
      plVar8 = (long *)param_1[0x2c];
      uVar9 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar13,lVar12 << 3,8);
      }
      else {
        FUN_00c48fe8(plVar8,lVar13,lVar12 << 3,8);
      }
    }
    puVar14 = (undefined8 *)param_1[0x28];
    if (puVar14 != (undefined8 *)0x0) {
      psVar2 = (short *)(puVar14 + 3);
      do {
        sVar4 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)puVar14 + 0x1c);
        do {
          iVar7 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
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
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_28 = *puVar14;
          FUN_00c44438(lVar13 + 0x8040,&local_28);
        }
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x26));
    FUN_00e6bfa4(param_1);
    return;
  }
  *(byte *)(param_1 + 0x24) = 1;
  plVar8 = param_1 + 0x25;
  lVar13 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar6) {
      *plVar8 = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_011f39a8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x26));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x26));
        while (*plVar8 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = lVar13;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_011f39a8;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar6) {
      *plVar8 = lVar13;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_011f39a8:
  param_1[0x25] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x26));
  goto LAB_011f358c;
}


