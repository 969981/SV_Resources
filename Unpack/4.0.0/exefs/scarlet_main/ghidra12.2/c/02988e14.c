/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02988e14; name: FUN_02988e14
 */


undefined1 FUN_02988e14(long param_1,int param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x98) == param_2) {
    lVar1 = 0;
  }
  else if (*(int *)(param_1 + 0xa0) == param_2) {
    lVar1 = 1;
  }
  else if (*(int *)(param_1 + 0xa8) == param_2) {
    lVar1 = 2;
  }
  else if (*(int *)(param_1 + 0xb0) == param_2) {
    lVar1 = 3;
  }
  else if (*(int *)(param_1 + 0xb8) == param_2) {
    lVar1 = 4;
  }
  else if (*(int *)(param_1 + 0xc0) == param_2) {
    lVar1 = 5;
  }
  else if (*(int *)(param_1 + 200) == param_2) {
    lVar1 = 6;
  }
  else if (*(int *)(param_1 + 0xd0) == param_2) {
    lVar1 = 7;
  }
  else if (*(int *)(param_1 + 0xd8) == param_2) {
    lVar1 = 8;
  }
  else if (*(int *)(param_1 + 0xe0) == param_2) {
    lVar1 = 9;
  }
  else if (*(int *)(param_1 + 0xe8) == param_2) {
    lVar1 = 10;
  }
  else if (*(int *)(param_1 + 0xf0) == param_2) {
    lVar1 = 0xb;
  }
  else if (*(int *)(param_1 + 0xf8) == param_2) {
    lVar1 = 0xc;
  }
  else if (*(int *)(param_1 + 0x100) == param_2) {
    lVar1 = 0xd;
  }
  else if (*(int *)(param_1 + 0x108) == param_2) {
    lVar1 = 0xe;
  }
  else if (*(int *)(param_1 + 0x110) == param_2) {
    lVar1 = 0xf;
  }
  else if (*(int *)(param_1 + 0x118) == param_2) {
    lVar1 = 0x10;
  }
  else if (*(int *)(param_1 + 0x120) == param_2) {
    lVar1 = 0x11;
  }
  else if (*(int *)(param_1 + 0x128) == param_2) {
    lVar1 = 0x12;
  }
  else if (*(int *)(param_1 + 0x130) == param_2) {
    lVar1 = 0x13;
  }
  else if (*(int *)(param_1 + 0x138) == param_2) {
    lVar1 = 0x14;
  }
  else if (*(int *)(param_1 + 0x140) == param_2) {
    lVar1 = 0x15;
  }
  else if (*(int *)(param_1 + 0x148) == param_2) {
    lVar1 = 0x16;
  }
  else if (*(int *)(param_1 + 0x150) == param_2) {
    lVar1 = 0x17;
  }
  else if (*(int *)(param_1 + 0x158) == param_2) {
    lVar1 = 0x18;
  }
  else if (*(int *)(param_1 + 0x160) == param_2) {
    lVar1 = 0x19;
  }
  else if (*(int *)(param_1 + 0x168) == param_2) {
    lVar1 = 0x1a;
  }
  else if (*(int *)(param_1 + 0x170) == param_2) {
    lVar1 = 0x1b;
  }
  else if (*(int *)(param_1 + 0x178) == param_2) {
    lVar1 = 0x1c;
  }
  else {
    if (*(int *)(param_1 + 0x180) != param_2) {
      return 0;
    }
    lVar1 = 0x1d;
  }
  return *(undefined1 *)(param_1 + lVar1 * 8 + 0x9c);
}


