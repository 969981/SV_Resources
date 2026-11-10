/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0146cb44; name: FUN_0146cb44
 */


void FUN_0146cb44(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_30;
  long *local_28;
  
  *param_1 = &PTR_FUN_04544cb0;
  param_1[4] = &PTR_LAB_04544df0;
  param_1[5] = &PTR_LAB_04544f18;
  param_1[6] = &PTR_LAB_04544f70;
  param_1[7] = &PTR_LAB_04544f98;
  FUN_00c9e664(&local_30,param_1 + 0x1d);
  if (local_30 != (long *)0x0) {
    if (local_28 == (long *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = local_28[9];
    }
    local_50 = 0x2af5476e236ce01b;
    pcStack_48 = "PokemonModelComponentLayerNode";
    local_40 = 0x1e;
    local_38 = (long *)0x0;
    FUN_0146d138(lVar7,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  if (local_28 != (long *)0x0) {
    plVar6 = local_28 + 5;
    do {
      lVar7 = *plVar6;
      iVar5 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x60))();
  }
  FUN_0146cce0(param_1[0x25]);
  plVar6 = (long *)param_1[0x25];
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[6];
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
      (**(code **)(*plVar6 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_00e6bfa4(param_1);
  return;
}


