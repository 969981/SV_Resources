/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01531c04; name: FUN_01531c04
 */


void FUN_01531c04(long *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  plVar9 = (long *)FUN_00c8c7b4();
  if (((*PTR_DAT_047d2160 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_047d2160), puVar6 = PTR_DAT_047d20a0, iVar8 != 0)) {
    if (((*PTR_DAT_047d2098 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar8 != 0)) {
      *(undefined8 *)puVar6 = 0;
      __cxa_guard_release(PTR_DAT_047d2098);
    }
    *(undefined **)PTR_DAT_047d2168 = puVar6;
    __cxa_guard_release(PTR_DAT_047d2160);
  }
  if (plVar9 != (long *)0x0) {
    for (plVar10 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9); plVar10 != (long *)0x0;
        plVar10 = (long *)*plVar10) {
      if (plVar10 == (long *)PTR_DAT_047d2168) goto LAB_01531c6c;
    }
    plVar9 = (long *)0x0;
  }
LAB_01531c6c:
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_00c43ef0(&local_48,param_2 + 0x30);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  lVar11 = 0;
  if (param_2 != 0) {
    lVar11 = param_2 + 0x28;
  }
  if (local_48[2] == lVar11) {
    FUN_0104dbac(&local_58,&local_48);
  }
  puVar7 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_48 + 3);
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
      piVar2 = (int *)((long)local_48 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_38 = *puVar7;
        FUN_00c44438(lVar11 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_01531d28;
  }
  *param_1 = (long)plVar9;
  param_1[2] = 0;
  param_1[1] = 0;
  FUN_0104d888(param_1 + 1,&local_58);
  puVar7 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58 + 3);
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
      piVar2 = (int *)((long)local_58 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = (undefined8 *)*puVar7;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar3 == 0) {
LAB_01531d28:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


