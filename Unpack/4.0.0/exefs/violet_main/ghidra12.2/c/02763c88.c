/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02763c88; name: FUN_02763c88
 */


void FUN_02763c88(long *param_1)

{
  short *psVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int *piVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined8 local_38;
  
  puVar18 = (undefined8 *)param_1[0x60];
  *param_1 = (long)&PTR_FUN_045ddf48;
  param_1[4] = (long)&PTR_LAB_045de0e0;
  param_1[5] = (long)&DAT_045de208;
  param_1[6] = (long)&PTR_LAB_045de260;
  param_1[7] = (long)&PTR_LAB_045de288;
  param_1[0x25] = (long)&PTR_LAB_045de2c0;
  if (puVar18 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar18 + 3);
    do {
      sVar7 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar7 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar7 == 1) {
      piVar6 = (int *)((long)puVar18 + 0x1c);
      do {
        iVar10 = *piVar6;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar9) {
          *piVar6 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_38 = *puVar18;
        FUN_00c44438(lVar17 + 0x8040,&local_38);
      }
    }
    else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if ((long *)param_1[0x5e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x5e] + 0x20))();
  }
  plVar11 = (long *)param_1[0x5c];
  if (plVar11 != (long *)0x0) {
    lVar17 = plVar11[6];
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar7 = *psVar1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar7 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar7 == 0) {
LAB_02763fec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x5a));
  puVar18 = (undefined8 *)param_1[0x51];
  if (puVar18 != (undefined8 *)0x0) {
    puVar20 = (undefined8 *)param_1[0x52];
    puVar19 = puVar18;
    if (puVar20 != puVar18) {
      pcVar16 = (code *)puVar20[-0xf];
      if (pcVar16 != (code *)0x0) {
        puVar20[-0xe] = 0;
        puVar20[-0xd] = 0;
        puVar20[-0x10] = 0;
        puVar20[-0xf] = 0;
        (*pcVar16)(puVar20 + -0xc);
      }
      if (puVar20 + -0x10 != puVar18) {
        pcVar16 = (code *)puVar20[-0x1f];
        if (pcVar16 != (code *)0x0) {
          puVar20[-0x1e] = 0;
          puVar20[-0x1d] = 0;
          puVar20[-0x20] = 0;
          puVar20[-0x1f] = 0;
          (*pcVar16)(puVar20 + -0x1c);
        }
        if (puVar20 + -0x20 != puVar18) {
          do {
            pcVar16 = (code *)puVar20[-0x2f];
            if (pcVar16 != (code *)0x0) {
              puVar20[-0x2e] = 0;
              puVar20[-0x2d] = 0;
              puVar20[-0x30] = 0;
              puVar20[-0x2f] = 0;
              (*pcVar16)(puVar20 + -0x2c);
            }
            puVar20 = puVar20 + -0x10;
          } while (puVar18 + 0x20 != puVar20);
        }
      }
      puVar19 = (undefined8 *)param_1[0x51];
    }
    lVar17 = param_1[0x53];
    param_1[0x52] = (long)puVar18;
    plVar11 = (long *)param_1[0x54];
    uVar12 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar12 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar19,lVar17 - (long)puVar19,0x10);
    }
    else {
      FUN_00c48fe8(plVar11,puVar19,lVar17 - (long)puVar19,0x10);
    }
  }
  pcVar16 = (code *)param_1[0x41];
  if (pcVar16 != (code *)0x0) {
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x41] = 0;
    param_1[0x40] = 0;
    (*pcVar16)(param_1 + 0x44);
  }
  plVar11 = (long *)param_1[0x39];
  if (plVar11 != (long *)0x0) {
    plVar13 = plVar11 + 5;
    do {
      lVar17 = *plVar13;
      iVar10 = (int)lVar17 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar9) {
        *(int *)plVar13 = iVar10;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar17 == 0) goto LAB_02763f68;
  }
  plVar11 = (long *)param_1[0x38];
  if (plVar11 != (long *)0x0) {
    plVar13 = plVar11 + 5;
    do {
      lVar17 = *plVar13;
      iVar10 = (int)lVar17 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar9) {
        *(int *)plVar13 = iVar10;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar17 == 0) goto LAB_02763f68;
  }
  plVar11 = (long *)param_1[0x31];
  while (plVar11 != (long *)0x0) {
    plVar21 = (long *)*plVar11;
    plVar13 = (long *)plVar11[6];
    if (plVar13 != (long *)0x0) {
      lVar17 = plVar13[6];
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar7 = *psVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar7 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (sVar7 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))();
      }
      else if (sVar7 == 0) goto LAB_02763fec;
    }
    if ((long *)plVar11[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar11[5] + 0x20))();
    }
    plVar13 = (long *)param_1[0x32];
    uVar12 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar12 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,plVar11,0x38,8);
      plVar11 = plVar21;
    }
    else {
      FUN_00c48fe8(plVar13,plVar11,0x38,8);
      plVar11 = plVar21;
    }
  }
  lVar17 = param_1[0x2b];
  param_1[0x2b] = 0;
  if (lVar17 != 0) {
    lVar14 = param_1[0x2c];
    plVar11 = (long *)param_1[0x2d];
    uVar12 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar12 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar17,lVar14 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar11,lVar17,lVar14 << 3,8);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x29));
  plVar11 = (long *)param_1[0x24];
  puVar2 = PTR_DAT_047e1f98 + 0x160;
  puVar3 = PTR_DAT_047e1f98 + 0x288;
  puVar4 = PTR_DAT_047e1f98 + 0x2e0;
  puVar5 = PTR_DAT_047e1f98 + 0x308;
  *param_1 = (long)(PTR_DAT_047e1f98 + 0x10);
  param_1[4] = (long)puVar2;
  param_1[5] = (long)puVar3;
  param_1[6] = (long)puVar4;
  param_1[7] = (long)puVar5;
  if (plVar11 != (long *)0x0) {
    plVar13 = plVar11 + 5;
    do {
      lVar17 = *plVar13;
      iVar10 = (int)lVar17 + -1;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar9) {
        *(int *)plVar13 = iVar10;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar17 == 0) {
LAB_02763f68:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_00e6bfa4(param_1);
  return;
}


