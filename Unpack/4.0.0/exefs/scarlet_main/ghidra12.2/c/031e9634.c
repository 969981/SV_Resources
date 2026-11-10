/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031e9634; name: FUN_031e9634
 */


uint FUN_031e9634(uint param_1,ulong *param_2)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  size_t sVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  
  while( true ) {
    uVar6 = (uint)*param_2;
    if ((uVar6 >> 0xf & 1) != 0) {
      uVar6 = uVar6 & 0x7fff;
      uVar5 = param_2[(ulong)(byte)(POPCOUNT((char)uVar6) + POPCOUNT((char)(uVar6 >> 8))) + 2];
      if ((uVar5 != 0) && (uVar3 = *(ushort *)(uVar5 + 8), (ulong)uVar3 != 0)) {
        uVar11 = 0;
        do {
          puVar1 = (uint *)(uVar5 + 0x10 + uVar11 * 0x10);
          if (**(char **)(puVar1 + 2) == 't') {
            puVar8 = *(undefined8 **)puVar1;
            if ((((uint)*puVar8 >> 3 & 1) != 0) &&
               (pbVar9 = (byte *)puVar8[(ulong)(byte)POPCOUNT((byte)*puVar8 & 7) + 2],
               pbVar9 != (byte *)0x0)) {
              sVar4 = strlen((char *)pbVar9);
              param_1 = ~param_1;
              if (sVar4 << 0x20 != 0) {
                lVar7 = (long)(sVar4 << 0x20) >> 0x20;
                pbVar10 = pbVar9;
                if ((sVar4 & 1) != 0) {
                  pbVar10 = pbVar9 + 1;
                  param_1 = *(uint *)(&DAT_03d770a0 + (ulong)(param_1 & 0xff ^ (uint)*pbVar9) * 4) ^
                            param_1 >> 8;
                  lVar7 = lVar7 + -1;
                }
                if ((int)sVar4 != 1) {
                  do {
                    uVar6 = *(uint *)(&DAT_03d770a0 + (ulong)(param_1 & 0xff ^ (uint)*pbVar10) * 4)
                            ^ param_1 >> 8;
                    pbVar9 = pbVar10 + 1;
                    pbVar10 = pbVar10 + 2;
                    param_1 = *(uint *)(&DAT_03d770a0 + (ulong)(uVar6 & 0xff ^ (uint)*pbVar9) * 4) ^
                              uVar6 >> 8;
                    lVar7 = lVar7 + -2;
                  } while (lVar7 != 0);
                }
              }
              param_1 = ~param_1;
            }
            param_1 = FUN_031e9634(param_1,puVar8);
          }
          else {
            uVar2 = *puVar1;
            uVar6 = *(uint *)(&DAT_03d770a0 + (ulong)((param_1 ^ uVar2 ^ 0xffffffff) & 0xff) * 4) ^
                    ~param_1 >> 8;
            uVar6 = *(uint *)(&DAT_03d770a0 + (ulong)((uVar6 ^ uVar2 >> 8) & 0xff) * 4) ^ uVar6 >> 8
            ;
            uVar6 = *(uint *)(&DAT_03d770a0 + (ulong)((uVar6 ^ uVar2 >> 0x10) & 0xff) * 4) ^
                    uVar6 >> 8;
            param_1 = *(uint *)(&DAT_03d770a0 + (ulong)(uVar6 & 0xff ^ uVar2 >> 0x18) * 4) ^
                      uVar6 >> 8 ^ 0xffffffff;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar3);
      }
      return param_1;
    }
    if ((*param_2 & 9) != 0) break;
    param_2 = (ulong *)param_2[1];
    if (param_2 == (ulong *)0x0) {
      return param_1;
    }
  }
  return param_1;
}


