/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a729c; name: FUN_008a729c
 */


void FUN_008a729c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  bVar4 = *(byte *)(param_1 + 0x58);
  if (((bVar4 & 1) == 0) && (*(char *)(param_3 + 0x1d) == '\0')) {
LAB_008a735c:
    if ((param_4 & 1) != 0) {
      bVar4 = bVar4 | 0x10;
      *(byte *)(param_1 + 0x58) = bVar4;
    }
    *(byte *)(param_1 + 0x58) = bVar4 & 0x7f;
    return;
  }
  if ((*(char *)(param_3 + 0x1f) == '\0') || (*(long *)(param_1 + 0x18) == 0)) {
    uVar3 = (uint)*(byte *)(param_1 + 0x59);
    *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x59);
  }
  else {
    fVar8 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x59));
    uVar3 = (uint)(*(float *)(param_3 + 0x18) * fVar8);
    *(char *)(param_1 + 0x5a) = (char)uVar3;
  }
  if ((((bVar4 >> 1 & 1) != 0) && (uVar3 == 0)) && (*(char *)(param_3 + 0x1e) == '\0'))
  goto LAB_008a735c;
  if ((bVar4 >> 6 & 1) == 0) {
    if ((bVar4 >> 5 & 1) == 0) {
      if ((param_4 & 1) == 0 && (bVar4 & 0x10) == 0) {
        uVar6 = 0;
      }
      else {
        *(byte *)(param_1 + 0x58) = bVar4 & 0xef;
        FUN_008a7534(param_1,param_3);
        bVar4 = *(byte *)(param_1 + 0x58);
        uVar6 = 1;
      }
      goto joined_r0x008a73fc;
    }
    puVar1 = *(undefined8 **)(param_3 + 8);
    if (*(long *)(param_1 + 0x18) != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x70);
    }
    uVar6 = puVar1[3];
    puVar5 = *(undefined8 **)(param_1 + 0xa0);
    uVar17 = puVar1[5];
    fVar8 = (float)*puVar1;
    fVar18 = (float)*puVar5;
    fVar19 = (float)((ulong)*puVar5 >> 0x20);
    fVar20 = (float)puVar5[1];
    fVar21 = (float)((ulong)puVar5[1] >> 0x20);
    fVar9 = (float)((ulong)*puVar1 >> 0x20);
    fVar22 = (float)puVar5[2];
    fVar24 = (float)((ulong)puVar5[2] >> 0x20);
    fVar26 = (float)puVar5[3];
    fVar28 = (float)((ulong)puVar5[3] >> 0x20);
    fVar11 = (float)puVar1[2];
    fVar12 = (float)((ulong)puVar1[2] >> 0x20);
    fVar14 = (float)puVar1[4];
    fVar15 = (float)((ulong)puVar1[4] >> 0x20);
    fVar10 = (float)puVar1[1];
    fVar23 = (float)puVar5[4];
    fVar25 = (float)((ulong)puVar5[4] >> 0x20);
    fVar27 = (float)puVar5[5];
    fVar29 = (float)((ulong)puVar5[5] >> 0x20);
    fVar13 = (float)uVar6;
    fVar16 = (float)uVar17;
    *(ulong *)(param_1 + 0x78) =
         CONCAT44((float)((ulong)puVar1[1] >> 0x20) +
                  fVar21 * fVar8 + fVar28 * fVar9 + fVar29 * fVar10,
                  fVar20 * fVar8 + fVar26 * fVar9 + fVar27 * fVar10 + 0.0);
    *(ulong *)(param_1 + 0x70) =
         CONCAT44(fVar19 * fVar8 + fVar24 * fVar9 + fVar25 * fVar10 + 0.0,
                  fVar18 * fVar8 + fVar22 * fVar9 + fVar23 * fVar10 + 0.0);
    *(ulong *)(param_1 + 0x88) =
         CONCAT44((float)((ulong)uVar6 >> 0x20) +
                  fVar21 * fVar11 + fVar28 * fVar12 + fVar29 * fVar13,
                  fVar20 * fVar11 + fVar26 * fVar12 + fVar27 * fVar13 + 0.0);
    *(ulong *)(param_1 + 0x80) =
         CONCAT44(fVar19 * fVar11 + fVar24 * fVar12 + fVar25 * fVar13 + 0.0,
                  fVar18 * fVar11 + fVar22 * fVar12 + fVar23 * fVar13 + 0.0);
    *(ulong *)(param_1 + 0x98) =
         CONCAT44((float)((ulong)uVar17 >> 0x20) +
                  fVar21 * fVar14 + fVar28 * fVar15 + fVar29 * fVar16,
                  fVar20 * fVar14 + fVar26 * fVar15 + fVar27 * fVar16 + 0.0);
    *(ulong *)(param_1 + 0x90) =
         CONCAT44(fVar19 * fVar14 + fVar24 * fVar15 + fVar25 * fVar16 + 0.0,
                  fVar18 * fVar14 + fVar22 * fVar15 + fVar23 * fVar16 + 0.0);
  }
  uVar6 = 1;
joined_r0x008a73fc:
  if (((bVar4 & 2) == 0) || (bVar4 = *(byte *)(param_1 + 0x59), bVar4 == 0xff)) {
    for (lVar7 = *(long *)(param_1 + 0x28); lVar7 != param_1 + 0x20; lVar7 = *(long *)(lVar7 + 8)) {
      (**(code **)(*(long *)(lVar7 + -8) + 0xb0))((long *)(lVar7 + -8),param_2,param_3,uVar6);
    }
  }
  else {
    fVar8 = *(float *)(param_3 + 0x18);
    uVar2 = *(undefined1 *)(param_3 + 0x1f);
    *(undefined1 *)(param_3 + 0x1f) = 1;
    *(float *)(param_3 + 0x18) = fVar8 * (float)bVar4 * 0.003921569;
    for (lVar7 = *(long *)(param_1 + 0x28); lVar7 != param_1 + 0x20; lVar7 = *(long *)(lVar7 + 8)) {
      (**(code **)(*(long *)(lVar7 + -8) + 0xb0))((long *)(lVar7 + -8),param_2,param_3,uVar6);
    }
    *(float *)(param_3 + 0x18) = fVar8;
    *(undefined1 *)(param_3 + 0x1f) = uVar2;
  }
  if ((*(byte *)(param_1 + 0x62) >> 1 & 1) != 0) {
    lVar7 = *(long *)(param_1 + 0xa8) + 0xc;
    uVar3 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
    FUN_008aa140(*(undefined8 *)
                  (lVar7 + (ulong)(*(int *)(lVar7 + (ulong)uVar3 + 4 +
                                                    (ulong)*(byte *)(lVar7 + (ulong)(*(int *)(lVar7 
                                                  + (ulong)uVar3 + 4) + uVar3) + 0xc) * 4) + uVar3)
                  + 8),param_2);
  }
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 0x80;
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 0x10;
  return;
}


