/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02706d74; name: FUN_02706d74
 */


void FUN_02706d74(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar8 = (undefined8 *)param_2[1];
  if (puVar8 != (undefined8 *)0x0 && puVar8 != &DAT_04859d88) {
    do {
      FUN_02706a84(puVar8);
      puVar8 = (undefined8 *)*puVar8;
      if (puVar8 == (undefined8 *)0x0) break;
    } while (puVar8 != &DAT_04859d88);
  }
  lVar4 = param_2[2];
  if (lVar4 == param_1) {
    iVar2 = *(int *)(param_1 + 0x18);
  }
  else {
    iVar2 = *(int *)(lVar4 + 0x18);
    *(undefined4 *)(lVar4 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  }
  if (iVar2 == 0) {
    return;
  }
  puVar8 = (undefined8 *)*param_2;
  if ((undefined8 *)param_2[1] != &DAT_04859d88) {
    puVar1 = (undefined8 *)param_2[1];
    puVar9 = (undefined8 *)*param_2;
    do {
      puVar8 = puVar1;
      if ((puVar9 != (undefined8 *)0x0) && (*(int *)(puVar9 + 3) != 1)) goto LAB_02707074;
      puVar1 = (undefined8 *)puVar8[1];
      if (puVar1 == puVar9) {
        puVar1 = (undefined8 *)puVar8[2];
        if (*(int *)(puVar1 + 3) == 0) {
          *(undefined4 *)(puVar1 + 3) = 1;
          puVar3 = (undefined8 *)*puVar8;
          *(undefined4 *)(puVar8 + 3) = 0;
          puVar5 = (undefined8 *)puVar3[1];
          puVar6 = (undefined8 *)puVar1[1];
          puVar8[2] = puVar6;
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = puVar8;
          }
          puVar1[1] = puVar8;
          puVar6 = puVar3 + 1;
          if (puVar5 != puVar8) {
            puVar6 = puVar3 + 2;
          }
          *puVar8 = puVar1;
          *puVar1 = puVar3;
          puVar5 = &DAT_04859d88;
          if (puVar3 != &DAT_04859d88) {
            puVar5 = puVar6;
          }
          *puVar5 = puVar1;
          puVar1[6] = puVar8[6];
          FUN_02706a84(puVar8);
          puVar1 = (undefined8 *)puVar8[2];
        }
        puVar3 = (undefined8 *)puVar1[1];
        lVar4 = puVar1[2];
        if ((puVar3 == (undefined8 *)0x0) || (*(int *)(puVar3 + 3) == 1)) {
          if ((lVar4 == 0) || (*(int *)(lVar4 + 0x18) == 1)) goto LAB_02706e84;
        }
        else if ((lVar4 == 0) || (*(int *)(lVar4 + 0x18) == 1)) {
          *(undefined4 *)(puVar3 + 3) = 1;
          puVar5 = (undefined8 *)*puVar1;
          *(undefined4 *)(puVar1 + 3) = 0;
          puVar6 = (undefined8 *)puVar5[1];
          puVar7 = (undefined8 *)puVar3[2];
          puVar1[1] = puVar7;
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = puVar1;
          }
          puVar3[2] = puVar1;
          puVar7 = puVar5 + 1;
          if (puVar6 != puVar1) {
            puVar7 = puVar5 + 2;
          }
          *puVar1 = puVar3;
          *puVar3 = puVar5;
          puVar6 = &DAT_04859d88;
          if (puVar5 != &DAT_04859d88) {
            puVar6 = puVar7;
          }
          *puVar6 = puVar3;
          puVar3[6] = puVar1[6];
          FUN_02706a84();
          puVar1 = (undefined8 *)puVar8[2];
        }
        *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(puVar8 + 3);
        *(undefined4 *)(puVar8 + 3) = 1;
        if (puVar1[2] != 0) {
          *(undefined4 *)(puVar1[2] + 0x18) = 1;
        }
        puVar3 = (undefined8 *)*puVar8;
        puVar5 = (undefined8 *)puVar8[2];
        puVar1 = puVar3 + 1;
        puVar6 = (undefined8 *)*puVar1;
        puVar7 = (undefined8 *)puVar5[1];
        puVar8[2] = puVar7;
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = puVar8;
        }
        puVar5[1] = puVar8;
LAB_02707038:
        *puVar8 = puVar5;
        if (puVar6 != puVar8) {
          puVar1 = puVar3 + 2;
        }
        *puVar5 = puVar3;
        puVar6 = &DAT_04859d88;
        if (puVar3 != &DAT_04859d88) {
          puVar6 = puVar1;
        }
        *puVar6 = puVar5;
        FUN_02706a84(puVar8);
        FUN_02706a84(*puVar8);
        puVar8 = puVar9;
        break;
      }
      if (*(int *)(puVar1 + 3) == 0) {
        *(undefined4 *)(puVar1 + 3) = 1;
        puVar3 = (undefined8 *)*puVar8;
        *(undefined4 *)(puVar8 + 3) = 0;
        puVar5 = (undefined8 *)puVar3[1];
        puVar6 = (undefined8 *)puVar1[2];
        puVar8[1] = puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = puVar8;
        }
        puVar1[2] = puVar8;
        puVar6 = puVar3 + 1;
        if (puVar5 != puVar8) {
          puVar6 = puVar3 + 2;
        }
        *puVar8 = puVar1;
        *puVar1 = puVar3;
        puVar5 = &DAT_04859d88;
        if (puVar3 != &DAT_04859d88) {
          puVar5 = puVar6;
        }
        *puVar5 = puVar1;
        puVar1[6] = puVar8[6];
        FUN_02706a84(puVar8);
        puVar1 = (undefined8 *)puVar8[1];
      }
      lVar4 = puVar1[1];
      puVar3 = (undefined8 *)puVar1[2];
      if ((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 3) != 1)) {
        if ((lVar4 == 0) || (*(int *)(lVar4 + 0x18) == 1)) {
          *(undefined4 *)(puVar3 + 3) = 1;
          puVar5 = (undefined8 *)*puVar1;
          *(undefined4 *)(puVar1 + 3) = 0;
          puVar6 = (undefined8 *)puVar5[1];
          puVar7 = (undefined8 *)puVar3[1];
          puVar1[2] = puVar7;
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = puVar1;
          }
          puVar3[1] = puVar1;
          puVar7 = puVar5 + 1;
          if (puVar6 != puVar1) {
            puVar7 = puVar5 + 2;
          }
          *puVar1 = puVar3;
          *puVar3 = puVar5;
          puVar6 = &DAT_04859d88;
          if (puVar5 != &DAT_04859d88) {
            puVar6 = puVar7;
          }
          *puVar6 = puVar3;
          puVar3[6] = puVar1[6];
          FUN_02706a84();
          puVar1 = (undefined8 *)puVar8[1];
        }
LAB_02706ffc:
        *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(puVar8 + 3);
        *(undefined4 *)(puVar8 + 3) = 1;
        if (puVar1[1] != 0) {
          *(undefined4 *)(puVar1[1] + 0x18) = 1;
        }
        puVar3 = (undefined8 *)*puVar8;
        puVar5 = (undefined8 *)puVar8[1];
        puVar1 = puVar3 + 1;
        puVar6 = (undefined8 *)*puVar1;
        puVar7 = (undefined8 *)puVar5[2];
        puVar8[1] = puVar7;
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = puVar8;
        }
        puVar5[2] = puVar8;
        goto LAB_02707038;
      }
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x18) != 1)) goto LAB_02706ffc;
LAB_02706e84:
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1 = (undefined8 *)*puVar8;
      puVar9 = puVar8;
    } while ((undefined8 *)*puVar8 != &DAT_04859d88);
  }
  puVar9 = puVar8;
  if (puVar8 != (undefined8 *)0x0) {
LAB_02707074:
    *(undefined4 *)(puVar9 + 3) = 1;
  }
  return;
}


