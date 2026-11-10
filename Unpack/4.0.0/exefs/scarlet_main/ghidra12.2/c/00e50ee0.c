/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e50ee0; name: FUN_00e50ee0
 */


void FUN_00e50ee0(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  short sVar9;
  undefined8 *puVar10;
  undefined8 local_40;
  long *local_38;
  long *local_18;
  
  if (*param_1 == 0) {
    return;
  }
  if (*(short *)(*param_1 + 0x1a) == 0) {
    return;
  }
  lVar7 = *param_1;
  if ((lVar7 != 0) && (sVar9 = *(short *)(lVar7 + 0x1a), sVar9 != 0)) {
    puVar10 = *(undefined8 **)(lVar7 + 8);
    if ((*PTR_DAT_047d39b0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_047d39b0);
      puVar5 = PTR_DAT_047d39c8;
      if (iVar6 != 0) {
        if (((*PTR_DAT_047d39c0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar6 != 0)) {
          *(undefined8 *)puVar5 = 0;
          __cxa_guard_release(PTR_DAT_047d39c0);
        }
        *(undefined **)PTR_DAT_047d39b8 = puVar5;
        __cxa_guard_release(PTR_DAT_047d39b0);
      }
    }
    if (puVar10 != (undefined8 *)0x0) {
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        if (puVar10 == (undefined8 *)PTR_DAT_047d39b8) goto LAB_00e5101c;
        puVar10 = (undefined8 *)*puVar10;
        plVar8 = (long *)0x0;
      } while (puVar10 != (undefined8 *)0x0);
      goto LAB_00e50f18;
    }
  }
  plVar8 = (long *)0x0;
  goto LAB_00e50f18;
  while( true ) {
    plVar8 = (long *)0x0;
    sVar9 = sVar2;
    if (sVar2 == 0) break;
LAB_00e5101c:
    sVar2 = *psVar1;
    if (sVar2 == sVar9) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_00e51040;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00e51040:
      bVar4 = false;
    }
    if (bVar4) {
      plVar8 = (long *)0x0;
      if (*(long *)(lVar7 + 0x10) != 0) {
        plVar8 = (long *)(*(long *)(lVar7 + 0x10) + -8);
      }
      break;
    }
  }
LAB_00e50f18:
  local_40 = *param_2;
  local_38 = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  FUN_029efa74(&local_18,&local_40);
  if (local_18 != (long *)0x0) {
    lVar7 = local_18[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar9 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_18 + 0x50))();
    }
    else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  return;
}


