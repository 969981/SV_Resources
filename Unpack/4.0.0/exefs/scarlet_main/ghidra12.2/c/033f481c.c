/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033f481c; name: FUN_033f481c
 */


void FUN_033f481c(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x128)) {
  case 0:
    if (*(char *)(param_1 + 0x138) == '\0') {
      param_2 = param_2 & 0xffff7f00 | param_2 - (param_2 >> 0xf & 1) & 0xff;
    }
    goto LAB_033f4984;
  case 1:
    uVar1 = 4;
    if (*(char *)(param_1 + 0x138) != '\0') {
      uVar1 = 0xc;
    }
    uVar1 = uVar1 & param_2 >> 0xc;
    uVar2 = uVar1 >> 1 & 4;
    break;
  case 2:
    uVar1 = 3;
    if (*(char *)(param_1 + 0x138) != '\0') {
      uVar1 = 0xb;
    }
    goto LAB_033f4950;
  case 3:
    uVar1 = 7;
    if (*(char *)(param_1 + 0x138) != '\0') {
      uVar1 = 0xf;
    }
    uVar1 = uVar1 & param_2 >> 0xc;
    uVar2 = uVar1 - (uVar1 >> 1 & 0xfffffffd);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    param_2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | uVar1 << 0xc | 0x100;
    goto LAB_033f4984;
  case 4:
    uVar1 = 0x603;
    if (*(char *)(param_1 + 0x138) != '\0') {
      uVar1 = 0x60b;
    }
    uVar1 = uVar1 & param_2 >> 0xc;
    uVar2 = uVar1 >> 1 & 0x1ff;
    break;
  case 5:
    uVar1 = 0x607;
    if (*(char *)(param_1 + 0x138) != '\0') {
      uVar1 = 0x60f;
    }
    uVar1 = uVar1 & param_2 >> 0xc;
    uVar2 = uVar1 >> 1 & 0xfdfdfdfd;
    break;
  case 6:
    uVar1 = 9;
    if (*(char *)(param_1 + 0x138) == '\0') {
      uVar1 = 1;
    }
LAB_033f4950:
    uVar1 = uVar1 & param_2 >> 0xc;
    uVar2 = uVar1 - (uVar1 >> 1);
    goto LAB_033f4958;
  default:
    goto switchD_033f483c_default;
  }
  uVar2 = uVar1 - uVar2;
LAB_033f4958:
  uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
  param_2 = uVar1 << 0xc | (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | 0x100;
LAB_033f4984:
  *(uint *)(param_1 + 400) = param_2;
switchD_033f483c_default:
  return;
}


