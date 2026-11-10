/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e87d2c; name: FUN_00e87d2c
 */


void FUN_00e87d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *local_38 [2];
  long *local_28;
  
  if (((*PTR_DAT_047d8c40 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8c40), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e90,PTR_DAT_047d8c48,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c40);
  }
  uVar7 = *(undefined8 *)PTR_DAT_047d8c48;
  *(undefined8 *)PTR_DAT_047d8c50 = uVar7;
  FUN_029bc3b4(&local_28,uVar7,param_2,param_3);
  plVar1 = (long *)(param_1 + 8);
  FUN_029bd0c4(plVar1,&local_28);
  if (local_28 != (long *)0x0) {
    lVar8 = local_28[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_00e87e68;
  }
  if (*plVar1 != 0) {
    FUN_00ca29c4(local_38,plVar1);
    FUN_00cfe35c(local_38[0],param_1 + 0x18,1);
    FUN_00d1f59c(local_38[0]);
    if (local_38[0] != (long *)0x0) {
      lVar8 = local_38[0][6];
      psVar2 = (short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_38[0] + 0x50))();
      }
      else if (sVar3 == 0) {
LAB_00e87e68:
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


