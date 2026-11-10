/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f8d708; name: FUN_01f8d708
 */


void FUN_01f8d708(undefined8 param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = FUN_00da75d8();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0xa0) = 0;
    auVar2 = FUN_00da6fd8(param_1,lVar1 + 0x20);
    *(undefined1 (*) [16])(lVar1 + 0x70) = auVar2;
    *(undefined8 *)(lVar1 + 0x560) = *(undefined8 *)(lVar1 + 0x70);
    *(undefined8 *)(lVar1 + 0xb0) = 0;
    *(undefined8 *)(lVar1 + 0xb8) = 0;
    *(undefined8 *)(lVar1 + 0x568) = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(lVar1 + 0x70);
    *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(lVar1 + 0x80) = 0;
    *(undefined8 *)(lVar1 + 0x88) = 0;
    *(undefined8 *)(lVar1 + 0x90) = 0;
    *(undefined8 *)(lVar1 + 0x98) = 0;
  }
  return;
}


