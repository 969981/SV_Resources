/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cce014; name: FUN_00cce014
 */


void FUN_00cce014(long param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long local_40;
  undefined1 auStack_38 [24];
  
  uVar4 = *(ulong *)(param_1 + 0x78);
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
    plVar7 = *(long **)(*(long *)(param_1 + 0x70) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar7[1] == uVar3) {
            if (plVar7[2] == uVar3) {
              return;
            }
          }
          else if ((plVar7[1] & uVar4 - 1) != uVar6) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar7[1];
          if (uVar5 == uVar3) {
            if (plVar7[2] == uVar3) {
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
            if (uVar5 != uVar6) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  local_40 = CONCAT44(local_40._4_4_,
                      (int)((ulong)(*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38)) >> 5));
  FUN_00cd3b6c((long *)(param_1 + 0x70),param_2,&local_40);
  FUN_00cd2c90(&local_40,*(undefined8 *)(param_1 + 8));
  FUN_00cce17c((long *)(param_1 + 0x38),&local_40);
  lVar2 = local_40;
  local_40 = 0;
  if (lVar2 != 0) {
    FUN_0270ec20(auStack_38);
  }
  return;
}


