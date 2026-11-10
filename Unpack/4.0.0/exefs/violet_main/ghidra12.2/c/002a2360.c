/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002a2360; name: FUN_002a2360
 */


void FUN_002a2360(byte *param_1,ulong *param_2,void *param_3,size_t param_4)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  uVar6 = *param_2;
  puVar8 = (ulong *)param_2[1];
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  puVar1 = param_2 + 1;
  if ((uVar6 & 1) != 0) {
    puVar1 = puVar8;
  }
  uVar6 = uVar6 >> 1;
  if (uVar6 != 0) {
    uVar5 = puVar1[1];
    puVar8 = puVar1 + 2;
    if (uVar6 != 1) {
      uVar11 = uVar6 * 0x10 - 0x20;
      puVar13 = puVar8;
      puVar9 = puVar1;
      if (0x7f < uVar11) {
        lVar16 = 0;
        lVar17 = 0;
        lVar18 = 0;
        uVar11 = (uVar11 >> 4) + 1;
        uVar2 = 8;
        if ((uVar11 & 7) != 0) {
          uVar2 = uVar11 & 7;
        }
        lVar12 = uVar11 - uVar2;
        lVar20 = 0;
        lVar19 = 0;
        lVar15 = 0;
        lVar14 = 0;
        lVar3 = lVar12 * 2;
        lVar4 = lVar12 * 2;
        puVar13 = puVar1 + 0xb;
        do {
          uVar5 = uVar5 + param_4 + puVar13[-8];
          lVar18 = lVar18 + param_4 + puVar13[-6];
          lVar16 = lVar16 + param_4 + puVar13[-4];
          lVar17 = lVar17 + param_4 + puVar13[-2];
          lVar19 = lVar19 + param_4 + *puVar13;
          lVar20 = lVar20 + param_4 + puVar13[2];
          lVar14 = lVar14 + param_4 + puVar13[4];
          lVar15 = lVar15 + param_4 + puVar13[6];
          lVar12 = lVar12 + -8;
          puVar13 = puVar13 + 0x10;
        } while (lVar12 != 0);
        uVar5 = lVar14 + lVar19 + lVar16 + uVar5 + lVar15 + lVar20 + lVar17 + lVar18;
        puVar13 = puVar8 + lVar3;
        puVar9 = puVar1 + lVar4;
      }
      do {
        puVar7 = puVar13;
        uVar5 = uVar5 + param_4 + puVar9[3];
        puVar13 = puVar7 + 2;
        puVar9 = puVar7;
      } while (puVar1 + uVar6 * 2 != puVar13);
    }
    if (uVar5 != 0) {
                    /* try { // try from 002a2488 to 002a248f has its CatchHandler @ 002a2504 */
      FUN_002a2528(param_1);
      pbVar10 = *(byte **)(param_1 + 0x10);
      if ((*param_1 & 1) == 0) {
        pbVar10 = param_1 + 1;
      }
      memcpy(pbVar10,(void *)*puVar1,puVar1[1]);
      if (uVar6 != 1) {
        pbVar10 = pbVar10 + puVar1[1];
        do {
          memcpy(pbVar10,param_3,param_4);
          memcpy(pbVar10 + param_4,(void *)*puVar8,puVar8[1]);
          puVar13 = puVar8 + 1;
          puVar8 = puVar8 + 2;
          pbVar10 = pbVar10 + param_4 + *puVar13;
        } while (puVar8 != puVar1 + uVar6 * 2);
      }
    }
  }
  return;
}


