/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01911678; name: FUN_01911678
 */


undefined4 FUN_01911678(long param_1,long param_2)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  short sVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 uStack_28;
  undefined2 uStack_27;
  
  uVar11 = *(ulong *)(param_1 + 0x50);
  if (uVar11 == 0) {
    return 0;
  }
  uVar9 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar2 = *(uint *)(param_2 + 0x1c0);
  uVar7 = (ulong)uVar2;
  uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar9 < 2) {
    uVar13 = (ulong)((int)uVar11 - 1U & uVar2);
  }
  else {
    uVar13 = uVar7;
    if (uVar11 <= uVar7) {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar7 / uVar11;
      }
      uVar13 = uVar7 - uVar13 * uVar11;
    }
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x48) + uVar13 * 8);
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  plVar10 = (long *)*plVar10;
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  if (1 < uVar9) {
    do {
      uVar9 = plVar10[1];
      if (uVar9 == uVar7) {
        if (*(uint *)(plVar10 + 2) == uVar2) goto LAB_01911710;
      }
      else {
        if (uVar11 <= uVar9) {
          uVar6 = 0;
          if (uVar11 != 0) {
            uVar6 = uVar9 / uVar11;
          }
          uVar9 = uVar9 - uVar6 * uVar11;
        }
        if (uVar9 != uVar13) {
          return 0;
        }
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        return 0;
      }
    } while( true );
  }
  do {
    if (plVar10[1] == uVar7) {
      if (*(uint *)(plVar10 + 2) == uVar2) break;
    }
    else if ((plVar10[1] & uVar11 - 1) != uVar13) {
      return 0;
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      return 0;
    }
  } while( true );
LAB_01911710:
  uStack_27 = 0;
  uStack_28 = 0x42;
  local_29 = 0x46;
  local_2a = 0x35;
  local_2c = 0x3141;
  local_30 = 0x34313834;
  local_38 = 0x3439413736454153;
  lVar8 = plVar10[5];
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar12 = *(short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_019117ec;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_019117ec:
        bVar5 = false;
      }
      if (bVar5) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          return 0;
        }
        plVar14 = (long *)(lVar8 + -0x28);
        uVar11 = FUN_019ca174(0,plVar14,&local_38,plVar10 + 3);
        lVar8 = *(long *)(lVar8 + 8);
        psVar1 = (short *)(lVar8 + 0x1a);
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
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar14 + 0x50))(plVar14);
        }
        else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        if ((uVar11 & 0xff) == 0) {
          return 0;
        }
        return (int)(uVar11 >> 0x20);
      }
      sVar12 = sVar3;
    } while (sVar3 != 0);
  }
  return 0;
}


