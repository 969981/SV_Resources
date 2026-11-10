/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0113cf30; name: FUN_0113cf30
 */


void FUN_0113cf30(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar8 = *(ulong *)(param_1 + 0x758);
  if (uVar8 == 0) {
    return;
  }
  uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar7 = *param_2;
  uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar9 < 2) {
    uVar13 = uVar8 - 1 & uVar7;
  }
  else if (uVar7 < uVar8) {
    uVar13 = uVar7;
  }
  else {
    uVar13 = 0;
    if (uVar8 != 0) {
      uVar13 = uVar7 / uVar8;
    }
    uVar13 = uVar7 - uVar13 * uVar8;
  }
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x750) + uVar13 * 8);
  if (puVar11 == (undefined8 *)0x0) {
    return;
  }
  plVar14 = (long *)*puVar11;
  if (plVar14 == (long *)0x0) {
    return;
  }
  if (uVar9 < 2) {
    do {
      if (plVar14[1] == uVar7) {
        if (plVar14[2] == uVar7) goto LAB_0113d044;
      }
      else if ((plVar14[1] & uVar8 - 1) != uVar13) {
        return;
      }
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    uVar9 = plVar14[1];
    if (uVar9 == uVar7) {
      if (plVar14[2] == uVar7) goto LAB_0113d044;
    }
    else {
      if (uVar8 <= uVar9) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar3 * uVar8;
      }
      if (uVar9 != uVar13) {
        return;
      }
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_0113d168:
  local_60 = DAT_03cbf340;
  lStack_58 = DAT_03cbf348;
  local_50 = DAT_03cbf350;
  uStack_48 = DAT_03cbf358;
  lVar6 = plVar14[10];
  iVar4 = FUN_0113d3a4(lVar5);
  if ((int)lVar6 < iVar4) {
    FUN_0113d3ac(lVar5,(int)plVar14[10],&local_60);
  }
  FUN_0113d4c4((long *)(param_1 + 0x7b8),param_2);
  goto LAB_0113d1b0;
LAB_0113d044:
  lVar5 = FUN_0113ca5c(param_1,plVar14 + 2);
  if (lVar5 != 0) {
    lVar6 = FUN_0113ca0c();
    *(long *)(*(long *)(lVar6 + 0x18) + (long)(int)plVar14[10] * 0x10 + 8) = plVar14[9];
    uVar8 = *(ulong *)(param_1 + 0x7c0);
    if (uVar8 != 0) {
      uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar7 = *param_2;
      uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar9 < 2) {
        uVar13 = uVar8 - 1 & uVar7;
      }
      else if (uVar7 < uVar8) {
        uVar13 = uVar7;
      }
      else {
        uVar13 = 0;
        if (uVar8 != 0) {
          uVar13 = uVar7 / uVar8;
        }
        uVar13 = uVar7 - uVar13 * uVar8;
      }
      plVar10 = *(long **)(*(long *)(param_1 + 0x7b8) + uVar13 * 8);
      if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
        if (uVar9 < 2) {
          do {
            if (plVar10[1] == uVar7) {
              if (plVar10[2] == uVar7) goto LAB_0113d168;
            }
            else if ((plVar10[1] & uVar8 - 1) != uVar13) break;
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            uVar9 = plVar10[1];
            if (uVar9 == uVar7) {
              if (plVar10[2] == uVar7) goto LAB_0113d168;
            }
            else {
              if (uVar8 <= uVar9) {
                uVar3 = 0;
                if (uVar8 != 0) {
                  uVar3 = uVar9 / uVar8;
                }
                uVar9 = uVar9 - uVar3 * uVar8;
              }
              if (uVar9 != uVar13) break;
            }
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
    }
  }
LAB_0113d1b0:
  plVar10 = (long *)plVar14[0xb];
  plVar14[7] = -1;
  plVar14[0xb] = 0;
  if (plVar10 != (long *)0x0) {
    plVar12 = plVar10 + 5;
    do {
      lVar5 = *plVar12;
      iVar4 = (int)lVar5 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *(int *)plVar12 = iVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  uVar7 = *(ulong *)(param_1 + 0x758);
  uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar9 = plVar14[1];
  uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar8 < 2) {
    uVar9 = uVar7 - 1 & uVar9;
  }
  else if (uVar7 <= uVar9) {
    uVar13 = 0;
    if (uVar7 != 0) {
      uVar13 = uVar9 / uVar7;
    }
    uVar9 = uVar9 - uVar13 * uVar7;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x750) + uVar9 * 8);
  for (plVar12 = (long *)*plVar10; plVar12 != plVar14; plVar12 = (long *)*plVar12) {
    plVar10 = plVar12;
  }
  if (plVar10 != (long *)(param_1 + 0x780)) {
    uVar13 = plVar10[1];
    if (uVar8 < 2) {
      uVar13 = uVar13 & uVar7 - 1;
    }
    else if (uVar7 <= uVar13) {
      uVar3 = 0;
      if (uVar7 != 0) {
        uVar3 = uVar13 / uVar7;
      }
      uVar13 = uVar13 - uVar3 * uVar7;
    }
    if (uVar13 == uVar9) goto LAB_0113d2a4;
  }
  if (*plVar14 != 0) {
    uVar13 = *(ulong *)(*plVar14 + 8);
    if (uVar8 < 2) {
      uVar13 = uVar13 & uVar7 - 1;
    }
    else if (uVar7 <= uVar13) {
      uVar3 = 0;
      if (uVar7 != 0) {
        uVar3 = uVar13 / uVar7;
      }
      uVar13 = uVar13 - uVar3 * uVar7;
    }
    if (uVar13 == uVar9) goto LAB_0113d2a4;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x750) + uVar9 * 8) = 0;
LAB_0113d2a4:
  lVar5 = *plVar14;
  if (lVar5 != 0) {
    uVar13 = *(ulong *)(lVar5 + 8);
    if (uVar8 < 2) {
      uVar13 = uVar13 & uVar7 - 1;
    }
    else if (uVar7 <= uVar13) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar13 / uVar7;
      }
      uVar13 = uVar13 - uVar8 * uVar7;
    }
    if (uVar13 != uVar9) {
      *(long **)(*(long *)(param_1 + 0x750) + uVar13 * 8) = plVar10;
      lVar5 = *plVar14;
    }
  }
  *plVar10 = lVar5;
  lStack_58 = param_1 + 0x788;
  *plVar14 = 0;
  *(long *)(param_1 + 0x7a8) = *(long *)(param_1 + 0x7a8) + -1;
  local_50 = CONCAT71(local_50._1_7_,1);
  local_60 = plVar14;
  FUN_0113d3b4(&local_60);
  return;
}


