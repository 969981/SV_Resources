/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01825020; name: FUN_01825020
 */


int FUN_01825020(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = param_2[9];
  if (iVar4 <= param_2[7]) {
    iVar1 = (param_2[2] - *param_2) + 1;
    iVar5 = iVar1 * (iVar4 - param_2[1]) - *param_2;
    iVar7 = param_2[8];
    do {
      uVar6 = *(ulong *)(param_1 + (long)(iVar4 - param_1[1]) * 2 + 6);
      iVar2 = iVar7;
      if (iVar7 <= param_2[6]) {
        iVar2 = param_2[6];
      }
      iVar7 = iVar7 + 1;
      while ((iVar8 = iVar7, param_2[8] = iVar8, iVar8 - iVar2 != 1 &&
             (uVar6 >> ((ulong)(uint)(iVar8 - *param_1) & 0x3f) != 0))) {
        iVar7 = iVar8 + 1;
        if (((uVar6 >> ((ulong)(uint)(iVar8 - *param_1) & 0x3f) & 1) != 0) && (iVar5 + iVar8 != -1))
        {
          return iVar5 + iVar7 + -1;
        }
      }
      bVar3 = iVar4 != param_2[7];
      iVar4 = iVar4 + 1;
      param_2[8] = param_2[4] + -1;
      param_2[9] = iVar4;
      iVar5 = iVar5 + iVar1;
      iVar7 = param_2[4] + -1;
    } while (bVar3);
  }
  return -1;
}


