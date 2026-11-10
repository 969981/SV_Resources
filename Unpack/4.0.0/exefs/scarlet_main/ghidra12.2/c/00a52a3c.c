/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a52a3c; name: FUN_00a52a3c
 */


void FUN_00a52a3c(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = &PTR_FUN_04540fd8;
  param_1[4] = &PTR_LAB_04541010;
  FUN_00a531b0(param_1 + 0xc99,param_1[0xc9a]);
  plVar5 = (long *)param_1[0xc98];
  if (plVar5 != (long *)0x0) {
    lVar8 = plVar5[6];
    psVar1 = (short *)(lVar8 + 0x1a);
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
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar5 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  lVar8 = param_1[0xc90];
  if (lVar8 != 0) {
    lVar9 = param_1[0xc92];
    param_1[0xc91] = lVar8;
    plVar5 = (long *)param_1[0xc93];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar8,lVar9 - lVar8,4);
        goto LAB_00a52ae8;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9 - lVar8,4);
  }
LAB_00a52ae8:
  lVar8 = param_1[0xc89];
  if (lVar8 != 0) {
    lVar9 = param_1[0xc8b];
    param_1[0xc8a] = lVar8;
    plVar5 = (long *)param_1[0xc8c];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar8,lVar9 - lVar8,4);
        goto LAB_00a52b30;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9 - lVar8,4);
  }
LAB_00a52b30:
  lVar8 = param_1[0xc64];
  if (lVar8 != 0) {
    lVar9 = param_1[0xc66];
    param_1[0xc65] = lVar8;
    plVar5 = (long *)param_1[0xc67];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar8,lVar9 - lVar8,4);
        goto LAB_00a52b78;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9 - lVar8,4);
  }
LAB_00a52b78:
  lVar8 = param_1[0xc3e];
  if (lVar8 != 0) {
    lVar9 = param_1[0xc40];
    param_1[0xc3f] = lVar8;
    plVar5 = (long *)param_1[0xc41];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar8,lVar9 - lVar8,4);
        goto LAB_00a52bc0;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9 - lVar8,4);
  }
LAB_00a52bc0:
  lVar8 = param_1[0xc36];
  if (lVar8 != 0) {
    lVar9 = param_1[0xc38];
    param_1[0xc37] = lVar8;
    plVar5 = (long *)param_1[0xc39];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar8,lVar9 - lVar8,4);
        goto LAB_00a52c08;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9 - lVar8,4);
  }
LAB_00a52c08:
  lVar8 = param_1[0xc2f];
  if (lVar8 != 0) {
    lVar9 = param_1[0xc31];
    param_1[0xc30] = lVar8;
    plVar5 = (long *)param_1[0xc32];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar8,lVar9 - lVar8,4);
        goto LAB_00a52c50;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9 - lVar8,4);
  }
LAB_00a52c50:
  lVar8 = param_1[0xc28];
  if (lVar8 != 0) {
    lVar9 = param_1[0xc2a];
    param_1[0xc29] = lVar8;
    plVar5 = (long *)param_1[0xc2b];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar8,lVar9 - lVar8,4);
        goto LAB_00a52c98;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9 - lVar8,4);
  }
LAB_00a52c98:
  lVar8 = param_1[0xc21];
  if (lVar8 != 0) {
    lVar9 = param_1[0xc23];
    param_1[0xc22] = lVar8;
    plVar5 = (long *)param_1[0xc24];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar8,lVar9 - lVar8,4);
        goto LAB_00a52ce0;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9 - lVar8,4);
  }
LAB_00a52ce0:
  lVar8 = param_1[0xc1a];
  if (lVar8 != 0) {
    lVar9 = param_1[0xc1c];
    param_1[0xc1b] = lVar8;
    plVar5 = (long *)param_1[0xc1d];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar8,lVar9 - lVar8,4);
        goto LAB_00a52d28;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9 - lVar8,4);
  }
LAB_00a52d28:
  lVar8 = param_1[0xc13];
  if (lVar8 != 0) {
    lVar9 = param_1[0xc15];
    param_1[0xc14] = lVar8;
    plVar5 = (long *)param_1[0xc16];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar8,lVar9 - lVar8,4);
        goto LAB_00a52d70;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9 - lVar8,4);
  }
LAB_00a52d70:
  lVar8 = param_1[0xc0c];
  if (lVar8 == 0) {
    return;
  }
  param_1[0xc0d] = lVar8;
  lVar9 = param_1[0xc0e];
  plVar5 = (long *)param_1[0xc0f];
  uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00c4e600();
    if (0 < *(int *)(lVar7 + 0x12c8)) {
      FUN_00c48fe8(plVar5,lVar8,lVar9 - lVar8,4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00a52dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9 - lVar8,4);
  return;
}


