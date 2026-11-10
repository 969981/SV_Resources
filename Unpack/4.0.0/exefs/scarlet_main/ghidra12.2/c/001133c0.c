/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001133c0; name: FUN_001133c0
 */


undefined1 FUN_001133c0(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *param_1;
  uVar1 = param_1[4];
  puVar4 = *(uint **)(param_1 + 2);
  uVar6 = uVar1 - 2;
  uVar3 = uVar7;
  if (uVar1 < 2 || uVar6 == 0) {
    uVar3 = *puVar4 << (ulong)(uVar1 & 0x1f) | uVar7;
  }
  if ((uVar3 & 1) == 0) {
    if ((uVar3 >> 1 & 1) == 0) {
      if ((uVar3 & 7) == 0) {
        uVar2 = param_2[2];
        param_2[2] = param_2[1];
        param_2[1] = uVar2;
      }
      else {
        uVar2 = param_2[3];
        param_2[3] = param_2[2];
        param_2[2] = uVar2;
      }
      if (uVar1 < 3) {
        uVar7 = *puVar4 >> (ulong)(3 - uVar1 & 0x1f);
        uVar6 = uVar1 + 0x1d;
        puVar4 = puVar4 + 1;
      }
      else {
        uVar7 = uVar7 >> 3;
        uVar6 = uVar1 - 3;
      }
    }
    else {
      uVar2 = param_2[1];
      param_2[1] = *param_2;
      *param_2 = uVar2;
      if (uVar1 < 2) {
        uVar7 = *puVar4 >> (ulong)(2 - uVar1 & 0x1f);
        uVar6 = uVar1 + 0x1e;
        puVar4 = puVar4 + 1;
      }
      else {
        uVar7 = uVar7 >> 2;
      }
    }
  }
  else {
    if (uVar1 == 0) {
      puVar5 = puVar4 + 1;
      uVar7 = *puVar4;
      uVar6 = 0x1f;
    }
    else {
      uVar6 = uVar1 - 1;
      puVar5 = puVar4;
    }
    uVar2 = *param_2;
    uVar7 = uVar7 >> 1;
    puVar4 = puVar5;
  }
  *(uint **)(param_1 + 2) = puVar4;
  *param_1 = uVar7;
  param_1[4] = uVar6;
  return uVar2;
}


