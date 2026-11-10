/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01aae100; name: FUN_01aae100
 */


undefined8 FUN_01aae100(undefined8 param_1)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  code *pcVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  char *pcVar12;
  char local_60 [8];
  long *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar10 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar10 == (undefined8 *)0x0) ||
     (pcVar12 = (char *)*puVar10, (char *)*puVar10 == (char *)0x0)) {
    if ((*PTR_DAT_047d38e8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_047d38e8);
      pcVar12 = PTR_DAT_047d38f0;
      if (iVar9 != 0) {
        *PTR_DAT_047d38f0 = 0;
        *(undefined8 *)(pcVar12 + 8) = 0;
        FUN_00100190(PTR_FUN_047d44a0,pcVar12,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d38e8);
      }
    }
    else {
      pcVar12 = PTR_DAT_047d38f0;
    }
  }
  if (((DAT_04851628 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04851628), iVar9 != 0)) {
    DAT_048520d8 = '\x01';
    __cxa_guard_release(&DAT_04851628);
  }
  cVar6 = *pcVar12;
  pcVar4 = (code *)PTR_FUN_047df9c8;
  if (DAT_048520d8 == '\0') {
    pcVar4 = (code *)0x0;
  }
  if (cVar6 == '\x02') {
    if ((*(long *)(pcVar12 + 8) == 0) ||
       (lVar11 = *(long *)(*(long *)(pcVar12 + 8) + 0x10), lVar11 == 0)) {
LAB_01aae3d0:
      local_48 = (undefined8 *)0x0;
      uStack_40 = 0;
    }
    else {
      lVar11 = lVar11 + -0x28;
LAB_01aae170:
      (*pcVar4)(&local_48,lVar11);
    }
  }
  else {
    if (cVar6 != '\x03') {
      if (((cVar6 != '\x01') && (cVar6 != '\0')) || (lVar11 = *(long *)(pcVar12 + 8), lVar11 == 0))
      goto LAB_01aae3d0;
      goto LAB_01aae170;
    }
    FUN_01aae55c(&local_48,pcVar12 + 8,pcVar4,0);
  }
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_00dddfdc(&local_38,&local_48);
  local_60[0] = '\x02';
  local_58 = (long *)0x0;
  uStack_50 = 0;
  FUN_00dbd160(&local_58,&local_38);
  puVar10 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_38 + 3);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar3 = (int *)((long)local_38 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_28 = *puVar10;
        FUN_00c44438(lVar11 + 0x8040,&local_28);
      }
    }
    else if (sVar5 == 0) goto LAB_01aae26c;
  }
  puVar10 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_48 + 3);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar3 = (int *)((long)local_48 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_38 = (undefined8 *)*puVar10;
        FUN_00c44438(lVar11 + 0x8040,&local_38);
      }
    }
    else if (sVar5 == 0) goto LAB_01aae26c;
  }
  FUN_00ddd9f0(param_1,local_60);
  plVar8 = local_58;
  if (local_60[0] == '\x02') {
    if (local_58 != (long *)0x0) {
      plVar2 = local_58 + 3;
      do {
        sVar5 = (short)*plVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(short *)plVar2 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar3 = (int *)((long)local_58 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_38 = (undefined8 *)*plVar8;
          FUN_00c44438(lVar11 + 0x8040,&local_38);
        }
      }
      else if (sVar5 == 0) {
LAB_01aae26c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  else if (local_60[0] == '\x03') {
    FUN_00d9128c(&local_58);
  }
  else if ((local_60[0] == '\x01') && (local_58 != (long *)0x0)) {
    (**(code **)(*local_58 + 0x60))();
  }
  return 1;
}


