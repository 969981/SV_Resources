/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f68124; name: FUN_01f68124
 */


undefined8
FUN_01f68124(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  local_58 = 0;
  uStack_50 = 0;
  FUN_00d8e6c4(&local_58);
  local_48 = *(long *)(param_2 + 0x10);
  if (local_48 != 0) {
    lVar8 = *(long *)(local_48 + 0x30);
    if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar8 + 0x1a);
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
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar7;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  uVar5 = FUN_01f69e88(param_1,&local_58);
  FUN_00d8e444(&local_58);
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    FUN_01f6a590(param_1 + 0x130,*param_3);
    pcVar6 = *(code **)(param_1 + 0x38);
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      (*pcVar6)(param_1 + 0x50);
    }
    if ((code *)param_4[2] != (code *)0x0) {
      (*(code *)param_4[2])(param_4 + 4,param_1 + 0x50);
      uVar7 = param_4[3];
      *(undefined8 *)(param_1 + 0x38) = param_4[1];
      *(undefined8 *)(param_1 + 0x48) = uVar7;
      uVar7 = *param_4;
      *(undefined8 *)(param_1 + 0x40) = param_4[2];
      *(undefined8 *)(param_1 + 0x30) = uVar7;
    }
    pcVar6 = *(code **)(param_1 + 0xb8);
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      (*pcVar6)(param_1 + 0xd0);
    }
    if ((code *)param_5[2] != (code *)0x0) {
      (*(code *)param_5[2])(param_5 + 4,param_1 + 0xd0);
      uVar7 = param_5[3];
      *(undefined8 *)(param_1 + 0xb8) = param_5[1];
      *(undefined8 *)(param_1 + 200) = uVar7;
      uVar7 = *param_5;
      *(undefined8 *)(param_1 + 0xc0) = param_5[2];
      *(undefined8 *)(param_1 + 0xb0) = uVar7;
    }
    uVar7 = 1;
  }
  return uVar7;
}


