/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03495e5c; name: FUN_03495e5c
 */


void FUN_03495e5c(int *param_1)

{
  int iVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar3 = PTR_DAT_047e2fd0;
  puVar4 = *(undefined8 **)(param_1 + 4);
  while (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 4) = puVar4[1];
    if (*(undefined8 **)(param_1 + 2) == puVar4) {
      param_1[2] = 0;
      param_1[3] = 0;
    }
    *param_1 = *param_1 + -1;
    FUN_034948c4(puVar4);
    iVar1 = *(int *)((long)puVar4 + 0x74) + -1;
    *(int *)((long)puVar4 + 0x74) = iVar1;
    if (iVar1 == 0) {
      (**(code **)*puVar4)(puVar4);
      (**(code **)(puVar3 + 0x30))(0,puVar4);
    }
    puVar4 = *(undefined8 **)(param_1 + 4);
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  plVar2 = (long *)*(long *)(param_1 + 10);
  while (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    *(undefined4 *)(plVar2 + 2) = 0;
    *(undefined4 *)(plVar2 + 4) = 0;
    if (plVar2[6] != 0) {
      (**(code **)(puVar3 + 0x30))(0);
    }
    *(undefined4 *)((long)plVar2 + 0x2c) = 0;
    plVar2[6] = 0;
    if (plVar2[1] != 0) {
      *(undefined4 *)(plVar2 + 2) = 0;
      (**(code **)(puVar3 + 0x30))(0);
      plVar2[1] = 0;
      *(undefined4 *)((long)plVar2 + 0x14) = 0;
    }
    if (plVar2[3] != 0) {
      *(undefined4 *)(plVar2 + 4) = 0;
      (**(code **)(puVar3 + 0x30))(0);
      plVar2[3] = 0;
      *(undefined4 *)((long)plVar2 + 0x24) = 0;
    }
    (**(code **)(puVar3 + 0x30))(0,plVar2);
    plVar2 = (long *)lVar5;
  }
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  plVar2 = (long *)*(long *)(param_1 + 0x10);
  while (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    *(undefined4 *)(plVar2 + 2) = 0;
    *(undefined4 *)(plVar2 + 4) = 0;
    if (plVar2[6] != 0) {
      (**(code **)(puVar3 + 0x30))(0);
    }
    *(undefined4 *)((long)plVar2 + 0x2c) = 0;
    plVar2[6] = 0;
    if (plVar2[1] != 0) {
      *(undefined4 *)(plVar2 + 2) = 0;
      (**(code **)(puVar3 + 0x30))(0);
      plVar2[1] = 0;
      *(undefined4 *)((long)plVar2 + 0x14) = 0;
    }
    if (plVar2[3] != 0) {
      *(undefined4 *)(plVar2 + 4) = 0;
      (**(code **)(puVar3 + 0x30))(0);
      plVar2[3] = 0;
      *(undefined4 *)((long)plVar2 + 0x24) = 0;
    }
    (**(code **)(puVar3 + 0x30))(0,plVar2);
    plVar2 = (long *)lVar5;
  }
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  plVar2 = (long *)*(long *)(param_1 + 0x16);
  while (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    *(undefined4 *)(plVar2 + 2) = 0;
    *(undefined4 *)(plVar2 + 4) = 0;
    if (plVar2[6] != 0) {
      (**(code **)(puVar3 + 0x30))(0);
    }
    *(undefined4 *)((long)plVar2 + 0x2c) = 0;
    plVar2[6] = 0;
    if (plVar2[1] != 0) {
      *(undefined4 *)(plVar2 + 2) = 0;
      (**(code **)(puVar3 + 0x30))(0);
      plVar2[1] = 0;
      *(undefined4 *)((long)plVar2 + 0x14) = 0;
    }
    if (plVar2[3] != 0) {
      *(undefined4 *)(plVar2 + 4) = 0;
      (**(code **)(puVar3 + 0x30))(0);
      plVar2[3] = 0;
      *(undefined4 *)((long)plVar2 + 0x24) = 0;
    }
    (**(code **)(puVar3 + 0x30))(0,plVar2);
    plVar2 = (long *)lVar5;
  }
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}


