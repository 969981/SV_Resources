/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02756eb4; name: FUN_02756eb4
 */


void FUN_02756eb4(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = (long *)*param_2;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar6 = *(long **)(param_1 + 0x50);
  *(long **)(param_1 + 0x50) = plVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  plVar8 = (long *)param_2[1];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar6 = *(long **)(param_1 + 0x58);
  *(long **)(param_1 + 0x58) = plVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  plVar8 = (long *)param_2[2];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar6 = *(long **)(param_1 + 0x60);
  *(long **)(param_1 + 0x60) = plVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x70) = param_2[4];
  *(undefined8 *)(param_1 + 0x78) = param_2[5];
  *(undefined8 *)(param_1 + 0x80) = param_2[6];
  *(undefined8 *)(param_1 + 0x88) = param_2[7];
  plVar8 = (long *)param_2[8];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar6 = *(long **)(param_1 + 0x90);
  *(long **)(param_1 + 0x90) = plVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x98) = param_2[9];
  *(undefined8 *)(param_1 + 0xa0) = param_2[10];
  *(undefined8 *)(param_1 + 0xa8) = param_2[0xb];
  plVar8 = (long *)param_2[0xc];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar6 = *(long **)(param_1 + 0xb0);
  *(long **)(param_1 + 0xb0) = plVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  memcpy((void *)(param_1 + 0xc0),param_2 + 0xe,0x30);
  FUN_00e9f0ac(param_1 + 0xf0,param_2 + 0x14);
  FUN_027573cc(param_1 + 0x158,param_2 + 0x21);
  FUN_0275740c(param_1 + 0x1c0,param_2 + 0x2e);
  *(undefined2 *)(param_1 + 0x228) = *(undefined2 *)(param_2 + 0x3b);
  plVar8 = (long *)param_2[0x3c];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar6 = *(long **)(param_1 + 0x230);
  *(long **)(param_1 + 0x230) = plVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  plVar8 = (long *)param_2[0x3d];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar6 = *(long **)(param_1 + 0x238);
  *(long **)(param_1 + 0x238) = plVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  FUN_0275744c(param_1 + 0x248,param_2 + 0x3f);
  lVar7 = param_2[0x47];
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == -1) goto LAB_027573a4;
  }
  plVar8 = *(long **)(param_1 + 0x288);
  *(long *)(param_1 + 0x288) = lVar7;
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 5;
    do {
      lVar7 = *plVar6;
      iVar4 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_02757170;
  }
  *(undefined8 *)(param_1 + 0x290) = param_2[0x48];
  plVar8 = (long *)param_2[0x49];
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar6 = *(long **)(param_1 + 0x298);
  *(long **)(param_1 + 0x298) = plVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  FUN_0275744c(param_1 + 0x2a8,param_2 + 0x4b);
  FUN_0275744c(param_1 + 0x2f0,param_2 + 0x54);
  lVar7 = param_2[0x5c];
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == -1) goto LAB_027573a4;
  }
  plVar8 = *(long **)(param_1 + 0x330);
  *(long *)(param_1 + 0x330) = lVar7;
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 5;
    do {
      lVar7 = *plVar6;
      iVar4 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_02757170;
  }
  *(undefined8 *)(param_1 + 0x338) = param_2[0x5d];
  FUN_0275744c(param_1 + 0x348,param_2 + 0x5f);
  lVar7 = param_2[0x67];
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == -1) goto LAB_027573a4;
  }
  plVar8 = *(long **)(param_1 + 0x388);
  *(long *)(param_1 + 0x388) = lVar7;
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 5;
    do {
      lVar7 = *plVar6;
      iVar4 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_02757170;
  }
  *(undefined8 *)(param_1 + 0x390) = param_2[0x68];
  FUN_0275744c(param_1 + 0x3a0,param_2 + 0x6a);
  lVar7 = param_2[0x72];
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == -1) goto LAB_027573a4;
  }
  plVar8 = *(long **)(param_1 + 0x3e0);
  *(long *)(param_1 + 0x3e0) = lVar7;
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 5;
    do {
      lVar7 = *plVar6;
      iVar4 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_02757170;
  }
  *(undefined8 *)(param_1 + 1000) = param_2[0x73];
  FUN_0275744c(param_1 + 0x3f8,param_2 + 0x75);
  lVar7 = param_2[0x7d];
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == -1) {
LAB_027573a4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar8 = *(long **)(param_1 + 0x438);
  *(long *)(param_1 + 0x438) = lVar7;
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 5;
    do {
      lVar7 = *plVar6;
      iVar4 = (int)lVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
LAB_02757170:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(param_1 + 0x440) = param_2[0x7e];
  uVar5 = FUN_027561cc(param_1);
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  FUN_02755e54(param_1);
  return;
}


