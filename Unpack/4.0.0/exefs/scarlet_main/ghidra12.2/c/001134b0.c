/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001134b0; name: FUN_001134b0
 */


int FUN_001134b0(uint *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  
  uVar4 = param_1[4];
  if (uVar4 < 9) {
    uVar3 = *param_1;
    uVar6 = (ulong)(uVar3 | **(int **)(param_1 + 2) << (ulong)(uVar4 & 0x1f));
    uVar8 = uVar6 & 7;
    iVar7 = (int)uVar8;
  }
  else {
    uVar3 = *param_1;
    uVar6 = (ulong)uVar3;
    uVar8 = uVar6 & 7;
    iVar7 = (int)uVar8;
  }
  if (iVar7 == 0) {
    if ((uVar6 & 0xf) == 0) {
      if (uVar4 < 9) {
        uVar3 = **(uint **)(param_1 + 2) >> (ulong)(9 - uVar4 & 0x1f);
        uVar4 = uVar4 + 0x17;
        param_1[4] = uVar4;
        *param_1 = uVar3;
        *(uint **)(param_1 + 2) = *(uint **)(param_1 + 2) + 1;
      }
      else {
        uVar3 = uVar3 >> 9;
        uVar4 = uVar4 - 9;
        *param_1 = uVar3;
        param_1[4] = uVar4;
      }
      uVar5 = ((uint)uVar6 >> 4 & 0x1f) + 5;
    }
    else {
      if (uVar4 < 5) {
        uVar3 = **(uint **)(param_1 + 2) >> (ulong)(5 - uVar4 & 0x1f);
        uVar4 = uVar4 + 0x1b;
        param_1[4] = uVar4;
        *param_1 = uVar3;
        *(uint **)(param_1 + 2) = *(uint **)(param_1 + 2) + 1;
      }
      else {
        uVar3 = uVar3 >> 5;
        uVar4 = uVar4 - 5;
        *param_1 = uVar3;
        param_1[4] = uVar4;
      }
      uVar5 = ((uint)uVar6 >> 4 & 1) + 3;
    }
  }
  else {
    bVar2 = (&DAT_03cb5670)[uVar8];
    uVar5 = (uint)bVar2;
    uVar1 = bVar2 + 1;
    if (uVar4 < bVar2 || uVar4 == bVar2) {
      uVar3 = **(uint **)(param_1 + 2) >> (ulong)(uVar1 - uVar4 & 0x1f);
      uVar4 = uVar4 + ~(uint)bVar2 + 0x20;
      *param_1 = uVar3;
      param_1[4] = uVar4;
      *(uint **)(param_1 + 2) = *(uint **)(param_1 + 2) + 1;
    }
    else {
      uVar3 = uVar3 >> (ulong)(uVar1 & 0x1f);
      uVar4 = uVar4 - uVar1;
      *param_1 = uVar3;
      param_1[4] = uVar4;
    }
    if ((0xaaUL >> uVar8 & 1) != 0) {
      return param_2;
    }
  }
  if (uVar4 == 0) {
    uVar3 = **(uint **)(param_1 + 2);
    *(uint **)(param_1 + 2) = *(uint **)(param_1 + 2) + 1;
    *param_1 = uVar3 >> 1;
    uVar4 = 0x1f;
  }
  else {
    uVar4 = uVar4 - 1;
    *param_1 = uVar3 >> 1;
  }
  uVar1 = -uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = uVar5;
  }
  param_1[4] = uVar4;
  return uVar1 + param_2;
}


