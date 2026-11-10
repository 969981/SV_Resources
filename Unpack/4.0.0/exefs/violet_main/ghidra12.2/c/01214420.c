/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01214420; name: FUN_01214420
 */


void FUN_01214420(long *param_1,long param_2)

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
  undefined8 *puVar14;
  long lVar15;
  bool bVar16;
  short sVar17;
  long lVar18;
  undefined8 *local_58;
  long local_50;
  undefined8 *local_48;
  undefined8 local_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar5 = PTR_DAT_047d3908;
  lVar18 = *(long *)(param_2 + 8);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  if (((*PTR_DAT_047d3908 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar7 = PTR_DAT_047d3918;
  puVar6 = PTR_DAT_047d3910;
  uVar10 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar10;
  FUN_00c44204(&local_48,uVar10,lVar18);
  if ((local_48 != (undefined8 *)0x0) &&
     (puVar12 = (undefined8 *)local_48[1], puVar12 != (undefined8 *)0x0)) {
    puVar14 = (undefined8 *)PTR_DAT_047dd3a0;
    if (((*PTR_DAT_047dd398 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047dd398), puVar14 = (undefined8 *)PTR_DAT_047dd3a0,
       iVar9 != 0)) {
      uVar10 = FUN_02173f9c();
      *(undefined8 *)PTR_DAT_047dd3a0 = uVar10;
      __cxa_guard_release(PTR_DAT_047dd398);
      puVar14 = (undefined8 *)PTR_DAT_047dd3a0;
    }
LAB_012144a8:
    puVar8 = local_58;
    if (puVar12 != puVar14) goto LAB_012145f8;
    local_58 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar8 + 3);
      do {
        sVar17 = *psVar1;
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar17 == 1) {
        piVar2 = (int *)((long)puVar8 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar16) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 != -1) {
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)puVar6;
          *(long *)puVar7 = lVar15;
          local_28 = *puVar8;
          FUN_00c44438(lVar15 + 0x8040,&local_28);
        }
      }
      else if (sVar17 == 0) goto LAB_01214540;
    }
    local_58 = local_48;
    local_48 = (undefined8 *)0x0;
    local_50 = lVar18;
    goto LAB_012144d4;
  }
LAB_01214600:
  FUN_01219a8c(&local_58);
LAB_012144d4:
  puVar12 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_48 + 3);
    do {
      sVar17 = *psVar1;
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar17 == 1) {
      piVar2 = (int *)((long)local_48 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar16) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)puVar6;
        *(long *)puVar7 = lVar15;
        local_28 = *puVar12;
        FUN_00c44438(lVar15 + 0x8040,&local_28);
      }
    }
    else if (sVar17 == 0) goto LAB_01214540;
  }
  if (local_58 != (undefined8 *)0x0) {
    if (*(short *)((long)local_58 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_58 + 0x1a);
      sVar17 = *(short *)((long)local_58 + 0x1a);
LAB_0121461c:
      sVar3 = *psVar1;
      if (sVar3 == sVar17) {
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar17 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01214640;
        bVar16 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01214640:
        bVar16 = false;
      }
      if (!bVar16) goto code_r0x01214648;
      lVar15 = local_58[2];
      if (lVar15 == 0) goto LAB_01214684;
      plVar11 = (long *)*param_1;
      *param_1 = 0;
      if (plVar11 != (long *)0x0) {
        lVar13 = plVar11[6];
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar17 = *psVar1;
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar16) {
            *psVar1 = sVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar17 == 1) {
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))();
        }
        else if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      *param_1 = lVar15 + -0x28;
      param_1[1] = lVar18;
LAB_01214680:
      if (local_58 == (undefined8 *)0x0) {
        return;
      }
    }
LAB_01214684:
    puVar12 = local_58;
    psVar1 = (short *)(local_58 + 3);
    do {
      sVar17 = *psVar1;
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar17 == 1) {
      piVar2 = (int *)((long)local_58 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar16) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)puVar6;
        *(long *)puVar7 = lVar18;
        local_28 = *puVar12;
        FUN_00c44438(lVar18 + 0x8040,&local_28);
      }
    }
    else if (sVar17 == 0) {
LAB_01214540:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_012145f8:
  puVar12 = (undefined8 *)*puVar12;
  if (puVar12 == (undefined8 *)0x0) goto LAB_01214600;
  goto LAB_012144a8;
code_r0x01214648:
  sVar17 = sVar3;
  if (sVar3 == 0) goto LAB_01214680;
  goto LAB_0121461c;
}


