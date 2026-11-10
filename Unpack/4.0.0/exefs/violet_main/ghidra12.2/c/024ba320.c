/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024ba320; name: FUN_024ba320
 */


void FUN_024ba320(long *param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((param_2 & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x128);
  }
  if ((param_2 >> 1 & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x148);
  }
  if ((param_2 >> 2 & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x168);
  }
  if ((param_2 >> 3 & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x188);
  }
  if ((param_2 >> 4 & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x1a8);
  }
  if ((param_2 >> 5 & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x1c8);
  }
  if ((param_2 >> 6 & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x1e8);
  }
  if ((param_2 >> 7 & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x208);
  }
  if ((param_2 >> 8 & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x228);
  }
  if ((param_2 >> 9 & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x248);
  }
  if ((param_2 >> 10 & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x268);
  }
  if ((param_2 >> 0xb & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x288);
  }
  if ((param_2 >> 0xc & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x2a8);
  }
  if ((param_2 >> 0xd & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x2c8);
  }
  if ((param_2 >> 0xe & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x2e8);
  }
  if ((param_2 >> 0xf & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x308);
  }
  if ((param_2 >> 0x10 & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x328);
  }
  if ((param_2 >> 0x11 & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x348);
  }
  if ((param_2 >> 0x12 & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x368);
  }
  if ((param_2 >> 0x13 & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x388);
  }
  if ((param_2 >> 0x14 & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x3a8);
  }
  if ((param_2 >> 0x15 & 1) != 0) {
    FUN_024ae6a8(lVar1 + 0x3c8);
  }
  if ((param_2 >> 0x16 & 1) != 0) {
    FUN_024ae6a8(lVar1 + 1000);
  }
  if ((param_2 >> 0x17 & 1) == 0) {
    return;
  }
  FUN_024ae6a8(lVar1 + 0x408);
  return;
}


