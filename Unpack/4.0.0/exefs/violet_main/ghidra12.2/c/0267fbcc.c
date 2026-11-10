/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0267fbcc; name: FUN_0267fbcc
 */


void FUN_0267fbcc(undefined1 *param_1,undefined1 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  puVar6 = auStack_50;
  uVar5 = FUN_026704d4();
  if ((uVar5 & 1) != 0) {
switchD_0267fc2c_default:
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    return;
  }
  switch(*param_2) {
  case 0:
    lVar8 = *(long *)(param_2 + 8);
    (*(code *)**(undefined8 **)(lVar8 + 0x28))();
    uVar5 = FUN_026805cc();
    if ((uVar5 & 1) == 0) {
      lVar8 = 0;
    }
    *param_1 = 0;
    *(long *)(param_1 + 8) = lVar8;
    return;
  case 1:
    lVar8 = *(long *)(param_2 + 8);
    (*(code *)**(undefined8 **)(lVar8 + 0x28))();
    uVar5 = FUN_026805cc();
    if ((uVar5 & 1) == 0) {
      lVar8 = 0;
    }
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar8 + 0x30);
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
        uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar7;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    *param_1 = 1;
    *(long *)(param_1 + 8) = lVar8;
    return;
  case 2:
    FUN_0268065c(auStack_40,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 2;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_026806ac(param_1 + 8,auStack_40);
    puVar6 = auStack_40;
    break;
  case 3:
    FUN_0268065c(auStack_50,param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_026806ac(param_1 + 8,auStack_50);
    break;
  default:
    goto switchD_0267fc2c_default;
  }
  FUN_02673bc4(puVar6);
  return;
}


