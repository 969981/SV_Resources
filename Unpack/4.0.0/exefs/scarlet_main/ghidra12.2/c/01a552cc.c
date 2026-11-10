/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a552cc; name: FUN_01a552cc
 */


void FUN_01a552cc(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long local_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  long lStack_68;
  long local_60;
  undefined1 auStack_58 [24];
  
  puVar8 = (undefined8 *)PTR_DAT_047d38f8;
  lVar7 = *(long *)PTR_DAT_047d38f8;
  lVar4 = nn::os::GetCurrentThread();
  if (lVar4 == lVar7) {
    bVar2 = true;
LAB_01a55308:
    puVar3 = PTR_DAT_047d3920;
    FUN_01a554b0(&local_78,*(undefined8 *)(*(long *)PTR_DAT_047d3920 + 8),param_2);
    if (local_78 == 0) {
      if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
        (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
      }
      FUN_01a554b0(&local_98,*(undefined8 *)(*(long *)puVar3 + 8),param_2);
      FUN_01aa97c0(&local_78,&local_98);
      lVar4 = local_98;
      local_98 = 0;
      if (lVar4 != 0) {
        FUN_00c4e5a0(auStack_58,0);
        uVar6 = FUN_00c4e564(local_90);
        if ((uVar6 & 1) == 0) {
          (**(code **)(*local_90 + 0x18))(local_90,lVar4,uStack_88,local_80);
        }
        else {
          FUN_00c48fe8(local_90,lVar4,uStack_88,local_80);
        }
        FUN_00c4e70c(auStack_58);
        puVar8 = (undefined8 *)PTR_DAT_047d38f8;
      }
      if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("result","CreateImpl",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\haxe_lua/memory_manager.h"
                   ,0x69,"GlueCode MemoryManager Allocate failed.");
      }
    }
    param_1[2] = lStack_68;
    param_1[3] = local_60;
    *param_1 = local_78;
    param_1[1] = local_70;
    if (!bVar2) {
      *puVar8 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar8 + 1));
    }
    return;
  }
  uVar5 = nn::os::GetCurrentThread();
  while (*puVar8 == 0) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar2) {
      *puVar8 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') goto LAB_01a553e4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)((long)puVar8 + 8));
  do {
    if (*puVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)((long)puVar8 + 8));
        while (*puVar8 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar8,0x10);
          if (bVar2) {
            *puVar8 = uVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01a553e4;
        }
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar8,0x10);
    if (bVar2) {
      *puVar8 = uVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01a553e4:
  bVar2 = false;
  goto LAB_01a55308;
}


