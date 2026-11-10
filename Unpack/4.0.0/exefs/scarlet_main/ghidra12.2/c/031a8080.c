/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031a8080; name: FUN_031a8080
 */


long FUN_031a8080(uint *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar4 = param_1[1] * *param_1 * param_1[2];
  uVar6 = param_1[0xb] & 0x7fffffff;
  if ((int)uVar6 < (int)uVar4) {
    FUN_031a84a4(param_1 + 8,PTR_PTR_047d1a50,(long)(int)uVar4);
    uVar6 = param_1[0xb] & 0x7fffffff;
  }
  if ((int)uVar6 < (int)uVar4) {
    FUN_031a8598(param_1 + 8,(long)(int)uVar4);
  }
  if (param_1[10] != uVar4) {
    param_1[10] = uVar4;
  }
  uVar6 = param_1[2];
  if (uVar6 == 0) {
    lVar3 = 0;
  }
  else {
    uVar5 = param_1[1];
    lVar3 = 0;
    uVar4 = 0;
    uVar7 = uVar5;
    do {
      if (uVar7 != 0) {
        uVar7 = *param_1;
        uVar6 = 0;
        uVar10 = uVar7;
        do {
          if (uVar10 != 0) {
            uVar9 = 0;
            do {
              plVar1 = (long *)(*(long *)(param_1 + 8) +
                               (long)(int)(uVar9 + uVar7 * (uVar6 + uVar4 * uVar5)) * 0x10);
              *plVar1 = lVar3;
              lVar2 = (ulong)param_1[6] * 0x38;
              uVar5 = param_1[3] >> (ulong)(uVar9 & 0x1f);
              uVar7 = param_1[4] >> (ulong)(uVar9 & 0x1f);
              if (uVar5 < 2) {
                uVar5 = 1;
              }
              if (uVar7 < 2) {
                uVar7 = 1;
              }
              uVar10 = 0;
              if ((byte)(&DAT_0487f133)[lVar2] != 0) {
                uVar10 = (uVar7 - 1) / (uint)(byte)(&DAT_0487f133)[lVar2];
              }
              uVar7 = 0;
              if ((byte)(&DAT_0487f132)[lVar2] != 0) {
                uVar7 = (uVar5 - 1) / (uint)(byte)(&DAT_0487f132)[lVar2];
              }
              uVar5 = param_1[5] >> (ulong)(uVar9 & 0x1f);
              if (uVar5 < 2) {
                uVar5 = 1;
              }
              uVar8 = (ulong)(((uVar7 + 1) * (uint)(ushort)(&DAT_0487f130)[(ulong)param_1[6] * 0x1c]
                              >> 3) * (uVar10 + 1) * uVar5);
              plVar1[1] = uVar8;
              lVar3 = lVar3 + uVar8;
              uVar9 = uVar9 + 1;
              uVar7 = *param_1;
              uVar5 = param_1[1];
              uVar10 = uVar7;
            } while (uVar9 < uVar7);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar5);
        uVar6 = param_1[2];
        uVar7 = uVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  return lVar3;
}


