/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0195f5b0; name: FUN_0195f5b0
 */


undefined1 FUN_0195f5b0(long param_1,short param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(short *)(param_1 + 0x20a) == param_2) {
    lVar1 = 0;
  }
  else if (*(short *)(param_1 + 0x20e) == param_2) {
    lVar1 = 1;
  }
  else if (*(short *)(param_1 + 0x212) == param_2) {
    lVar1 = 2;
  }
  else if (*(short *)(param_1 + 0x216) == param_2) {
    lVar1 = 3;
  }
  else if (*(short *)(param_1 + 0x21a) == param_2) {
    lVar1 = 4;
  }
  else if (*(short *)(param_1 + 0x21e) == param_2) {
    lVar1 = 5;
  }
  else if (*(short *)(param_1 + 0x222) == param_2) {
    lVar1 = 6;
  }
  else if (*(short *)(param_1 + 0x226) == param_2) {
    lVar1 = 7;
  }
  else if (*(short *)(param_1 + 0x22a) == param_2) {
    lVar1 = 8;
  }
  else if (*(short *)(param_1 + 0x22e) == param_2) {
    lVar1 = 9;
  }
  else if (*(short *)(param_1 + 0x232) == param_2) {
    lVar1 = 10;
  }
  else if (*(short *)(param_1 + 0x236) == param_2) {
    lVar1 = 0xb;
  }
  else if (*(short *)(param_1 + 0x23a) == param_2) {
    lVar1 = 0xc;
  }
  else if (*(short *)(param_1 + 0x23e) == param_2) {
    lVar1 = 0xd;
  }
  else if (*(short *)(param_1 + 0x242) == param_2) {
    lVar1 = 0xe;
  }
  else if (*(short *)(param_1 + 0x246) == param_2) {
    lVar1 = 0xf;
  }
  else if (*(short *)(param_1 + 0x24a) == param_2) {
    lVar1 = 0x10;
  }
  else if (*(short *)(param_1 + 0x24e) == param_2) {
    lVar1 = 0x11;
  }
  else if (*(short *)(param_1 + 0x252) == param_2) {
    lVar1 = 0x12;
  }
  else if (*(short *)(param_1 + 0x256) == param_2) {
    lVar1 = 0x13;
  }
  else if (*(short *)(param_1 + 0x25a) == param_2) {
    lVar1 = 0x14;
  }
  else if (*(short *)(param_1 + 0x25e) == param_2) {
    lVar1 = 0x15;
  }
  else if (*(short *)(param_1 + 0x262) == param_2) {
    lVar1 = 0x16;
  }
  else if (*(short *)(param_1 + 0x266) == param_2) {
    lVar1 = 0x17;
  }
  else if (*(short *)(param_1 + 0x26a) == param_2) {
    lVar1 = 0x18;
  }
  else if (*(short *)(param_1 + 0x26e) == param_2) {
    lVar1 = 0x19;
  }
  else if (*(short *)(param_1 + 0x272) == param_2) {
    lVar1 = 0x1a;
  }
  else if (*(short *)(param_1 + 0x276) == param_2) {
    lVar1 = 0x1b;
  }
  else if (*(short *)(param_1 + 0x27a) == param_2) {
    lVar1 = 0x1c;
  }
  else if (*(short *)(param_1 + 0x27e) == param_2) {
    lVar1 = 0x1d;
  }
  else if (*(short *)(param_1 + 0x282) == param_2) {
    lVar1 = 0x1e;
  }
  else if (*(short *)(param_1 + 0x286) == param_2) {
    lVar1 = 0x1f;
  }
  else if (*(short *)(param_1 + 0x28a) == param_2) {
    lVar1 = 0x20;
  }
  else if (*(short *)(param_1 + 0x28e) == param_2) {
    lVar1 = 0x21;
  }
  else if (*(short *)(param_1 + 0x292) == param_2) {
    lVar1 = 0x22;
  }
  else if (*(short *)(param_1 + 0x296) == param_2) {
    lVar1 = 0x23;
  }
  else if (*(short *)(param_1 + 0x29a) == param_2) {
    lVar1 = 0x24;
  }
  else {
    if (*(short *)(param_1 + 0x29e) != param_2) {
      return 0;
    }
    lVar1 = 0x25;
  }
  return *(undefined1 *)(param_1 + lVar1 * 4 + 0x208);
}


