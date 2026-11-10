/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00164894; name: FUN_00164894
 */


void FUN_00164894(ulong *param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar8 = param_3 - param_2;
  uVar7 = (long)uVar8 >> 3;
  if (uVar7 <= param_1[2]) {
    uVar3 = *param_1;
    if (uVar3 != param_2) {
      if (param_2 < uVar3) {
        if (0 < (long)uVar8) {
          uVar8 = uVar7;
          do {
            lVar2 = uVar8 * 8;
            uVar8 = uVar8 - 1;
            *(undefined8 *)((uVar3 - 8) + lVar2) = *(undefined8 *)((param_2 - 8) + lVar2);
          } while (0 < (long)uVar8);
        }
      }
      else if (uVar8 != 0) {
        uVar8 = uVar8 >> 3 & 3;
        if (uVar7 - 1 < 3) {
          lVar2 = 0;
        }
        else {
          lVar2 = 0;
          puVar4 = (undefined8 *)(param_2 + 0x10);
          puVar6 = (undefined8 *)(uVar3 + 0x10);
          do {
            puVar6[-2] = puVar4[-2];
            puVar6[-1] = puVar4[-1];
            *puVar6 = *puVar4;
            puVar1 = puVar4 + 1;
            lVar2 = lVar2 + 4;
            puVar4 = puVar4 + 4;
            puVar6[1] = *puVar1;
            puVar6 = puVar6 + 4;
          } while (uVar7 - uVar8 != lVar2);
        }
        if (uVar8 != 0) {
          puVar4 = (undefined8 *)(uVar3 + lVar2 * 8);
          puVar6 = (undefined8 *)(param_2 + lVar2 * 8);
          do {
            uVar8 = uVar8 - 1;
            *puVar4 = *puVar6;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          } while (uVar8 != 0);
        }
      }
    }
    param_1[2] = uVar7;
    return;
  }
  param_1[2] = 0;
  if (param_1[1] < uVar7) {
    lVar2 = FUN_0016443c(param_1,uVar7,0);
    param_1[2] = uVar7;
    if (uVar8 != 0) {
      uVar3 = *param_1;
      uVar8 = uVar8 >> 3 & 3;
      if (uVar7 - 1 < 3) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        puVar4 = (undefined8 *)(uVar3 + 0x10);
        puVar6 = (undefined8 *)(param_2 + 0x10);
        do {
          puVar4[-2] = puVar6[-2];
          puVar4[-1] = puVar6[-1];
          *puVar4 = *puVar6;
          puVar1 = puVar6 + 1;
          lVar5 = lVar5 + 4;
          puVar6 = puVar6 + 4;
          puVar4[1] = *puVar1;
          puVar4 = puVar4 + 4;
        } while (uVar7 - uVar8 != lVar5);
      }
      if (uVar8 != 0) {
        puVar4 = (undefined8 *)(uVar3 + lVar5 * 8);
        puVar6 = (undefined8 *)(param_2 + lVar5 * 8);
        do {
          uVar8 = uVar8 - 1;
          *puVar4 = *puVar6;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar8 != 0);
      }
    }
    if (lVar2 != 0) {
      (**(code **)PTR_PTR_047cb898)();
      return;
    }
  }
  else {
    param_1[2] = uVar7;
    if (uVar8 != 0) {
      uVar3 = *param_1;
      uVar8 = uVar8 >> 3 & 3;
      if (uVar7 - 1 < 3) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        puVar4 = (undefined8 *)(uVar3 + 0x10);
        puVar6 = (undefined8 *)(param_2 + 0x10);
        do {
          puVar4[-2] = puVar6[-2];
          puVar4[-1] = puVar6[-1];
          *puVar4 = *puVar6;
          puVar1 = puVar6 + 1;
          lVar2 = lVar2 + 4;
          puVar6 = puVar6 + 4;
          puVar4[1] = *puVar1;
          puVar4 = puVar4 + 4;
        } while (uVar7 - uVar8 != lVar2);
      }
      if (uVar8 != 0) {
        puVar4 = (undefined8 *)(uVar3 + lVar2 * 8);
        puVar6 = (undefined8 *)(param_2 + lVar2 * 8);
        do {
          uVar8 = uVar8 - 1;
          *puVar4 = *puVar6;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar8 != 0);
      }
    }
  }
  return;
}


