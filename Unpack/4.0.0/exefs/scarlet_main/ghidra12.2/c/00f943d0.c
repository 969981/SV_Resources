/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f943d0; name: FUN_00f943d0
 */


void FUN_00f943d0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  ushort uVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  size_t sVar10;
  size_t sVar11;
  size_t sVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  undefined1 *puVar18;
  long *plVar19;
  long *plVar20;
  ulong uVar21;
  byte *pbVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  uint *puVar26;
  undefined1 *puVar27;
  ushort *puVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  undefined1 *unaff_x26;
  undefined1 *puVar31;
  
  param_1[2] = 0;
  puVar7 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar7 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar9 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar15 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_LAB_045d3538;
  param_1[1] = lVar15;
  plVar1 = param_1 + 6;
  param_1[4] = (long)&PTR_LAB_045d3570;
  FUN_00f94a10();
  piVar16 = (int *)*param_2;
  puVar3 = (uint *)((long)piVar16 + (ulong)*(ushort *)((long)piVar16 + (6 - (long)*piVar16)));
  puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
  puVar26 = puVar3 + 1;
  uVar17 = (ulong)*puVar3;
  if (uVar17 != 0) {
    puVar3 = puVar26 + uVar17;
    plVar2 = param_1 + 0xc;
    do {
      puVar27 = &DAT_cbf29ce484222645;
      piVar16 = (int *)((long)puVar26 + (ulong)*puVar26);
      puVar28 = (ushort *)((long)piVar16 - (long)*piVar16);
      uVar6 = *puVar28;
      if ((uVar6 < 5) || ((ulong)puVar28[2] == 0)) {
        lVar9 = 0;
      }
      else {
        puVar4 = (uint *)((long)piVar16 + (ulong)puVar28[2]);
        lVar9 = (long)puVar4 + (ulong)*puVar4;
      }
      sVar10 = strlen((char *)(lVar9 + 4));
      bVar5 = *(byte *)(lVar9 + 4);
      puVar31 = puVar27;
      if (bVar5 != 0) {
        pbVar22 = (byte *)(lVar9 + 5);
        do {
          puVar31 = (undefined1 *)(((ulong)puVar31 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar5 != 0);
      }
      if ((uVar6 < 7) || ((ulong)puVar28[3] == 0)) {
        lVar15 = 0;
      }
      else {
        puVar4 = (uint *)((long)piVar16 + (ulong)puVar28[3]);
        lVar15 = (long)puVar4 + (ulong)*puVar4;
      }
      sVar11 = strlen((char *)(lVar15 + 4));
      bVar5 = *(byte *)(lVar15 + 4);
      puVar30 = puVar27;
      if (bVar5 != 0) {
        pbVar22 = (byte *)(lVar15 + 5);
        do {
          puVar30 = (undefined1 *)(((ulong)puVar30 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar5 != 0);
      }
      if ((uVar6 < 9) || ((ulong)puVar28[4] == 0)) {
        lVar25 = 0;
      }
      else {
        puVar4 = (uint *)((long)piVar16 + (ulong)puVar28[4]);
        lVar25 = (long)puVar4 + (ulong)*puVar4;
      }
      sVar12 = strlen((char *)(lVar25 + 4));
      bVar5 = *(byte *)(lVar25 + 4);
      if (bVar5 != 0) {
        pbVar22 = (byte *)(lVar25 + 5);
        do {
          puVar27 = (undefined1 *)(((ulong)puVar27 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (bVar5 != 0);
      }
      puVar29 = (undefined1 *)param_1[7];
      if (puVar29 == (undefined1 *)0x0) {
LAB_00f9462c:
        plVar19 = (long *)(**(code **)(*(long *)param_1[0xd] + 0x10))((long *)param_1[0xd],0x70,8);
        if (plVar19 == (long *)0x0) {
          (**(code **)(*(long *)param_1[0xd] + 0xe8))();
        }
        lVar24 = param_1[0xd];
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar13 != 0) {
          if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar24;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
        }
        plVar19[2] = (long)puVar31;
        plVar19[3] = lVar9 + 4;
        plVar19[4] = sVar10;
        plVar19[5] = 0;
        plVar19[6] = (long)puVar30;
        plVar19[7] = lVar15 + 4;
        plVar19[8] = sVar11;
        plVar19[9] = 0;
        plVar19[10] = (long)puVar27;
        plVar19[0xb] = lVar25 + 4;
        plVar19[0xc] = sVar12;
        plVar19[0xd] = 0;
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        *plVar19 = 0;
        plVar19[1] = (long)puVar31;
        if ((puVar29 == (undefined1 *)0x0) ||
           (*(float *)(param_1 + 0x12) * (float)puVar29 < (float)(param_1[0x11] + 1))) {
          uVar17 = (ulong)(puVar29 < (undefined1 *)0x3 ||
                          ((ulong)puVar29 & (ulong)(puVar29 + -1)) != 0) | (long)puVar29 << 1;
          uVar23 = (ulong)((float)(param_1[0x11] + 1) / *(float *)(param_1 + 0x12));
          if (uVar23 <= uVar17) {
            uVar23 = uVar17;
          }
          if (uVar23 - 1 == 0) {
            uVar23 = 2;
          }
          else if ((uVar23 & uVar23 - 1) != 0) {
            uVar23 = std::__next_prime(uVar23);
          }
          uVar17 = param_1[7];
          if (uVar17 < uVar23) {
            uVar14 = uVar23;
LAB_00f947ec:
            FUN_00f94a50(plVar1,uVar14);
          }
          else if (uVar23 < uVar17) {
            uVar14 = (ulong)((float)(ulong)param_1[0x11] / *(float *)(param_1 + 0x12));
            if ((uVar17 < 3) ||
               (uVar21 = uVar17 - (uVar17 >> 1 & 0x5555555555555555),
               uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333),
               1 < (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar14 = std::__next_prime(uVar14);
            }
            else if (1 < uVar14) {
              uVar14 = 1L << (-LZCOUNT(uVar14 - 1) & 0x3fU);
            }
            if (uVar14 <= uVar23) {
              uVar14 = uVar23;
            }
            if (uVar14 < uVar17) goto LAB_00f947ec;
          }
          puVar29 = (undefined1 *)param_1[7];
          if (((ulong)puVar29 & (ulong)(puVar29 + -1)) == 0) {
            unaff_x26 = (undefined1 *)((ulong)(puVar29 + -1) & (ulong)puVar31);
          }
          else if (puVar31 < puVar29) {
            unaff_x26 = puVar31;
          }
          else {
            uVar17 = 0;
            if (puVar29 != (undefined1 *)0x0) {
              uVar17 = (ulong)puVar31 / (ulong)puVar29;
            }
            unaff_x26 = puVar31 + -(uVar17 * (long)puVar29);
          }
        }
        plVar20 = *(long **)(*plVar1 + (long)unaff_x26 * 8);
        if (plVar20 == (long *)0x0) {
          *plVar19 = *plVar2;
          *plVar2 = (long)plVar19;
          *(long **)(*plVar1 + (long)unaff_x26 * 8) = plVar2;
          if (*plVar19 != 0) {
            puVar27 = *(undefined1 **)(*plVar19 + 8);
            if (((ulong)puVar29 & (ulong)(puVar29 + -1)) == 0) {
              puVar27 = (undefined1 *)((ulong)puVar27 & (ulong)(puVar29 + -1));
            }
            else if (puVar29 <= puVar27) {
              uVar17 = 0;
              if (puVar29 != (undefined1 *)0x0) {
                uVar17 = (ulong)puVar27 / (ulong)puVar29;
              }
              puVar27 = puVar27 + -(uVar17 * (long)puVar29);
            }
            plVar20 = (long *)(*plVar1 + (long)puVar27 * 8);
            goto LAB_00f9475c;
          }
        }
        else {
          *plVar19 = *plVar20;
LAB_00f9475c:
          *plVar20 = (long)plVar19;
        }
        param_1[0x11] = param_1[0x11] + 1;
      }
      else {
        puVar18 = puVar29 + -1;
        if (((ulong)puVar29 & (ulong)puVar18) == 0) {
          unaff_x26 = (undefined1 *)((ulong)puVar18 & (ulong)puVar31);
          plVar19 = *(long **)(*plVar1 + (long)unaff_x26 * 8);
          if (plVar19 == (long *)0x0) goto LAB_00f9462c;
          do {
            plVar19 = (long *)*plVar19;
            if ((plVar19 == (long *)0x0) ||
               ((undefined1 *)plVar19[1] != puVar31 &&
                (undefined1 *)((ulong)plVar19[1] & (ulong)puVar18) != unaff_x26)) goto LAB_00f9462c;
          } while ((undefined1 *)plVar19[2] != puVar31);
        }
        else {
          unaff_x26 = puVar31;
          if (puVar29 <= puVar31) {
            uVar17 = 0;
            if (puVar29 != (undefined1 *)0x0) {
              uVar17 = (ulong)puVar31 / (ulong)puVar29;
            }
            unaff_x26 = puVar31 + -(uVar17 * (long)puVar29);
          }
          plVar19 = *(long **)(*plVar1 + (long)unaff_x26 * 8);
          if (plVar19 == (long *)0x0) goto LAB_00f9462c;
          do {
            plVar19 = (long *)*plVar19;
            if (plVar19 == (long *)0x0) goto LAB_00f9462c;
            puVar18 = (undefined1 *)plVar19[1];
            if (puVar18 != puVar31) {
              if (puVar29 <= puVar18) {
                uVar17 = 0;
                if (puVar29 != (undefined1 *)0x0) {
                  uVar17 = (ulong)puVar18 / (ulong)puVar29;
                }
                puVar18 = puVar18 + -(uVar17 * (long)puVar29);
              }
              if (puVar18 != unaff_x26) goto LAB_00f9462c;
            }
          } while ((undefined1 *)plVar19[2] != puVar31);
        }
      }
      puVar26 = puVar26 + 1;
    } while (puVar26 != puVar3);
  }
  return;
}


