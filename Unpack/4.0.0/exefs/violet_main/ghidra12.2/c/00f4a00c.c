/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f4a00c; name: FUN_00f4a00c
 */


void FUN_00f4a00c(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  short sVar7;
  undefined1 auStack_e0 [24];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [64];
  
  switch(*(undefined4 *)(param_1 + 0xae4)) {
  case 0:
    *(undefined4 *)(param_1 + 0xae4) = 1;
    break;
  case 1:
    break;
  case 2:
    goto switchD_00f4a044_caseD_2;
  case 3:
    goto switchD_00f4a044_caseD_3;
  default:
    goto switchD_00f4a044_default;
  }
  if ((((*(long *)(param_1 + 0x9b8) != 0) &&
       ((*(byte *)(*(long *)(param_1 + 0x9b8) + 0x1e8) & 1) != 0)) &&
      (*(long *)(param_1 + 0x9f8) != 0)) &&
     ((*(byte *)(*(long *)(param_1 + 0x9f8) + 0x1e8) & 1) != 0)) {
    FUN_00fb9e50(&local_c8,param_1 + 0x9f0,param_1 + 0x9b0);
    *(undefined8 *)(param_1 + 0xa40) = local_b8;
    *(undefined8 *)(param_1 + 0xa38) = uStack_c0;
    *(undefined8 *)(param_1 + 0xa30) = local_c8;
    FUN_00fb9ce0(param_1 + 0xa48,auStack_b0);
    FUN_00fb9ce0(param_1 + 0xa88,auStack_70);
    FUN_00db239c(auStack_70);
    FUN_00db239c(auStack_b0);
    FUN_00fb4dd0(auStack_e0,param_1 + 0xa30);
    FUN_00f4cde4(param_1 + 0x80,auStack_e0,*(undefined8 *)(param_1 + 8));
    *(int *)(param_1 + 0xae4) = *(int *)(param_1 + 0xae4) + 1;
switchD_00f4a044_caseD_2:
    lVar6 = *(long *)(param_1 + 0x70);
    if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
      plVar5 = (long *)0x0;
    }
    else {
      psVar1 = (short *)(lVar6 + 0x1a);
      sVar7 = *(short *)(lVar6 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar7) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_00f4a210;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00f4a210:
          bVar4 = false;
        }
        if (bVar4) {
          plVar5 = (long *)0x0;
          if (*(long *)(lVar6 + 0x10) != 0) {
            plVar5 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
          }
          break;
        }
        plVar5 = (long *)0x0;
        sVar7 = sVar2;
      } while (sVar2 != 0);
    }
    if ((char)plVar5[0x2f] == '\0') {
      if (plVar5 != (long *)0x0) {
        lVar6 = plVar5[0x13];
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar7 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar7 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*plVar5 + 0x50))();
        }
        else if (sVar7 == 0) goto LAB_00f4a18c;
      }
    }
    else {
      *(int *)(param_1 + 0xae4) = *(int *)(param_1 + 0xae4) + 1;
      if (plVar5 != (long *)0x0) {
        lVar6 = plVar5[0x13];
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar7 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar7 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*plVar5 + 0x50))();
        }
        else if (sVar7 == 0) {
LAB_00f4a18c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
switchD_00f4a044_caseD_3:
      *(undefined4 *)(param_1 + 0xae0) = 1;
    }
  }
switchD_00f4a044_default:
  return;
}


