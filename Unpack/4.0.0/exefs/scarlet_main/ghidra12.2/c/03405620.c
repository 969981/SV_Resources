/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03405620; name: FUN_03405620
 */


undefined8 FUN_03405620(long *param_1,long param_2,long *param_3,long param_4)

{
  byte *pbVar1;
  uint uVar2;
  ushort *puVar3;
  ushort uVar4;
  undefined4 uVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  undefined1 uVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  undefined1 uVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  undefined1 uVar25;
  ushort uVar26;
  int iVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  ushort uVar31;
  
  puVar12 = PTR_DAT_047e6c20;
  bVar6 = *(byte *)(param_3 + 1);
  uVar22 = (ulong)bVar6 + 5;
  uVar21 = *(ulong *)*param_3;
  uVar17 = *(uint *)(PTR_DAT_047e6c20 + 0x14);
  *(byte *)(param_3 + 1) = (byte)uVar22 & 0x1f;
  uVar22 = uVar22 >> 5;
  *param_3 = *param_3 + uVar22 * 4;
  uVar17 = uVar17 & (uint)(uVar21 >> ((ulong)bVar6 & 0x3f));
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar22;
  *(uint *)(param_1 + 6) = uVar17;
  if (uVar17 == 0) {
    param_1[1] = 0;
  }
  else {
    uVar28 = uVar17 + 3 & 0xfffffffc;
    uVar2 = *(int *)(param_4 + 0x50) + uVar28;
    if (*(uint *)(param_4 + 0x54) < uVar2) {
      lVar19 = 0;
    }
    else {
      lVar19 = *(long *)(param_4 + 0x48);
      *(ulong *)(param_4 + 0x48) = lVar19 + (ulong)uVar28;
      *(uint *)(param_4 + 0x50) = uVar2;
      uVar17 = *(uint *)(param_1 + 6);
    }
    param_1[1] = lVar19;
    if (0 < (int)uVar17) {
      lVar19 = 0;
      uVar17 = 0xffffffff;
      do {
        uVar21 = *(ulong *)*param_3;
        bVar6 = *(byte *)(param_3 + 1);
        uVar5 = *(undefined4 *)(puVar12 + 0x10);
        uVar22 = (ulong)bVar6 + 4;
        uVar24 = uVar22 >> 5;
        *(byte *)(param_3 + 1) = (byte)uVar22 & 0x1f;
        *param_3 = *param_3 + uVar24 * 4;
        *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar24;
        *(byte *)(param_1[1] + lVar19) = (byte)uVar5 & (byte)(uVar21 >> ((ulong)bVar6 & 0x3f));
        pbVar1 = (byte *)(param_1[1] + lVar19);
        lVar19 = lVar19 + 1;
        uVar2 = (uint)*pbVar1;
        if ((int)(uint)*pbVar1 <= (int)uVar17) {
          uVar2 = uVar17;
        }
        uVar17 = uVar2;
      } while (lVar19 < (int)param_1[6]);
      if (uVar2 * 0xb == -0xb) {
LAB_03405758:
        lVar19 = 0;
      }
      else {
        uVar28 = uVar2 * 0xb + 0xe & 0xfffffffc;
        uVar17 = *(int *)(param_4 + 0x50) + uVar28;
        if (*(uint *)(param_4 + 0x54) < uVar17) goto LAB_03405758;
        lVar19 = *(long *)(param_4 + 0x48);
        *(ulong *)(param_4 + 0x48) = lVar19 + (ulong)uVar28;
        *(uint *)(param_4 + 0x50) = uVar17;
      }
      uVar22 = 0;
      *param_1 = lVar19;
      lVar19 = 3;
      do {
        uVar24 = *(ulong *)*param_3;
        bVar6 = *(byte *)(param_3 + 1);
        uVar5 = *(undefined4 *)(puVar12 + 0xc);
        uVar21 = (ulong)bVar6 + 3;
        uVar29 = uVar21 >> 5;
        *(byte *)(param_3 + 1) = (byte)uVar21 & 0x1f;
        *param_3 = *param_3 + uVar29 * 4;
        lVar30 = uVar22 * 0xb;
        *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar29;
        *(byte *)(*param_1 + lVar30) = ((byte)uVar5 & (byte)(uVar24 >> ((ulong)bVar6 & 0x3f))) + 1;
        uVar24 = *(ulong *)*param_3;
        bVar6 = *(byte *)(param_3 + 1);
        uVar5 = *(undefined4 *)(puVar12 + 8);
        uVar21 = (ulong)bVar6 + 2;
        uVar29 = uVar21 >> 5;
        *(byte *)(param_3 + 1) = (byte)uVar21 & 0x1f;
        *param_3 = *param_3 + uVar29 * 4;
        *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar29;
        *(byte *)(*param_1 + lVar30 + 1) = (byte)uVar5 & (byte)(uVar24 >> ((ulong)bVar6 & 0x3f));
        if (*(char *)(*param_1 + lVar30 + 1) == '\0') {
          *(undefined1 *)(*param_1 + uVar22 * 0xb + 2) = 0;
          lVar30 = *param_1;
          bVar6 = *(byte *)(lVar30 + uVar22 * 0xb + 2);
          iVar23 = *(int *)(param_2 + 0x18);
        }
        else {
          uVar24 = *(ulong *)*param_3;
          bVar6 = *(byte *)(param_3 + 1);
          uVar5 = *(undefined4 *)(puVar12 + 0x20);
          uVar21 = (ulong)bVar6 + 8;
          uVar29 = uVar21 >> 5;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar29;
          *(byte *)(param_3 + 1) = (byte)uVar21 & 0x1f;
          *param_3 = *param_3 + uVar29 * 4;
          *(byte *)(*param_1 + uVar22 * 0xb + 2) =
               (byte)uVar5 & (byte)(uVar24 >> ((ulong)bVar6 & 0x3f));
          lVar30 = *param_1;
          iVar23 = *(int *)(param_2 + 0x18);
          bVar6 = *(byte *)(lVar30 + uVar22 * 0xb + 2);
          if (iVar23 <= (int)(uint)bVar6) {
            return 0xffffffff;
          }
        }
        if (iVar23 <= (int)(uint)bVar6) {
          return 0xffffffff;
        }
        if (*(char *)(lVar30 + uVar22 * 0xb + 1) != '\x1f') {
          lVar30 = 0;
          do {
            uVar24 = *(ulong *)*param_3;
            bVar6 = *(byte *)(param_3 + 1);
            uVar5 = *(undefined4 *)(puVar12 + 0x20);
            uVar21 = (ulong)bVar6 + 8;
            uVar29 = uVar21 >> 5;
            *(byte *)(param_3 + 1) = (byte)uVar21 & 0x1f;
            *param_3 = *param_3 + uVar29 * 4;
            *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar29;
            *(byte *)(*param_1 + lVar19 + lVar30) =
                 ((byte)uVar5 & (byte)(uVar24 >> ((ulong)bVar6 & 0x3f))) - 1;
            bVar6 = *(byte *)(*param_1 + lVar19 + lVar30);
            uVar17 = *(uint *)(param_2 + 0x18);
            uVar28 = (uint)bVar6;
            bVar14 = false;
            bVar15 = false;
            if (uVar28 != 0xff) {
              bVar14 = (int)(uVar17 - bVar6) < 0;
              bVar15 = uVar17 == bVar6;
            }
            if (bVar15 || bVar14 != (uVar28 != 0xff && SBORROW4(uVar17,uVar28))) {
              return 0xffffffff;
            }
            lVar30 = lVar30 + 1;
          } while (lVar30 < 1 << (ulong)(*(byte *)(*param_1 + uVar22 * 0xb + 1) & 0x1f));
        }
        uVar22 = uVar22 + 1;
        lVar19 = lVar19 + 0xb;
      } while (uVar22 != uVar2 + 1);
      goto LAB_03405764;
    }
  }
  *param_1 = 0;
LAB_03405764:
  uVar21 = *(ulong *)*param_3;
  bVar6 = *(byte *)(param_3 + 1);
  uVar17 = *(uint *)(puVar12 + 8);
  uVar22 = (ulong)bVar6 + 2;
  uVar24 = uVar22 >> 5;
  *(byte *)(param_3 + 1) = (byte)uVar22 & 0x1f;
  *param_3 = *param_3 + uVar24 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar24;
  *(uint *)(param_1 + 7) = (uVar17 & (uint)(uVar21 >> ((ulong)bVar6 & 0x3f))) + 1;
  bVar6 = *(byte *)(param_3 + 1);
  uVar22 = (ulong)bVar6 + 4;
  uVar17 = *(uint *)(puVar12 + 0x10);
  uVar21 = *(ulong *)*param_3;
  *(byte *)(param_3 + 1) = (byte)uVar22 & 0x1f;
  uVar22 = uVar22 >> 5;
  *param_3 = *param_3 + uVar22 * 4;
  *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - (int)uVar22;
  uVar2 = *(uint *)(param_1 + 6);
  if ((int)uVar2 < 1) {
    iVar23 = 0;
  }
  else {
    lVar19 = *param_1;
    uVar22 = 0;
    iVar23 = 0;
    if (uVar2 != 1) {
      do {
        pbVar1 = (byte *)(param_1[1] + uVar22);
        uVar22 = uVar22 + 2;
        iVar23 = iVar23 + (uint)*(byte *)(lVar19 + (ulong)*pbVar1 * 0xb) +
                 (uint)*(byte *)(lVar19 + (ulong)pbVar1[1] * 0xb);
      } while (((ulong)uVar2 & 0xfffffffe) != uVar22);
    }
    if ((uVar2 & 1) != 0) {
      iVar23 = iVar23 + (uint)*(byte *)(lVar19 + (ulong)*(byte *)(param_1[1] + uVar22) * 0xb);
    }
  }
  uVar28 = iVar23 * 2 + 7U & 0xfffffffc;
  uVar2 = uVar28 + *(int *)(param_4 + 0x50);
  if (*(uint *)(param_4 + 0x54) < uVar2) {
    lVar19 = 0;
  }
  else {
    lVar19 = *(long *)(param_4 + 0x48);
    *(ulong *)(param_4 + 0x48) = lVar19 + (ulong)uVar28;
    *(uint *)(param_4 + 0x50) = uVar2;
  }
  param_1[2] = lVar19;
  uVar28 = iVar23 + 5U & 0xfffffffc;
  uVar2 = *(int *)(param_4 + 0x50) + uVar28;
  if (*(uint *)(param_4 + 0x54) < uVar2) {
    lVar19 = 0;
  }
  else {
    lVar19 = *(long *)(param_4 + 0x48);
    *(ulong *)(param_4 + 0x48) = lVar19 + (ulong)uVar28;
    *(uint *)(param_4 + 0x50) = uVar2;
  }
  param_1[3] = lVar19;
  if (iVar23 == 0) {
    lVar19 = 0;
    param_1[5] = 0;
  }
  else {
    uVar28 = iVar23 + 3U & 0xfffffffc;
    uVar2 = *(int *)(param_4 + 0x50) + uVar28;
    if (*(uint *)(param_4 + 0x54) < uVar2) {
      lVar19 = 0;
    }
    else {
      lVar19 = *(long *)(param_4 + 0x48);
      *(ulong *)(param_4 + 0x48) = lVar19 + (ulong)uVar28;
      *(uint *)(param_4 + 0x50) = uVar2;
    }
    param_1[5] = lVar19;
    uVar2 = *(int *)(param_4 + 0x50) + uVar28;
    if (*(uint *)(param_4 + 0x54) < uVar2) {
      lVar19 = 0;
    }
    else {
      lVar19 = *(long *)(param_4 + 0x48);
      *(ulong *)(param_4 + 0x48) = lVar19 + (ulong)uVar28;
      *(uint *)(param_4 + 0x50) = uVar2;
    }
  }
  iVar23 = (int)param_1[6];
  uVar17 = uVar17 & (uint)(uVar21 >> ((ulong)bVar6 & 0x3f));
  param_1[4] = lVar19;
  if (iVar23 < 1) {
    uVar22 = 0;
  }
  else {
    lVar19 = 0;
    iVar27 = 0;
    uVar22 = 0;
    do {
      uVar22 = (ulong)*(byte *)(*param_1 + (ulong)*(byte *)(param_1[1] + lVar19) * 0xb) +
               (uVar22 & 0xffffffff);
      if (iVar27 < (int)uVar22) {
        uVar21 = (ulong)iVar27;
        do {
          uVar2 = *(uint *)(puVar12 + (long)(int)uVar17 * 4) &
                  (uint)(*(ulong *)*param_3 >> ((ulong)*(byte *)(param_3 + 1) & 0x3f));
          iVar23 = uVar17 + *(byte *)(param_3 + 1);
          *(byte *)(param_3 + 1) = (byte)iVar23 & 0x1f;
          iVar23 = iVar23 >> 5;
          *(int *)((long)param_3 + 0xc) = *(int *)((long)param_3 + 0xc) - iVar23;
          *param_3 = *param_3 + (long)iVar23 * 4;
          *(short *)(param_1[2] + uVar21 * 2 + 4) = (short)uVar2;
          if (1 << (ulong)(uVar17 & 0x1f) <= (int)(uVar2 & 0xffff)) {
            return 0xffffffff;
          }
          uVar21 = uVar21 + 1;
        } while (uVar22 != uVar21);
        iVar23 = (int)param_1[6];
        iVar27 = (int)uVar22;
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < iVar23);
  }
  if (*(int *)((long)param_3 + 0xc) < 0) {
    uVar16 = 0xffffffff;
  }
  else {
    *(undefined2 *)param_1[2] = 0;
    *(short *)(param_1[2] + 2) = (short)(1 << (ulong)(uVar17 & 0x1f));
    *(int *)((long)param_1 + 0x34) = (int)uVar22 + 2;
    if (-2 < (int)uVar22) {
      lVar19 = 0;
      do {
        *(char *)(param_1[3] + lVar19) = (char)lVar19;
        lVar19 = lVar19 + 1;
      } while (lVar19 < *(int *)((long)param_1 + 0x34));
    }
    FUN_03405d70(param_1[3],param_1[2]);
    if (2 < *(int *)((long)param_1 + 0x34)) {
      lVar19 = 0;
      uVar22 = 2;
      do {
        lVar30 = param_1[2];
        uVar21 = 0;
        uVar9 = *(ushort *)(lVar30 + (lVar19 + 2U) * 2);
        uVar31 = *(ushort *)(lVar30 + 2);
        iVar23 = 0;
        iVar27 = 1;
        uVar26 = 0;
        do {
          puVar3 = (ushort *)(lVar30 + uVar21 * 2);
          uVar7 = *puVar3;
          uVar8 = puVar3[1];
          iVar18 = (int)uVar21;
          iVar10 = iVar18;
          uVar4 = uVar7;
          if (uVar9 <= uVar7 || uVar7 <= uVar26) {
            iVar10 = iVar23;
            uVar4 = uVar26;
          }
          iVar11 = iVar18;
          if (uVar7 <= uVar9 || uVar31 <= uVar7) {
            iVar11 = iVar27;
            uVar7 = uVar31;
          }
          uVar20 = (undefined1)iVar10;
          iVar23 = iVar10;
          if (uVar8 < uVar9 && uVar4 < uVar8) {
            uVar20 = (undefined1)(iVar18 + 1);
            iVar23 = iVar18 + 1;
            uVar4 = uVar8;
          }
          uVar25 = (undefined1)iVar11;
          uVar31 = uVar7;
          iVar27 = iVar11;
          if (uVar9 < uVar8 && uVar8 < uVar7) {
            uVar25 = (undefined1)(iVar18 + 1);
            uVar31 = uVar8;
            iVar27 = iVar18 + 1;
          }
          uVar21 = uVar21 + 2;
          uVar26 = uVar4;
        } while ((uVar22 & 0xfffffffffffffffe) != uVar21);
        if ((lVar19 + 2U & 1) != 0) {
          uVar26 = *(ushort *)(lVar30 + uVar21 * 2);
          uVar13 = (char)uVar21;
          if (uVar31 <= uVar26 || uVar26 <= uVar9) {
            uVar13 = uVar25;
          }
          uVar25 = uVar13;
          uVar13 = (char)uVar21;
          if (uVar26 <= uVar4 || uVar9 <= uVar26) {
            uVar13 = uVar20;
          }
          uVar20 = uVar13;
        }
        *(undefined1 *)(param_1[5] + lVar19) = uVar20;
        *(undefined1 *)(param_1[4] + lVar19) = uVar25;
        lVar19 = lVar19 + 1;
        uVar22 = uVar22 + 1;
      } while (lVar19 < (long)*(int *)((long)param_1 + 0x34) + -2);
    }
    uVar16 = 0;
  }
  return uVar16;
}


