/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00889278; name: FUN_00889278
 */


undefined8 * FUN_00889278(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  uVar3 = param_2[6];
  puVar7 = (undefined8 *)param_2[4];
  if (puVar7 == (undefined8 *)0x0) {
    if (param_3 < uVar3) {
LAB_008892b8:
      if ((puVar7[4] == 0) || (*(char *)(puVar7[4] + 0x39) != '\x01')) {
        *(bool *)((long)param_2 + 0x39) = *(char *)((long)param_2 + 0x39) == '\0';
        *(bool *)((long)puVar7 + 0x39) = *(char *)((long)puVar7 + 0x39) == '\0';
        *(bool *)(param_2[5] + 0x39) = *(char *)(param_2[5] + 0x39) == '\0';
        lVar4 = param_2[5];
        puVar7 = *(undefined8 **)(lVar4 + 0x20);
        if ((puVar7 == (undefined8 *)0x0) || (*(char *)((long)puVar7 + 0x39) != '\x01'))
        goto LAB_0088938c;
        *(undefined8 *)(lVar4 + 0x20) = puVar7[5];
        puVar7[5] = lVar4;
        *(undefined1 *)((long)puVar7 + 0x39) = *(undefined1 *)(lVar4 + 0x39);
        *(undefined1 *)(lVar4 + 0x39) = 1;
        param_2[5] = puVar7;
        param_2[5] = puVar7[4];
        puVar7[4] = param_2;
        *(undefined1 *)((long)puVar7 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
        *(undefined1 *)((long)param_2 + 0x39) = 1;
        *(bool *)((long)puVar7 + 0x39) = *(char *)((long)puVar7 + 0x39) == '\0';
        *(bool *)(puVar7[4] + 0x39) = *(char *)(puVar7[4] + 0x39) == '\0';
        *(bool *)(puVar7[5] + 0x39) = *(char *)(puVar7[5] + 0x39) == '\0';
      }
      else {
LAB_0088938c:
        puVar7 = param_2;
      }
      uVar1 = FUN_00889278(param_1,puVar7[4]);
      puVar7[4] = uVar1;
      puVar5 = (undefined8 *)puVar7[5];
      goto joined_r0x008893a4;
    }
LAB_008893e0:
    lVar4 = param_2[5];
    puVar7 = param_2;
  }
  else {
    if (param_3 < uVar3) {
      if (*(char *)((long)puVar7 + 0x39) != '\x01') goto LAB_008892b8;
      goto LAB_0088938c;
    }
    if (*(char *)((long)puVar7 + 0x39) != '\x01') goto LAB_008893e0;
    param_2[4] = puVar7[5];
    puVar7[5] = param_2;
    *(undefined1 *)((long)puVar7 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
    *(undefined1 *)((long)param_2 + 0x39) = 1;
    lVar4 = puVar7[5];
    uVar3 = puVar7[6];
  }
  if ((uVar3 == param_3) && (lVar4 == 0)) {
    *puVar7 = *(undefined8 *)(param_1 + 8);
    *(undefined8 **)(param_1 + 8) = puVar7;
    return (undefined8 *)0x0;
  }
  if ((*(char *)(lVar4 + 0x39) != '\x01') &&
     ((*(long *)(lVar4 + 0x20) == 0 || (*(char *)(*(long *)(lVar4 + 0x20) + 0x39) != '\x01')))) {
    *(bool *)((long)puVar7 + 0x39) = *(char *)((long)puVar7 + 0x39) == '\0';
    *(bool *)(puVar7[4] + 0x39) = *(char *)(puVar7[4] + 0x39) == '\0';
    *(bool *)(puVar7[5] + 0x39) = *(char *)(puVar7[5] + 0x39) == '\0';
    puVar5 = (undefined8 *)puVar7[4];
    if ((puVar5[4] != 0) && (*(char *)(puVar5[4] + 0x39) == '\x01')) {
      puVar7[4] = puVar5[5];
      puVar5[5] = puVar7;
      *(undefined1 *)((long)puVar5 + 0x39) = *(undefined1 *)((long)puVar7 + 0x39);
      *(undefined1 *)((long)puVar7 + 0x39) = 1;
      *(bool *)((long)puVar5 + 0x39) = *(char *)((long)puVar5 + 0x39) == '\0';
      *(bool *)(puVar5[4] + 0x39) = *(char *)(puVar5[4] + 0x39) == '\0';
      *(bool *)(puVar5[5] + 0x39) = *(char *)(puVar5[5] + 0x39) == '\0';
      puVar7 = puVar5;
    }
  }
  puVar5 = (undefined8 *)puVar7[5];
  if (puVar7[6] == param_3) {
    puVar2 = puVar5;
    do {
      puVar6 = puVar2;
      puVar2 = (undefined8 *)puVar6[4];
    } while (puVar2 != (undefined8 *)0x0);
    if (puVar5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      uVar3 = puVar6[6];
      puVar2 = puVar5;
      do {
        while ((ulong)puVar2[6] <= uVar3) {
          if ((uVar3 <= (ulong)puVar2[6]) ||
             (puVar2 = (undefined8 *)puVar2[5], puVar2 == (undefined8 *)0x0)) goto LAB_00889544;
        }
        puVar2 = (undefined8 *)puVar2[4];
      } while (puVar2 != (undefined8 *)0x0);
    }
LAB_00889544:
    uVar1 = FUN_00889690(puVar5);
    puVar2[5] = uVar1;
    puVar2[4] = puVar7[4];
    *(undefined1 *)((long)puVar2 + 0x39) = *(undefined1 *)((long)puVar7 + 0x39);
    *puVar7 = *(undefined8 *)(param_1 + 8);
    *(undefined8 **)(param_1 + 8) = puVar7;
    puVar5 = (undefined8 *)puVar2[5];
    puVar7 = puVar2;
  }
  else {
    puVar5 = (undefined8 *)FUN_00889278(param_1);
    puVar7[5] = puVar5;
  }
joined_r0x008893a4:
  if ((puVar5 == (undefined8 *)0x0) || (*(char *)((long)puVar5 + 0x39) != '\x01')) {
    puVar2 = (undefined8 *)puVar7[4];
    puVar5 = puVar7;
  }
  else {
    puVar7[5] = puVar5[4];
    puVar5[4] = puVar7;
    *(undefined1 *)((long)puVar5 + 0x39) = *(undefined1 *)((long)puVar7 + 0x39);
    *(undefined1 *)((long)puVar7 + 0x39) = 1;
    puVar2 = (undefined8 *)puVar5[4];
  }
  if ((puVar2 == (undefined8 *)0x0) || (*(char *)((long)puVar2 + 0x39) != '\x01')) {
    return puVar5;
  }
  if ((puVar2[4] == 0) || (*(char *)(puVar2[4] + 0x39) != '\x01')) {
    puVar7 = puVar2;
  }
  else {
    puVar5[4] = puVar2[5];
    puVar2[5] = puVar5;
    *(undefined1 *)((long)puVar2 + 0x39) = *(undefined1 *)((long)puVar5 + 0x39);
    *(undefined1 *)((long)puVar5 + 0x39) = 1;
    puVar7 = (undefined8 *)puVar2[4];
    if (puVar7 == (undefined8 *)0x0) {
      return puVar2;
    }
    puVar5 = puVar2;
    if (*(char *)((long)puVar7 + 0x39) != '\x01') {
      return puVar2;
    }
  }
  if ((puVar5[5] == 0) || (*(char *)(puVar5[5] + 0x39) != '\x01')) {
    return puVar5;
  }
  *(bool *)((long)puVar5 + 0x39) = *(char *)((long)puVar5 + 0x39) == '\0';
  *(bool *)((long)puVar7 + 0x39) = *(char *)((long)puVar7 + 0x39) == '\0';
  *(bool *)(puVar5[5] + 0x39) = *(char *)(puVar5[5] + 0x39) == '\0';
  return puVar5;
}


