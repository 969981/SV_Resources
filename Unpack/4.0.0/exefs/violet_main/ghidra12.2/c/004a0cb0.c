/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a0cb0; name: FUN_004a0cb0
 */


void FUN_004a0cb0(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  long *plVar8;
  byte *pbVar9;
  long *plVar10;
  undefined8 *puVar11;
  
  if (param_1[0x3c] != 0) {
    param_1[0x3d] = param_1[0x3c];
    FUN_0049e790(PTR_LAB_047cba48);
  }
  if (param_1[0x39] != 0) {
    param_1[0x3a] = param_1[0x39];
    FUN_0049e790(PTR_LAB_047cba48);
  }
  if (param_1[0x36] != 0) {
    param_1[0x37] = param_1[0x36];
    FUN_0049e790(PTR_LAB_047cba48);
  }
  if (param_1[0x33] != 0) {
    param_1[0x34] = param_1[0x33];
    FUN_0049e790(PTR_LAB_047cba48);
  }
  FUN_004c1a10(param_1 + 0x30,param_1[0x31]);
  puVar1 = PTR_LAB_047cba48;
  plVar2 = (long *)param_1[0x2d];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_0049e790(puVar1);
  }
  lVar3 = param_1[0x2b];
  param_1[0x2b] = 0;
  if (lVar3 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  puVar1 = PTR_LAB_047cba48;
  plVar2 = (long *)param_1[0x28];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_0049e790(puVar1);
  }
  lVar3 = param_1[0x26];
  param_1[0x26] = 0;
  if (lVar3 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  puVar1 = PTR_LAB_047cba48;
  plVar2 = (long *)param_1[0x23];
  if (plVar2 != (long *)0x0) {
    plVar10 = (long *)param_1[0x24];
    if (plVar10 == plVar2) {
      plVar10 = plVar2;
    }
    else {
      do {
        plVar10 = plVar10 + -1;
        lVar3 = *plVar10;
        *plVar10 = 0;
        if (lVar3 != 0) {
          FUN_004a1ab0(lVar3);
          FUN_0049e790(puVar1,lVar3);
        }
      } while (plVar2 != plVar10);
      plVar10 = (long *)param_1[0x23];
    }
    param_1[0x24] = plVar2;
    FUN_0049e790(PTR_LAB_047cba48,plVar10);
  }
  puVar1 = PTR_LAB_047cba48;
  plVar2 = (long *)param_1[0x20];
  if (plVar2 != (long *)0x0) {
    plVar10 = (long *)param_1[0x21];
    if (plVar10 == plVar2) {
      plVar10 = plVar2;
    }
    else {
      do {
        plVar10 = plVar10 + -1;
        lVar3 = *plVar10;
        *plVar10 = 0;
        if (lVar3 != 0) {
          FUN_0049e790(puVar1);
        }
      } while (plVar2 != plVar10);
      plVar10 = (long *)param_1[0x20];
    }
    param_1[0x21] = plVar2;
    FUN_0049e790(PTR_LAB_047cba48,plVar10);
  }
  puVar1 = PTR_LAB_047cba48;
  puVar7 = (undefined8 *)param_1[0x1d];
  if (puVar7 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)param_1[0x1e];
    if (puVar11 == puVar7) {
      puVar11 = puVar7;
    }
    else {
      do {
        puVar11 = puVar11 + -1;
        puVar5 = (undefined8 *)*puVar11;
        *puVar11 = 0;
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5);
          FUN_0049e790(puVar1,puVar5);
        }
      } while (puVar7 != puVar11);
      puVar11 = (undefined8 *)param_1[0x1d];
    }
    param_1[0x1e] = puVar7;
    FUN_0049e790(PTR_LAB_047cba48,puVar11);
  }
  puVar1 = PTR_LAB_047cba48;
  puVar7 = (undefined8 *)param_1[0x1a];
  if (puVar7 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)param_1[0x1b];
    if (puVar11 == puVar7) {
      puVar11 = puVar7;
    }
    else {
      do {
        puVar11 = puVar11 + -1;
        pbVar6 = (byte *)*puVar11;
        *puVar11 = 0;
        if (pbVar6 != (byte *)0x0) {
          if ((*pbVar6 & 1) != 0) {
            FUN_0049e790(puVar1,*(undefined8 *)(pbVar6 + 0x10));
          }
          FUN_0049e790(puVar1,pbVar6);
        }
      } while (puVar7 != puVar11);
      puVar11 = (undefined8 *)param_1[0x1a];
    }
    param_1[0x1b] = puVar7;
    FUN_0049e790(PTR_LAB_047cba48,puVar11);
  }
  puVar1 = PTR_LAB_047cba48;
  plVar2 = (long *)param_1[0x17];
  if (plVar2 != (long *)0x0) {
    if ((long *)param_1[0x18] == plVar2) {
      plVar10 = plVar2;
    }
    else {
      plVar10 = (long *)param_1[0x18];
      do {
        plVar8 = plVar10 + -3;
        if (*plVar8 != 0) {
          plVar10[-2] = *plVar8;
          FUN_0049e790(puVar1);
        }
        plVar10 = plVar8;
      } while (plVar2 != plVar8);
      plVar10 = (long *)param_1[0x17];
    }
    param_1[0x18] = plVar2;
    FUN_0049e790(PTR_LAB_047cba48,plVar10);
  }
  puVar1 = PTR_LAB_047cba48;
  plVar2 = (long *)param_1[0x14];
  while (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    if ((*(byte *)(plVar2 + 2) & 1) != 0) {
      FUN_0049e790(puVar1,plVar2[4]);
    }
    FUN_0049e790(puVar1,plVar2);
    plVar2 = (long *)lVar3;
  }
  lVar3 = param_1[0x12];
  param_1[0x12] = 0;
  if (lVar3 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  puVar1 = PTR_LAB_047cba48;
  plVar2 = (long *)param_1[0xf];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_0049e790(puVar1);
  }
  lVar3 = param_1[0xd];
  param_1[0xd] = 0;
  if (lVar3 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  puVar1 = PTR_LAB_047cba48;
  plVar2 = (long *)param_1[10];
  while (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    if ((*(byte *)(plVar2 + 2) & 1) != 0) {
      FUN_0049e790(puVar1,plVar2[4]);
    }
    FUN_0049e790(puVar1,plVar2);
    plVar2 = (long *)lVar3;
  }
  lVar3 = param_1[8];
  param_1[8] = 0;
  if (lVar3 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  puVar1 = PTR_LAB_047cba48;
  plVar2 = (long *)param_1[5];
  while (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    if ((*(byte *)(plVar2 + 2) & 1) != 0) {
      FUN_0049e790(puVar1,plVar2[4]);
    }
    FUN_0049e790(puVar1,plVar2);
    plVar2 = (long *)lVar3;
  }
  lVar3 = param_1[3];
  param_1[3] = 0;
  if (lVar3 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  puVar1 = PTR_LAB_047cba48;
  pbVar6 = (byte *)*param_1;
  if (pbVar6 == (byte *)0x0) {
    return;
  }
  if ((byte *)param_1[1] == pbVar6) {
    pbVar4 = pbVar6;
  }
  else {
    pbVar4 = (byte *)param_1[1];
    do {
      pbVar9 = pbVar4 + -0x18;
      if ((*pbVar9 & 1) != 0) {
        FUN_0049e790(puVar1,*(undefined8 *)(pbVar4 + -8));
      }
      pbVar4 = pbVar9;
    } while (pbVar6 != pbVar9);
    pbVar4 = (byte *)*param_1;
  }
  puVar1 = PTR_LAB_047cba48;
  param_1[1] = pbVar6;
  FUN_0049e790(puVar1,pbVar4);
  return;
}


