/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019af4a0; name: FUN_019af4a0
 */


void FUN_019af4a0(long param_1,long param_2,undefined8 param_3,byte param_4)

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
    return;
  }
  plVar10 = (long *)*plVar10;
  if (plVar10 == (long *)0x0) {
    return;
  }
  if (1 < uVar9) {
    do {
      uVar9 = plVar10[1];
      if (uVar9 == uVar7) {
        if (*(uint *)(plVar10 + 2) == uVar2) goto LAB_019af540;
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
          return;
        }
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar10[1] == uVar7) {
      if (*(uint *)(plVar10 + 2) == uVar2) break;
    }
    else if ((plVar10[1] & uVar11 - 1) != uVar13) {
      return;
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_019af540:
  if ((((plVar10[5] != 0) && (*(short *)(plVar10[5] + 0x1a) != 0)) &&
      (lVar8 = plVar10[5], lVar8 != 0)) && (*(short *)(lVar8 + 0x1a) != 0)) {
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
        if (cVar4 != '\0') goto LAB_019af5d8;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_019af5d8:
        bVar5 = false;
      }
      if (bVar5) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          return;
        }
        uStack_27 = 0;
        plVar14 = (long *)(lVar8 + -0x28);
        uStack_28 = 0x34;
        local_29 = 0x42;
        local_2a = 0x42;
        local_2c = 0x3439;
        local_30 = 0x36304536;
        local_38 = 0x4434303344453053;
        local_3c = *(undefined4 *)(param_2 + 0x1c0);
        FUN_0135dff0(plVar14,&local_38,plVar10 + 3,&local_3c,param_3,local_24);
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
  return;
}


