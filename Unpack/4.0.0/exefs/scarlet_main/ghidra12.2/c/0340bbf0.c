/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0340bbf0; name: FUN_0340bbf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0340bbf0(long param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  int *piVar17;
  uint *puVar18;
  uint *puVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined8 uVar39;
  byte bVar46;
  int iVar47;
  byte bVar49;
  byte bVar50;
  int iVar48;
  byte bVar51;
  int iVar52;
  byte bVar54;
  byte bVar55;
  int iVar53;
  byte bVar56;
  byte bVar57;
  byte bVar59;
  byte bVar60;
  int iVar58;
  byte bVar61;
  byte bVar62;
  byte bVar64;
  byte bVar65;
  int iVar63;
  byte bVar66;
  byte bVar67;
  byte bVar69;
  byte bVar70;
  int iVar68;
  byte bVar71;
  byte bVar72;
  byte bVar74;
  byte bVar75;
  int iVar73;
  byte bVar76;
  undefined8 local_20b0;
  int *local_20a8;
  uint *local_20a0 [2];
  undefined1 auStack_2090 [8240];
  
  lVar24 = *(long *)(param_1 + 0x18);
  uVar9 = (ulong)*(int *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar24 + (long)*(int *)(param_1 + 0x3c) * 4);
  uVar12 = uVar9 * 8 + 0xf & 0xfffffffffffffff0;
  local_20b0 = (ulong)uVar2;
  lVar11 = -uVar12;
  lVar22 = (long)local_20a0 + lVar11 + -0x10;
  uVar15 = uVar9 * 4 + 0xf & 0xfffffffffffffff0;
  lVar23 = lVar22 - uVar15;
  lVar26 = lVar23 - uVar15;
  lVar25 = lVar26 - uVar12;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar21 = 0;
    do {
      lVar8 = FUN_03406050(param_1);
      *(long *)(lVar25 + lVar21 * 8) = lVar8;
      *(uint *)(lVar26 + lVar21 * 4) = (uint)(lVar8 != 0);
      memset(*(void **)(*(long *)(param_1 + 0x20) + lVar21 * 8),0,(ulong)(uVar2 << 1));
      uVar9 = (ulong)*(int *)(param_1 + 0x10);
      lVar21 = lVar21 + 1;
    } while (lVar21 < (long)uVar9);
  }
  uVar12 = (ulong)(uint)param_2[6];
  if (0 < param_2[6]) {
    pbVar13 = (byte *)(*(long *)(param_2 + 8) + 1);
    do {
      bVar30 = *pbVar13;
      if ((*(int *)(lVar26 + (ulong)pbVar13[-1] * 4) != 0) ||
         (*(int *)(lVar26 + (ulong)bVar30 * 4) != 0)) {
        *(undefined4 *)(lVar26 + (ulong)pbVar13[-1] * 4) = 1;
        *(undefined4 *)(lVar26 + (ulong)bVar30 * 4) = 1;
      }
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 2;
    } while (uVar12 != 0);
  }
  if (0 < *param_2) {
    uVar12 = 0;
    local_20a0[0] = (uint *)(lVar23 + 8);
    local_20a0[1] = (uint *)((long)local_20a0 + lVar11);
    local_20a8 = (int *)(lVar26 + 8);
    while( true ) {
      if ((int)uVar9 < 1) {
        uVar9 = 0;
      }
      else {
        lVar11 = *(long *)(param_2 + 2);
        if (lVar11 == 0) {
          lVar11 = *(long *)(param_1 + 0x20);
          uVar15 = uVar9 & 3;
          if ((uVar9 & 0xffffffff) - 1 < 3) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            puVar14 = (undefined8 *)(lVar11 + 0x10);
            piVar17 = local_20a8;
            puVar18 = local_20a0[0];
            puVar19 = local_20a0[1];
            do {
              iVar7 = piVar17[-1];
              puVar18[-2] = (uint)(piVar17[-2] != 0);
              uVar20 = puVar14[-2];
              puVar18[-1] = (uint)(iVar7 != 0);
              *(undefined8 *)((long)puVar19 + -0x10) = uVar20;
              *(undefined8 *)((long)puVar19 + -8) = puVar14[-1];
              iVar7 = piVar17[1];
              *puVar18 = (uint)(*piVar17 != 0);
              uVar20 = *puVar14;
              puVar18[1] = (uint)(iVar7 != 0);
              puVar18 = puVar18 + 4;
              *(undefined8 *)puVar19 = uVar20;
              puVar16 = puVar14 + 1;
              uVar10 = uVar10 + 4;
              puVar14 = puVar14 + 4;
              *(undefined8 *)((long)puVar19 + 8) = *puVar16;
              puVar19 = (uint *)((long)puVar19 + 0x20);
              piVar17 = piVar17 + 4;
            } while ((uVar9 & 0xfffffffc) != uVar10);
          }
          if (uVar15 != 0) {
            puVar14 = (undefined8 *)(lVar22 + uVar10 * 8);
            puVar16 = (undefined8 *)(lVar11 + uVar10 * 8);
            piVar17 = (int *)(lVar26 + uVar10 * 4);
            puVar18 = (uint *)(lVar23 + uVar10 * 4);
            do {
              uVar15 = uVar15 - 1;
              *puVar18 = (uint)(*piVar17 != 0);
              *puVar14 = *puVar16;
              puVar14 = puVar14 + 1;
              puVar16 = puVar16 + 1;
              piVar17 = piVar17 + 1;
              puVar18 = puVar18 + 1;
            } while (uVar15 != 0);
          }
        }
        else {
          if ((int)uVar9 == 1) {
            uVar15 = 0;
            uVar10 = 0;
          }
          else {
            uVar15 = 0;
            uVar10 = 0;
            piVar17 = (int *)(lVar26 + 4);
            do {
              if (uVar12 == *(byte *)(lVar11 + uVar15)) {
                iVar7 = (int)uVar10;
                *(uint *)(lVar23 + (long)iVar7 * 4) = (uint)(piVar17[-1] != 0);
                *(undefined8 *)(lVar22 + (long)iVar7 * 8) =
                     *(undefined8 *)(*(long *)(param_1 + 0x20) + uVar15 * 8);
                uVar10 = (ulong)(iVar7 + 1);
              }
              if (uVar12 == *(byte *)(lVar11 + uVar15 + 1)) {
                iVar7 = (int)uVar10;
                *(uint *)(lVar23 + (long)iVar7 * 4) = (uint)(*piVar17 != 0);
                *(undefined8 *)(lVar22 + (long)iVar7 * 8) =
                     *(undefined8 *)(*(long *)(param_1 + 0x20) + uVar15 * 8 + 8);
                uVar10 = (ulong)(iVar7 + 1);
              }
              uVar15 = uVar15 + 2;
              piVar17 = piVar17 + 2;
            } while ((uVar9 & 0xfffffffe) != uVar15);
          }
          uVar3 = uVar9 & 1;
          uVar9 = uVar10;
          if ((uVar3 != 0) && (uVar12 == *(byte *)(lVar11 + uVar15))) {
            iVar7 = (int)uVar10;
            *(uint *)(lVar23 + (long)iVar7 * 4) = (uint)(*(int *)(lVar26 + uVar15 * 4) != 0);
            *(undefined8 *)(lVar22 + (long)iVar7 * 8) =
                 *(undefined8 *)(*(long *)(param_1 + 0x20) + uVar15 * 8);
            uVar9 = (ulong)(iVar7 + 1);
          }
        }
      }
      FUN_0340c8e0(param_1,*(long *)(lVar24 + 0x38) +
                           (ulong)*(byte *)(*(long *)(param_2 + 4) + uVar12 * 2 + 1) * 0x28,lVar22,
                   lVar23,uVar9);
      uVar12 = uVar12 + 1;
      if ((long)*param_2 <= (long)uVar12) break;
      uVar9 = (ulong)*(uint *)(param_1 + 0x10);
    }
  }
  if (((DAT_048af250 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_048af250), iVar7 != 0)) {
    DAT_048af240 = 0;
    DAT_048af248 = 0;
    __cxa_guard_release(&DAT_048af250);
  }
  uVar9 = local_20b0;
  if (((DAT_048af270 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_048af270), iVar7 != 0)) {
    uRam00000000048af268 = 0xffffffffffffffff;
    _DAT_048af260 = 0xffffffffffffffff;
    __cxa_guard_release(&DAT_048af270);
  }
  if ((0 < param_2[6]) && (7 < (int)uVar9)) {
    uVar12 = (ulong)(uint)param_2[6];
    do {
      pbVar13 = (byte *)(*(long *)(param_2 + 8) + (uVar12 - 1) * 2);
      puVar14 = *(undefined8 **)(*(long *)(param_1 + 0x20) + (ulong)*pbVar13 * 8);
      puVar16 = *(undefined8 **)(*(long *)(param_1 + 0x20) + (ulong)pbVar13[1] * 8);
      uVar15 = uVar9 >> 3;
      do {
        uVar15 = uVar15 - 1;
        uVar39 = puVar16[1];
        uVar20 = *puVar16;
        iVar7 = (int)*puVar14;
        iVar47 = -(uint)(iVar7 < (int)DAT_048af240);
        iVar27 = (int)((ulong)*puVar14 >> 0x20);
        iVar48 = -(uint)(iVar27 < (int)((ulong)DAT_048af240 >> 0x20));
        iVar28 = (int)puVar14[1];
        iVar52 = -(uint)(iVar28 < (int)DAT_048af248);
        iVar29 = (int)((ulong)puVar14[1] >> 0x20);
        iVar53 = -(uint)(iVar29 < (int)((ulong)DAT_048af248 >> 0x20));
        iVar58 = -(uint)((int)_DAT_048af260 < (int)uVar20);
        iVar63 = -(uint)((int)((ulong)_DAT_048af260 >> 0x20) < (int)((ulong)uVar20 >> 0x20));
        iVar68 = -(uint)((int)uRam00000000048af268 < (int)uVar39);
        iVar73 = -(uint)((int)((ulong)uRam00000000048af268 >> 0x20) < (int)((ulong)uVar39 >> 0x20));
        bVar57 = (byte)iVar58 ^ (byte)iVar47;
        bVar34 = (byte)((uint)iVar47 >> 8);
        bVar59 = (byte)((uint)iVar58 >> 8) ^ bVar34;
        bVar35 = (byte)((uint)iVar47 >> 0x10);
        bVar60 = (byte)((uint)iVar58 >> 0x10) ^ bVar35;
        bVar36 = (byte)((uint)iVar47 >> 0x18);
        bVar61 = (byte)((uint)iVar58 >> 0x18) ^ bVar36;
        bVar62 = (byte)iVar63 ^ (byte)iVar48;
        bVar49 = (byte)((uint)iVar48 >> 8);
        bVar64 = (byte)((uint)iVar63 >> 8) ^ bVar49;
        bVar50 = (byte)((uint)iVar48 >> 0x10);
        bVar65 = (byte)((uint)iVar63 >> 0x10) ^ bVar50;
        bVar51 = (byte)((uint)iVar48 >> 0x18);
        bVar66 = (byte)((uint)iVar63 >> 0x18) ^ bVar51;
        bVar67 = (byte)iVar68 ^ (byte)iVar52;
        bVar43 = (byte)((uint)iVar52 >> 8);
        bVar69 = (byte)((uint)iVar68 >> 8) ^ bVar43;
        bVar44 = (byte)((uint)iVar52 >> 0x10);
        bVar70 = (byte)((uint)iVar68 >> 0x10) ^ bVar44;
        bVar45 = (byte)((uint)iVar52 >> 0x18);
        bVar71 = (byte)((uint)iVar68 >> 0x18) ^ bVar45;
        bVar72 = (byte)iVar73 ^ (byte)iVar53;
        bVar54 = (byte)((uint)iVar53 >> 8);
        bVar74 = (byte)((uint)iVar73 >> 8) ^ bVar54;
        bVar55 = (byte)((uint)iVar53 >> 0x10);
        bVar75 = (byte)((uint)iVar73 >> 0x10) ^ bVar55;
        bVar56 = (byte)((uint)iVar53 >> 0x18);
        bVar76 = (byte)((uint)iVar73 >> 0x18) ^ bVar56;
        bVar30 = (byte)uVar20;
        bVar31 = (byte)((ulong)uVar20 >> 8);
        bVar32 = (byte)((ulong)uVar20 >> 0x10);
        bVar33 = (byte)((ulong)uVar20 >> 0x18);
        iVar58 = CONCAT13(bVar33 & bVar36,
                          CONCAT12(bVar32 & bVar35,CONCAT11(bVar31 & bVar34,bVar30 & (byte)iVar47)))
        ;
        bVar34 = (byte)((ulong)uVar20 >> 0x20);
        bVar35 = (byte)((ulong)uVar20 >> 0x28);
        bVar36 = (byte)((ulong)uVar20 >> 0x30);
        bVar37 = (byte)((ulong)uVar20 >> 0x38);
        bVar38 = (byte)uVar39;
        bVar40 = (byte)((ulong)uVar39 >> 8);
        bVar41 = (byte)((ulong)uVar39 >> 0x10);
        bVar42 = (byte)((ulong)uVar39 >> 0x18);
        iVar68 = CONCAT13(bVar42 & bVar45,
                          CONCAT12(bVar41 & bVar44,CONCAT11(bVar40 & bVar43,bVar38 & (byte)iVar52)))
        ;
        bVar43 = (byte)((ulong)uVar39 >> 0x20);
        bVar44 = (byte)((ulong)uVar39 >> 0x28);
        bVar45 = (byte)((ulong)uVar39 >> 0x30);
        bVar46 = (byte)((ulong)uVar39 >> 0x38);
        uVar10 = (ulong)_DAT_048af260 >> 0x20;
        uVar3 = (ulong)_DAT_048af260 >> 0x28;
        uVar4 = (ulong)_DAT_048af260 >> 0x30;
        uVar5 = (ulong)_DAT_048af260 >> 0x38;
        iVar63 = (int)(CONCAT17(bVar37 & bVar51,
                                CONCAT16(bVar36 & bVar50,
                                         CONCAT15(bVar35 & bVar49,
                                                  CONCAT14(bVar34 & (byte)iVar48,iVar58)))) >> 0x20)
        ;
        iVar73 = (int)(CONCAT17(bVar46 & bVar56,
                                CONCAT16(bVar45 & bVar55,
                                         CONCAT15(bVar44 & bVar54,
                                                  CONCAT14(bVar43 & (byte)iVar53,iVar68)))) >> 0x20)
        ;
        iVar52 = CONCAT13(((byte)((ulong)_DAT_048af260 >> 0x18) ^ bVar61) & bVar33,
                          CONCAT12(((byte)((ulong)_DAT_048af260 >> 0x10) ^ bVar60) & bVar32,
                                   CONCAT11(((byte)((ulong)_DAT_048af260 >> 8) ^ bVar59) & bVar31,
                                            ((byte)_DAT_048af260 ^ bVar57) & bVar30)));
        iVar53 = CONCAT13(((byte)((ulong)uRam00000000048af268 >> 0x18) ^ bVar71) & bVar42,
                          CONCAT12(((byte)((ulong)uRam00000000048af268 >> 0x10) ^ bVar70) & bVar41,
                                   CONCAT11(((byte)((ulong)uRam00000000048af268 >> 8) ^ bVar69) &
                                            bVar40,((byte)uRam00000000048af268 ^ bVar67) & bVar38)))
        ;
        iVar47 = CONCAT13(bVar33 & bVar61,
                          CONCAT12(bVar32 & bVar60,CONCAT11(bVar31 & bVar59,bVar30 & bVar57)));
        iVar48 = CONCAT13(bVar42 & bVar71,
                          CONCAT12(bVar41 & bVar70,CONCAT11(bVar40 & bVar69,bVar38 & bVar67)));
        puVar14[1] = CONCAT44((iVar29 - iVar73) +
                              (int)(CONCAT17(((byte)((ulong)uRam00000000048af268 >> 0x38) ^ bVar76)
                                             & bVar46,CONCAT16(((byte)((ulong)uRam00000000048af268
                                                                      >> 0x30) ^ bVar75) & bVar45,
                                                               CONCAT15(((byte)((ulong)
                                                  uRam00000000048af268 >> 0x28) ^ bVar74) & bVar44,
                                                  CONCAT14(((byte)((ulong)uRam00000000048af268 >>
                                                                  0x20) ^ bVar72) & bVar43,iVar53)))
                                            ) >> 0x20),(iVar28 - iVar68) + iVar53);
        *puVar14 = CONCAT44((iVar27 - iVar63) +
                            (int)(CONCAT17(((byte)uVar5 ^ bVar66) & bVar37,
                                           CONCAT16(((byte)uVar4 ^ bVar65) & bVar36,
                                                    CONCAT15(((byte)uVar3 ^ bVar64) & bVar35,
                                                             CONCAT14(((byte)uVar10 ^ bVar62) &
                                                                      bVar34,iVar52)))) >> 0x20),
                            (iVar7 - iVar58) + iVar52);
        puVar16[1] = CONCAT44((iVar73 + iVar29) -
                              (int)(CONCAT17(bVar46 & bVar76,
                                             CONCAT16(bVar45 & bVar75,
                                                      CONCAT15(bVar44 & bVar74,
                                                               CONCAT14(bVar43 & bVar72,iVar48))))
                                   >> 0x20),(iVar68 + iVar28) - iVar48);
        *puVar16 = CONCAT44((iVar63 + iVar27) -
                            (int)(CONCAT17(bVar37 & bVar66,
                                           CONCAT16(bVar36 & bVar65,
                                                    CONCAT15(bVar35 & bVar64,
                                                             CONCAT14(bVar34 & bVar62,iVar47)))) >>
                                 0x20),(iVar58 + iVar7) - iVar47);
        puVar14 = puVar14 + 2;
        puVar16 = puVar16 + 2;
      } while (uVar15 != 0);
      bVar1 = 1 < (long)uVar12;
      uVar12 = uVar12 - 1;
    } while (bVar1);
  }
  puVar6 = PTR_DAT_047e6c10;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar11 = 0;
    do {
      if (*param_2 < 2) {
        uVar12 = 0;
      }
      else {
        uVar12 = (ulong)*(byte *)(*(long *)(param_2 + 2) + lVar11);
      }
      pbVar13 = (byte *)(*(long *)(param_2 + 4) + uVar12 * 2);
      iVar27 = *(int *)(*(long *)(lVar24 + 0x38) + (ulong)pbVar13[1] * 0x28 + 0x1c);
      iVar7 = *(int *)(lVar24 + (long)*(int *)(param_1 + 0x3c) * 4) >> 1;
      if (iVar27 <= iVar7) {
        iVar7 = iVar27;
      }
      (**(code **)puVar6)(param_1,*(long *)(lVar24 + 0x30) + (ulong)*pbVar13 * 0x40,
                          *(undefined8 *)(lVar25 + lVar11 * 8),auStack_2090,iVar7);
      FUN_03409fe0(uVar9 & 0xffffffff,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar11 * 8),
                   auStack_2090,iVar7);
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_1 + 0x10));
  }
  *(undefined1 *)(param_1 + 0x48) = 0;
  return 0;
}


