/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033e6230; name: FUN_033e6230
 */


void FUN_033e6230(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x7c)) {
  case 0:
    if (*(char *)(param_1 + 0x8c) == '\0') {
      param_2 = param_2 & 0xffff7f00 | param_2 - (param_2 >> 0xf & 1) & 0xff;
    }
    goto LAB_033e6384;
  case 1:
    uVar1 = 4;
    if (*(char *)(param_1 + 0x8c) != '\0') {
      uVar1 = 0xc;
    }
    uVar1 = uVar1 & param_2 >> 0xc;
    uVar2 = uVar1 >> 1 & 4;
    break;
  case 2:
    uVar1 = 3;
    if (*(char *)(param_1 + 0x8c) != '\0') {
      uVar1 = 0xb;
    }
    uVar1 = uVar1 & param_2 >> 0xc;
    uVar2 = uVar1 - (uVar1 >> 1);
    goto LAB_033e6358;
  case 3:
    uVar1 = 7;
    if (*(char *)(param_1 + 0x8c) != '\0') {
      uVar1 = 0xf;
    }
    uVar1 = uVar1 & param_2 >> 0xc;
    uVar2 = uVar1 - (uVar1 >> 1 & 0xfffffffd);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    param_2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | uVar1 << 0xc | 0x100;
    goto LAB_033e6384;
  case 4:
    uVar1 = 0x603;
    if (*(char *)(param_1 + 0x8c) != '\0') {
      uVar1 = 0x60b;
    }
    uVar1 = uVar1 & param_2 >> 0xc;
    uVar2 = uVar1 >> 1 & 0x1ff;
    break;
  case 5:
    uVar1 = 0x607;
    if (*(char *)(param_1 + 0x8c) != '\0') {
      uVar1 = 0x60f;
    }
    uVar1 = uVar1 & param_2 >> 0xc;
    uVar2 = uVar1 >> 1 & 0xfdfdfdfd;
    break;
  default:
    goto switchD_033e6250_default;
  }
  uVar2 = uVar1 - uVar2;
LAB_033e6358:
  uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
  param_2 = uVar1 << 0xc | (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | 0x100;
LAB_033e6384:
  *(uint *)(param_1 + 0xb8) = param_2;
switchD_033e6250_default:
  return;
}


