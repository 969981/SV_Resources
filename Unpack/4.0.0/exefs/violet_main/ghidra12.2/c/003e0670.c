/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e0670; name: FUN_003e0670
 */


void FUN_003e0670(uint *param_1,long *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  
  pbVar7 = *(byte **)(param_1 + 2);
  uVar8 = *param_1;
  if (pbVar7 == (byte *)0x0 || uVar8 == 0) {
    uVar5 = 0;
    uVar11 = 0;
    uVar8 = 0;
    uVar4 = 1;
    goto joined_r0x003e06e8;
  }
  bVar17 = *pbVar7;
  uVar5 = (ulong)(int)uVar8;
  if ((param_1[1] >> 8 & 1) == 0) {
    uVar8 = 0;
    uVar11 = (ulong)((param_1[1] & 0x100) == 0 && (char)bVar17 < '\0');
    uVar4 = uVar11 + uVar5;
    goto joined_r0x003e06e8;
  }
  if (0x80 < bVar17) {
    uVar8 = 0xff;
    uVar11 = 1;
    uVar4 = uVar5 + 1;
    goto joined_r0x003e06e8;
  }
  if (bVar17 != 0x80) {
    uVar11 = 0;
    uVar8 = 0xff;
    uVar4 = uVar5;
    goto joined_r0x003e06e8;
  }
  if (uVar8 < 2) {
    uVar11 = 0;
  }
  else {
    uVar11 = uVar5 - 1;
    if (uVar11 < 4) {
      bVar10 = 0;
      uVar4 = 1;
LAB_003e0790:
      uVar8 = uVar8 - (int)uVar4;
      uVar12 = ~uVar4;
      uVar11 = (ulong)uVar8 & 3;
      if ((uVar8 & 3) != 0) {
        do {
          pbVar9 = pbVar7 + uVar4;
          uVar4 = uVar4 + 1;
          bVar10 = bVar10 | *pbVar9;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (2 < uVar12 + uVar5) {
        lVar13 = uVar5 - uVar4;
        pbVar9 = pbVar7 + uVar4 + 1;
        do {
          pbVar3 = pbVar9 + -1;
          bVar17 = *pbVar9;
          pbVar1 = pbVar9 + 1;
          pbVar2 = pbVar9 + 2;
          pbVar9 = pbVar9 + 4;
          bVar10 = bVar10 | *pbVar3 | bVar17 | *pbVar1 | *pbVar2;
          lVar13 = lVar13 + -4;
        } while (lVar13 != 0);
      }
    }
    else {
      uVar15 = uVar11 & 0xfffffffffffffffc;
      bVar17 = 0;
      bVar18 = 0;
      bVar16 = 0;
      bVar10 = 0;
      uVar4 = uVar15 | 1;
      uVar12 = uVar15;
      pbVar9 = pbVar7;
      do {
        bVar17 = bVar17 | pbVar9[1];
        bVar18 = bVar18 | pbVar9[2];
        bVar16 = bVar16 | pbVar9[3];
        bVar10 = bVar10 | pbVar9[4];
        uVar12 = uVar12 - 4;
        pbVar9 = pbVar9 + 4;
      } while (uVar12 != 0);
      bVar10 = bVar10 | bVar16 | bVar18 | bVar17;
      if (uVar11 != uVar15) goto LAB_003e0790;
    }
    uVar11 = (ulong)(bVar10 != 0);
  }
  uVar8 = -(int)uVar11;
  uVar4 = uVar11 + uVar5;
joined_r0x003e06e8:
  if ((param_2 == (long *)0x0) || (puVar14 = (undefined1 *)*param_2, puVar14 == (undefined1 *)0x0))
  {
    return;
  }
  *puVar14 = (char)uVar8;
  if (uVar5 != 0) {
    pbVar7 = pbVar7 + uVar5;
    uVar6 = uVar8 & 1;
    puVar14 = puVar14 + uVar5 + uVar11;
    uVar11 = uVar5;
    if ((uVar5 & 1) != 0) {
      pbVar7 = pbVar7 + -1;
      uVar6 = uVar6 + ((uint)*pbVar7 ^ uVar8 & 0xff);
      puVar14 = puVar14 + -1;
      *puVar14 = (char)uVar6;
      uVar6 = uVar6 >> 8;
      uVar11 = uVar5 - 1;
    }
    if (uVar5 != 1) {
      puVar14 = puVar14 + -1;
      pbVar7 = pbVar7 + -1;
      do {
        uVar6 = uVar6 + ((*pbVar7 ^ uVar8) & 0xff);
        *puVar14 = (char)uVar6;
        uVar6 = (uVar6 >> 8) + ((pbVar7[-1] ^ uVar8) & 0xff);
        uVar11 = uVar11 - 2;
        puVar14[-1] = (char)uVar6;
        uVar6 = uVar6 >> 8;
        puVar14 = puVar14 + -2;
        pbVar7 = pbVar7 + -2;
      } while (uVar11 != 0);
    }
  }
  *param_2 = *param_2 + uVar4;
  return;
}


