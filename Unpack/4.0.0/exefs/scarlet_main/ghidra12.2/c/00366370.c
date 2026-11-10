/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00366370; name: FUN_00366370
 */


void FUN_00366370(char *param_1,byte *param_2,ulong param_3,int param_4,int param_5)

{
  byte *pbVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  char *pcVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  char *pcVar12;
  
  pcVar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  if (param_4 != 0) {
    pcVar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_";
  }
  pcVar8 = param_1;
  if (param_5 == 0) {
    uVar6 = (param_3 + 3) / 3 << 2 | 1;
    if (param_3 < 3) goto LAB_00366530;
    lVar9 = 0;
    pbVar10 = param_2;
    pcVar12 = param_1;
    do {
      lVar9 = lVar9 + -3;
      *pcVar12 = pcVar2[*pbVar10 >> 2];
      pcVar12[1] = pcVar2[((ulong)*pbVar10 & 3) << 4 | (ulong)(pbVar10[1] >> 4)];
      pcVar8 = pcVar12 + 4;
      pcVar12[2] = pcVar2[((ulong)pbVar10[1] & 0xf) << 2 | (ulong)(pbVar10[2] >> 6)];
      pbVar1 = pbVar10 + 2;
      pbVar10 = pbVar10 + 3;
      pcVar12[3] = pcVar2[(ulong)*pbVar1 & 0x3f];
      uVar5 = param_3 + lVar9;
      pcVar12 = pcVar8;
    } while (2 < uVar5);
    lVar9 = -lVar9;
    if (uVar5 != 1) goto LAB_00366540;
LAB_0036659c:
    *pcVar8 = pcVar2[param_2[lVar9] >> 2];
    pcVar8[1] = pcVar2[((ulong)param_2[lVar9] & 3) * 0x10];
    cVar7 = '=';
  }
  else {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_3;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_3 + 3;
    uVar6 = (SUB168(auVar3 * ZEXT816(0x8fb823ee08fb823f),8) >> 4 & 0xffffffffffffffe) +
            (SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0x7ffffffffffffffe) * 2 | 1;
    if (param_3 < 3) {
LAB_00366530:
      lVar9 = 0;
      uVar5 = param_3;
    }
    else {
      lVar9 = 0;
      lVar11 = 0;
      pbVar10 = param_2 + 2;
      do {
        lVar11 = lVar11 + 1;
        *pcVar8 = pcVar2[pbVar10[-2] >> 2];
        pcVar8[1] = pcVar2[((ulong)pbVar10[-2] & 3) << 4 | (ulong)(pbVar10[-1] >> 4)];
        pcVar8[2] = pcVar2[((ulong)pbVar10[-1] & 0xf) << 2 | (ulong)(*pbVar10 >> 6)];
        pcVar8[3] = pcVar2[(ulong)*pbVar10 & 0x3f];
        if (lVar11 == 0x13) {
          lVar11 = 0;
          pcVar8[4] = '\r';
          pcVar8[5] = '\n';
          pcVar8 = pcVar8 + 6;
        }
        else {
          pcVar8 = pcVar8 + 4;
        }
        lVar9 = lVar9 + -3;
        uVar5 = param_3 + lVar9;
        pbVar10 = pbVar10 + 3;
      } while (2 < uVar5);
      lVar9 = -lVar9;
    }
    if (uVar5 == 1) goto LAB_0036659c;
LAB_00366540:
    if (uVar5 != 2) goto LAB_003665d4;
    param_2 = param_2 + lVar9;
    *pcVar8 = pcVar2[*param_2 >> 2];
    pcVar8[1] = pcVar2[((ulong)*param_2 & 3) << 4 | (ulong)(param_2[1] >> 4)];
    cVar7 = pcVar2[((ulong)param_2[1] & 0xf) * 4];
  }
  pcVar8[2] = cVar7;
  pcVar8[3] = '=';
  pcVar8 = pcVar8 + 4;
LAB_003665d4:
  if ((pcVar8 < param_1) || (uVar6 <= (ulong)((long)pcVar8 - (long)param_1))) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *pcVar8 = '\0';
  return;
}


