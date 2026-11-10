/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029ae9b4; name: FUN_029ae9b4
 */


void FUN_029ae9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  long *local_50;
  undefined4 local_48;
  long *local_28;
  
  plVar6 = (long *)FUN_00f351bc();
  lVar8 = *plVar6;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x20) + 0x10))();
  }
  FUN_00fff1a4(&local_28,lVar8,param_1);
  uVar5 = FUN_00ec32b4(local_28,param_2,param_3);
  FUN_00ec2b10(local_28,uVar5,0x1f,param_4);
  FUN_029af694(local_28,1,0,0);
  FUN_029af6b4(local_28,0,0);
  FUN_029af6c8(local_28,1,0);
  FUN_029af6e0(local_28,0,0);
  uVar7 = FUN_029af6f8(local_28,param_2);
  local_48 = 0;
  local_88 = 0xf38dd10176781f71;
  pcStack_80 = "EnableTexture";
  local_78 = 0xd;
  local_70 = (long *)0x0;
  local_68 = 0xf644afd9efa28ae5;
  puStack_60 = &DAT_03c7144e;
  local_58 = 4;
  local_50 = (long *)0x0;
  FUN_00ec0dec(local_28,uVar7 >> 0x20,&local_88);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    plVar6 = local_28 + 5;
    do {
      lVar4 = *plVar6;
      iVar3 = (int)lVar4 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *(int *)plVar6 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x20) + 0x18))((long *)(lVar8 + 0x20));
  }
  return;
}


