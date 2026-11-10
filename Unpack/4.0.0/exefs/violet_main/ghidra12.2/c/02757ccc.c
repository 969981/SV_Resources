/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02757ccc; name: FUN_02757ccc
 */


long * FUN_02757ccc(long *param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar5 = param_1[1];
  if ((uVar5 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar5 < (float)(param_1[0xb] + 1))) {
    uVar5 = (ulong)(uVar5 < 3 || (uVar5 & uVar5 - 1) != 0) | uVar5 << 1;
    uVar7 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    FUN_00c5f53c(param_1,uVar7);
    uVar5 = param_1[1];
  }
  uVar7 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar7 < 2) {
    uVar6 = uVar5 - 1 & param_2;
  }
  else {
    uVar6 = param_2;
    if (uVar5 <= param_2) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = param_2 / uVar5;
      }
      uVar6 = param_2 - uVar6 * uVar5;
    }
  }
  plVar8 = *(long **)(*param_1 + uVar6 * 8);
  if (plVar8 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else if (uVar7 < 2) {
    bVar1 = 0;
    do {
      bVar2 = bVar1;
      plVar4 = plVar8;
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
        return plVar4;
      }
      if ((plVar8[1] & uVar5 - 1) != uVar6) {
        return plVar4;
      }
      if (plVar8[1] == param_2) {
        bVar3 = plVar8[2] == *param_3;
      }
      else {
        bVar3 = false;
      }
      bVar1 = bVar2 | bVar3;
    } while ((bVar3) || ((bool)(bVar2 ^ 1)));
  }
  else {
    bVar1 = 0;
    do {
      bVar2 = bVar1;
      plVar4 = plVar8;
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
        return plVar4;
      }
      uVar7 = plVar8[1];
      if (uVar7 < uVar5) {
        uVar9 = uVar7;
      }
      else {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar7 / uVar5;
        }
        uVar9 = uVar7 - uVar9 * uVar5;
      }
      if (uVar9 != uVar6) {
        return plVar4;
      }
      if (uVar7 == param_2) {
        bVar3 = plVar8[2] == *param_3;
      }
      else {
        bVar3 = false;
      }
      bVar1 = bVar2 | bVar3;
    } while ((bVar3) || ((bool)(bVar2 ^ 1)));
  }
  return plVar4;
}


