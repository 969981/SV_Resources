/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080fd00; name: FUN_0080fd00
 */


void FUN_0080fd00(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  FUN_0080fde0();
  FUN_0078ca60(param_1 + 0xa20);
  FUN_0078ca60(param_1 + 0xa50);
  puVar2 = PTR_DAT_047d15f8;
  *(undefined4 *)(param_1 + 0xa98) = 0;
  *(undefined **)(param_1 + 0xa80) = puVar2 + 0x10;
  *(undefined **)(param_1 + 0xaa0) = puVar2 + 0x68;
  lVar3 = 0;
  *(long *)(param_1 + 0xa88) = param_1 + 0xaa8;
  *(undefined8 *)(param_1 + 0xa90) = 0x200;
  do {
    lVar1 = param_1 + lVar3;
    lVar3 = lVar3 + 3;
    *(undefined2 *)(lVar1 + 0xaa8) = 0;
    *(undefined1 *)(lVar1 + 0xaaa) = 0;
  } while (lVar3 != 0x201);
  *(undefined8 *)(param_1 + 0xa94) = 0;
  *(undefined **)(param_1 + 0xcd0) = puVar2 + 0x68;
  lVar3 = 0;
  *(undefined4 *)(param_1 + 0xcc8) = 0;
  *(undefined **)(param_1 + 0xcb0) = puVar2 + 0x10;
  *(long *)(param_1 + 0xcb8) = param_1 + 0xcd8;
  *(undefined8 *)(param_1 + 0xcc0) = 0x200;
  do {
    lVar1 = param_1 + lVar3;
    lVar3 = lVar3 + 3;
    *(undefined2 *)(lVar1 + 0xcd8) = 0;
    *(undefined1 *)(lVar1 + 0xcda) = 0;
  } while (lVar3 != 0x201);
  *(undefined8 *)(param_1 + 0xcc4) = 0;
  *(undefined2 *)(param_1 + 0xee0) = 0;
  FUN_0284e338(param_1 + 0xee8);
  *(undefined8 *)(param_1 + 0xf08) = 0;
  *(undefined8 *)(param_1 + 0xf10) = 0;
  *(undefined1 *)(param_1 + 0xf18) = 0;
  *(undefined4 *)(param_1 + 0xf1c) = 0;
  *(undefined2 *)(param_1 + 0xf20) = 1;
  return;
}


