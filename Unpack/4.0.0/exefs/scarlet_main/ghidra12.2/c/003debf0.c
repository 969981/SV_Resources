/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003debf0; name: FUN_003debf0
 */


byte FUN_003debf0(long *param_1,ulong *param_2,undefined4 *param_3,uint *param_4,long param_5)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  byte *pbVar11;
  byte bVar12;
  
  if (param_5 == 0) {
LAB_003ded60:
    FUN_004806c0(0xd,0x72,0x7b,"external/openssl/crypto/asn1/asn1_lib.c",0x65);
    return 0x80;
  }
  pbVar4 = (byte *)*param_1;
  pbVar6 = pbVar4 + 1;
  bVar3 = *pbVar4;
  uVar2 = bVar3 & 0x1f;
  uVar9 = (ulong)uVar2;
  lVar7 = param_5 + -1;
  if (uVar2 == 0x1f) {
    if (lVar7 != 0) {
      uVar9 = 0;
      pbVar6 = pbVar4 + 2;
      lVar7 = param_5 + -2;
      do {
        uVar9 = (ulong)pbVar6[-1] & 0x7f | uVar9 << 7;
        if (-1 < (char)pbVar6[-1]) goto LAB_003dec60;
        if (lVar7 == 0) break;
        pbVar6 = pbVar6 + 1;
        lVar7 = lVar7 + -1;
      } while ((long)uVar9 < 0x1000000);
    }
    goto LAB_003ded60;
  }
LAB_003dec60:
  if (lVar7 == 0) goto LAB_003ded60;
  *param_3 = (int)uVar9;
  *param_4 = bVar3 & 0xc0;
  if (lVar7 < 1) goto LAB_003ded60;
  bVar12 = *pbVar6;
  bVar10 = bVar3 & 0x20;
  if (bVar12 == 0x80) {
    *param_2 = 0;
    if ((bVar3 & 0x20) == 0) goto LAB_003ded60;
    pbVar11 = pbVar6 + 1;
    bVar12 = 1;
    bVar3 = 1;
    if (pbVar4 + (param_5 - (long)pbVar11) < (byte *)0x8000000000000000) goto LAB_003ded38;
  }
  else {
    uVar9 = (ulong)bVar12 & 0x7f;
    pbVar11 = pbVar6 + 1;
    if ((char)bVar12 < '\0') {
      uVar1 = uVar9 + 1;
      if (lVar7 <= (long)uVar1) goto LAB_003ded60;
      if ((int)uVar9 != 0) {
        lVar7 = 0;
        pbVar11 = pbVar6 + (ulong)((int)uVar9 - 1) + 2;
        uVar8 = uVar1;
LAB_003dece0:
        uVar9 = (ulong)pbVar6[lVar7 + 1];
        if (uVar9 == 0) goto code_r0x003decec;
        iVar5 = ~(uint)lVar7 + (int)uVar1;
        if (iVar5 < 9) {
          if (iVar5 < 1) {
            uVar9 = 0;
            pbVar11 = pbVar6 + lVar7 + 1;
          }
          else {
            pbVar11 = pbVar6 + lVar7 + 2;
            pbVar6 = pbVar11;
            if ((int)uVar1 - 2U != (uint)lVar7) {
              do {
                pbVar11 = pbVar6 + 1;
                uVar9 = (ulong)*pbVar6 | uVar9 << 8;
                uVar2 = (int)uVar8 - 1;
                uVar8 = (ulong)uVar2;
                pbVar6 = pbVar11;
              } while (2 < (int)uVar2);
            }
            if ((long)uVar9 < 0) goto LAB_003ded60;
          }
          goto LAB_003ded00;
        }
        goto LAB_003ded60;
      }
LAB_003decfc:
      uVar9 = 0;
    }
LAB_003ded00:
    bVar12 = 0;
    *param_2 = uVar9;
    bVar3 = 0;
    if ((long)uVar9 <= (long)(pbVar4 + (param_5 - (long)pbVar11))) goto LAB_003ded38;
  }
  bVar12 = bVar3;
  FUN_004806c0(0xd,0x72,0x9b,"external/openssl/crypto/asn1/asn1_lib.c",0x5b);
  bVar10 = bVar10 | 0x80;
LAB_003ded38:
  *param_1 = (long)pbVar11;
  return bVar10 | bVar12;
code_r0x003decec:
  uVar2 = (int)uVar8 - 1;
  uVar8 = (ulong)uVar2;
  lVar7 = lVar7 + 1;
  if ((int)uVar2 < 2) goto LAB_003decfc;
  goto LAB_003dece0;
}


