/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f75cf4; name: FUN_00f75cf4
 */


void FUN_00f75cf4(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  int iVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  byte *pbVar16;
  long *plVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  char cVar21;
  short sVar22;
  byte bVar23;
  long *plVar24;
  long *plVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  int iStack_84;
  int iStack_78;
  short local_74 [2];
  
  plVar1 = (long *)(param_1 + 0x50);
  if (plVar1 != *(long **)(param_1 + 0x58)) {
    plVar2 = (long *)(param_1 + 0x70);
    plVar24 = *(long **)(param_1 + 0x58);
    do {
      plVar25 = (long *)plVar24[1];
      if (plVar1 != plVar24) {
        lVar14 = *plVar25;
        *(long **)(*plVar24 + 8) = plVar25;
        *plVar25 = *plVar24;
        *(long **)(lVar14 + 8) = plVar24;
        *plVar24 = lVar14;
      }
      FUN_008882c4(param_1,*(undefined2 *)((long)plVar24 + 0x34));
      uVar11 = nn::fontll::ScalableFontEngine::CheckGlyphExist((uint)*(undefined8 *)(param_1 + 8));
      if ((uVar11 & 1) == 0) {
        *(byte *)(plVar24 + 7) = *(byte *)(plVar24 + 7) | 0x40;
        lVar14 = *plVar24;
        *plVar24 = *plVar2;
        *(long **)(lVar14 + 8) = plVar2;
        *(long **)(*plVar2 + 8) = plVar24;
        *plVar2 = lVar14;
      }
      else {
        nn::fontll::ScalableFontEngine::SetScale
                  ((int)*(undefined8 *)(param_1 + 8),(uint)*(ushort *)((long)plVar24 + 0x36) << 0x10
                   ,0,0);
        nn::fontll::ScalableFontEngine::GetError();
        fVar27 = (float)NEON_ucvtf((uint)*(ushort *)((long)plVar24 + 0x36));
        iVar26 = (int)(*(float *)(*(long *)(param_1 + 0x1bf0) +
                                  (ulong)*(ushort *)((long)plVar24 + 0x34) * 0x1c + 8) * fVar27 +
                      0.5);
        lVar14 = nn::fontll::ScalableFontEngine::AcquireGlyphmap
                           ((uint)*(undefined8 *)(param_1 + 8),(ushort)plVar24[6]);
        nn::fontll::ScalableFontEngine::GetError();
        uVar7 = (**(code **)(param_1 + 0x1be0))
                          (((uint)*(ushort *)(lVar14 + 0x1e) + iVar26) -
                           (uint)*(ushort *)(lVar14 + 0xe));
        *(char *)((long)plVar24 + 0x3a) = (char)uVar7;
        uVar18 = *(uint *)(param_1 + 0x1880);
        if (uVar18 == 0) {
          iVar8 = 0;
        }
        else {
          uVar11 = 0;
          pbVar16 = (byte *)(param_1 + 0x94);
          do {
            if (((uint)*pbVar16 == (uVar7 & 0xff)) &&
               ((uint)*(ushort *)(pbVar16 + -2) + (int)*(short *)(lVar14 + 0x1c) + 2 <
                *(uint *)(param_1 + 0x28))) goto LAB_00f75f68;
            uVar11 = uVar11 + 1;
            pbVar16 = pbVar16 + 0x18;
          } while (uVar11 < uVar18);
          if (0xff < uVar18) {
            lVar14 = *plVar24;
            *plVar24 = *(long *)(param_1 + 0x60);
            *(long *)(lVar14 + 8) = param_1 + 0x60;
            *(long **)(*(long *)(param_1 + 0x60) + 8) = plVar24;
            *(long *)(param_1 + 0x60) = lVar14;
            nn::fontll::ScalableFontEngine::ReleasesGlyph(*(void **)(param_1 + 8));
            nn::fontll::ScalableFontEngine::GetError();
            *(undefined4 *)(param_1 + 0x1bcc) = 2;
            goto LAB_00f75d90;
          }
          lVar13 = param_1 + (ulong)(uVar18 - 1) * 0x18;
          uVar5 = *(ushort *)(lVar13 + 0x90);
          iVar8 = (**(code **)(param_1 + 0x1be8))(*(undefined1 *)(lVar13 + 0x94));
          iVar8 = (uint)uVar5 + iVar8 + 2;
        }
        iVar9 = (**(code **)(param_1 + 0x1be8))(uVar7);
        if ((uint)(iVar9 + iVar8) < *(uint *)(param_1 + 0x2c)) {
          uVar11 = (ulong)*(uint *)(param_1 + 0x1880);
          lVar13 = param_1 + uVar11 * 0x18;
          *(undefined2 *)(lVar13 + 0x92) = 0;
          *(short *)(lVar13 + 0x90) = (short)iVar8;
          *(char *)(lVar13 + 0x94) = (char)uVar7;
          iVar8 = *(int *)(param_1 + 0x1880);
          *(char *)(lVar13 + 0x95) = (char)iVar8;
          *(int *)(param_1 + 0x1880) = iVar8 + 1;
LAB_00f75f68:
          lVar13 = param_1 + uVar11 * 0x18;
          plVar17 = plVar24 + 2;
          lVar19 = *plVar17;
          *(undefined2 *)(plVar24 + 8) = *(undefined2 *)(lVar13 + 0x92);
          *(undefined2 *)((long)plVar24 + 0x42) = *(undefined2 *)(lVar13 + 0x90);
          *(undefined1 *)((long)plVar24 + 0x3b) = *(undefined1 *)(lVar13 + 0x95);
          plVar15 = (long *)(lVar13 + 0x80);
          *plVar17 = *plVar15;
          *(long **)(lVar19 + 8) = plVar15;
          *(long **)(*plVar15 + 8) = plVar17;
          *plVar15 = lVar19;
          *(short *)(lVar13 + 0x92) = *(short *)(lVar14 + 0x1c) + *(short *)(lVar13 + 0x92) + 2;
        }
        else {
          lVar13 = FUN_00888494(param_1,*(undefined1 *)((long)plVar24 + 0x3a),
                                *(undefined2 *)(lVar14 + 0x1c));
          if (lVar13 == 0) {
            lVar14 = *plVar24;
            *plVar24 = *(long *)(param_1 + 0x60);
            *(long *)(lVar14 + 8) = param_1 + 0x60;
            *(long **)(*(long *)(param_1 + 0x60) + 8) = plVar24;
            *(long *)(param_1 + 0x60) = lVar14;
            nn::fontll::ScalableFontEngine::ReleasesGlyph(*(void **)(param_1 + 8));
            nn::fontll::ScalableFontEngine::GetError();
            *(undefined4 *)(param_1 + 0x1bcc) = 3;
            goto LAB_00f75d90;
          }
          plVar17 = plVar24 + 2;
          lVar19 = *plVar17;
          *(undefined2 *)(plVar24 + 8) = *(undefined2 *)(lVar13 + 0x40);
          *(undefined2 *)((long)plVar24 + 0x42) = *(undefined2 *)(lVar13 + 0x42);
          *(undefined1 *)((long)plVar24 + 0x3b) = *(undefined1 *)(lVar13 + 0x3b);
          plVar15 = (long *)(lVar13 + 0x10);
          *plVar17 = *plVar15;
          *(long **)(lVar19 + 8) = plVar15;
          *(long **)(*plVar15 + 8) = plVar17;
          *plVar15 = lVar19;
        }
        iVar12 = (int)*(short *)(lVar14 + 0xe);
        iVar9 = iVar26 - iVar12;
        uVar11 = (ulong)*(ushort *)((long)plVar24 + 0x34);
        lVar13 = *(long *)(param_1 + 0x1bf0) + uVar11 * 0x1c;
        uVar18 = (uint)*(ushort *)((long)plVar24 + 0x42);
        iVar8 = iVar9 + uVar18;
        fVar28 = *(float *)(lVar13 + 0x10);
        fVar27 = *(float *)(lVar13 + 0x14);
        *(short *)(plVar24 + 9) = (short)(int)(fVar28 * (float)(int)*(short *)(lVar14 + 0x1c));
        *(short *)((long)plVar24 + 0x4a) =
             (short)(int)(fVar27 * (float)(iVar9 + *(short *)(lVar14 + 0x1e)));
        *(undefined2 *)((long)plVar24 + 0x44) = *(undefined2 *)(lVar14 + 0x1c);
        *(short *)((long)plVar24 + 0x46) = *(short *)(lVar14 + 0x1e) + (short)iVar9;
        if ((*(char *)(*(long *)(param_1 + 0x1c08) + uVar11) == '\0') ||
           (*(short *)(lVar14 + 0x1c) == 0)) {
          if (*(char *)(*(long *)(param_1 + 0x1c18) + uVar11) == '\0') {
            if (*(char *)(param_1 + 0x1c50) == '\0') {
              nn::fontll::ScalableFontEngine::GetAdvance
                        (*(short **)(param_1 + 8),local_74,&iStack_78,&iStack_84,
                         (int)local_74 - 0x14,(ushort)plVar24[6]);
              lVar13 = *(long *)(param_1 + 0x1c10);
              uVar11 = (ulong)*(ushort *)((long)plVar24 + 0x34);
              sVar6 = local_74[0];
            }
            else {
              lVar13 = *(long *)(param_1 + 0x1c10);
              sVar6 = *(short *)(lVar14 + 0x10);
            }
            *(short *)((long)plVar24 + 0x4c) =
                 (short)(int)(fVar28 * (float)((int)*(short *)(lVar13 + uVar11 * 2) + (int)sVar6));
            sVar6 = *(short *)(*(long *)(param_1 + 0x1c10) + uVar11 * 2);
            iVar9 = (int)*(short *)(lVar14 + 0xc) + ((int)(short)(sVar6 - (sVar6 >> 0xf)) >> 1);
          }
          else {
            *(short *)((long)plVar24 + 0x4c) =
                 (short)(int)(fVar28 * (float)(int)*(short *)(*(long *)(param_1 + 0x1c28) +
                                                             uVar11 * 2));
            iVar9 = (int)*(short *)(*(long *)(param_1 + 0x1c28) + uVar11 * 2) -
                    (int)*(short *)(lVar14 + 0x1c);
            if (iVar9 < 0) {
              iVar9 = iVar9 + 1;
            }
            iVar9 = iVar9 >> 1;
          }
        }
        else {
          *(short *)((long)plVar24 + 0x4c) =
               (short)(int)(fVar28 * (float)((int)*(short *)(*(long *)(param_1 + 0x1c10) +
                                                            uVar11 * 2) +
                                            (int)*(short *)(lVar14 + 0x1c)));
          uVar5 = *(ushort *)(*(long *)(param_1 + 0x1c10) + uVar11 * 2);
          iVar9 = (int)(((uint)uVar5 + (uint)(uVar5 >> 0xf)) * 0x10000) >> 0x11;
        }
        *(short *)((long)plVar24 + 0x4e) = (short)(int)(fVar28 * (float)iVar9);
        *(short *)(plVar24 + 10) =
             (short)(int)(fVar27 * (float)iVar26 +
                         (float)*(int *)(*(long *)(param_1 + 0x1bf0) + uVar11 * 0x1c + 0x18));
        uVar11 = (ulong)((int)*(short *)(lVar14 + 0x1c) + 2);
        lVar13 = FUN_008f1228(*(undefined8 *)(param_1 + 0x1e98));
        lVar13 = lVar13 + *(long *)(param_1 + 0x1ea0);
        uVar5 = *(ushort *)((long)plVar24 + 0x42);
        uVar7 = (uint)uVar5;
        if ((int)(uint)uVar5 < iVar8) {
          uVar10 = ~(uint)uVar5;
          do {
            memset((void *)(lVar13 + (ulong)((uint)*(ushort *)(plVar24 + 8) +
                                            (uVar10 + *(int *)(param_1 + 0x2c)) *
                                            *(int *)(param_1 + 0x28))),0,uVar11);
            uVar7 = uVar7 + 1;
            uVar10 = uVar10 - 1;
          } while ((int)uVar7 < iVar8);
        }
        uVar7 = -iVar8 & iVar8 >> 0x1f;
        if (*(char *)(*(long *)(param_1 + 0x1c00) + (ulong)*(ushort *)((long)plVar24 + 0x34)) ==
            '\0') {
          if ((int)uVar7 < (int)*(short *)(lVar14 + 0x1e)) {
            uVar10 = (iVar26 + uVar18) - iVar12;
            uVar10 = ~(uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU));
            do {
              puVar3 = (undefined1 *)
                       (lVar13 + (ulong)((uint)*(ushort *)(plVar24 + 8) +
                                        (uVar10 + *(int *)(param_1 + 0x2c)) *
                                        *(int *)(param_1 + 0x28)));
              memcpy(puVar3 + 1,
                     (void *)(lVar14 + (long)(int)uVar7 * (long)*(short *)(lVar14 + 0x1c) + 0x28),
                     (long)*(short *)(lVar14 + 0x1c));
              *puVar3 = 0;
              puVar3[(long)*(short *)(lVar14 + 0x1c) + 1] = 0;
              uVar7 = uVar7 + 1;
              uVar10 = uVar10 - 1;
            } while ((int)uVar7 < (int)*(short *)(lVar14 + 0x1e));
          }
        }
        else {
          nn::fontll::ScalableFontEngine::SetFlags(*(undefined8 *)(param_1 + 8),1);
          lVar19 = nn::fontll::ScalableFontEngine::AcquireGlyphmap
                             ((uint)*(undefined8 *)(param_1 + 8),(ushort)plVar24[6]);
          nn::fontll::ScalableFontEngine::GetError();
          nn::fontll::ScalableFontEngine::SetFlags(*(undefined8 *)(param_1 + 8),2);
          sVar6 = *(short *)(lVar14 + 0x1e);
          if (*(short *)(lVar14 + 0x1e) <= *(short *)(lVar19 + 0x1e)) {
            sVar6 = *(short *)(lVar19 + 0x1e);
          }
          if ((int)uVar7 < (int)sVar6) {
            uVar10 = (iVar26 + uVar18) - iVar12;
            uVar10 = ~(uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU));
            do {
              iVar9 = *(int *)(param_1 + 0x28);
              iVar4 = *(int *)(param_1 + 0x2c);
              uVar5 = *(ushort *)(plVar24 + 8);
              sVar22 = *(short *)(lVar14 + 0x1c);
              puVar3 = (undefined1 *)
                       (lVar13 + (ulong)((uint)uVar5 + (iVar4 + ~(uVar7 + iVar8)) * iVar9));
              if (0 < sVar22) {
                lVar20 = 0;
                do {
                  if ((int)uVar7 < (int)*(short *)(lVar14 + 0x1e)) {
                    cVar21 = *(char *)(lVar14 + (int)((int)lVar20 + uVar7 * (int)sVar22) + 0x28);
                    if ((int)*(short *)(lVar19 + 0x1e) <= (int)uVar7) goto LAB_00f76398;
LAB_00f7632c:
                    bVar23 = *(byte *)(lVar19 + (int)((int)lVar20 +
                                                     uVar7 * (int)*(short *)(lVar19 + 0x1c)) + 0x28)
                             >> 1;
                  }
                  else {
                    cVar21 = '\0';
                    if ((int)uVar7 < (int)*(short *)(lVar19 + 0x1e)) goto LAB_00f7632c;
LAB_00f76398:
                    bVar23 = 0;
                  }
                  *(byte *)(lVar13 + 1 + (ulong)((uint)uVar5 + iVar9 * (iVar4 + uVar10)) + lVar20) =
                       cVar21 - bVar23;
                  sVar22 = *(short *)(lVar14 + 0x1c);
                  lVar20 = lVar20 + 1;
                } while (lVar20 < sVar22);
              }
              *puVar3 = 0;
              uVar7 = uVar7 + 1;
              uVar10 = uVar10 - 1;
              puVar3[(long)*(short *)(lVar14 + 0x1c) + 1] = 0;
            } while ((int)uVar7 < (int)sVar6);
          }
          nn::fontll::ScalableFontEngine::ReleasesGlyph(*(void **)(param_1 + 8));
          lVar14 = lVar19;
        }
        uVar10 = (**(code **)(param_1 + 0x1be8))(*(undefined1 *)((long)plVar24 + 0x3a));
        uVar7 = (uint)(short)*(ushort *)(lVar14 + 0x1e);
        if ((uVar7 < uVar10) && (*(ushort *)(lVar14 + 0x1e) < 0xfffe)) {
          iVar26 = ~uVar18 + ((iVar12 - iVar26) - uVar7);
          do {
            uVar7 = uVar7 + 1;
            memset((void *)(lVar13 + (ulong)((uint)*(ushort *)(plVar24 + 8) +
                                            (iVar26 + *(int *)(param_1 + 0x2c)) *
                                            *(int *)(param_1 + 0x28))),0,uVar11);
            if (uVar10 <= uVar7) break;
            iVar26 = iVar26 + -1;
          } while (uVar7 < (int)*(short *)(lVar14 + 0x1e) + 2U);
        }
        FUN_008f123c(*(undefined8 *)(param_1 + 0x1e98));
        nn::fontll::ScalableFontEngine::ReleasesGlyph(*(void **)(param_1 + 8));
        nn::fontll::ScalableFontEngine::GetError();
      }
LAB_00f75d90:
      plVar24 = plVar25;
    } while (plVar1 != plVar25);
  }
  return;
}


