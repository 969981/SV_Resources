/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002b3540; name: FUN_002b3540
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_002b3540(byte *param_1,byte *param_2,byte *param_3,void *param_4,size_t param_5,
                 ulong param_6,ulong param_7,ulong param_8)

{
  size_t sVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  size_t sVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
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
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (param_2 == param_3) {
    return;
  }
  if ((*param_2 & 1) == 0) {
    uVar9 = (ulong)(*param_2 >> 1);
  }
  else {
    uVar9 = *(ulong *)(param_2 + 8);
  }
  if (param_2 + 0x18 != param_3) {
    if (param_3 + (-0x30 - (long)param_2) < (byte *)0x48) {
      pbVar12 = param_2 + 0x18;
      pbVar13 = param_2;
    }
    else {
      uVar14 = (ulong)(param_3 + (-0x30 - (long)param_2)) / 0x18 + 1;
      uVar15 = uVar14 & 0x1ffffffffffffffc;
      lVar19 = 0;
      lVar20 = 0;
      lVar18 = 0;
      puVar16 = (ulong *)(param_2 + 0x38);
      pbVar13 = param_2 + uVar15 * 0x18;
      sVar10 = param_5;
      uVar17 = uVar15;
      do {
        bVar7 = (byte)puVar16[-4];
        bVar8 = (byte)puVar16[-1];
        bVar6 = (byte)puVar16[2];
        bVar5 = (byte)puVar16[5];
        if ((bVar7 & 1) != 0) {
          sVar10 = puVar16[-3];
        }
        if ((bVar8 & 1) != 0) {
          param_6 = *puVar16;
        }
        if ((bVar6 & 1) != 0) {
          param_7 = puVar16[3];
        }
        if ((bVar5 & 1) != 0) {
          param_8 = puVar16[6];
        }
        sVar1 = (ulong)(bVar7 >> 1);
        if ((bVar7 & 1) != 0) {
          sVar1 = sVar10;
        }
        uVar2 = (ulong)(bVar8 >> 1);
        if ((bVar8 & 1) != 0) {
          uVar2 = param_6;
        }
        uVar3 = (ulong)(bVar6 >> 1);
        if ((bVar6 & 1) != 0) {
          uVar3 = param_7;
        }
        uVar4 = (ulong)(bVar5 >> 1);
        if ((bVar5 & 1) != 0) {
          uVar4 = param_8;
        }
        uVar9 = uVar9 + param_5 + sVar1;
        lVar19 = lVar19 + param_5 + uVar2;
        lVar20 = lVar20 + param_5 + uVar3;
        lVar18 = lVar18 + param_5 + uVar4;
        uVar17 = uVar17 - 4;
        puVar16 = puVar16 + 0xc;
      } while (uVar17 != 0);
      uVar9 = lVar18 + lVar20 + lVar19 + uVar9;
      pbVar12 = param_2 + 0x18 + uVar15 * 0x18;
      if (uVar14 == uVar15) goto LAB_002b36b0;
    }
    do {
      pbVar11 = pbVar12;
      if ((*pbVar11 & 1) == 0) {
        uVar14 = (ulong)(*pbVar11 >> 1);
      }
      else {
        uVar14 = *(ulong *)(pbVar13 + 0x20);
      }
      uVar9 = uVar9 + param_5 + uVar14;
      pbVar12 = pbVar11 + 0x18;
      pbVar13 = pbVar11;
    } while (param_3 != pbVar11 + 0x18);
  }
LAB_002b36b0:
  pbVar13 = param_2 + 0x18;
  if (uVar9 == 0) {
    return;
  }
                    /* try { // try from 002b36b4 to 002b36bb has its CatchHandler @ 002b37e0 */
  FUN_002a2528(param_1);
  pbVar12 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar12 = param_1 + 1;
  }
  if ((*param_2 & 1) == 0) {
    memcpy(pbVar12,param_2 + 1,(ulong)(*param_2 >> 1));
    bVar6 = *param_2;
  }
  else {
    memcpy(pbVar12,*(void **)(param_2 + 0x10),*(size_t *)(param_2 + 8));
    bVar6 = *param_2;
  }
  if ((bVar6 & 1) == 0) {
    uVar9 = (ulong)(bVar6 >> 1);
  }
  else {
    uVar9 = *(ulong *)(param_2 + 8);
  }
  if (pbVar13 != param_3) {
    pbVar12 = pbVar12 + uVar9;
    do {
      while( true ) {
        memcpy(pbVar12,param_4,param_5);
        pbVar12 = pbVar12 + param_5;
        if ((*pbVar13 & 1) != 0) break;
        memcpy(pbVar12,pbVar13 + 1,(ulong)(*pbVar13 >> 1));
        bVar6 = *pbVar13;
        if ((bVar6 & 1) == 0) goto LAB_002b3754;
LAB_002b37b4:
        pbVar11 = pbVar13 + 8;
        pbVar13 = pbVar13 + 0x18;
        pbVar12 = pbVar12 + *(long *)pbVar11;
        if (param_3 == pbVar13) {
          return;
        }
      }
      memcpy(pbVar12,*(void **)(pbVar13 + 0x10),*(size_t *)(pbVar13 + 8));
      bVar6 = *pbVar13;
      if ((bVar6 & 1) != 0) goto LAB_002b37b4;
LAB_002b3754:
      pbVar13 = pbVar13 + 0x18;
      pbVar12 = pbVar12 + (bVar6 >> 1);
    } while (param_3 != pbVar13);
  }
  return;
}


