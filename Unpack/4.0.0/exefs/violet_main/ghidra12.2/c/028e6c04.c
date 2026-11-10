/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028e6c04; name: FUN_028e6c04
 */


void FUN_028e6c04(undefined8 *param_1,long param_2,ulong *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  long *local_38;
  
  uVar6 = *param_3;
  uVar7 = *(ulong *)(param_2 + 0x1a8);
  if (uVar7 != 0) {
    uVar3 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      uVar8 = uVar7 - 1 & uVar6;
    }
    else {
      uVar8 = uVar6;
      if (uVar7 <= uVar6) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = uVar6 / uVar7;
        }
        uVar8 = uVar6 - uVar8 * uVar7;
      }
    }
    plVar4 = *(long **)(*(long *)(param_2 + 0x1a0) + uVar8 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      if (uVar3 < 2) {
        do {
          if (plVar4[1] == uVar6) {
            if (plVar4[2] == uVar6) goto LAB_028e6dc8;
          }
          else if ((plVar4[1] & uVar7 - 1) != uVar8) break;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          uVar3 = plVar4[1];
          if (uVar3 == uVar6) {
            if (plVar4[2] == uVar6) goto LAB_028e6dc8;
          }
          else {
            if (uVar7 <= uVar3) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar3 / uVar7;
              }
              uVar3 = uVar3 - uVar2 * uVar7;
            }
            if (uVar3 != uVar8) break;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  uStack_48 = param_3[1];
  local_40 = param_3[2];
  local_38 = (long *)param_3[3];
  local_50 = uVar6;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  FUN_028e6600(param_2,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  uVar6 = *(ulong *)(param_2 + 0x1a8);
  uVar7 = *param_3;
  if ((uVar6 & uVar6 - 1) == 0) {
    plVar4 = *(long **)(*(long *)(param_2 + 0x1a0) + (uVar6 - 1 & uVar7) * 8);
    do {
      do {
        plVar4 = (long *)*plVar4;
      } while (plVar4[1] != uVar7);
    } while (plVar4[2] != uVar7);
  }
  else {
    uVar3 = uVar7;
    if (uVar6 <= uVar7) {
      uVar3 = 0;
      if (uVar6 != 0) {
        uVar3 = uVar7 / uVar6;
      }
      uVar3 = uVar7 - uVar3 * uVar6;
    }
    plVar4 = *(long **)(*(long *)(param_2 + 0x1a0) + uVar3 * 8);
    do {
      do {
        plVar4 = (long *)*plVar4;
      } while (plVar4[1] != uVar7);
    } while (plVar4[2] != uVar7);
  }
LAB_028e6dc8:
  puVar1 = (undefined8 *)(*(long *)(param_2 + 0x208) + plVar4[6] * 0x40);
  uVar5 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar5;
  plVar4 = (long *)puVar1[3];
  param_1[2] = puVar1[2];
  param_1[3] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  uVar5 = puVar1[4];
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(puVar1 + 5);
  param_1[4] = uVar5;
  FUN_028e6e50(param_1 + 6,puVar1 + 6);
  plVar4 = (long *)puVar1[7];
  param_1[7] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  return;
}


