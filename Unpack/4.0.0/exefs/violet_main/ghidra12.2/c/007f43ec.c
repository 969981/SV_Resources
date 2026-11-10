/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f43ec; name: FUN_007f43ec
 */


void FUN_007f43ec(long param_1)

{
  long lVar1;
  undefined1 auStack_30 [32];
  
  FUN_007f3fec(param_1 + 0x48);
  FUN_007f3fec(param_1 + 0x60);
  if (*(byte *)(param_1 + 0x28) < 0x18) {
    lVar1 = FUN_01f7c4f0(*(undefined8 *)PTR_DAT_047d0860);
    lVar1 = lVar1 + (ulong)*(byte *)(param_1 + 0x28) * 0x30;
    *(undefined8 *)(lVar1 + 0x6450) = 0;
    *(undefined8 *)(lVar1 + 0x6458) = 0;
    *(undefined8 *)(lVar1 + 0x6460) = 0;
    *(undefined8 *)(lVar1 + 0x6468) = 0;
    *(undefined8 *)(lVar1 + 0x6470) = 0;
    *(undefined4 *)(lVar1 + 0x6478) = 0;
    *(undefined1 *)(lVar1 + 0x647c) = 0;
  }
  FUN_00796584(auStack_30);
  FUN_007965d8(auStack_30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0xfd;
  FUN_00796828(param_1 + 8,auStack_30);
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}


