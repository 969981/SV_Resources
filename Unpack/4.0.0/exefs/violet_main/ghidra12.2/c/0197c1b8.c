/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0197c1b8; name: FUN_0197c1b8
 */


void FUN_0197c1b8(void)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long local_98;
  undefined *puStack_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  char *pcStack_40;
  undefined8 local_38;
  long *local_30;
  long local_28;
  
  if (DAT_04835bf8 == '\0') {
    puVar7 = (undefined8 *)FUN_0166cefc();
    local_88 = 0x1f;
    local_80 = (long *)0x0;
    local_48 = -0x71f42ad07defce5f;
    pcStack_40 = "Capture";
    local_98 = 0x57a6ae8fb57f28b1;
    puStack_90 = PTR_s_PfxTonemap_047d8e50;
    local_38 = 7;
    local_30 = (long *)0x0;
    FUN_00dfeda8(&local_28,*puVar7,&local_98,&local_48,0);
    plVar8 = DAT_04835bc8;
    DAT_04835bc8 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 5;
      do {
        iVar5 = (int)*plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 != 0) goto LAB_0197c260;
LAB_0197c478:
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  else {
    puVar7 = (undefined8 *)FUN_0166cefc();
    local_88 = 0x1f;
    local_80 = (long *)0x0;
    local_48 = -0x71f42ad07defce5f;
    pcStack_40 = "Capture";
    local_98 = 0x121d7307bd58c49b;
    puStack_90 = PTR_DAT_047d8e40;
    local_38 = 7;
    local_30 = (long *)0x0;
    FUN_00dfeda8(&local_28,*puVar7,&local_98,&local_48,0);
    plVar8 = DAT_04835bc8;
    DAT_04835bc8 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 5;
      do {
        iVar5 = (int)*plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) goto LAB_0197c478;
LAB_0197c260:
      if (iVar5 == 0) goto LAB_0197c4d8;
    }
  }
  DAT_04835bc8 = (long *)local_28;
  local_28 = 0;
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  *(undefined4 *)((long)DAT_04835bc8 + 0xf0) = 0x7fffffff;
  local_78 = 0x100000000001;
  uStack_70 = 2;
  local_58 = 5;
  uStack_50 = 0x10;
  local_98 = (long)DAT_04835be0;
  puStack_90 = (undefined *)(long)DAT_04835be4;
  local_68 = 0x200000025;
  uStack_60 = 0x400000003;
  local_80 = (long *)(local_98 << 2);
  local_88 = 1;
  plVar8 = (long *)FUN_00e31554();
  local_48 = *plVar8;
  plVar8 = (long *)FUN_00cf3764(&local_28,*(undefined8 *)(local_48 + 8),&local_48);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_0117e220(plVar8,&local_98,1,1,0);
  plVar1 = DAT_04835bd0;
  DAT_04835bd0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 5;
    do {
      lVar6 = *plVar2;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_0197c4d8;
  }
  DAT_04835bd0 = plVar8;
  puVar7 = (undefined8 *)FUN_00f351bc();
  puVar7 = (undefined8 *)FUN_00e514cc(*puVar7);
  local_48 = -0x24ad04fe93314ae;
  pcStack_40 = PTR_s_RT_MainColorLDR_047d8e48;
  local_38 = 0x1f;
  local_30 = (long *)0x0;
  FUN_00fff044(&local_28,*puVar7,&local_48);
  plVar8 = DAT_04835bd8;
  DAT_04835bd8 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar6 = *plVar1;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
LAB_0197c4d8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  DAT_04835bd8 = (long *)local_28;
  local_28 = 0;
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  return;
}


