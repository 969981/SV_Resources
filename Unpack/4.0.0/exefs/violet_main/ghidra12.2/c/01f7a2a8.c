/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f7a2a8; name: FUN_01f7a2a8
 */


void FUN_01f7a2a8(char *param_1,long param_2)

{
  if (*param_1 == '\0') {
    *(undefined **)(param_1 + 8) = PTR_DAT_047cfd80 + 0x10;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
    FUN_01cfa5b0(param_1 + 0x18,param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x30);
    FUN_01cfa5b0(param_1 + 0x40,param_2 + 0x38);
    FUN_01cfa5b0(param_1 + 0x60,param_2 + 0x58);
    FUN_01cfa5b0(param_1 + 0x80,param_2 + 0x78);
    FUN_01cfa5b0(param_1 + 0xa0,param_2 + 0x98);
    FUN_01cfa5b0(param_1 + 0xc0,param_2 + 0xb8);
    FUN_01cfa5b0(param_1 + 0xe0,param_2 + 0xd8);
    FUN_01cfa5b0(param_1 + 0x100,param_2 + 0xf8);
    FUN_01cfa5b0(param_1 + 0x120,param_2 + 0x118);
    FUN_01cfa5b0(param_1 + 0x140,param_2 + 0x138);
    *(undefined **)(param_1 + 0x160) = PTR_DAT_047cfd88 + 0x10;
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x160);
    *param_1 = '\x01';
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
    FUN_01d0e1a8(param_1 + 0x18,param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x30);
    FUN_01d0e1a8(param_1 + 0x40,param_2 + 0x38);
    FUN_01d0e1a8(param_1 + 0x60,param_2 + 0x58);
    FUN_01d0e1a8(param_1 + 0x80,param_2 + 0x78);
    FUN_01d0e1a8(param_1 + 0xa0,param_2 + 0x98);
    FUN_01d0e1a8(param_1 + 0xc0,param_2 + 0xb8);
    FUN_01d0e1a8(param_1 + 0xe0,param_2 + 0xd8);
    FUN_01d0e1a8(param_1 + 0x100,param_2 + 0xf8);
    FUN_01d0e1a8(param_1 + 0x120,param_2 + 0x118);
    FUN_01d0e1a8(param_1 + 0x140,param_2 + 0x138);
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x160);
  }
  return;
}


