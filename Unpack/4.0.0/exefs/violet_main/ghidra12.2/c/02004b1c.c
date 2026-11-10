/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02004b1c; name: FUN_02004b1c
 */


void FUN_02004b1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar8 = (undefined8 *)param_1[0xdd];
  *param_1 = &PTR_FUN_0456f880;
  puVar1 = param_1 + 0xdc;
  param_1[4] = &PTR_LAB_0456f8b8;
  for (; puVar8 != puVar1; puVar8 = (undefined8 *)puVar8[1]) {
    FUN_00e96bb8(puVar8 + 2);
    FUN_00db2500(puVar8 + 3);
  }
  FUN_00e96984(puVar1);
  puVar8 = param_1 + 0xd5;
  for (puVar9 = (undefined8 *)param_1[0xd6]; puVar9 != puVar8; puVar9 = (undefined8 *)puVar9[1]) {
    FUN_00e96bb8(puVar9 + 2);
  }
  FUN_0159ae74(puVar8);
  puVar9 = param_1 + 0xce;
  for (puVar10 = (undefined8 *)param_1[0xcf]; puVar10 != puVar9; puVar10 = (undefined8 *)puVar10[1])
  {
    FUN_00e96bb8(puVar10 + 2);
  }
  FUN_0159ae74(puVar9);
  lVar11 = 0;
  do {
    FUN_00e96bb8((long)param_1 + lVar11 + 0x350);
    FUN_00e96bb8((long)param_1 + lVar11 + 0x358);
    FUN_00e96bb8((long)param_1 + lVar11 + 0x360);
    FUN_00e96bb8((long)param_1 + lVar11 + 0x368);
    FUN_00e96bb8((long)param_1 + lVar11 + 0x370);
    FUN_00e96bb8((long)param_1 + lVar11 + 0x378);
    FUN_00e96bb8((long)param_1 + lVar11 + 0x380);
    FUN_00e96bb8((long)param_1 + lVar11 + 0x388);
    FUN_00e96bb8((long)param_1 + lVar11 + 0x390);
    FUN_00e96bb8((long)param_1 + lVar11 + 0x398);
    lVar11 = lVar11 + 0x50;
  } while (lVar11 != 800);
  lVar11 = 0;
  do {
    FUN_00e96bb8((long)param_1 + lVar11 + 0x30);
    FUN_00e96bb8((long)param_1 + lVar11 + 0x38);
    FUN_00e96bb8((long)param_1 + lVar11 + 0x40);
    FUN_00e96bb8((long)param_1 + lVar11 + 0x48);
    FUN_00e96bb8((long)param_1 + lVar11 + 0x50);
    FUN_00e96bb8((long)param_1 + lVar11 + 0x58);
    FUN_00e96bb8((long)param_1 + lVar11 + 0x60);
    FUN_00e96bb8((long)param_1 + lVar11 + 0x68);
    FUN_00e96bb8((long)param_1 + lVar11 + 0x70);
    FUN_00e96bb8((long)param_1 + lVar11 + 0x78);
    lVar11 = lVar11 + 0x50;
  } while (lVar11 != 800);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xe3));
  FUN_00e96984(puVar1);
  FUN_0159ae74(puVar8);
  FUN_0159ae74(puVar9);
  plVar7 = param_1 + 0xce;
  do {
    plVar7 = plVar7 + -1;
    plVar6 = (long *)*plVar7;
    if (plVar6 != (long *)0x0) {
      plVar2 = plVar6 + 5;
      do {
        lVar11 = *plVar2;
        iVar5 = (int)lVar11 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if ((int)lVar11 == 0) goto LAB_02004d4c;
    }
  } while (plVar7 != param_1 + 0x6a);
  plVar7 = param_1 + 0x6a;
  do {
    plVar7 = plVar7 + -1;
    plVar6 = (long *)*plVar7;
    if (plVar6 != (long *)0x0) {
      plVar2 = plVar6 + 5;
      do {
        lVar11 = *plVar2;
        iVar5 = (int)lVar11 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if ((int)lVar11 == 0) {
LAB_02004d4c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (plVar7 == param_1 + 6) {
      return;
    }
  } while( true );
}


