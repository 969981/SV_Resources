/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03042d70; name: FUN_03042d70
 */


void FUN_03042d70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  memcpy(param_1 + 3,param_2 + 3,0x6c);
  param_1[0x11] = 0;
  param_1[0x12] = 0x8000000000000000;
  puVar2 = PTR_PTR_047d1a50;
  FUN_02e9b22c(param_2 + 0x11,PTR_PTR_047d1a50);
  param_1[0x11] = param_2[0x11];
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)((long)param_2 + 0x94);
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x8000000000000000;
  FUN_02e9b22c(param_2 + 0x13,puVar2);
  param_1[0x13] = param_2[0x13];
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((long)param_1 + 0xa4) = *(undefined4 *)((long)param_2 + 0xa4);
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x8000000000000000;
  FUN_02e9b22c(param_2 + 0x15,puVar2);
  param_1[0x15] = param_2[0x15];
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)((long)param_2 + 0xb4);
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0x8000000000000000;
  FUN_02e9b22c(param_2 + 0x17,puVar2);
  param_1[0x17] = param_2[0x17];
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((long)param_1 + 0xc4) = *(undefined4 *)((long)param_2 + 0xc4);
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x8000000000000000;
  FUN_030431ec(param_2 + 0x19,puVar2);
  param_1[0x19] = param_2[0x19];
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)((long)param_1 + 0xd4) = *(undefined4 *)((long)param_2 + 0xd4);
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x8000000000000000;
  FUN_030431ec(param_2 + 0x1b,puVar2);
  param_1[0x1b] = param_2[0x1b];
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)((long)param_1 + 0xe4) = *(undefined4 *)((long)param_2 + 0xe4);
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x8000000000000000;
  FUN_0304325c(param_2 + 0x1d,puVar2);
  param_1[0x1d] = param_2[0x1d];
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  *(undefined4 *)((long)param_1 + 0xf4) = *(undefined4 *)((long)param_2 + 0xf4);
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x8000000000000000;
  FUN_01339774(param_2 + 0x1f,puVar2);
  param_1[0x1f] = param_2[0x1f];
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((long)param_1 + 0x104) = *(undefined4 *)((long)param_2 + 0x104);
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x8000000000000000;
  FUN_03043380(param_2 + 0x21,puVar2);
  param_1[0x21] = param_2[0x21];
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)((long)param_1 + 0x114) = *(undefined4 *)((long)param_2 + 0x114);
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  return;
}


