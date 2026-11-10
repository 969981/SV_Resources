/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008101dc; name: FUN_008101dc
 */


void FUN_008101dc(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0078f9d4();
  puVar3 = param_1 + 3;
  *puVar3 = 0;
  param_1[4] = 0;
  FUN_0078f9d4(puVar3);
  puVar2 = (undefined8 *)((long)param_1 + 0x3c);
  *puVar2 = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[6] = puVar2;
  *(undefined4 *)(param_1 + 7) = 0xc;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  FUN_0078f9e0(puVar3,puVar3,puVar2);
  lVar1 = param_1[6];
  puVar2 = (undefined8 *)(lVar1 + 0x48);
  *puVar2 = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  FUN_0078f9e0(puVar3,puVar3,(long)*(int *)((long)param_1 + 0x2c) + (long)puVar2);
  lVar1 = param_1[6];
  puVar2 = (undefined8 *)(lVar1 + 0x90);
  *puVar2 = 0;
  *(undefined8 *)(lVar1 + 0x98) = 0;
  FUN_0078f9e0(puVar3,puVar3,(long)*(int *)((long)param_1 + 0x2c) + (long)puVar2);
  lVar1 = param_1[6];
  puVar2 = (undefined8 *)(lVar1 + 0xd8);
  *puVar2 = 0;
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  FUN_0078f9e0(puVar3,puVar3,(long)*(int *)((long)param_1 + 0x2c) + (long)puVar2);
  lVar1 = param_1[6];
  *(undefined8 *)(lVar1 + 0x120) = 0;
  *(undefined8 *)(lVar1 + 0x128) = 0;
  FUN_0078f9e0(puVar3,puVar3,(long)*(int *)((long)param_1 + 0x2c) + lVar1 + 0x120);
  lVar1 = param_1[6];
  *(undefined8 *)(lVar1 + 0x168) = 0;
  *(undefined8 *)(lVar1 + 0x170) = 0;
  FUN_0078f9e0(puVar3,puVar3,(long)*(int *)((long)param_1 + 0x2c) + lVar1 + 0x168);
  lVar1 = param_1[6];
  *(undefined8 *)(lVar1 + 0x1b0) = 0;
  *(undefined8 *)(lVar1 + 0x1b8) = 0;
  FUN_0078f9e0(puVar3,puVar3,(long)*(int *)((long)param_1 + 0x2c) + lVar1 + 0x1b0);
  lVar1 = param_1[6];
  *(undefined8 *)(lVar1 + 0x1f8) = 0;
  *(undefined8 *)(lVar1 + 0x200) = 0;
  FUN_0078f9e0(puVar3,puVar3,(long)*(int *)((long)param_1 + 0x2c) + lVar1 + 0x1f8);
  lVar1 = param_1[6];
  *(undefined8 *)(lVar1 + 0x240) = 0;
  *(undefined8 *)(lVar1 + 0x248) = 0;
  FUN_0078f9e0(puVar3,puVar3,(long)*(int *)((long)param_1 + 0x2c) + lVar1 + 0x240);
  lVar1 = param_1[6];
  *(undefined8 *)(lVar1 + 0x288) = 0;
  *(undefined8 *)(lVar1 + 0x290) = 0;
  FUN_0078f9e0(puVar3,puVar3,(long)*(int *)((long)param_1 + 0x2c) + lVar1 + 0x288);
  lVar1 = param_1[6];
  *(undefined8 *)(lVar1 + 0x2d0) = 0;
  *(undefined8 *)(lVar1 + 0x2d8) = 0;
  FUN_0078f9e0(puVar3,puVar3,(long)*(int *)((long)param_1 + 0x2c) + lVar1 + 0x2d0);
  lVar1 = param_1[6];
  *(undefined8 *)(lVar1 + 0x318) = 0;
  *(undefined8 *)(lVar1 + 800) = 0;
  FUN_0078f9e0(puVar3,puVar3,(long)*(int *)((long)param_1 + 0x2c) + lVar1 + 0x318);
  return;
}


