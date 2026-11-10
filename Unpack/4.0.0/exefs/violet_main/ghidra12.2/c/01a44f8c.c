/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a44f8c; name: FUN_01a44f8c
 */


void FUN_01a44f8c(long param_1,long param_2,long *param_3,byte param_4,byte param_5,byte param_6,
                 byte param_7,byte param_8)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  short sVar12;
  ulong uVar13;
  long *plVar14;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 uStack_38;
  undefined2 uStack_37;
  byte local_34 [4];
  byte local_30 [4];
  byte local_2c [4];
  byte local_28 [4];
  byte local_24 [4];
  
  local_24[0] = param_4 & 1;
  local_28[0] = param_5 & 1;
  local_2c[0] = param_6 & 1;
  local_30[0] = param_7 & 1;
  local_34[0] = param_8 & 1;
  uVar11 = *(ulong *)(param_1 + 0x50);
  if (uVar11 == 0) {
    return;
  }
  uVar7 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar2 = *(uint *)(param_2 + 0x1c0);
  uVar9 = (ulong)uVar2;
  uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar7 < 2) {
    uVar13 = (ulong)((int)uVar11 - 1U & uVar2);
  }
  else {
    uVar13 = uVar9;
    if (uVar11 <= uVar9) {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar9 / uVar11;
      }
      uVar13 = uVar9 - uVar13 * uVar11;
    }
  }
  plVar8 = *(long **)(*(long *)(param_1 + 0x48) + uVar13 * 8);
  if (plVar8 == (long *)0x0) {
    return;
  }
  plVar8 = (long *)*plVar8;
  if (plVar8 == (long *)0x0) {
    return;
  }
  if (1 < uVar7) {
    do {
      uVar7 = plVar8[1];
      if (uVar7 == uVar9) {
        if (*(uint *)(plVar8 + 2) == uVar2) goto LAB_01a4504c;
      }
      else {
        if (uVar11 <= uVar7) {
          uVar6 = 0;
          if (uVar11 != 0) {
            uVar6 = uVar7 / uVar11;
          }
          uVar7 = uVar7 - uVar6 * uVar11;
        }
        if (uVar7 != uVar13) {
          return;
        }
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar8[1] == uVar9) {
      if (*(uint *)(plVar8 + 2) == uVar2) break;
    }
    else if ((plVar8[1] & uVar11 - 1) != uVar13) {
      return;
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_01a4504c:
  if ((*param_3 == -0x48cbc5d97e733ce7) || (*param_3 == -0x613345d98bd2bb74)) {
    uStack_37 = 0;
    uStack_38 = 0x41;
    local_39 = 0x34;
    local_3a = 0x32;
    local_3c = 0x4537;
    local_40 = 0x43433341;
    local_48 = 0x4541444635343653;
    lVar10 = plVar8[5];
    if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar10 + 0x1a);
      sVar12 = *(short *)(lVar10 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar12) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01a4515c;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01a4515c:
          bVar5 = false;
        }
        if (bVar5) {
          lVar10 = *(long *)(lVar10 + 0x10);
          if (lVar10 == 0) {
            return;
          }
          local_4c = *(undefined4 *)(param_2 + 0x1c0);
          plVar14 = (long *)(lVar10 + -0x28);
          FUN_019f421c(plVar14,&local_48,plVar8 + 3,&local_4c,param_3,local_24,local_28,local_2c,
                       local_30,local_34);
          lVar10 = *(long *)(lVar10 + 8);
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar14 + 0x50))(plVar14);
            return;
          }
          if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return;
        }
        sVar12 = sVar3;
      } while (sVar3 != 0);
    }
  }
  return;
}


