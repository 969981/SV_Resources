/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029bb0a4; name: FUN_029bb0a4
 */


void FUN_029bb0a4(long *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 uVar8;
  long lStack_a0;
  undefined4 local_98;
  long *local_38;
  
  uVar4 = *(ulong *)(*param_1 + 0x10);
  if (uVar4 != 0) {
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar3 = *param_2;
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar4 - 1 & uVar3;
    }
    else if (uVar3 < uVar4) {
      uVar6 = uVar3;
    }
    else {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar3 / uVar4;
      }
      uVar6 = uVar3 - uVar6 * uVar4;
    }
    plVar7 = *(long **)(*(long *)(*param_1 + 8) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar7[1] == uVar3) {
            if (plVar7[2] == uVar3) goto LAB_029bb19c;
          }
          else if ((plVar7[1] & uVar4 - 1) != uVar6) {
            return;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar7[1];
          if (uVar5 == uVar3) {
            if (plVar7[2] == uVar3) {
LAB_029bb19c:
              lVar2 = plVar7[6];
              if (lVar2 == 0) {
                return;
              }
              uVar8 = (undefined4)param_1[1];
              plVar7 = *(long **)(param_3 + 0x50);
              lStack_a0 = lVar2;
              local_98 = uVar8;
              if (plVar7 != (long *)0x0) {
                local_38 = plVar7 + 6;
                FUN_029bb334(&lStack_a0,plVar7 + 2,&local_38);
                while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
                  local_38 = plVar7 + 6;
                  FUN_029bb334(&lStack_a0,plVar7 + 2,&local_38);
                }
              }
              FUN_02e4d878(&lStack_a0);
              plVar7 = *(long **)(param_3 + 0xb8);
              lStack_a0 = lVar2;
              local_98 = uVar8;
              if (plVar7 != (long *)0x0) {
                local_38 = plVar7 + 6;
                FUN_029bb3cc(&lStack_a0,plVar7 + 2,&local_38);
                while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
                  local_38 = plVar7 + 6;
                  FUN_029bb3cc(&lStack_a0,plVar7 + 2,&local_38);
                }
              }
              FUN_02e4d894(&lStack_a0);
              return;
            }
          }
          else {
            if (uVar4 <= uVar5) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar5 / uVar4;
              }
              uVar5 = uVar5 - uVar1 * uVar4;
            }
            if (uVar5 != uVar6) {
              return;
            }
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  return;
}


