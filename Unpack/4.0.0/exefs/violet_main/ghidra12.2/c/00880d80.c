/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00880d80; name: FUN_00880d80
 */


undefined8 FUN_00880d80(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x80260201;
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_1 = param_2[2];
    param_1[1] = param_2[4];
    param_1[2] = param_2[5];
    uVar4 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 3) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 10);
    uVar2 = *(undefined8 *)(param_2 + 0xc);
    uVar1 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0xd) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xb) = uVar1;
    *(undefined8 *)(param_1 + 9) = uVar2;
    *(undefined8 *)(param_1 + 7) = uVar4;
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0x12);
    param_1[0x10] = *param_2;
    param_1[0x13] = 0;
    iVar3 = strcmp("Soft Limiter",*(char **)PTR_PTR_047d1e68);
    if (iVar3 == 0) {
      uVar4 = FUN_00880f90(param_1,&DAT_03d0f2d8);
      if (-1 < (int)uVar4) {
        param_1[0xca] = 0;
        *(undefined8 *)(param_1 + 0x4c) = 0;
        *(undefined8 *)(param_1 + 0x4e) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0x3f8000003f800000;
        *(undefined8 *)(param_1 + 0xbc) = 0x3f8000003f800000;
        *(undefined8 *)(param_1 + 200) = 0;
        *(undefined8 *)(param_1 + 0xd4) = 0;
        *(undefined8 *)(param_1 + 0x8c) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0x74) = 0;
        *(undefined8 *)(param_1 + 0x80) = 0;
        param_1[0x52] = 0x3f800000;
        param_1[0xbe] = 0x3f800000;
        param_1[0xd6] = 0;
        *(undefined8 *)(param_1 + 0x8e) = 0;
        *(undefined8 *)(param_1 + 0x9a) = 0;
        param_1[0x76] = 0;
        param_1[0x82] = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x4a) = 0;
        *(undefined8 *)(param_1 + 0x44) = 0;
        *(undefined8 *)(param_1 + 0x46) = 0;
        *(undefined8 *)(param_1 + 0x5c) = 0;
        *(undefined8 *)(param_1 + 0x5e) = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(undefined8 *)(param_1 + 0x6a) = 0;
        *(undefined8 *)(param_1 + 0x53) = 0x3f8000003f800000;
        *(undefined8 *)(param_1 + 0xbf) = 0x3f8000003f800000;
        *(undefined8 *)(param_1 + 0xcb) = 0;
        *(undefined8 *)(param_1 + 0xd7) = 0;
        *(undefined8 *)(param_1 + 0x77) = 0;
        *(undefined8 *)(param_1 + 0x83) = 0;
        param_1[0x55] = 0x3f800000;
        param_1[0xc1] = 0x3f800000;
        param_1[0x56] = 0x3f800000;
        param_1[0xc2] = 0x3f800000;
        param_1[0x57] = 0x3f800000;
        param_1[0xc3] = 0x3f800000;
        param_1[0x58] = 0x3f800000;
        param_1[0xc4] = 0x3f800000;
        param_1[0x59] = 0x3f800000;
        param_1[0xc5] = 0x3f800000;
        param_1[0x5a] = 0x3f800000;
        param_1[0xc6] = 0x3f800000;
        param_1[0x5b] = 0x3f800000;
        param_1[199] = 0x3f800000;
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0x9c) = 0;
        param_1[0xcd] = 0;
        param_1[0xd9] = 0;
        param_1[0x79] = 0;
        param_1[0x85] = 0;
        *(undefined8 *)(param_1 + 0xce) = 0;
        *(undefined8 *)(param_1 + 0xda) = 0;
        *(undefined8 *)(param_1 + 0x92) = 0;
        *(undefined8 *)(param_1 + 0x9e) = 0;
        *(undefined8 *)(param_1 + 0x86) = 0;
        *(undefined8 *)(param_1 + 0xd0) = 0;
        *(undefined8 *)(param_1 + 0xdc) = 0;
        *(undefined8 *)(param_1 + 0x94) = 0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0x88) = 0;
        *(undefined8 *)(param_1 + 0xd2) = 0;
        *(undefined8 *)(param_1 + 0xde) = 0;
        *(undefined8 *)(param_1 + 0x96) = 0;
        *(undefined8 *)(param_1 + 0xa2) = 0;
        *(undefined8 *)(param_1 + 0x7e) = 0;
        *(undefined8 *)(param_1 + 0x8a) = 0;
        param_1[0x11] = 3;
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x62) = 0;
        *(undefined8 *)(param_1 + 0x6c) = 0;
        *(undefined8 *)(param_1 + 0x6e) = 0;
        *(undefined8 *)(param_1 + 0x7a) = 0;
        *(undefined8 *)(param_1 + 0x7c) = 0;
        *(undefined8 *)(param_1 + 100) = 0;
        *(undefined8 *)(param_1 + 0x66) = 0;
        *(undefined8 *)(param_1 + 0x70) = 0;
        *(undefined8 *)(param_1 + 0x72) = 0;
        return uVar4;
      }
    }
    else {
      uVar4 = 0x80800006;
    }
  }
  return uVar4;
}


