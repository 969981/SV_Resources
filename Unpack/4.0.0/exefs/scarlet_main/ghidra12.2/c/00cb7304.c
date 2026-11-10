/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cb7304; name: FUN_00cb7304
 */


void FUN_00cb7304(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 auStack_90 [96];
  
  *param_1 = &DAT_045a2ed8;
  param_1[4] = &PTR_LAB_045a3028;
  param_1[5] = &DAT_045a3078;
  param_1[0x1f] = &PTR_LAB_045a30d0;
  param_1[0xa8] = &PTR_LAB_045a3140;
  param_1[0xa9] = &PTR_LAB_045a3190;
  local_b0 = &LAB_021c12c8;
  local_a8 = FUN_02b5debc;
  local_a0 = &LAB_02b5dec0;
  puStack_98 = &LAB_02b5dec4;
  FUN_00cb7a60(param_1,&local_b0);
  pcVar5 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar5)(auStack_90);
  }
  lVar8 = param_1[0x11e];
  lVar7 = param_1[0x11f];
  if (lVar8 == lVar7) {
    lVar7 = lVar8;
  }
  else {
    do {
      plVar9 = *(long **)(lVar8 + 0x68);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x120))(plVar9,1);
        plVar9 = *(long **)(lVar8 + 0x68);
        *(undefined8 *)(lVar8 + 0x68) = 0;
        if (plVar9 != (long *)0x0) {
          lVar10 = plVar9[6];
          psVar1 = (short *)(lVar10 + 0x1a);
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
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar9 + 0x50))();
          }
          else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
      lVar8 = lVar8 + 0x78;
    } while (lVar8 != lVar7);
    lVar8 = param_1[0x11e];
    lVar7 = param_1[0x11f];
    if (lVar7 == lVar8) {
      lVar7 = lVar8;
    }
    else {
      FUN_00cb776c(lVar7 + -0x78);
      if ((lVar7 + -0x78 != lVar8) && (FUN_00cb776c(lVar7 + -0xf0), lVar7 + -0xf0 != lVar8)) {
        do {
          FUN_00cb776c(lVar7 + -0x168);
          lVar7 = lVar7 + -0x78;
        } while (lVar8 + 0xf0 != lVar7);
      }
      lVar7 = param_1[0x11e];
    }
  }
  param_1[0x11f] = lVar8;
  if (lVar7 != 0) {
    lVar10 = lVar7;
    if (lVar8 != lVar7) {
      FUN_00cb776c(lVar8 + -0x78);
      if ((lVar8 + -0x78 != lVar7) && (FUN_00cb776c(lVar8 + -0xf0), lVar8 + -0xf0 != lVar7)) {
        do {
          FUN_00cb776c(lVar8 + -0x168);
          lVar8 = lVar8 + -0x78;
        } while (lVar7 + 0xf0 != lVar8);
      }
      lVar10 = param_1[0x11e];
    }
    lVar8 = param_1[0x120];
    param_1[0x11f] = lVar7;
    plVar9 = (long *)param_1[0x121];
    uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,lVar8 - lVar10,8);
    }
    else {
      FUN_00c48fe8(plVar9,lVar10,lVar8 - lVar10,8);
    }
  }
  FUN_00d42924(param_1 + 0x117);
  lVar8 = param_1[0x110];
  if (lVar8 != 0) {
    lVar10 = param_1[0x111];
    lVar7 = lVar8;
    if (lVar10 != lVar8) {
      if (*(long **)(lVar10 + -8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar10 + -8) + 0x20))();
      }
      if (lVar10 + -0x28 != lVar8) {
        if (*(long **)(lVar10 + -0x30) != (long *)0x0) {
          (**(code **)(**(long **)(lVar10 + -0x30) + 0x20))();
        }
        if (lVar10 + -0x50 != lVar8) {
          do {
            if (*(long **)(lVar10 + -0x58) != (long *)0x0) {
              (**(code **)(**(long **)(lVar10 + -0x58) + 0x20))();
            }
            lVar10 = lVar10 + -0x28;
          } while (lVar8 + 0x50 != lVar10);
        }
      }
      lVar7 = param_1[0x110];
    }
    lVar10 = param_1[0x112];
    param_1[0x111] = lVar8;
    plVar9 = (long *)param_1[0x113];
    uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar7,lVar10 - lVar7,8);
    }
    else {
      FUN_00c48fe8(plVar9,lVar7,lVar10 - lVar7,8);
    }
  }
  FUN_00cb786c(param_1 + 0x109);
  lVar8 = param_1[0x102];
  if (lVar8 != 0) {
    lVar10 = param_1[0x103];
    lVar7 = lVar8;
    if (lVar10 != lVar8) {
      if (*(long **)(lVar10 + -8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar10 + -8) + 0x20))();
      }
      if (lVar10 + -0x20 != lVar8) {
        do {
          if (*(long **)(lVar10 + -0x28) != (long *)0x0) {
            (**(code **)(**(long **)(lVar10 + -0x28) + 0x20))();
          }
          lVar10 = lVar10 + -0x20;
        } while (lVar8 + 0x20 != lVar10);
      }
      lVar7 = param_1[0x102];
    }
    lVar10 = param_1[0x104];
    param_1[0x103] = lVar8;
    plVar9 = (long *)param_1[0x105];
    uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar7,lVar10 - lVar7,8);
    }
    else {
      FUN_00c48fe8(plVar9,lVar7,lVar10 - lVar7,8);
    }
  }
  FUN_00cb8d30(param_1);
  return;
}


