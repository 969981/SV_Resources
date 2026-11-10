/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01116ea8; name: FUN_01116ea8
 */


void FUN_01116ea8(long *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  bool bVar15;
  short sVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *local_60;
  long local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar5 = PTR_DAT_047d3908;
  lVar17 = *(long *)(param_2 + 8);
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  if (((*PTR_DAT_047d3908 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar7 = PTR_DAT_047d3918;
  puVar6 = PTR_DAT_047d3910;
  uVar10 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar10;
  FUN_00c44204(&local_50,uVar10,lVar17);
  if ((local_50 != (undefined8 *)0x0) &&
     (puVar18 = (undefined8 *)local_50[1], puVar18 != (undefined8 *)0x0)) {
    puVar12 = (undefined8 *)PTR_DAT_047e0e00;
    if (((*PTR_DAT_047e0df8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047e0df8), puVar12 = (undefined8 *)PTR_DAT_047e0e00,
       iVar9 != 0)) {
      uVar10 = FUN_02173f9c();
      *(undefined8 *)PTR_DAT_047e0e00 = uVar10;
      __cxa_guard_release(PTR_DAT_047e0df8);
      puVar12 = (undefined8 *)PTR_DAT_047e0e00;
    }
LAB_01116f30:
    puVar8 = local_60;
    if (puVar18 != puVar12) goto LAB_011170f4;
    local_60 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar8 + 3);
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
        piVar2 = (int *)((long)puVar8 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar4 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar15) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 != -1) {
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)puVar6;
          *(long *)puVar7 = lVar14;
          local_48 = *puVar8;
          FUN_00c44438(lVar14 + 0x8040,&local_48);
        }
      }
      else if (sVar16 == 0) goto LAB_01116fc8;
    }
    local_60 = local_50;
    local_50 = (undefined8 *)0x0;
    local_58 = lVar17;
    goto LAB_01116f5c;
  }
LAB_011170fc:
  FUN_01118e4c(&local_60);
LAB_01116f5c:
  puVar18 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_50 + 3);
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
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar14 = *(long *)puVar6;
        *(long *)puVar7 = lVar14;
        local_48 = *puVar18;
        FUN_00c44438(lVar14 + 0x8040,&local_48);
      }
    }
    else if (sVar16 == 0) goto LAB_01116fc8;
  }
  if (local_60 != (undefined8 *)0x0) {
    if (*(short *)((long)local_60 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_60 + 0x1a);
      sVar16 = *(short *)((long)local_60 + 0x1a);
LAB_01117094:
      sVar3 = *psVar1;
      if (sVar3 == sVar16) {
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_011170b8;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_011170b8:
        bVar15 = false;
      }
      if (!bVar15) goto code_r0x011170c0;
      lVar14 = local_60[2];
      if (lVar14 == 0) goto LAB_011170cc;
      plVar11 = (long *)*param_1;
      *param_1 = 0;
      if (plVar11 != (long *)0x0) {
        lVar13 = plVar11[6];
        psVar1 = (short *)(lVar13 + 0x1a);
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
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))();
        }
        else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      *param_1 = lVar14 + -0x28;
      param_1[1] = lVar17;
LAB_011170c8:
      if (local_60 == (undefined8 *)0x0) {
        return;
      }
    }
LAB_011170cc:
    puVar18 = local_60;
    psVar1 = (short *)(local_60 + 3);
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
      piVar2 = (int *)((long)local_60 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)puVar6;
        *(long *)puVar7 = lVar17;
        local_48 = *puVar18;
        FUN_00c44438(lVar17 + 0x8040,&local_48);
      }
    }
    else if (sVar16 == 0) {
LAB_01116fc8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_011170f4:
  puVar18 = (undefined8 *)*puVar18;
  if (puVar18 == (undefined8 *)0x0) goto LAB_011170fc;
  goto LAB_01116f30;
code_r0x011170c0:
  sVar16 = sVar3;
  if (sVar3 == 0) goto LAB_011170c8;
  goto LAB_01117094;
}


