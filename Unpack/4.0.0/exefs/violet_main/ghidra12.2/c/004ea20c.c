/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ea20c; name: FUN_004ea20c
 */


bool FUN_004ea20c(undefined8 param_1,byte *param_2,byte *param_3)

{
  size_t __n;
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  ulong __n_00;
  ulong uVar9;
  ulong uVar10;
  
  bVar2 = *param_2;
  uVar8 = (ulong)(bVar2 >> 1);
  uVar10 = *(ulong *)(param_2 + 8);
  bVar3 = *param_3;
  __n_00 = *(ulong *)(param_3 + 8);
  __n = uVar8;
  if ((bVar2 & 1) != 0) {
    __n = uVar10;
  }
  uVar9 = (ulong)(bVar3 >> 1);
  uVar1 = uVar9;
  if ((bVar3 & 1) != 0) {
    uVar1 = __n_00;
  }
  if (__n == uVar1) {
    pbVar5 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar5 = param_2 + 1;
    }
    pbVar6 = *(byte **)(param_3 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar6 = param_3 + 1;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        uVar7 = uVar8;
        pbVar5 = param_2;
        do {
          pbVar5 = pbVar5 + 1;
          if (*pbVar5 != *pbVar6) goto LAB_004ea2a8;
          uVar7 = uVar7 - 1;
          pbVar6 = pbVar6 + 1;
        } while (uVar7 != 0);
      }
      return true;
    }
    if (__n == 0) {
      return true;
    }
    iVar4 = memcmp(pbVar5,pbVar6,__n);
    if (iVar4 == 0) {
      return true;
    }
  }
  else {
LAB_004ea2a8:
    if ((bVar2 & 1) == 0) {
      uVar10 = uVar8;
    }
  }
  if (uVar1 < uVar10) {
    return false;
  }
  pbVar5 = *(byte **)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    pbVar5 = param_2 + 1;
  }
  if ((bVar3 & 1) == 0) {
    if (uVar10 == 0xffffffffffffffff) {
LAB_004ea378:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    if (uVar10 <= uVar9) {
      uVar9 = uVar10;
    }
    pbVar6 = param_3 + 1;
    __n_00 = uVar9;
  }
  else {
    if (uVar10 == 0xffffffffffffffff) goto LAB_004ea378;
    pbVar6 = *(byte **)(param_3 + 0x10);
    if (uVar10 <= __n_00) {
      __n_00 = uVar10;
    }
  }
  if (__n_00 == 0) {
    if (uVar10 != 0) {
      return false;
    }
  }
  else {
    iVar4 = memcmp(pbVar6,pbVar5,__n_00);
    if (__n_00 < uVar10) {
      return false;
    }
    if (iVar4 != 0) {
      return false;
    }
  }
  pbVar5 = *(byte **)(param_3 + 0x10);
  if ((bVar3 & 1) == 0) {
    pbVar5 = param_3 + 1;
  }
  return pbVar5[__n] == 0x2e;
}


