/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f32348; name: FUN_00f32348
 */


void FUN_00f32348(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  short sVar8;
  long lVar9;
  undefined8 *puVar10;
  
  if (param_1 == 0) {
    return;
  }
  sVar8 = *(short *)(param_1 + 0x1a);
  if (sVar8 == 0) {
    return;
  }
  puVar10 = *(undefined8 **)(param_1 + 8);
  if (((*PTR_DAT_047d6520 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar5 != 0))
  {
    uVar6 = FUN_0151c130();
    *(undefined8 *)PTR_DAT_047d6528 = uVar6;
    __cxa_guard_release(PTR_DAT_047d6520);
  }
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
  psVar1 = (short *)(param_1 + 0x1a);
  while (puVar10 != (undefined8 *)PTR_DAT_047d6528) {
    puVar10 = (undefined8 *)*puVar10;
    if (puVar10 == (undefined8 *)0x0) {
      return;
    }
  }
  do {
    sVar2 = *psVar1;
    if (sVar2 == sVar8) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_00f323dc;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00f323dc:
      bVar4 = false;
    }
    if (bVar4) {
      lVar9 = *(long *)(param_1 + 0x10);
      if (lVar9 == 0) {
        return;
      }
      plVar7 = (long *)(lVar9 + -0x28);
      FUN_00f321ec(plVar7,1);
      lVar9 = *(long *)(lVar9 + 8);
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar8 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar8 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00f32470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x50))(plVar7);
        return;
      }
      if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      return;
    }
    sVar8 = sVar2;
    if (sVar2 == 0) {
      return;
    }
  } while( true );
}


