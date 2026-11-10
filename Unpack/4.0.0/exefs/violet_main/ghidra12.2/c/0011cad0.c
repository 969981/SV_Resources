/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0011cad0; name: FUN_0011cad0
 */


uint FUN_0011cad0(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  param_2 = param_2 - (param_2 >> 1 & 0x5555);
  uVar5 = (param_2 >> 2 & 0x3333) + (param_2 & 0x3333);
  uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
  uVar5 = uVar5 + (uVar5 >> 8) & 0x1f;
  uVar6 = 0x10 - uVar5;
  if (uVar5 < 8) {
    uVar6 = uVar5;
  }
  uVar2 = 0xffff;
  if (uVar5 < 8) {
    uVar2 = 0;
  }
  if (param_1[4] == 0) {
    uVar5 = 0x1f;
    uVar7 = **(uint **)(param_1 + 2);
    *(uint **)(param_1 + 2) = *(uint **)(param_1 + 2) + 1;
  }
  else {
    uVar7 = *param_1;
    uVar5 = param_1[4] - 1;
  }
  uVar3 = uVar7 >> 1;
  *param_1 = uVar3;
  param_1[4] = uVar5;
  if ((uVar7 & 1) == 0) {
    if (uVar6 < 4) {
      iVar8 = 4;
      uVar6 = 0;
      if (uVar5 != 0) goto LAB_0011cba0;
      do {
        uVar5 = 0x1f;
        uVar7 = **(uint **)(param_1 + 2);
        *(uint **)(param_1 + 2) = *(uint **)(param_1 + 2) + 1;
        while( true ) {
          uVar3 = uVar7 >> 1;
          *param_1 = uVar3;
          param_1[4] = uVar5;
          if ((uVar7 & 1) == 0) {
            if (uVar5 < 4) {
              uVar7 = **(uint **)(param_1 + 2);
              uVar1 = uVar7 >> (ulong)(4 - uVar5 & 0x1f);
              uVar4 = uVar5 & 0x1f;
              uVar5 = uVar5 + 0x1c;
              *param_1 = uVar1;
              param_1[4] = uVar5;
              *(uint **)(param_1 + 2) = *(uint **)(param_1 + 2) + 1;
              uVar4 = uVar3 | uVar7 << (ulong)uVar4;
              uVar3 = uVar1;
            }
            else {
              uVar5 = uVar5 - 4;
              *param_1 = uVar7 >> 5;
              param_1[4] = uVar5;
              uVar4 = uVar3;
              uVar3 = uVar7 >> 5;
            }
            uVar6 = (uVar4 & 0xf) << 0xc | uVar6;
          }
          iVar8 = iVar8 + -1;
          if (iVar8 == 0) goto joined_r0x0011ccb8;
          uVar6 = uVar6 >> 4;
          if (uVar5 == 0) break;
LAB_0011cba0:
          uVar5 = uVar5 - 1;
          uVar7 = uVar3;
        }
      } while( true );
    }
    if (uVar5 < 0x10) {
      uVar7 = **(uint **)(param_1 + 2);
      uVar6 = uVar3 | uVar7 << (ulong)(uVar5 & 0x1f);
      uVar3 = 0x10 - uVar5;
      uVar5 = uVar5 + 0x10;
      uVar3 = uVar7 >> (ulong)(uVar3 & 0x1f);
      uVar6 = uVar6 & 0xffff;
      *param_1 = uVar3;
      param_1[4] = uVar5;
      *(uint **)(param_1 + 2) = *(uint **)(param_1 + 2) + 1;
    }
    else {
      uVar6 = uVar3 & 0xffff;
      uVar3 = uVar7 >> 0x11;
      *param_1 = uVar3;
      uVar5 = uVar5 - 0x10;
      param_1[4] = uVar5;
    }
  }
  else {
    uVar6 = 0;
  }
joined_r0x0011ccb8:
  uVar6 = uVar6 ^ uVar2;
  if (((param_3 >> 0x12 & 1) == 0) || (uVar6 != 0)) {
    if (uVar5 == 0) {
      uVar3 = **(uint **)(param_1 + 2);
      *(uint **)(param_1 + 2) = *(uint **)(param_1 + 2) + 1;
      *param_1 = uVar3 >> 1;
      param_1[4] = 0x1f;
    }
    else {
      *param_1 = uVar3 >> 1;
      param_1[4] = uVar5 - 1;
    }
    if ((uVar3 & 1) != 0) {
      uVar6 = uVar6 | uVar6 << 0x10;
    }
  }
  return uVar6;
}


