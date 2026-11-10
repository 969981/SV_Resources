/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0201e2a8; name: FUN_0201e2a8
 */


void FUN_0201e2a8(long param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  int *piVar3;
  ushort *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  long local_60 [3];
  long *local_48;
  
  *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xe8)) = 0;
  *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xec)) = 0;
  *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xf0)) = 0;
  *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xf4)) = 0;
  puVar7 = *(undefined8 **)(param_1 + 0x88);
  puVar6 = *(undefined8 **)(param_1 + 0x90);
  if (puVar7 == puVar6) {
    puVar6 = puVar7;
  }
  else {
    do {
      FUN_00c98090(local_60,puVar7);
      lVar2 = local_60[0];
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      if (lVar2 == 0x33b284d9d88002cb) goto LAB_0201e344;
      puVar7 = puVar7 + 2;
    } while (puVar6 != puVar7);
    puVar7 = puVar6;
LAB_0201e344:
    puVar6 = *(undefined8 **)(param_1 + 0x90);
  }
  if ((puVar7 == (undefined8 *)0x0) || (puVar6 == puVar7)) goto LAB_0201e3d8;
  piVar3 = (int *)puVar7[1];
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)*puVar7;
    uVar8 = 0;
    if (piVar3 != (int *)0x0) goto LAB_0201e368;
  }
  else {
LAB_0201e368:
    puVar4 = (ushort *)((long)piVar3 - (long)*piVar3);
    if ((((6 < *puVar4) && ((ulong)puVar4[3] != 0)) &&
        (8 < *puVar4 && *(char *)((long)piVar3 + (ulong)puVar4[3]) == '\x01')) &&
       ((ulong)puVar4[4] != 0)) {
      puVar1 = (uint *)((long)piVar3 + (ulong)puVar4[4]);
      piVar3 = (int *)((long)puVar1 + (ulong)*puVar1);
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar5 != 0)) {
        uVar8 = *(undefined4 *)((long)piVar3 + uVar5);
        goto LAB_0201e3c8;
      }
    }
    uVar8 = 0;
  }
LAB_0201e3c8:
  *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xe8)) = uVar8;
  puVar6 = *(undefined8 **)(param_1 + 0x90);
LAB_0201e3d8:
  puVar7 = *(undefined8 **)(param_1 + 0x88);
  if (puVar7 != puVar6) {
    do {
      FUN_00c98090(local_60,puVar7);
      lVar2 = local_60[0];
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      if (lVar2 == 0x5044aba68e1fc6e0) goto LAB_0201e424;
      puVar7 = puVar7 + 2;
    } while (puVar6 != puVar7);
    puVar7 = puVar6;
LAB_0201e424:
    puVar6 = *(undefined8 **)(param_1 + 0x90);
  }
  if ((puVar7 != (undefined8 *)0x0) && (puVar6 != puVar7)) {
    piVar3 = (int *)puVar7[1];
    if ((piVar3 == (int *)0x0) && (piVar3 = (int *)*puVar7, piVar3 == (int *)0x0)) {
      uVar8 = 0;
    }
    else {
      puVar4 = (ushort *)((long)piVar3 - (long)*piVar3);
      uVar8 = 0;
      if ((((6 < *puVar4) && ((ulong)puVar4[3] != 0)) && (8 < *puVar4)) &&
         ((*(char *)((long)piVar3 + (ulong)puVar4[3]) == '\x02' && ((ulong)puVar4[4] != 0)))) {
        puVar1 = (uint *)((long)piVar3 + (ulong)puVar4[4]);
        piVar3 = (int *)((long)puVar1 + (ulong)*puVar1);
        if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
           (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar5 != 0)) {
          uVar8 = *(undefined4 *)((long)piVar3 + uVar5);
        }
      }
    }
    *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xec)) = uVar8;
    puVar6 = *(undefined8 **)(param_1 + 0x90);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x88);
  if (puVar7 != puVar6) {
    do {
      FUN_00c98090(local_60,puVar7);
      lVar2 = local_60[0];
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      if (lVar2 == -0x652351d8d6e50486) goto LAB_0201e508;
      puVar7 = puVar7 + 2;
    } while (puVar6 != puVar7);
    puVar7 = puVar6;
LAB_0201e508:
    puVar6 = *(undefined8 **)(param_1 + 0x90);
  }
  if ((puVar7 != (undefined8 *)0x0) && (puVar6 != puVar7)) {
    piVar3 = (int *)puVar7[1];
    if ((piVar3 == (int *)0x0) && (piVar3 = (int *)*puVar7, piVar3 == (int *)0x0)) {
      uVar8 = 0;
    }
    else {
      puVar4 = (ushort *)((long)piVar3 - (long)*piVar3);
      uVar8 = 0;
      if ((((6 < *puVar4) && ((ulong)puVar4[3] != 0)) && (8 < *puVar4)) &&
         ((*(char *)((long)piVar3 + (ulong)puVar4[3]) == '\x02' && ((ulong)puVar4[4] != 0)))) {
        puVar1 = (uint *)((long)piVar3 + (ulong)puVar4[4]);
        piVar3 = (int *)((long)puVar1 + (ulong)*puVar1);
        if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
           (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar5 != 0)) {
          uVar8 = *(undefined4 *)((long)piVar3 + uVar5);
        }
      }
    }
    *(undefined4 *)(*param_2 + (ulong)*(uint *)(param_1 + 0xf0)) = uVar8;
  }
  return;
}


