/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b3d8c0; name: FUN_02b3d8c0
 */


uint FUN_02b3d8c0(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = 0;
  while( true ) {
    uVar3 = uVar2;
    uVar1 = *param_2;
    uVar6 = (ulong)uVar1;
    *param_1 = uVar1;
    if (uVar1 == 0x10) {
      puVar5 = param_2 + 1;
      uVar1 = *puVar5;
      puVar4 = param_2 + (ulong)uVar1 + 2;
      uVar6 = (ulong)(uVar1 + 1);
      param_1 = param_1 + 1;
      *param_1 = uVar1;
      uVar3 = uVar3 + (int)((ulong)uVar1 + 2);
      uVar7 = uVar6 & 7;
      if ((uVar1 + 1 & 7) != 0) {
        do {
          param_2 = puVar5;
          puVar5 = param_2 + 1;
          uVar6 = (ulong)*puVar5;
          uVar7 = uVar7 - 1;
          param_1 = param_1 + 1;
          *param_1 = *puVar5;
        } while (uVar7 != 0);
      }
      if (6 < uVar1) {
        do {
          param_1[1] = param_2[2];
          param_1[2] = puVar5[2];
          param_1[3] = puVar5[3];
          param_1[4] = puVar5[4];
          param_1[5] = puVar5[5];
          param_1[6] = puVar5[6];
          param_2 = puVar5 + 7;
          param_1[7] = *param_2;
          puVar5 = puVar5 + 8;
          uVar6 = (ulong)*puVar5;
          param_1 = param_1 + 8;
          *param_1 = *puVar5;
        } while (puVar4 != puVar5);
      }
    }
    else {
      puVar4 = param_2;
    }
    if ((uVar6 & 0xffff) == 0) break;
    param_1 = param_1 + 1;
    param_2 = puVar4 + 1;
    uVar2 = uVar3 + 1;
    if (0x7ff < uVar3 + 1) {
      *param_1 = 0;
      return uVar3;
    }
  }
  return uVar3;
}


