/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb4dc0; name: FUN_00cb4dc0
 */


void FUN_00cb4dc0(float param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  memset((void *)(param_2 + 4),0,0x6c);
  switch(param_3) {
  case 0:
    *(undefined8 *)(param_2 + 8) = 0x3f80000000000000;
    *(undefined8 *)(param_2 + 0x10) = 0;
    fVar2 = 0.0;
    fVar3 = 0.0;
    if (ABS(param_1) != 0.0) {
      fVar3 = ABS(param_1) * 0.0;
    }
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(float *)(param_2 + 0x24) = fVar3;
    goto LAB_00cb4f10;
  case 1:
    *(undefined8 *)(param_2 + 0x18) = 0;
    break;
  case 2:
    *(undefined8 *)(param_2 + 0x18) = 0;
    uVar1 = 0x3f80000000000000;
    goto LAB_00cb4e84;
  case 3:
    *(undefined8 *)(param_2 + 0x18) = 0x5f7ffff05f7ffff0;
    break;
  case 4:
    *(undefined8 *)(param_2 + 0x18) = 0x3f0000003c23d70a;
    *(undefined8 *)(param_2 + 8) = 0x3f8000003f800000;
    *(undefined8 *)(param_2 + 0x10) = 0x4120000042c80000;
    *(undefined4 *)(param_2 + 0x20) = 0x3e4ccccd;
    fVar2 = 100.0;
    fVar3 = 1.0;
    if (ABS(param_1) != 0.0) {
      fVar3 = ABS(param_1) * 0.1;
    }
    goto LAB_00cb4f08;
  default:
    fVar2 = *(float *)(param_2 + 0x10);
    goto LAB_00cb4f10;
  }
  uVar1 = 0x3f8000003f800000;
LAB_00cb4e84:
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(undefined8 *)(param_2 + 0x10) = 0x42c8000043480000;
  fVar3 = 0.0;
  if (ABS(param_1) != 0.0) {
    fVar3 = ABS(param_1) * 0.0;
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  fVar2 = 200.0;
LAB_00cb4f08:
  *(float *)(param_2 + 0x24) = fVar3;
LAB_00cb4f10:
  *(undefined8 *)(param_2 + 0x28) = 0x3b23d70b3b23d70b;
  *(undefined8 *)(param_2 + 0x30) = 0x999b67ff3f800000;
  *(undefined2 *)(param_2 + 0x38) = 0x7304;
  *(undefined1 *)(param_2 + 0x3a) = 0x75;
  *(undefined2 *)(param_2 + 0x3b) = 0x7306;
  *(undefined4 *)(param_2 + 100) = 5;
  *(undefined8 *)(param_2 + 0x40) = 0xbe000000bf000000;
  *(undefined8 *)(param_2 + 0x48) = 0xbdb33333be800000;
  *(undefined4 *)(param_2 + 0x50) = 0x3c23d70a;
  if (fVar2 <= 0.0) {
    fVar3 = -1.0;
    fVar2 = -1.0;
  }
  else {
    fVar3 = 5.0 / fVar2;
    fVar2 = 0.005 / fVar2;
  }
  *(float *)(param_2 + 0x54) = fVar3;
  *(float *)(param_2 + 0x58) = fVar2;
  *(undefined8 *)(param_2 + 0x5c) = 0x3d4ccccd3d4ccccd;
  return;
}


