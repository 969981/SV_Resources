/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a1bb4; name: FUN_028a1bb4
 */


void FUN_028a1bb4(long param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  
  param_2[2] = 0;
  puVar5 = PTR_DAT_047d9c80;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *param_2 = (long)(puVar5 + 0x10);
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[1] = 0;
  FUN_01060890(param_2 + 1,param_1 + 8);
  plVar6 = (long *)param_2[3];
  param_2[3] = 0;
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[6];
    psVar1 = (short *)(lVar7 + 0x1a);
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
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  lVar7 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_2[3] = lVar7;
  FUN_00ecc978(param_2 + 4,param_1 + 0x20);
  FUN_00eccc4c(param_2 + 6,param_1 + 0x30);
  *param_2 = (long)&PTR_FUN_045e5e20;
  lVar7 = *(long *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  param_2[8] = lVar7;
  return;
}


