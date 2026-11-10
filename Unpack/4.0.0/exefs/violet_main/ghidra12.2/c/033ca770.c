/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033ca770; name: FUN_033ca770
 */


void FUN_033ca770(long *param_1,uint param_2,float *param_3,float *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  float fVar7;
  
  memset(param_4,0,(ulong)(param_2 << 2) & 0x3fc);
  switch(param_3[2]) {
  case 0.0:
    if ((param_2 >> 0xd & 1) == 0) {
      lVar5 = 0;
    }
    else {
      param_4[1] = param_3[1];
      if ((param_2 >> 0xe & 1) == 0) {
        lVar5 = 2;
      }
      else {
        lVar5 = 3;
        param_4[2] = param_3[1] * 0.5;
      }
    }
    uVar1 = param_2 >> 0xc & 0x210;
    if (uVar1 != 0) {
      param_4[lVar5] = 0.0;
      iVar2 = (int)lVar5;
      param_4[iVar2 + 1] = param_3[1];
      if (uVar1 == 0x210) {
        param_4[iVar2 + 2] = 0.0;
        param_4[iVar2 + 3] = param_3[1];
      }
    }
    break;
  case 1.4013e-45:
    uVar1 = param_2 >> 0xc & 0x210;
    if (uVar1 == 0) break;
    uVar3 = 2;
    if ((param_2 & 0x4000) != 0) {
      uVar3 = 3;
    }
    param_4[uVar3] = param_3[1];
    param_4[uVar3 + 1] = param_3[1];
    if (uVar1 != 0x210) break;
    param_4[uVar3 + 2] = param_3[1] * 0.5;
    fVar7 = param_3[1] * 0.5;
    goto LAB_033ca940;
  case 2.8026e-45:
    uVar1 = param_2 >> 0xc & 0x210;
    if (uVar1 == 0) {
      if (((param_2 & 0x3000) != 0) && (param_4[1] = param_3[1], (param_2 >> 0xe & 1) != 0)) {
        param_4[2] = param_3[1] * 0.5;
      }
      break;
    }
    param_4[1] = param_3[1] * 0.5;
    if ((param_2 >> 0xe & 1) == 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 3;
      param_4[2] = param_3[1] * 0.25;
    }
    param_4[uVar3] = param_3[1] * 0.5;
    param_4[uVar3 + 1] = param_3[1];
    if (uVar1 != 0x210) break;
    param_4[uVar3 + 2] = param_3[1] * 0.25;
    fVar7 = param_3[1] * 0.75;
LAB_033ca940:
    param_4[uVar3 + 3] = fVar7;
    break;
  case 4.2039e-45:
    uVar1 = param_2 - (param_2 >> 0xf & 1) & 0xff;
    if (1 < uVar1) {
      lVar5 = (ulong)uVar1 - 1;
      pfVar6 = param_4;
      do {
        pfVar6 = pfVar6 + 1;
        iVar2 = (**(code **)(*param_1 + 0xe0))(param_1);
        lVar5 = lVar5 + -1;
        *pfVar6 = (float)iVar2 * param_3[1] * 4.656613e-10;
      } while (lVar5 != 0);
    }
  }
  uVar1 = param_2 & 0xff;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        pfVar6 = param_4 + uVar4;
        uVar4 = uVar4 + 2;
        *pfVar6 = *pfVar6 + *param_3;
        pfVar6[1] = pfVar6[1] + *param_3;
      } while (((ulong)uVar1 & 0xfe) != uVar4);
    }
    if ((param_2 & 1) != 0) {
      param_4[uVar4] = param_4[uVar4] + *param_3;
    }
  }
  return;
}


