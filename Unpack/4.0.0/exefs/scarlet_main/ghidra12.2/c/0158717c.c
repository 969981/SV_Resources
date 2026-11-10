/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0158717c; name: FUN_0158717c
 */


undefined2 FUN_0158717c(long param_1,char param_2)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x208) == param_2) {
    lVar1 = 0;
  }
  else if (*(char *)(param_1 + 0x20c) == param_2) {
    lVar1 = 1;
  }
  else if (*(char *)(param_1 + 0x210) == param_2) {
    lVar1 = 2;
  }
  else if (*(char *)(param_1 + 0x214) == param_2) {
    lVar1 = 3;
  }
  else if (*(char *)(param_1 + 0x218) == param_2) {
    lVar1 = 4;
  }
  else if (*(char *)(param_1 + 0x21c) == param_2) {
    lVar1 = 5;
  }
  else if (*(char *)(param_1 + 0x220) == param_2) {
    lVar1 = 6;
  }
  else if (*(char *)(param_1 + 0x224) == param_2) {
    lVar1 = 7;
  }
  else if (*(char *)(param_1 + 0x228) == param_2) {
    lVar1 = 8;
  }
  else if (*(char *)(param_1 + 0x22c) == param_2) {
    lVar1 = 9;
  }
  else if (*(char *)(param_1 + 0x230) == param_2) {
    lVar1 = 10;
  }
  else if (*(char *)(param_1 + 0x234) == param_2) {
    lVar1 = 0xb;
  }
  else if (*(char *)(param_1 + 0x238) == param_2) {
    lVar1 = 0xc;
  }
  else if (*(char *)(param_1 + 0x23c) == param_2) {
    lVar1 = 0xd;
  }
  else if (*(char *)(param_1 + 0x240) == param_2) {
    lVar1 = 0xe;
  }
  else if (*(char *)(param_1 + 0x244) == param_2) {
    lVar1 = 0xf;
  }
  else if (*(char *)(param_1 + 0x248) == param_2) {
    lVar1 = 0x10;
  }
  else if (*(char *)(param_1 + 0x24c) == param_2) {
    lVar1 = 0x11;
  }
  else if (*(char *)(param_1 + 0x250) == param_2) {
    lVar1 = 0x12;
  }
  else if (*(char *)(param_1 + 0x254) == param_2) {
    lVar1 = 0x13;
  }
  else if (*(char *)(param_1 + 600) == param_2) {
    lVar1 = 0x14;
  }
  else if (*(char *)(param_1 + 0x25c) == param_2) {
    lVar1 = 0x15;
  }
  else if (*(char *)(param_1 + 0x260) == param_2) {
    lVar1 = 0x16;
  }
  else if (*(char *)(param_1 + 0x264) == param_2) {
    lVar1 = 0x17;
  }
  else if (*(char *)(param_1 + 0x268) == param_2) {
    lVar1 = 0x18;
  }
  else if (*(char *)(param_1 + 0x26c) == param_2) {
    lVar1 = 0x19;
  }
  else if (*(char *)(param_1 + 0x270) == param_2) {
    lVar1 = 0x1a;
  }
  else if (*(char *)(param_1 + 0x274) == param_2) {
    lVar1 = 0x1b;
  }
  else if (*(char *)(param_1 + 0x278) == param_2) {
    lVar1 = 0x1c;
  }
  else if (*(char *)(param_1 + 0x27c) == param_2) {
    lVar1 = 0x1d;
  }
  else if (*(char *)(param_1 + 0x280) == param_2) {
    lVar1 = 0x1e;
  }
  else if (*(char *)(param_1 + 0x284) == param_2) {
    lVar1 = 0x1f;
  }
  else if (*(char *)(param_1 + 0x288) == param_2) {
    lVar1 = 0x20;
  }
  else if (*(char *)(param_1 + 0x28c) == param_2) {
    lVar1 = 0x21;
  }
  else if (*(char *)(param_1 + 0x290) == param_2) {
    lVar1 = 0x22;
  }
  else if (*(char *)(param_1 + 0x294) == param_2) {
    lVar1 = 0x23;
  }
  else if (*(char *)(param_1 + 0x298) == param_2) {
    lVar1 = 0x24;
  }
  else {
    if (*(char *)(param_1 + 0x29c) != param_2) {
      return 0;
    }
    lVar1 = 0x25;
  }
  return *(undefined2 *)(param_1 + lVar1 * 4 + 0x20a);
}


