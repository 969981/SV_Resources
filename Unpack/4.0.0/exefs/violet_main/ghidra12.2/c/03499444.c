/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03499444; name: FUN_03499444
 */


void FUN_03499444(ulong *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  puVar2 = PTR_DAT_047e2fd0;
  puVar4 = (ulong *)*param_1;
  puVar5 = (ulong *)0x0;
  if (puVar4 != (ulong *)0x0) {
    do {
      *(int *)(puVar4[1] + 0x84) = *(int *)(puVar4[1] + 0x84) + -1;
      puVar3 = (undefined8 *)puVar4[1];
      iVar1 = *(int *)((long)puVar3 + 0x74) + -1;
      *(int *)((long)puVar3 + 0x74) = iVar1;
      if (iVar1 == 0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(puVar2 + 0x30))(0,puVar3);
      }
      if (puVar4[2] != 0) {
        *(undefined4 *)(puVar4 + 3) = 0;
        (**(code **)(puVar2 + 0x30))(0);
        puVar4[2] = 0;
        *(undefined4 *)((long)puVar4 + 0x1c) = 0;
      }
      puVar4 = (ulong *)*puVar4;
    } while (puVar4 != (ulong *)0x0);
    puVar5 = (ulong *)*param_1;
  }
  if (puVar5 == (ulong *)0x0) {
    puVar4 = (ulong *)param_1[2];
    puVar2 = PTR_DAT_047e2fd0;
    if (puVar4 == (ulong *)0x0) goto LAB_03499560;
  }
  else {
    do {
      puVar4 = puVar5;
      *param_1 = *puVar4;
      if ((ulong *)param_1[1] == puVar4) {
        param_1[1] = 0;
      }
      *puVar4 = param_1[2];
      param_1[2] = (ulong)puVar4;
      *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + -1;
      puVar5 = (ulong *)*param_1;
      puVar2 = PTR_DAT_047e2fd0;
    } while ((ulong *)*param_1 != (ulong *)0x0);
  }
  do {
    uVar6 = *puVar4;
    if ((puVar4 < param_1[3]) || (param_1[3] + (ulong)(uint)param_1[4] * 0x20 <= puVar4)) {
      (**(code **)(puVar2 + 0x30))(0);
    }
    puVar4 = (ulong *)uVar6;
  } while (uVar6 != 0);
LAB_03499560:
  if (param_1[3] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[3] = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


