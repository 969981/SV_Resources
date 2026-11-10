/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002cf658; name: FUN_002cf658
 */


bool FUN_002cf658(long param_1)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  uint *puVar8;
  void *__s;
  long lVar9;
  uint *puVar10;
  long lVar11;
  ostream *this;
  void *__dest;
  long lVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  uint *puVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  size_t sVar30;
  uint *puVar31;
  long lVar32;
  int local_1bc;
  undefined1 local_188 [8];
  ostream aoStack_180 [264];
  void *local_78;
  void *local_70;
  undefined8 local_68;
  
  if (*(char *)(param_1 + 4) == '\0') {
    *(undefined1 *)(param_1 + 4) = 1;
    puVar6 = PTR_FUN_047cba38;
    if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x34) < 0xfde6)) {
      lVar12 = (long)*(int *)(param_1 + 0x34) + 2;
      iVar2 = *(int *)(param_1 + 0x14) * 4 + 4;
      lVar15 = *(long *)(param_1 + 0x80);
      lVar32 = (long)iVar2;
      lVar9 = lVar15 + 3;
      if (-1 < lVar15) {
        lVar9 = lVar15;
      }
      lVar15 = 0;
      if (lVar32 != 0) {
        lVar15 = (lVar9 >> 2) / lVar32;
      }
      if (lVar12 <= lVar15) {
        uVar27 = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x44) + 1;
        puVar8 = (uint *)FUN_0049e770(PTR_FUN_047cba38,
                                      -(ulong)(uVar27 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar27 << 3);
        uVar4 = *(uint *)(param_1 + 0x10);
        sVar30 = (long)(int)uVar4 << 2;
        __s = (void *)FUN_0049e770(puVar6,sVar30);
        memset(__s,0xff,sVar30);
        local_68 = 0;
        local_78 = (void *)0x0;
        local_70 = (void *)0x0;
        lVar9 = FUN_0049e770(puVar6,sVar30);
        puVar10 = (uint *)FUN_0049e770(puVar6,sVar30);
        lVar15 = FUN_0049e770(puVar6,sVar30);
        lVar11 = FUN_0049e770(puVar6,sVar30);
        uVar27 = *(uint *)(param_1 + 8);
        if (uVar27 == 0) {
          uVar29 = 0;
        }
        else {
          uVar29 = 0;
          if ((puVar10 != (uint *)0x0) && (uVar27 < uVar4)) {
            *(undefined4 *)(lVar9 + (long)(int)uVar27 * 4) = 0;
            *puVar10 = uVar27;
            uVar27 = *(uint *)(param_1 + 8);
            uVar29 = 1;
          }
        }
        *(undefined4 *)((long)__s + (long)(int)uVar27 * 4) = 0;
        local_188[0] = 0;
                    /* try { // try from 002cf7e8 to 002cf7ff has its CatchHandler @ 002cfe58 */
        FUN_002cff48(&local_78,0,lVar32,local_188);
        if (uVar29 == 0) {
          local_1bc = 1;
LAB_002cfd40:
          sVar30 = (size_t)(local_1bc * iVar2);
          *(size_t *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) - sVar30;
          __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,sVar30);
          lVar12 = *(long *)(param_1 + 0x70);
          *(void **)(param_1 + 0x70) = __dest;
          if (lVar12 != 0) {
            FUN_0049e790(PTR_LAB_047cba48);
            __dest = *(void **)(param_1 + 0x70);
          }
          *(int *)(param_1 + 0x78) = local_1bc * iVar2;
          memmove(__dest,local_78,sVar30);
          bVar7 = true;
LAB_002cfd94:
          if (lVar11 != 0) {
LAB_002cfd9c:
            FUN_0049e790(PTR_LAB_047cba48,lVar11);
          }
          if (lVar15 != 0) {
            FUN_0049e790(PTR_LAB_047cba48);
          }
          if (puVar10 != (uint *)0x0) {
            FUN_0049e790(PTR_LAB_047cba48,puVar10);
          }
          if (lVar9 != 0) {
            FUN_0049e790(PTR_LAB_047cba48,lVar9);
          }
          if (local_78 != (void *)0x0) {
            local_70 = local_78;
            FUN_0049e790(PTR_LAB_047cba48);
          }
          if (__s != (void *)0x0) {
            FUN_0049e790(PTR_LAB_047cba48,__s);
          }
          if (puVar8 == (uint *)0x0) {
            return bVar7;
          }
          FUN_0049e790(PTR_LAB_047cba48,puVar8);
          return bVar7;
        }
        local_1bc = 1;
        puVar21 = puVar10;
LAB_002cf838:
        uVar27 = *puVar21;
        lVar18 = (long)*(int *)((long)__s + (long)(int)uVar27 * 4) * (long)iVar2;
        puVar31 = (uint *)((long)local_78 + lVar18);
        if (0 < *(int *)(param_1 + 0x14)) {
          lVar19 = 0;
          do {
            puVar31[lVar19 + 1] = 0x30;
            lVar19 = lVar19 + 1;
          } while (lVar19 < *(int *)(param_1 + 0x14));
        }
        bVar7 = false;
        uVar28 = 0;
        uVar25 = 1;
        *puVar31 = 0x30;
        *puVar8 = uVar27;
        puVar8[1] = 0;
LAB_002cf898:
        uVar25 = (long)(int)uVar25 - 1;
        uVar16 = (ulong)puVar8[uVar25 * 2];
        uVar27 = (puVar8 + uVar25 * 2)[1];
LAB_002cf8c4:
        lVar19 = *(long *)(param_1 + 0x60);
        uVar13 = (uint)uVar16;
        puVar1 = (uint *)(lVar19 + (long)(int)uVar13 * 8);
        uVar20 = *puVar1;
        iVar24 = (int)uVar25;
        if (6 < (uVar20 & 7) - 1) goto LAB_002cfcb0;
        lVar26 = (long)(int)uVar13;
        switch(uVar20 & 7) {
        case 2:
          uVar20 = uVar20 >> 4;
          uVar16 = (ulong)uVar20;
          iVar14 = *(int *)((long)__s + uVar16 * 4);
          if (iVar14 == -1) {
            if ((int)lVar12 <= local_1bc) goto LAB_002cfd2c;
            if (((uVar20 < uVar4 && puVar10 != (uint *)0x0) && uVar20 != 0) &&
               ((uVar17 = *(uint *)(lVar9 + uVar16 * 4), uVar29 <= uVar17 ||
                (puVar10[(int)uVar17] != uVar20)))) {
              *(uint *)(lVar9 + uVar16 * 4) = uVar29;
              puVar10[(int)uVar29] = uVar20;
              uVar29 = uVar29 + 1;
              uVar16 = (ulong)(*puVar1 >> 4);
            }
            *(int *)((long)__s + uVar16 * 4) = local_1bc;
            local_188[0] = 0;
                    /* try { // try from 002cfa18 to 002cfa27 has its CatchHandler @ 002cfe54 */
            FUN_002cff48(&local_78,local_70,lVar32,local_188);
            puVar31 = (uint *)((long)local_78 + lVar18);
            iVar14 = local_1bc;
            local_1bc = local_1bc + 1;
          }
          lVar19 = lVar19 + lVar26 * 8;
          bVar3 = *(byte *)(lVar19 + 4);
          uVar16 = (ulong)bVar3;
          uVar20 = (uint)*(byte *)(lVar19 + 5);
          if (bVar3 <= *(byte *)(lVar19 + 5)) {
            uVar5 = uVar27 | iVar14 << 0x10;
            uVar17 = uVar5 | 0x40;
            if (!bVar7) {
              uVar17 = uVar5;
            }
            do {
              lVar22 = (long)(int)uVar16;
              bVar3 = *(byte *)(param_1 + lVar22 + 0x98);
              lVar26 = lVar22;
              if (lVar22 < 0x100) {
                lVar26 = 0xff;
              }
              do {
                lVar23 = lVar22;
                if (lVar26 == lVar23) goto LAB_002cfc0c;
                lVar22 = lVar23 + 1;
              } while (*(byte *)(param_1 + 0x99 + lVar23) == bVar3);
              lVar26 = lVar23;
LAB_002cfc0c:
              uVar5 = puVar31[(ulong)bVar3 + 1];
              if ((~uVar5 & 0x30) == 0) {
                puVar31[(ulong)bVar3 + 1] = uVar17;
                uVar20 = (uint)*(byte *)(lVar19 + 5);
              }
              else if (uVar5 != uVar17) goto LAB_002cfd2c;
              uVar16 = lVar26 + 1;
            } while ((int)lVar26 < (int)uVar20);
          }
          if ((*(byte *)(lVar19 + 6) & 1) != 0) {
            bVar3 = *(byte *)(lVar19 + 4);
            uVar17 = (uint)bVar3;
            if (bVar3 < 0x62) {
              uVar17 = 0x61;
            }
            if (0x79 < uVar20) {
              uVar20 = 0x7a;
            }
            if (uVar17 <= uVar20) {
              uVar5 = uVar27 | iVar14 << 0x10;
              iVar14 = uVar17 - 0x20;
              uVar17 = uVar5 | 0x40;
              if (!bVar7) {
                uVar17 = uVar5;
              }
              do {
                lVar26 = (long)iVar14;
                bVar3 = *(byte *)(param_1 + lVar26 + 0x98);
                lVar19 = lVar26;
                if (lVar26 < 0x100) {
                  lVar19 = 0xff;
                }
                do {
                  lVar22 = lVar26;
                  if (lVar19 == lVar22) goto LAB_002cfc90;
                  lVar26 = lVar22 + 1;
                } while (*(byte *)(param_1 + 0x99 + lVar22) == bVar3);
                lVar19 = lVar22;
LAB_002cfc90:
                uVar5 = puVar31[(ulong)bVar3 + 1];
                if ((~uVar5 & 0x30) == 0) {
                  puVar31[(ulong)bVar3 + 1] = uVar17;
                }
                else if (uVar5 != uVar17) goto LAB_002cfd2c;
                iVar14 = (int)lVar19 + 1;
              } while ((int)lVar19 < (int)(uVar20 - 0x20));
            }
          }
          if (((byte)*puVar1 >> 3 & 1) != 0) goto switchD_002cf8f8_caseD_7;
        case 1:
          uVar16 = 0;
          uVar20 = uVar13 + 1;
          if (((uVar13 != 0xffffffff) && (uVar16 = (ulong)uVar20, lVar11 != 0)) &&
             (uVar16 = (ulong)uVar20, uVar20 < uVar4)) {
            uVar13 = *(uint *)(lVar15 + (long)(int)uVar20 * 4);
            if ((uVar13 < uVar28) && (*(uint *)(lVar11 + (long)(int)uVar13 * 4) == uVar20))
            goto LAB_002cfe2c;
            *(uint *)(lVar15 + (long)(int)uVar20 * 4) = uVar28;
            *(uint *)(lVar11 + (long)(int)uVar28 * 4) = uVar20;
            uVar28 = uVar28 + 1;
            uVar16 = (ulong)uVar20;
          }
          goto LAB_002cf8c4;
        case 5:
          if (!bVar7) {
            *puVar31 = uVar27;
            if (((byte)*puVar1 >> 3 & 1) == 0) goto code_r0x002cfaf8;
            bVar7 = true;
            goto switchD_002cf8f8_caseD_7;
          }
LAB_002cfd2c:
          bVar7 = false;
          goto LAB_002cfd94;
        case 7:
          goto switchD_002cf8f8_caseD_7;
        }
        if ((uVar20 >> 3 & 1) != 0) {
LAB_002cf95c:
          if ((uVar20 & 7) == 4) {
            uVar13 = *(uint *)(lVar19 + lVar26 * 8 + 4);
LAB_002cfb70:
            uVar27 = uVar13 | uVar27;
          }
          else if (((uVar20 & 7) == 3) &&
                  (uVar13 = *(uint *)(lVar19 + lVar26 * 8 + 4), (int)uVar13 < 10)) {
            uVar13 = 0x20 << (ulong)(uVar13 & 0x1f);
            goto LAB_002cfb70;
          }
          uVar20 = uVar20 >> 4;
          uVar16 = (ulong)uVar20;
          if (((uVar20 != 0) && (lVar11 != 0)) && (uVar20 < uVar4)) {
            uVar13 = *(uint *)(lVar15 + (ulong)uVar20 * 4);
            if ((uVar13 < uVar28) && (*(uint *)(lVar11 + (long)(int)uVar13 * 4) == uVar20))
            goto LAB_002cfe2c;
            *(uint *)(lVar15 + uVar16 * 4) = uVar28;
            *(uint *)(lVar11 + (long)(int)uVar28 * 4) = uVar20;
            uVar28 = uVar28 + 1;
            uVar16 = (ulong)(*puVar1 >> 4);
          }
          goto LAB_002cf8c4;
        }
        uVar13 = uVar13 + 1;
        if (((uVar13 == 0) || (lVar11 == 0)) || (uVar4 <= uVar13)) {
LAB_002cf94c:
          uVar25 = (ulong)(iVar24 + 1);
          puVar8[(long)iVar24 * 2] = uVar13;
          (puVar8 + (long)iVar24 * 2)[1] = uVar27;
          goto LAB_002cf95c;
        }
        uVar20 = *(uint *)(lVar15 + (long)(int)uVar13 * 4);
        if ((uVar28 <= uVar20) || (*(uint *)(lVar11 + (long)(int)uVar20 * 4) != uVar13)) {
          *(uint *)(lVar15 + (long)(int)uVar13 * 4) = uVar28;
          *(uint *)(lVar11 + (long)(int)uVar28 * 4) = uVar13;
          uVar20 = *puVar1;
          uVar28 = uVar28 + 1;
          goto LAB_002cf94c;
        }
        goto LAB_002cfe2c;
      }
    }
    bVar7 = false;
  }
  else {
    bVar7 = *(long *)(param_1 + 0x70) != 0;
  }
  return bVar7;
LAB_002cfcb0:
                    /* try { // try from 002cfcb0 to 002cfcc3 has its CatchHandler @ 002cfe40 */
  FUN_002cc810(local_188,"external/com_github_google_re2/re2/onepass.cc",0x1bf);
                    /* try { // try from 002cfcc4 to 002cfce3 has its CatchHandler @ 002cfe44 */
  this = std::__put_character_sequence<char,std::char_traits<char>>
                   (aoStack_180,"unhandled opcode: ",0x12);
  std::ostream::operator<<(this,*puVar1 & 7);
  FUN_002cc97c(local_188);
switchD_002cf8f8_caseD_7:
  if (iVar24 < 1) goto code_r0x002cfd04;
  goto LAB_002cf898;
code_r0x002cfaf8:
  uVar16 = 0;
  uVar20 = uVar13 + 1;
  bVar7 = true;
  if (0xfffffffe < uVar13) goto LAB_002cf8c4;
  bVar7 = true;
  uVar16 = (ulong)uVar20;
  if ((lVar11 == 0) || (uVar16 = (ulong)uVar20, uVar4 <= uVar20)) goto LAB_002cf8c4;
  uVar13 = *(uint *)(lVar15 + (long)(int)uVar20 * 4);
  if ((uVar28 <= uVar13) || (*(uint *)(lVar11 + (long)(int)uVar13 * 4) != uVar20)) {
    *(uint *)(lVar15 + (long)(int)uVar20 * 4) = uVar28;
    *(uint *)(lVar11 + (long)(int)uVar28 * 4) = uVar20;
    uVar28 = uVar28 + 1;
    bVar7 = true;
    uVar16 = (ulong)uVar20;
    goto LAB_002cf8c4;
  }
LAB_002cfe2c:
  bVar7 = false;
  goto LAB_002cfd9c;
code_r0x002cfd04:
  puVar21 = puVar21 + 1;
  if (puVar21 == puVar10 + (int)uVar29) goto LAB_002cfd40;
  goto LAB_002cf838;
}


