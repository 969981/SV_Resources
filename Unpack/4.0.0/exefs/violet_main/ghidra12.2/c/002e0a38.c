/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e0a38; name: FUN_002e0a38
 */


void FUN_002e0a38(undefined4 *param_1,uint param_2)

{
  bool bVar1;
  ushort uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  undefined8 *puVar14;
  
  pbVar8 = *(byte **)(param_1 + 8);
  if (pbVar8 == (byte *)0x0) {
    uVar10 = 0;
  }
  else {
    bVar3 = *pbVar8;
    if (bVar3 < 0x16) {
      uVar10 = 0;
      pbVar12 = pbVar8;
      do {
        pbVar9 = *(byte **)(pbVar12 + 0x10);
        if (param_2 == bVar3) {
          uVar10 = *(ushort *)(pbVar12 + 6) + uVar10;
        }
        else {
          uVar10 = uVar10 + 1;
        }
      } while ((pbVar9 != (byte *)0x0) && (bVar3 = *pbVar9, pbVar12 = pbVar9, bVar3 < 0x16));
    }
    else {
      pbVar9 = (byte *)0x0;
      uVar10 = 0;
    }
    if ((pbVar8 != (byte *)0x0) && (*(byte **)(pbVar8 + 0x10) == pbVar9)) {
      return;
    }
  }
  lVar4 = FUN_0049e770(PTR_FUN_047cba38,(ulong)uVar10 << 3);
  pbVar8 = *(byte **)(param_1 + 8);
  if ((pbVar8 == (byte *)0x0) || (uVar7 = (uint)*pbVar8, 0x15 < *pbVar8)) {
    pbVar12 = (byte *)0x0;
  }
  else {
    uVar13 = uVar10;
    do {
      pbVar12 = *(byte **)(pbVar8 + 0x10);
      if (param_2 == uVar7) {
        uVar2 = *(ushort *)(pbVar8 + 6);
        pbVar9 = pbVar8 + 8;
        if ((ulong)uVar2 < 2) {
          if (uVar2 != 0) goto LAB_002e0bf8;
        }
        else {
          pbVar9 = *(byte **)pbVar9;
LAB_002e0bf8:
          uVar11 = (ulong)uVar2;
          puVar14 = (undefined8 *)(lVar4 + -8 + (long)(int)uVar13 * 8);
          do {
                    /* try { // try from 002e0c04 to 002e0c07 has its CatchHandler @ 002e0c4c */
            uVar6 = FUN_002e4590(*(undefined8 *)(pbVar9 + uVar11 * 8 + -8));
            uVar13 = uVar13 - 1;
            *puVar14 = uVar6;
            bVar1 = 1 < (long)uVar11;
            uVar11 = uVar11 - 1;
            puVar14 = puVar14 + -1;
          } while (bVar1);
        }
                    /* try { // try from 002e0c20 to 002e0c27 has its CatchHandler @ 002e0c48 */
        FUN_002e4804(pbVar8);
      }
      else {
        pbVar8[0x10] = 0;
        pbVar8[0x11] = 0;
        pbVar8[0x12] = 0;
        pbVar8[0x13] = 0;
        pbVar8[0x14] = 0;
        pbVar8[0x15] = 0;
        pbVar8[0x16] = 0;
        pbVar8[0x17] = 0;
        if ((uVar7 == 0x14) && (lVar5 = *(long *)(pbVar8 + 0x20), lVar5 != 0)) {
          pbVar8[0x20] = 0;
          pbVar8[0x21] = 0;
          pbVar8[0x22] = 0;
          pbVar8[0x23] = 0;
          pbVar8[0x24] = 0;
          pbVar8[0x25] = 0;
          pbVar8[0x26] = 0;
          pbVar8[0x27] = 0;
                    /* try { // try from 002e0bc0 to 002e0bc7 has its CatchHandler @ 002e0c40 */
          uVar6 = FUN_002e7144(lVar5);
          *(undefined8 *)(pbVar8 + 0x18) = uVar6;
          FUN_002e3684(lVar5 + 0x10,*(undefined8 *)(lVar5 + 0x18));
          FUN_0049e790(PTR_LAB_047cba48,lVar5);
        }
        uVar13 = uVar13 - 1;
        *(byte **)(lVar4 + (long)(int)uVar13 * 8) = pbVar8;
      }
    } while ((pbVar12 != (byte *)0x0) && (uVar7 = (uint)*pbVar12, pbVar8 = pbVar12, uVar7 < 0x16));
  }
                    /* try { // try from 002e0b04 to 002e0b1f has its CatchHandler @ 002e0c44 */
  lVar5 = FUN_002e4f48(param_2,lVar4,uVar10,*param_1,1);
  bVar3 = FUN_002e7540();
  *(byte *)(lVar5 + 1) = bVar3 & 1;
  *(byte **)(lVar5 + 0x10) = pbVar12;
  *(long *)(param_1 + 8) = lVar5;
  if (lVar4 == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,lVar4);
  return;
}


