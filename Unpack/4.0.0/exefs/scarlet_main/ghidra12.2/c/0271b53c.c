/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0271b53c; name: FUN_0271b53c
 */


void FUN_0271b53c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  *param_1 = &PTR_FUN_045d3070;
  param_1[4] = &PTR_LAB_045d30a8;
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x8c));
  plVar5 = (long *)param_1[0x88];
  if (plVar5 != (long *)0x0) {
    plVar11 = plVar5 + 5;
    do {
      lVar10 = *plVar11;
      iVar4 = (int)lVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_0271bb44;
  }
  lVar10 = param_1[0x75];
  if (lVar10 != 0) {
    lVar9 = param_1[0x77];
    param_1[0x76] = lVar10;
    plVar5 = (long *)param_1[0x78];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar10,lVar9 - lVar10,2);
        goto LAB_0271b580;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar10,lVar9 - lVar10,2);
  }
LAB_0271b580:
  plVar5 = (long *)param_1[0x74];
  if (plVar5 != (long *)0x0) {
    plVar11 = plVar5 + 5;
    do {
      lVar10 = *plVar11;
      iVar4 = (int)lVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_0271bb44;
  }
  plVar5 = (long *)param_1[0x73];
  if (plVar5 != (long *)0x0) {
    plVar11 = plVar5 + 5;
    do {
      lVar10 = *plVar11;
      iVar4 = (int)lVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *(int *)plVar11 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
LAB_0271bb44:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar10 = param_1[0x6c];
  if (lVar10 != 0) {
    lVar9 = param_1[0x6e];
    param_1[0x6d] = lVar10;
    plVar5 = (long *)param_1[0x6f];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar10,lVar9 - lVar10,0x10);
        goto LAB_0271b610;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar10,lVar9 - lVar10,0x10);
  }
LAB_0271b610:
  lVar10 = param_1[0x65];
  if (lVar10 != 0) {
    lVar9 = param_1[0x67];
    param_1[0x66] = lVar10;
    plVar5 = (long *)param_1[0x68];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar10,lVar9 - lVar10,2);
        goto LAB_0271b618;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar10,lVar9 - lVar10,2);
  }
LAB_0271b618:
  lVar10 = param_1[0x5e];
  if (lVar10 != 0) {
    lVar9 = param_1[0x60];
    param_1[0x5f] = lVar10;
    plVar5 = (long *)param_1[0x61];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar10,lVar9 - lVar10,0x10);
        goto LAB_0271b620;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar10,lVar9 - lVar10,0x10);
  }
LAB_0271b620:
  lVar10 = param_1[0x57];
  if (lVar10 != 0) {
    lVar9 = param_1[0x59];
    param_1[0x58] = lVar10;
    plVar5 = (long *)param_1[0x5a];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar10,lVar9 - lVar10,2);
        goto LAB_0271b668;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar10,lVar9 - lVar10,2);
  }
LAB_0271b668:
  lVar10 = param_1[0x50];
  if (lVar10 != 0) {
    lVar9 = param_1[0x52];
    param_1[0x51] = lVar10;
    plVar5 = (long *)param_1[0x53];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar10,lVar9 - lVar10,0x10);
        goto LAB_0271b6b0;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar10,lVar9 - lVar10,0x10);
  }
LAB_0271b6b0:
  lVar10 = param_1[0x49];
  if (lVar10 != 0) {
    lVar9 = param_1[0x4b];
    param_1[0x4a] = lVar10;
    plVar5 = (long *)param_1[0x4c];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar10,lVar9 - lVar10,0x10);
        goto LAB_0271b6b8;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar10,lVar9 - lVar10,0x10);
  }
LAB_0271b6b8:
  lVar10 = param_1[0x42];
  if (lVar10 != 0) {
    lVar9 = param_1[0x44];
    param_1[0x43] = lVar10;
    plVar5 = (long *)param_1[0x45];
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar10,lVar9 - lVar10,0x10);
        goto LAB_0271b6c0;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar10,lVar9 - lVar10,0x10);
  }
LAB_0271b6c0:
  lVar10 = param_1[0x3a];
  if (lVar10 != 0) {
    lVar9 = param_1[0x3c];
    plVar5 = (long *)param_1[0x3d];
    param_1[0x3b] = lVar10;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar10,lVar9 - lVar10,4);
        goto LAB_0271b704;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar10,lVar9 - lVar10,4);
  }
LAB_0271b704:
  lVar10 = param_1[0x32];
  if (lVar10 != 0) {
    lVar9 = param_1[0x34];
    plVar5 = (long *)param_1[0x35];
    param_1[0x33] = lVar10;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar10,lVar9 - lVar10,4);
        goto LAB_0271b748;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar10,lVar9 - lVar10,4);
  }
LAB_0271b748:
  lVar10 = param_1[0x2a];
  if (lVar10 != 0) {
    lVar9 = param_1[0x2c];
    plVar5 = (long *)param_1[0x2d];
    param_1[0x2b] = lVar10;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar10,lVar9 - lVar10,4);
        goto LAB_0271b78c;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar10,lVar9 - lVar10,4);
  }
LAB_0271b78c:
  lVar10 = param_1[0x22];
  if (lVar10 != 0) {
    lVar9 = param_1[0x24];
    plVar5 = (long *)param_1[0x25];
    param_1[0x23] = lVar10;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar10,lVar9 - lVar10,4);
        goto LAB_0271b7d0;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar10,lVar9 - lVar10,4);
  }
LAB_0271b7d0:
  lVar10 = param_1[0x1b];
  if (lVar10 != 0) {
    lVar9 = param_1[0x1d];
    plVar5 = (long *)param_1[0x1e];
    param_1[0x1c] = lVar10;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar10,lVar9 - lVar10,2);
        goto LAB_0271b7d8;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar10,lVar9 - lVar10,2);
  }
LAB_0271b7d8:
  lVar10 = param_1[0x14];
  if (lVar10 != 0) {
    lVar9 = param_1[0x16];
    plVar5 = (long *)param_1[0x17];
    param_1[0x15] = lVar10;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar10,lVar9 - lVar10,2);
        goto LAB_0271b7e0;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar10,lVar9 - lVar10,2);
  }
LAB_0271b7e0:
  plVar5 = (long *)param_1[0xd];
  if (plVar5 != (long *)0x0) {
    if ((long *)param_1[0xe] == plVar5) {
      plVar11 = plVar5;
    }
    else {
      plVar11 = (long *)param_1[0xe];
      do {
        plVar8 = plVar11 + -8;
        lVar10 = *plVar8;
        if (lVar10 != 0) {
          lVar9 = plVar11[-6];
          plVar1 = (long *)plVar11[-5];
          plVar11[-7] = lVar10;
          uVar6 = (**(code **)(*plVar1 + 0xf8))(plVar1);
          if ((uVar6 & 1) != 0) {
            lVar7 = FUN_00c4e600();
            if (0 < *(int *)(lVar7 + 0x12c8)) {
              FUN_00c48fe8(plVar1,lVar10,lVar9 - lVar10,4);
              goto LAB_0271b83c;
            }
          }
          (**(code **)(*plVar1 + 0x18))(plVar1,lVar10,lVar9 - lVar10,4);
        }
LAB_0271b83c:
        plVar11 = plVar8;
      } while (plVar5 != plVar8);
      plVar11 = (long *)param_1[0xd];
    }
    lVar10 = param_1[0xf];
    plVar8 = (long *)param_1[0x10];
    param_1[0xe] = plVar5;
    uVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if ((uVar6 & 1) != 0) {
      lVar9 = FUN_00c4e600();
      if (0 < *(int *)(lVar9 + 0x12c8)) {
        FUN_00c48fe8(plVar8,plVar11,lVar10 - (long)plVar11,8);
        goto LAB_0271b8b4;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,plVar11,lVar10 - (long)plVar11,8);
  }
LAB_0271b8b4:
  plVar5 = (long *)param_1[6];
  if (plVar5 == (long *)0x0) {
    return;
  }
  plVar11 = (long *)param_1[7];
  if (plVar11 == plVar5) {
    plVar11 = plVar5;
  }
  else {
    do {
      plVar11 = plVar11 + -2;
      plVar8 = (long *)*plVar11;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 5;
        do {
          lVar10 = *plVar1;
          iVar4 = (int)lVar10 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        else if ((int)lVar10 == 0) goto LAB_0271bb44;
      }
    } while (plVar11 != plVar5);
    plVar11 = (long *)param_1[6];
  }
  param_1[7] = plVar5;
  lVar10 = param_1[8];
  plVar5 = (long *)param_1[9];
  uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if ((uVar6 & 1) != 0) {
    lVar9 = FUN_00c4e600();
    if (0 < *(int *)(lVar9 + 0x12c8)) {
      FUN_00c48fe8(plVar5,plVar11,lVar10 - (long)plVar11,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0271b940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,plVar11,lVar10 - (long)plVar11,8);
  return;
}


