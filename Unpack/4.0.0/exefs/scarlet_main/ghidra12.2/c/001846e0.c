/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001846e0; name: FUN_001846e0
 */


bool FUN_001846e0(long param_1,long param_2)

{
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  int iVar10;
  long lVar11;
  byte *pbVar12;
  
  lVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    lVar7 = param_2;
  }
  if (param_2 < 0x400) {
    return false;
  }
  lVar5 = 0;
  iVar4 = 0;
  lVar6 = 0;
  lVar7 = lVar7 >> 5;
  lVar8 = 0x20;
LAB_00184730:
  lVar11 = param_2;
  if (lVar8 <= param_2) {
    lVar11 = lVar8;
  }
  pbVar12 = (byte *)(param_1 + lVar6 * lVar7);
  lVar1 = lVar6 * lVar7 + 0x20;
  if (param_2 <= lVar1) {
    lVar1 = param_2;
  }
  pbVar2 = (byte *)(param_1 + lVar1);
  pbVar9 = pbVar12;
  if (pbVar12 < pbVar2) {
    lVar11 = lVar11 + lVar5;
    do {
      if ((-1 < (char)*pbVar9) || (0xbf < *pbVar9)) goto LAB_001848d8;
      pbVar9 = pbVar9 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    pbVar9 = pbVar2;
    if ((long)pbVar2 - (long)pbVar12 < 4) goto LAB_00184790;
LAB_00184714:
    iVar10 = 0;
  }
  else {
LAB_001848d8:
    if (3 < (long)pbVar9 - (long)pbVar12) goto LAB_00184714;
LAB_00184790:
    if (pbVar9 < pbVar2) {
      pbVar12 = pbVar9 + 1;
      bVar3 = *pbVar9;
      if (0x75 < bVar3 - 9) goto LAB_001847c8;
      while (pbVar9 = pbVar12, pbVar9 < pbVar2) {
        while( true ) {
          pbVar12 = pbVar9 + 1;
          bVar3 = *pbVar9;
          if (bVar3 - 9 < 0x76) break;
LAB_001847c8:
          if (0x32 < (byte)(bVar3 + 0x3e)) goto LAB_00184714;
          if (bVar3 < 0xe0) {
            if ((long)pbVar2 - (long)pbVar12 < 1) goto LAB_00184930;
            iVar10 = 0;
            if ((-1 < (char)pbVar9[1]) || (0xbf < pbVar9[1])) goto LAB_00184718;
            pbVar9 = pbVar9 + 2;
          }
          else if (bVar3 < 0xf0) {
            if ((long)pbVar2 - (long)pbVar12 < 2) goto LAB_001848e8;
            iVar10 = 0;
            if ((-1 < (char)*pbVar12) || (0xbf < *pbVar12)) goto LAB_00184718;
            iVar10 = 0;
            if ((-1 < (char)pbVar9[2]) || (0xbf < pbVar9[2])) goto LAB_00184718;
            pbVar9 = pbVar9 + 3;
          }
          else {
            if ((long)pbVar2 - (long)pbVar12 < 3) goto LAB_0018490c;
            iVar10 = 0;
            if ((-1 < (char)*pbVar12) || (0xbf < *pbVar12)) goto LAB_00184718;
            iVar10 = 0;
            if ((-1 < (char)pbVar9[2]) || (0xbf < pbVar9[2])) goto LAB_00184718;
            iVar10 = 0;
            if ((-1 < (char)pbVar9[3]) || (0xbf < pbVar9[3])) goto LAB_00184718;
            pbVar9 = pbVar9 + 4;
          }
          if (pbVar2 <= pbVar9) goto LAB_00184930;
        }
      }
    }
LAB_00184930:
    iVar10 = 1;
  }
  goto LAB_00184718;
  while( true ) {
    bVar3 = *pbVar12;
    iVar10 = 0;
    if ((-1 < (char)bVar3) || (pbVar12 = pbVar12 + 1, 0xbf < bVar3)) break;
LAB_001848e8:
    if (pbVar2 <= pbVar12) goto LAB_00184930;
  }
  goto LAB_00184718;
  while( true ) {
    bVar3 = *pbVar12;
    iVar10 = 0;
    if ((-1 < (char)bVar3) || (pbVar12 = pbVar12 + 1, 0xbf < bVar3)) break;
LAB_0018490c:
    if (pbVar2 <= pbVar12) goto LAB_00184930;
  }
LAB_00184718:
  lVar6 = lVar6 + 1;
  iVar4 = iVar10 + iVar4;
  lVar8 = lVar8 + lVar7;
  lVar5 = lVar5 - lVar7;
  if (lVar6 == 0x20) {
    return 0xd < iVar4;
  }
  goto LAB_00184730;
}


