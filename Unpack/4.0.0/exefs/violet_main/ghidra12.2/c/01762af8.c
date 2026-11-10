/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01762af8; name: FUN_01762af8
 */


void FUN_01762af8(long *param_1,char *param_2,undefined8 param_3)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  long *local_38;
  long *local_18;
  
  pcVar9 = (code *)*param_1;
  uVar4 = param_1[1];
  FUN_00e43628(&local_38,param_3);
  plVar7 = local_38;
  if (*param_2 == '\x01') {
    if (*(long *)(param_2 + 8) != 0) {
      plVar2 = (long *)(*(long *)(param_2 + 8) + ((long)uVar4 >> 1));
      if ((uVar4 & 1) != 0) {
        pcVar9 = *(code **)(pcVar9 + *plVar2);
      }
      local_38 = (long *)0x0;
      local_18 = plVar7;
      (*pcVar9)(plVar2,&local_18);
      if (local_18 != (long *)0x0) {
        lVar8 = local_18[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar3 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*local_18 + 0x50))();
        }
        else if (sVar3 == 0) goto LAB_01762bc8;
      }
    }
  }
  else if (*param_2 == '\0') {
    FUN_01762c34(*(undefined8 *)(param_2 + 8),pcVar9,uVar4,&local_38);
  }
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_01762bc8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


