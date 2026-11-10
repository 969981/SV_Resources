/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b9fc28; name: FUN_01b9fc28
 */


void FUN_01b9fc28(long *param_1,code *param_2,ulong param_3,uint param_4,long *param_5,
                 undefined8 *param_6)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_28;
  
  plVar2 = (long *)(*param_1 + ((long)param_3 >> 1));
  if ((param_3 & 1) != 0) {
    param_2 = *(code **)(param_2 + *plVar2);
  }
  local_28 = (long *)*param_5;
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[6];
    if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar6;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  local_60 = *param_6;
  uStack_58 = param_6[1];
  local_50 = param_6[2];
  local_48 = (long *)param_6[3];
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  (*param_2)(plVar2,param_4 & 1,&local_28,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


