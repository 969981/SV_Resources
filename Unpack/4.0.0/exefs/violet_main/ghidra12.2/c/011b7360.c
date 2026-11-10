/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b7360; name: FUN_011b7360
 */


void FUN_011b7360(long param_1,undefined8 *param_2,int param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  long *plVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  short *psVar9;
  long lVar10;
  long *plVar11;
  long *local_48;
  
  plVar11 = *(long **)(param_1 + 0x40);
  if (plVar11 == (long *)0x0) {
    FUN_011b5d1c(param_1,param_3,param_4);
  }
  else {
    plVar8 = plVar11 + 5;
    do {
      lVar6 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_011b76b4;
    FUN_011b5d1c(param_1,param_3,param_4);
    do {
      lVar6 = *plVar8;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    else if ((int)lVar6 == 0) goto LAB_011b7530;
  }
  if (param_3 - 0x34fU < 2) {
    FUN_011b7ce0(*(undefined8 *)(param_1 + 0x48),0,*param_5);
    FUN_011b6f2c(param_1,1,param_5[1]);
    FUN_011b6f2c(param_1,2,param_5[2]);
    psVar9 = *(short **)(*(long *)(param_1 + 0x40) + 0x30);
LAB_011b7590:
    if (*psVar9 == 0x10) goto code_r0x011b759c;
    if (*psVar9 != 0) {
      lVar6 = 1;
      goto LAB_011b75f8;
    }
    goto LAB_011b7420;
  }
  plVar11 = *(long **)(param_1 + 0x40);
  local_48 = plVar11;
  if (plVar11 == (long *)0x0) {
    FUN_011b60c0(param_1,&local_48,param_5);
  }
  else {
    plVar8 = plVar11 + 5;
    do {
      lVar6 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_011b76b4;
    FUN_011b60c0(param_1,&local_48,param_5);
    if (plVar11 != (long *)0x0) {
      plVar8 = plVar11 + 5;
      do {
        lVar6 = *plVar8;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
      else if ((int)lVar6 == 0) goto LAB_011b7530;
    }
  }
LAB_011b7420:
  uVar7 = *param_2;
  plVar11 = *(long **)(param_1 + 0x40);
  lVar6 = *(long *)(param_1 + 0x48);
  if (plVar11 != (long *)0x0) {
    plVar8 = plVar11 + 5;
    do {
      lVar10 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = (int)lVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar10 == -1) goto LAB_011b76b4;
  }
  lVar10 = *(long *)(lVar6 + 0x118);
  *(undefined4 *)(lVar6 + 0xcc) = 0;
  *(undefined2 *)(lVar6 + 0xd0) = 0;
  *(undefined4 *)(lVar6 + 0xd4) = 0;
  *(undefined4 *)(lVar6 + 0xdc) = 0;
  FUN_0109c76c(lVar6,plVar11);
  if (*(char *)(lVar10 + 0x54) != '\0') {
    **(undefined2 **)(lVar10 + 0x30) = 0;
    *(undefined2 *)(lVar10 + 0x52) = 0;
  }
  FUN_0109c334(lVar6,lVar10,plVar11,0,0);
  plVar8 = *(long **)(lVar6 + 0x118);
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
LAB_011b76b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  FUN_015514e4(uVar7,plVar8);
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
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  else if ((int)lVar6 == 0) goto LAB_011b7530;
  plVar8 = plVar11 + 5;
  do {
    lVar6 = *plVar8;
    iVar5 = (int)lVar6 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *(int *)plVar8 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x011b7640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x10))(plVar11);
    return;
  }
  if ((int)lVar6 != 0) {
    return;
  }
LAB_011b7530:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
             ,0x58,"Reference counter underflows.");
code_r0x011b759c:
  uVar2 = psVar9[2];
  if ((((1 < (byte)((char)(uVar2 >> 8) - 1U)) || ((uVar2 & 0xff00) == 0x200)) ||
      ((uVar2 & 0xff) != 0x9e)) ||
     (thunk_FUN_01f7ff04(*(undefined8 *)(param_1 + 0x48),0,0,1), *psVar9 == 0x10)) {
    lVar6 = (ulong)(ushort)psVar9[1] + 2;
LAB_011b75f8:
    psVar9 = psVar9 + lVar6;
  }
  goto LAB_011b7590;
}


