/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f853f8; name: FUN_01f853f8
 */


void FUN_01f853f8(float param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *local_38;
  
  uVar5 = (**(code **)(*param_2 + 0x18))();
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(char *)((long)param_2 + 0x449) != '\0') {
    return;
  }
  FUN_014f5684(&local_38,param_2);
  if (((local_38 != (long *)0x0) && (uVar5 = FUN_014f5678(local_38), (uVar5 & 1) == 0)) &&
     (*(char *)(local_38[0xb] + 0x31) == '\0')) goto LAB_01f85498;
  lVar7 = param_2[0x73];
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x168) == '\0') {
      if (*(int *)(lVar7 + 0x160) == 1) {
        param_1 = *(float *)(lVar7 + 0x164) + param_1;
        *(float *)(lVar7 + 0x164) = param_1;
        if (*(float *)(lVar7 + 0x24) <= param_1) {
LAB_01f85510:
          *(undefined1 *)(lVar7 + 0x168) = 1;
        }
      }
      else {
        if ((*(int *)(lVar7 + 0x160) != 0) ||
           (plVar6 = *(long **)(lVar7 + 8), plVar6 == (long *)0x0)) goto LAB_01f85510;
        uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6);
        if (((uVar5 & 1) != 0) && (*(char *)((long)plVar6 + 0x449) == '\0')) {
          FUN_01f85200(plVar6 + 0x30,lVar7 + 0x10);
          *(undefined1 *)(plVar6 + 0x89) = 1;
        }
        *(int *)(lVar7 + 0x160) = *(int *)(lVar7 + 0x160) + 1;
      }
    }
    else {
      FUN_0145633c(param_2);
    }
  }
  (**(code **)(*param_2 + 0x50))();
  if (local_38 == (long *)0x0) {
    return;
  }
LAB_01f85498:
  lVar7 = local_38[6];
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
    (**(code **)(*local_38 + 0x50))(local_38);
  }
  else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


