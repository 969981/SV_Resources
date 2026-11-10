/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03520050; name: FUN_03520050
 */


void FUN_03520050(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte bVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 local_18;
  
  *param_1 = &PTR_FUN_047c7a40;
  puVar14 = param_1 + 0xb;
  *puVar14 = &PTR_LAB_047c7b00;
  puVar13 = param_1 + 0xe;
  *puVar13 = &PTR_LAB_047c7b70;
  if ((param_1[0x1c] != 0) && (*(long *)((undefined4 *)param_1[0x19] + 4) == 0)) {
    FUN_03468ed8(*(undefined8 *)PTR_DAT_047e70e8,*(undefined4 *)param_1[0x19]);
  }
  if (param_1[0x1b] != 0) {
    FUN_0346034c(param_1[0x1b],0);
  }
  (**(code **)(*(long *)param_1[0x18] + 0x130))((long *)param_1[0x18],1);
  puVar2 = PTR_DAT_047e70c0;
  lVar4 = param_1[0x18];
  lVar5 = *(long *)(lVar4 + 0x90);
  if (((lVar5 != 0) && (bVar8 = *(byte *)(lVar5 + 0x98), (bVar8 >> 1 & 1) != 0)) &&
     (*(short *)(lVar5 + 0x94) == 0)) {
    plVar12 = (long *)(PTR_DAT_047e70c0 + 0x10);
    lVar11 = 0;
    do {
      lVar10 = lVar11;
      lVar11 = *plVar12;
      plVar12 = (long *)(lVar11 + 0x50);
    } while (lVar11 != 0 && lVar4 != lVar11);
    if (lVar11 != 0) {
      plVar12 = (long *)(PTR_DAT_047e70c0 + 0x10);
      if (*(long *)(PTR_DAT_047e70c0 + 0x10) != lVar11) {
        plVar12 = (long *)(lVar10 + 0x50);
      }
      *plVar12 = *(long *)(lVar11 + 0x50);
      if (*(long *)(puVar2 + 8) == lVar11) {
        *(long *)(puVar2 + 8) = lVar10;
      }
      *(int *)puVar2 = *(int *)puVar2 + -1;
      lVar5 = *(long *)(lVar4 + 0x90);
      bVar8 = *(byte *)(lVar5 + 0x98);
    }
    *(byte *)(lVar5 + 0x98) = bVar8 & 0xfd;
    lVar4 = param_1[0x18];
  }
  puVar6 = *(undefined8 **)(lVar4 + 0x150);
  if (puVar6 == (undefined8 *)0x0 || puVar6 == param_1) {
    puVar9 = (undefined8 *)0x0;
    puVar7 = puVar6;
  }
  else {
    puVar7 = puVar6;
    do {
      puVar9 = puVar7;
      puVar7 = (undefined8 *)puVar9[0x30];
    } while (puVar7 != (undefined8 *)0x0 && puVar7 != param_1);
  }
  if (puVar7 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)(lVar4 + 0x150);
    if (puVar7 != puVar6) {
      puVar1 = puVar9 + 0x30;
    }
    *puVar1 = puVar7[0x30];
  }
  (**(code **)(*(long *)param_1[0x18] + 0x30))();
  lVar4 = param_1[0x17];
  if (lVar4 != 0) {
    puVar9 = *(undefined8 **)(lVar4 + 8);
    puVar7 = (undefined8 *)0x0;
    puVar6 = puVar9;
    if ((puVar9 != (undefined8 *)0x0) && (puVar9 != param_1)) {
      do {
        puVar7 = puVar6;
        puVar6 = (undefined8 *)puVar7[1];
      } while (puVar6 != (undefined8 *)0x0 && puVar6 != param_1);
    }
    if (puVar6 != (undefined8 *)0x0) {
      if (puVar6 == puVar9) {
        *(undefined8 *)(lVar4 + 8) = puVar6[1];
      }
      else {
        puVar7[1] = puVar6[1];
      }
    }
  }
  uVar3 = 0;
  if (param_1[0xd] != 0) {
    FUN_03537fa4(param_1[0xd],puVar14);
    uVar3 = param_1[0xd];
  }
  FUN_0351c44c(uVar3,puVar14);
  if (param_1[0x2c] != 0) {
    *(undefined4 *)(param_1 + 0x2d) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[0x2c] = 0;
    *(undefined4 *)((long)param_1 + 0x16c) = 0;
  }
  param_1[0xe] = PTR_DAT_047e7168 + 0x10;
  local_18 = 0xffffffffffffffff;
  if (param_1[0x16] != 0) {
    FUN_034be534(&DAT_048b0298,puVar13);
    FUN_034afae0(param_1[0x16],puVar13,&local_18,1);
    param_1[0x16] = 0;
  }
  FUN_0344d8a0(param_1);
  return;
}


