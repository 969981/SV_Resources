/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02251b80; name: FUN_02251b80
 */


void FUN_02251b80(long param_1)

{
  long lVar1;
  
  FUN_00c81fa8(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x34),
               *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32),0xffffffff,
               *(undefined1 *)(param_1 + 0x30));
  lVar1 = FUN_00888704(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32));
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 0x20;
  if (*(char *)(param_1 + 0x2f) == '\x01') {
    FUN_00c81fa8(*(undefined8 *)(param_1 + 0x10),0x20,*(undefined4 *)(param_1 + 0x18),
                 *(undefined2 *)(param_1 + 0x32),0xffffffff,*(undefined1 *)(param_1 + 0x30));
    lVar1 = FUN_00888704(*(undefined8 *)(param_1 + 0x10),0x20,*(undefined4 *)(param_1 + 0x18),
                         *(undefined2 *)(param_1 + 0x32));
    if (lVar1 != 0) {
      lVar1 = FUN_00888704(*(undefined8 *)(param_1 + 0x10),0x20,*(undefined4 *)(param_1 + 0x18),
                           *(undefined2 *)(param_1 + 0x32));
      *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 0x20;
    }
  }
  return;
}


