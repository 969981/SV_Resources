/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0132c71c; name: FUN_0132c71c
 */


void FUN_0132c71c(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 local_68;
  
  *param_1 = &DAT_045a0cc8;
  param_1[4] = &PTR_LAB_045a0da0;
  param_1[5] = &DAT_045a0df0;
  param_1[8] = &PTR_LAB_045a0e48;
  pcVar14 = (code *)param_1[0x93];
  param_1[0x1e] = &PTR_LAB_045a0ee8;
  if (pcVar14 != (code *)0x0) {
    param_1[0x95] = 0;
    param_1[0x94] = 0;
    param_1[0x93] = 0;
    param_1[0x92] = 0;
    (*pcVar14)(param_1 + 0x96);
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x86));
  if (param_1[0x7d] != 0) {
    FUN_0132d6d0(param_1 + 0x7d);
    lVar12 = param_1[0x7d];
    lVar16 = param_1[0x7f];
    plVar10 = (long *)param_1[0x80];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,lVar16 - lVar12,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar12,lVar16 - lVar12,8);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x7b));
  puVar19 = (undefined8 *)param_1[0x71];
  if (puVar19 != (undefined8 *)0x0) {
    puVar15 = (undefined8 *)param_1[0x72];
    puVar18 = puVar19;
    if (puVar15 != puVar19) {
      pcVar14 = (code *)puVar15[-0xf];
      puVar18 = puVar15 + -0x10;
      if (pcVar14 != (code *)0x0) {
        puVar15[-0xe] = 0;
        puVar15[-0xd] = 0;
        *puVar18 = 0;
        puVar15[-0xf] = 0;
        (*pcVar14)(puVar15 + -0xc);
      }
      while (puVar15 = puVar18, puVar15 != puVar19) {
        pcVar14 = (code *)puVar15[-0xf];
        puVar18 = puVar15 + -0x10;
        if (pcVar14 != (code *)0x0) {
          puVar15[-0xe] = 0;
          puVar15[-0xd] = 0;
          puVar15[-0x10] = 0;
          puVar15[-0xf] = 0;
          (*pcVar14)(puVar15 + -0xc);
        }
      }
      puVar18 = (undefined8 *)param_1[0x71];
    }
    lVar16 = param_1[0x73];
    param_1[0x72] = puVar19;
    plVar10 = (long *)param_1[0x74];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,puVar18,lVar16 - (long)puVar18,0x10);
    }
    else {
      FUN_00c48fe8(plVar10,puVar18,lVar16 - (long)puVar18,0x10);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x6f));
  FUN_00deb044(param_1 + 0x67);
  plVar10 = (long *)param_1[0x60];
  while (plVar10 != (long *)0x0) {
    plVar20 = (long *)*plVar10;
    plVar17 = (long *)plVar10[3];
    if (plVar17 != (long *)0x0) {
      lVar16 = plVar17[6];
      psVar1 = (short *)(lVar16 + 0x1a);
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
        *(undefined8 *)(lVar16 + 0x10) = 0;
        (**(code **)(*plVar17 + 0x50))();
      }
      else if (sVar3 == 0) goto LAB_0132c9b8;
    }
    plVar17 = (long *)param_1[0x61];
    uVar11 = (**(code **)(*plVar17 + 0xf8))(plVar17);
    if (((uVar11 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
      (**(code **)(*plVar17 + 0x18))(plVar17,plVar10,0x20,8);
      plVar10 = plVar20;
    }
    else {
      FUN_00c48fe8(plVar17,plVar10,0x20,8);
      plVar10 = plVar20;
    }
  }
  lVar16 = param_1[0x5a];
  param_1[0x5a] = 0;
  if (lVar16 != 0) {
    lVar12 = param_1[0x5b];
    plVar10 = (long *)param_1[0x5c];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar16,lVar12 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar16,lVar12 << 3,8);
    }
  }
  plVar10 = (long *)param_1[0x59];
  if (plVar10 != (long *)0x0) {
    lVar16 = plVar10[6];
    psVar1 = (short *)(lVar16 + 0x1a);
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
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_0132c9b8;
  }
  plVar10 = (long *)param_1[0x52];
  if (plVar10 != (long *)0x0) {
    plVar20 = (long *)param_1[0x53];
    plVar17 = plVar10;
    if (plVar20 != plVar10) {
      do {
        plVar20 = plVar20 + -1;
        plVar17 = (long *)*plVar20;
        if (plVar17 != (long *)0x0) {
          lVar16 = plVar17[6];
          psVar1 = (short *)(lVar16 + 0x1a);
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
            *(undefined8 *)(lVar16 + 0x10) = 0;
            (**(code **)(*plVar17 + 0x50))();
          }
          else if (sVar3 == 0) goto LAB_0132c9b8;
        }
      } while (plVar20 != plVar10);
      plVar17 = (long *)param_1[0x52];
    }
    lVar16 = param_1[0x54];
    param_1[0x53] = plVar10;
    plVar10 = (long *)param_1[0x55];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar17,lVar16 - (long)plVar17,8);
    }
    else {
      FUN_00c48fe8(plVar10,plVar17,lVar16 - (long)plVar17,8);
    }
  }
  puVar8 = PTR_LAB_047d3de8;
  puVar7 = PTR_DAT_047d3918;
  puVar6 = PTR_DAT_047d3910;
  plVar10 = (long *)param_1[0x4b];
  while (plVar10 != (long *)0x0) {
    plVar17 = (long *)*plVar10;
    puVar19 = (undefined8 *)plVar10[6];
    if (puVar19 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar19 + 3);
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
        piVar2 = (int *)((long)puVar19 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(puVar8,puVar6,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar16 = *(long *)puVar6;
          *(long *)puVar7 = lVar16;
          local_68 = *puVar19;
          FUN_00c44438(lVar16 + 0x8040,&local_68);
        }
      }
      else if (sVar3 == 0) goto LAB_0132ca00;
    }
    if ((long *)plVar10[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar10[5] + 0x20))();
    }
    plVar20 = (long *)param_1[0x4c];
    uVar11 = (**(code **)(*plVar20 + 0xf8))(plVar20);
    if (((uVar11 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
      (**(code **)(*plVar20 + 0x18))(plVar20,plVar10,0x40,8);
      plVar10 = plVar17;
    }
    else {
      FUN_00c48fe8(plVar20,plVar10,0x40,8);
      plVar10 = plVar17;
    }
  }
  lVar16 = param_1[0x45];
  param_1[0x45] = 0;
  if (lVar16 != 0) {
    lVar12 = param_1[0x46];
    plVar10 = (long *)param_1[0x47];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar16,lVar12 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar10,lVar16,lVar12 << 3,8);
    }
  }
  plVar10 = (long *)param_1[0x3e];
  if (plVar10 != (long *)0x0) {
    plVar17 = (long *)param_1[0x3f];
    if (plVar17 == plVar10) {
      plVar17 = plVar10;
    }
    else {
      do {
        plVar17 = plVar17 + -1;
        if ((long *)*plVar17 != (long *)0x0) {
          (**(code **)(*(long *)*plVar17 + 0x60))();
        }
      } while (plVar10 != plVar17);
      plVar17 = (long *)param_1[0x3e];
    }
    lVar16 = param_1[0x40];
    param_1[0x3f] = plVar10;
    plVar10 = (long *)param_1[0x41];
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar17,lVar16 - (long)plVar17,8);
    }
    else {
      FUN_00c48fe8(plVar10,plVar17,lVar16 - (long)plVar17,8);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x3c));
  puVar19 = (undefined8 *)param_1[0x39];
  if (puVar19 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar19 + 3);
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
      piVar2 = (int *)((long)puVar19 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_68 = *puVar19;
        FUN_00c44438(lVar16 + 0x8040,&local_68);
      }
    }
    else if (sVar3 == 0) {
LAB_0132ca00:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  plVar10 = (long *)param_1[0x38];
  if (plVar10 != (long *)0x0) {
    lVar16 = plVar10[6];
    psVar1 = (short *)(lVar16 + 0x1a);
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
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_0132c9b8;
  }
  plVar10 = (long *)param_1[0x37];
  if (plVar10 != (long *)0x0) {
    lVar16 = plVar10[6];
    psVar1 = (short *)(lVar16 + 0x1a);
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
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_0132c9b8;
  }
  if ((long *)param_1[0x36] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x36] + 0x20))();
  }
  plVar10 = (long *)param_1[0x32];
  if (plVar10 != (long *)0x0) {
    lVar16 = plVar10[6];
    psVar1 = (short *)(lVar16 + 0x1a);
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
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_0132c9b8;
  }
  plVar10 = (long *)param_1[0x31];
  if (plVar10 != (long *)0x0) {
    lVar16 = plVar10[6];
    psVar1 = (short *)(lVar16 + 0x1a);
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
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_0132c9b8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_0132d0d8(param_1 + 0x29);
  if ((long *)param_1[0x27] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x27] + 0x20))();
  }
  if ((long *)param_1[0x23] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x23] + 0x20))();
  }
  param_1[0x1e] = PTR_DAT_047dd588 + 0x10;
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x21));
  plVar10 = (long *)param_1[0x1f];
  if (plVar10 != (long *)0x0) {
    plVar17 = plVar10 + 5;
    do {
      lVar16 = *plVar17;
      iVar9 = (int)lVar16 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *(int *)plVar17 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_0132d504(param_1);
  return;
}


