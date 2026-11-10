/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d8ec24; name: FUN_00d8ec24
 */


void FUN_00d8ec24(undefined8 *param_1)

{
  long lVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  
  if (((DAT_048398e8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_048398e8), iVar6 != 0)) {
    FUN_00100190(&LAB_00b1cbdc,&DAT_048398d8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048398e8);
  }
  lVar8 = DAT_048398d8;
  DAT_048398d0 = DAT_048398d8;
  if (DAT_048398d8 == 0) {
    FUN_015c486c(param_1);
    return;
  }
  lVar1 = DAT_048398d8 + 0x38;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00d8e6c4(param_1,lVar1);
  lVar8 = *(long *)(lVar8 + 0x48);
  param_1[2] = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x30);
    if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar7;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  return;
}


