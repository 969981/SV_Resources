/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034115a8; name: FUN_034115a8
 */


void FUN_034115a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)((long)param_1 + 0x8c) = *(undefined1 *)((long)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)param_2 + 0x1c);
  puVar1 = PTR_DAT_047e2fd0;
  if (param_1[5] != 0) {
    *(undefined4 *)(param_1 + 6) = 0;
    (**(code **)(puVar1 + 0x30))(9);
    param_1[5] = 0;
    *(undefined4 *)((long)param_1 + 0x34) = 0;
  }
  param_1[5] = param_2[5];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
  param_2[5] = 0;
  param_2[6] = 0;
  if (param_1[7] != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(puVar1 + 0x30))(9);
    param_1[7] = 0;
    *(undefined4 *)((long)param_1 + 0x44) = 0;
  }
  param_1[7] = param_2[7];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)((long)param_2 + 0x44);
  param_2[7] = 0;
  param_2[8] = 0;
  puVar2 = (undefined8 *)param_1[10];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  if (puVar2 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0xb) != 0) {
      lVar3 = (ulong)*(uint *)(param_1 + 0xb) * 0x50;
      do {
        (**(code **)*puVar2)(puVar2);
        lVar3 = lVar3 + -0x50;
        puVar2 = puVar2 + 10;
      } while (lVar3 != 0);
      puVar2 = (undefined8 *)param_1[10];
    }
    *(undefined4 *)(param_1 + 0xb) = 0;
    (**(code **)(puVar1 + 0x30))(0xb,puVar2);
    param_1[10] = 0;
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
  }
  param_1[10] = param_2[10];
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((long)param_1 + 0x5c) = *(undefined4 *)((long)param_2 + 0x5c);
  param_2[10] = 0;
  param_2[0xb] = 0;
  return;
}


