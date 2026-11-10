/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01126534; name: FUN_01126534
 */


void FUN_01126534(long *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  bool bVar15;
  short sVar16;
  long lVar17;
  undefined8 *local_48;
  undefined8 local_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar5 = PTR_DAT_047d3908;
  lVar17 = *(long *)(param_2 + 8);
  if (((*PTR_DAT_047d3908 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar7 = PTR_DAT_047d3918;
  puVar6 = PTR_DAT_047d3910;
  uVar9 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar9;
  FUN_00c44204(&local_48,uVar9,lVar17);
  if (local_48 == (undefined8 *)0x0) {
    return;
  }
  puVar11 = (undefined8 *)local_48[1];
  puVar12 = local_48;
  if (puVar11 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)PTR_DAT_047e30d0;
    if (((*PTR_DAT_047e30c8 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047e30c8), puVar12 = (undefined8 *)PTR_DAT_047e30d0,
       iVar8 != 0)) {
      uVar9 = FUN_00cf27f8();
      *(undefined8 *)PTR_DAT_047e30d0 = uVar9;
      __cxa_guard_release(PTR_DAT_047e30c8);
      puVar12 = (undefined8 *)PTR_DAT_047e30d0;
    }
    do {
      if (puVar11 == puVar12) {
        if (local_48 == (undefined8 *)0x0) {
          return;
        }
        if (*(short *)((long)local_48 + 0x1a) == 0) goto LAB_01126650;
        psVar1 = (short *)((long)local_48 + 0x1a);
        sVar16 = *(short *)((long)local_48 + 0x1a);
        goto LAB_011265f0;
      }
      puVar11 = (undefined8 *)*puVar11;
    } while (puVar11 != (undefined8 *)0x0);
    puVar12 = local_48;
    if (local_48 == (undefined8 *)0x0) {
      return;
    }
  }
  psVar1 = (short *)(puVar12 + 3);
  do {
    sVar16 = *psVar1;
    cVar4 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar15) {
      *psVar1 = sVar16 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar16 != 1) goto joined_r0x0112666c;
  piVar2 = (int *)((long)puVar12 + 0x1c);
  do {
    iVar8 = *piVar2;
    cVar4 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar15) {
      *piVar2 = -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar8 == -1) {
    return;
  }
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  lVar17 = *(long *)puVar6;
  *(long *)puVar7 = lVar17;
  local_28 = *puVar12;
  goto LAB_01126720;
  while (sVar16 = sVar3, sVar3 != 0) {
LAB_011265f0:
    sVar3 = *psVar1;
    if (sVar3 == sVar16) {
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar15) {
        *psVar1 = sVar16 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01126614;
      bVar15 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01126614:
      bVar15 = false;
    }
    if (bVar15) {
      lVar13 = local_48[2];
      if (lVar13 != 0) {
        plVar10 = (long *)*param_1;
        *param_1 = 0;
        if (plVar10 != (long *)0x0) {
          lVar14 = plVar10[6];
          psVar1 = (short *)(lVar14 + 0x1a);
          do {
            sVar16 = *psVar1;
            cVar4 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar15) {
              *psVar1 = sVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar16 == 1) {
            *(undefined8 *)(lVar14 + 0x10) = 0;
            (**(code **)(*plVar10 + 0x50))();
          }
          else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        *param_1 = lVar13 + -0x28;
        param_1[1] = lVar17;
      }
      break;
    }
  }
LAB_01126650:
  psVar1 = (short *)(local_48 + 3);
  do {
    sVar16 = *psVar1;
    cVar4 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar15) {
      *psVar1 = sVar16 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar16 != 1) {
joined_r0x0112666c:
    if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    return;
  }
  piVar2 = (int *)((long)local_48 + 0x1c);
  do {
    iVar8 = *piVar2;
    cVar4 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar15) {
      *piVar2 = -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar8 == -1) {
    return;
  }
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  lVar17 = *(long *)puVar6;
  *(long *)puVar7 = lVar17;
  local_28 = *local_48;
LAB_01126720:
  FUN_00c44438(lVar17 + 0x8040,&local_28);
  return;
}


