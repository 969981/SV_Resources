/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f8a64; name: FUN_001f8a64
 */


undefined8 FUN_001f8a64(long param_1,long param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0xe2);
  if ((uVar1 & 0x8080) == 0x80) {
    if ((uVar1 & 0xb) != 1) {
      return 0xffffffff;
    }
    *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
  }
  else {
    if ((~uVar1 & 0xe) != 0 || (uVar1 & 0x11) == 0) {
      return 0xffffffff;
    }
    if (((short)uVar1 < 0) && ((uVar1 & 0x81) != 0x81)) {
      return 0xffffffff;
    }
    if (((uVar1 & 0x2800) == 0x2000) && ((uVar1 & 0x1200) != 0x1200)) {
      return 0xffffffff;
    }
  }
  if (*(char *)(param_2 + 0xc) == '\x05') {
    *(ushort *)(param_1 + 0xe2) = uVar1 & 0x780;
    *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
  }
  return 0;
}


