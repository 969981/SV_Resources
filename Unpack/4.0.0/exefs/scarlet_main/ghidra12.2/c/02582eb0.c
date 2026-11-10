/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02582eb0; name: FUN_02582eb0
 */


void FUN_02582eb0(undefined1 *param_1,byte *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *local_18;
  
  if ((1 < *param_2) ||
     (puVar7 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047de080 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_047de080);
      puVar7 = PTR_DAT_047de088;
      if (iVar6 != 0) {
        *(undefined8 *)PTR_DAT_047de088 = 0;
        *(undefined1 **)(puVar7 + 8) = &DAT_cbf29ce484222645;
        *(undefined8 *)(puVar7 + 0x20) = 0;
        *(undefined8 *)(puVar7 + 0x28) = 0;
        *(undefined4 *)(puVar7 + 0x28) = 0;
        *(undefined1 **)(puVar7 + 0x10) = &DAT_03c886bc;
        *(undefined8 *)(puVar7 + 0x18) = 0;
        FUN_00100190(PTR_FUN_047dc9f0,puVar7,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047de080);
      }
    }
    else {
      puVar7 = PTR_DAT_047de088;
    }
  }
  FUN_01699cf4(&local_18,puVar7);
  plVar5 = local_18;
  if (local_18 == (long *)0x0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    lVar9 = local_18[6];
    if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar8;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    *param_1 = 1;
    *(long **)(param_1 + 8) = plVar5;
    if (local_18 != (long *)0x0) {
      lVar9 = local_18[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_18 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


