/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02110040; name: FUN_02110040
 */


void FUN_02110040(long param_1,long param_2,long *param_3,byte param_4)

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
  long lVar12;
  short sVar13;
  ulong uVar14;
  long *plVar15;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 uStack_28;
  undefined2 uStack_27;
  byte local_24 [4];
  
  local_24[0] = param_4 & 1;
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
    uVar14 = (ulong)((int)uVar11 - 1U & uVar2);
  }
  else {
    uVar14 = uVar9;
    if (uVar11 <= uVar9) {
      uVar14 = 0;
      if (uVar11 != 0) {
        uVar14 = uVar9 / uVar11;
      }
      uVar14 = uVar9 - uVar14 * uVar11;
    }
  }
  plVar8 = *(long **)(*(long *)(param_1 + 0x48) + uVar14 * 8);
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
        if (*(uint *)(plVar8 + 2) == uVar2) goto LAB_021100e0;
      }
      else {
        if (uVar11 <= uVar7) {
          uVar6 = 0;
          if (uVar11 != 0) {
            uVar6 = uVar7 / uVar11;
          }
          uVar7 = uVar7 - uVar6 * uVar11;
        }
        if (uVar7 != uVar14) {
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
    else if ((plVar8[1] & uVar11 - 1) != uVar14) {
      return;
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_021100e0:
  lVar10 = *param_3;
  if (lVar10 < -0x48cbc5d97e733ce7) {
    lVar12 = -0x613345d98bd2bb74;
  }
  else {
    if ((lVar10 == -0x48cbc5d97e733ce7) || (lVar10 == 0xc044027317c5c3e)) goto LAB_02110158;
    lVar12 = 0xc044327317c6157;
  }
  if (lVar10 != lVar12) {
    return;
  }
LAB_02110158:
  uStack_27 = 0;
  uStack_28 = 0x36;
  local_29 = 0x46;
  local_2a = 0x30;
  local_2c = 0x4644;
  local_30 = 0x34413932;
  local_38 = 0x3239443446383053;
  lVar10 = plVar8[5];
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar13 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar13) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_02110230;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02110230:
        bVar5 = false;
      }
      if (bVar5) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          return;
        }
        local_3c = *(undefined4 *)(param_2 + 0x1c0);
        plVar15 = (long *)(lVar10 + -0x28);
        FUN_0135dff0(plVar15,&local_38,plVar8 + 3,&local_3c,param_3,local_24);
        lVar10 = *(long *)(lVar10 + 8);
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar13 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar13 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar15 + 0x50))(plVar15);
          return;
        }
        if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar13 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


