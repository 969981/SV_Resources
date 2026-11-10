/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015fc5ac; name: FUN_015fc5ac
 */


void FUN_015fc5ac(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  code *pcVar9;
  float fVar10;
  undefined1 auStack_88 [24];
  long *local_70;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    lVar8 = *param_2;
    if (lVar8 == -0x453f859504ee401d) {
      if (((*(long *)(param_1 + 8) != 0) &&
          (lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar8 != 0)) &&
         (plVar6 = (long *)FUN_01026aa0(lVar8 + 0xe0,&local_68), plVar6 != (long *)0x0)) {
        cVar4 = FUN_015fc980(*param_3);
        FUN_015f9df0(&local_48,*param_3);
        local_68 = 0x819cd1b07c6e39f9;
        pcStack_60 = "PL_BAG_ONOFF";
        local_58 = 0xc;
        local_50 = (long *)0x0;
        (**(code **)(*plVar6 + 0x138))((float)(int)cVar4,plVar6,&local_68,0);
        if (local_50 != (long *)0x0) {
          (**(code **)(*local_50 + 0x20))();
        }
        local_68 = 0xd097e1268fc30e11;
        pcStack_60 = "Bag";
        local_58 = 3;
        local_50 = (long *)0x0;
        FUN_0135d26c(auStack_88,&local_48);
        (**(code **)(*plVar6 + 0x130))(plVar6,&local_68,auStack_88);
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        if (local_50 != (long *)0x0) {
          (**(code **)(*local_50 + 0x20))();
        }
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x20))();
        }
      }
      lVar8 = *param_2;
    }
    if (lVar8 != -0x4ddda34ea5c3ef57) {
      return;
    }
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar8 == 0) {
      return;
    }
    plVar6 = (long *)FUN_01026aa0(lVar8 + 0xe0,&local_68);
    if (plVar6 == (long *)0x0) {
      return;
    }
    FUN_015f9df0(&local_48,*param_3);
    local_68 = 0x8395fef401772973;
    pcStack_60 = "Shoes";
    local_58 = 5;
    local_50 = (long *)0x0;
    FUN_0135d26c(auStack_88,&local_48);
    (**(code **)(*plVar6 + 0x130))(plVar6,&local_68,auStack_88);
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    if (local_48 == (long *)0x0) {
      return;
    }
    pcVar9 = *(code **)(*local_48 + 0x20);
    plVar6 = local_48;
  }
  else {
    if (*(int *)(param_1 + 0x78) != 6) {
      return;
    }
    if (*param_2 != -0x42eb7c3752ceebe) {
      return;
    }
    fVar10 = (float)FUN_01ea62f0(*param_3);
    if (*(long *)(param_1 + 8) == 0) {
      return;
    }
    lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar8 == 0) {
      return;
    }
    lVar8 = FUN_01104bd8(lVar8 + 0xe0,&local_68);
    if (lVar8 == 0) {
      return;
    }
    puVar7 = (undefined8 *)FUN_01df7f84();
    plVar6 = (long *)*puVar7;
    if (plVar6 == (long *)0x0) {
      return;
    }
    plVar1 = plVar6 + 5;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar2) {
        *(int *)plVar1 = (int)lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    local_68 = 0xb4b2bc636c111d23;
    pcStack_60 = "waist";
    local_58 = 5;
    local_50 = (long *)0x0;
    sVar5 = FUN_00c8ea20(plVar6,&local_68);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    if (-1 < sVar5) {
      FUN_00cc3788(fVar10 / 1.5,0,plVar6,(int)sVar5);
    }
    do {
      lVar8 = *plVar1;
      iVar3 = (int)lVar8 + -1;
      cVar4 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar2) {
        *(int *)plVar1 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 != 0) {
      if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
      return;
    }
    pcVar9 = *(code **)(*plVar6 + 0x10);
  }
  (*pcVar9)(plVar6);
  return;
}


