/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027068a4; name: FUN_027068a4
 */


void FUN_027068a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  *(undefined4 *)(param_1 + 3) = 0;
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 == &DAT_04859d88) {
LAB_02706928:
    puVar7 = param_1;
    if (puVar7 == &DAT_04859d88) goto LAB_027069c0;
  }
  else {
    do {
      puVar7 = (undefined8 *)*puVar1;
      if (puVar7 == &DAT_04859d88 || *(int *)(puVar1 + 3) == 1) goto LAB_02706928;
      puVar4 = (undefined8 *)puVar7[1];
      *(undefined4 *)(puVar7 + 3) = 0;
      puVar3 = puVar4;
      if (puVar1 == puVar4) {
        puVar3 = (undefined8 *)puVar7[2];
      }
      if ((puVar3 == (undefined8 *)0x0) || (*(int *)(puVar3 + 3) != 0)) {
        puVar3 = (undefined8 *)puVar1[1];
        if (puVar1 == puVar4) {
          if (puVar3 != param_1) {
            puVar3 = (undefined8 *)param_1[1];
            puVar1[2] = puVar3;
            if (puVar3 != (undefined8 *)0x0) {
              *puVar3 = puVar1;
            }
            param_1[1] = puVar1;
            *puVar1 = param_1;
            *param_1 = puVar7;
            puVar7[1] = param_1;
            FUN_02706a84();
            FUN_02706a84(param_1);
            puVar1 = param_1;
          }
          puVar4 = (undefined8 *)*puVar7;
          puVar3 = (undefined8 *)puVar4[1];
          puVar6 = (undefined8 *)puVar1[2];
          puVar7[1] = puVar6;
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = puVar7;
          }
          puVar1[2] = puVar7;
          *puVar7 = puVar1;
          puVar6 = puVar4 + 1;
          if (puVar3 != puVar7) {
            puVar6 = puVar4 + 2;
          }
        }
        else {
          if (puVar3 == param_1) {
            puVar3 = (undefined8 *)param_1[2];
            puVar1[1] = puVar3;
            if (puVar3 != (undefined8 *)0x0) {
              *puVar3 = puVar1;
            }
            param_1[2] = puVar1;
            *puVar1 = param_1;
            *param_1 = puVar7;
            puVar7[2] = param_1;
            FUN_02706a84();
            FUN_02706a84(param_1);
            puVar3 = (undefined8 *)param_1[1];
            puVar1 = param_1;
          }
          else {
          }
          puVar4 = (undefined8 *)*puVar7;
          puVar5 = (undefined8 *)puVar4[1];
          puVar7[2] = puVar3;
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = puVar7;
          }
          puVar1[1] = puVar7;
          puVar6 = puVar4 + 1;
          if (puVar5 != puVar7) {
            puVar6 = puVar4 + 2;
          }
          *puVar7 = puVar1;
        }
        *puVar1 = puVar4;
        puVar3 = &DAT_04859d88;
        if (puVar4 != &DAT_04859d88) {
          puVar3 = puVar6;
        }
        *puVar3 = puVar1;
        FUN_02706a84(puVar7);
        FUN_02706a84(puVar1);
        *(undefined4 *)(puVar1 + 3) = 1;
        goto LAB_027069c0;
      }
      *(undefined4 *)(puVar3 + 3) = 1;
      *(undefined4 *)(puVar1 + 3) = 1;
      puVar1 = (undefined8 *)*puVar7;
      param_1 = puVar7;
    } while (puVar1 != &DAT_04859d88);
  }
  do {
    uVar2 = FUN_02706a84(puVar7);
    if (((uVar2 & 1) == 0) || (puVar7 = (undefined8 *)*puVar7, puVar7 == (undefined8 *)0x0)) break;
  } while (puVar7 != &DAT_04859d88);
LAB_027069c0:
  *(undefined4 *)(DAT_04859d88 + 0x18) = 1;
  return;
}


