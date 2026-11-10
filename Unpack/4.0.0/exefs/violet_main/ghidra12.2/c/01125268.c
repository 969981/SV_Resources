/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01125268; name: FUN_01125268
 */


void FUN_01125268(long *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  short sVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *local_58;
  undefined8 local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar5 = PTR_DAT_047d3908;
  lVar16 = *(long *)(param_2 + 8);
  if (((*PTR_DAT_047d3908 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar7 = PTR_DAT_047d3918;
  puVar6 = PTR_DAT_047d3910;
  uVar10 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar10;
  FUN_00c44204(&local_58,uVar10,lVar16);
  puVar8 = PTR_DAT_047e3038;
  if (local_58 == (undefined8 *)0x0) {
    return;
  }
  puVar17 = (undefined8 *)local_58[1];
  if (puVar17 != (undefined8 *)0x0) {
    if (((*PTR_DAT_047e3030 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047e3030), iVar9 != 0)) {
      uVar10 = FUN_00cf27f8();
      *(undefined8 *)puVar8 = uVar10;
      __cxa_guard_release(PTR_DAT_047e3030);
    }
    do {
      if (puVar17 == (undefined8 *)puVar8) {
        if (local_58 == (undefined8 *)0x0) {
          return;
        }
        if (*(short *)((long)local_58 + 0x1a) == 0) goto LAB_01125360;
        psVar1 = (short *)((long)local_58 + 0x1a);
        sVar15 = *(short *)((long)local_58 + 0x1a);
        goto LAB_0112532c;
      }
      puVar17 = (undefined8 *)*puVar17;
    } while (puVar17 != (undefined8 *)0x0);
    if (local_58 == (undefined8 *)0x0) {
      return;
    }
  }
  psVar1 = (short *)(local_58 + 3);
  do {
    sVar15 = *psVar1;
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar14) {
      *psVar1 = sVar15 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar15 != 1) {
    if (sVar15 != 0) {
      return;
    }
    goto LAB_01125380;
  }
  piVar2 = (int *)((long)local_58 + 0x1c);
  do {
    iVar9 = *piVar2;
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar14) {
      *piVar2 = -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    puVar17 = local_58;
  } while (cVar4 != '\0');
  goto LAB_01125488;
  while (sVar15 = sVar3, sVar3 != 0) {
LAB_0112532c:
    sVar3 = *psVar1;
    if (sVar3 == sVar15) {
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar14) {
        *psVar1 = sVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01125350;
      bVar14 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01125350:
      bVar14 = false;
    }
    if (bVar14) {
      lVar13 = local_58[2];
      if (lVar13 != 0) {
        plVar11 = (long *)*param_1;
        *param_1 = 0;
        if (plVar11 != (long *)0x0) {
          lVar12 = plVar11[6];
          psVar1 = (short *)(lVar12 + 0x1a);
          do {
            sVar15 = *psVar1;
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar14) {
              *psVar1 = sVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar15 == 1) {
            *(undefined8 *)(lVar12 + 0x10) = 0;
            (**(code **)(*plVar11 + 0x50))();
          }
          else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        *param_1 = lVar13 + -0x28;
        param_1[1] = lVar16;
      }
      break;
    }
  }
LAB_01125360:
  psVar1 = (short *)(local_58 + 3);
  do {
    sVar15 = *psVar1;
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar14) {
      *psVar1 = sVar15 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar15 != 1) {
    if (sVar15 != 0) {
      return;
    }
LAB_01125380:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  piVar2 = (int *)((long)local_58 + 0x1c);
  do {
    iVar9 = *piVar2;
    cVar4 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar14) {
      *piVar2 = -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    puVar17 = local_58;
  } while (cVar4 != '\0');
LAB_01125488:
  if (iVar9 != -1) {
    if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    lVar16 = *(long *)puVar6;
    *(long *)puVar7 = lVar16;
    local_38 = *puVar17;
    FUN_00c44438(lVar16 + 0x8040,&local_38);
  }
  return;
}


