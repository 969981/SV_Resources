/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fc3b8; name: FUN_007fc3b8
 */


void FUN_007fc3b8(undefined2 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  
  *param_1 = 0;
  FUN_0284e338(param_1 + 4);
  param_1[0x20] = 1;
  *(undefined2 **)(param_1 + 0x2c) = param_1 + 0x3c;
  *(undefined8 *)(param_1 + 0x30) = 0x100;
  puVar2 = PTR_DAT_047d15d0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  lVar3 = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined **)(param_1 + 0x28) = puVar2 + 0x10;
  *(undefined **)(param_1 + 0x38) = puVar2 + 0x68;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  puVar5 = param_1;
  do {
    *(undefined2 *)((long)puVar5 + 0x79) = 0;
    lVar3 = lVar3 + 4;
    *(undefined1 *)((long)puVar5 + 0x7b) = 0;
    puVar5 = (undefined2 *)((long)param_1 + lVar3);
    *(undefined1 *)(puVar5 + 0x3c) = 0;
  } while (lVar3 != 0x100);
  *(undefined8 *)(param_1 + 0x32) = 0;
  puVar1 = PTR_DAT_047d0940 + 0x68;
  *(undefined **)(param_1 + 0xc0) = PTR_DAT_047d0940 + 0x10;
  *(undefined2 **)(param_1 + 0xc4) = param_1 + 0xd4;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined **)(param_1 + 0xd0) = puVar1;
  *(undefined8 *)(param_1 + 200) = 0x50;
  FUN_02bdba04(param_1 + 0xc0);
  *(undefined **)(param_1 + 0x100) = puVar2 + 0x10;
  lVar3 = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined2 **)(param_1 + 0x104) = param_1 + 0x114;
  *(undefined **)(param_1 + 0x110) = puVar2 + 0x68;
  *(undefined8 *)(param_1 + 0x108) = 0x100;
  *(undefined1 *)(param_1 + 0x114) = 0;
  puVar5 = param_1;
  do {
    *(undefined2 *)((long)puVar5 + 0x229) = 0;
    *(undefined1 *)((long)puVar5 + 0x22b) = 0;
    lVar3 = lVar3 + 4;
    puVar5 = (undefined2 *)((long)param_1 + lVar3);
    *(undefined1 *)(puVar5 + 0x114) = 0;
  } while (lVar3 != 0x100);
  *(undefined8 *)(param_1 + 0x10a) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  puVar2 = PTR_DAT_047d15e0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined1 *)(param_1 + 0x19c) = 0;
  *(undefined **)(param_1 + 0x1a0) = puVar2 + 0x10;
  *(undefined **)(param_1 + 0x1b0) = puVar2 + 0x68;
  lVar3 = 0x3004;
  *(undefined2 **)(param_1 + 0x1a4) = param_1 + 0x1b4;
  *(undefined8 *)(param_1 + 0x1a8) = 0x3004;
  *(undefined1 *)(param_1 + 0x1b4) = 0;
  puVar4 = (undefined1 *)((long)param_1 + 0x36b);
  do {
    *(undefined2 *)(puVar4 + -2) = 0;
    lVar3 = lVar3 + -4;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = puVar4 + 4;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0x1aa) = 0;
  *(undefined4 *)(param_1 + 0x19b8) = 0;
  return;
}


