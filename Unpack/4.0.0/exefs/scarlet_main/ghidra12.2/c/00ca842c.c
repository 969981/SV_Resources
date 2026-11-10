/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ca842c; name: FUN_00ca842c
 */


void FUN_00ca842c(long param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  uint uVar18;
  undefined8 *puVar19;
  char local_48 [32];
  long *local_28;
  uint local_4;
  
  if ((*(uint *)(param_1 + 0x2c) >> 2 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffffb;
    lVar6 = *(long *)(param_1 + 0x38);
    local_4 = 0;
    uVar14 = *(long *)(param_1 + 0x48) - lVar5;
    if ((int)(uVar14 >> 3) == 0) {
      uVar12 = 1;
      uVar13 = 1;
    }
    else {
      uVar9 = 0;
      uVar13 = 1;
      uVar12 = 1;
      do {
        if (*(char *)(lVar5 + uVar9 * 8) != '\0') {
          uVar18 = *(uint *)(lVar5 + uVar9 * 8 + 4);
          *(byte *)((long)&local_4 + uVar9) =
               (byte)(*(ulong *)(*(long *)(param_1 + 0xb0) + ((ulong)(uVar18 >> 3) & 0x1ffffff8)) >>
                     ((ulong)uVar18 & 0x3f)) & 1;
          lVar17 = *(long *)(*(long *)(lVar6 + 0x70) + (ulong)uVar18 * 8);
          puVar16 = *(undefined8 **)(lVar17 + 0x30);
          puVar3 = *(undefined8 **)(lVar17 + 0x38);
          if (puVar16 == puVar3) {
            uVar13 = 0;
          }
          else {
            puVar19 = puVar16;
            do {
              piVar1 = (int *)*puVar19;
              while (piVar1 != (int *)puVar19[1]) {
                iVar4 = *piVar1;
                piVar1 = piVar1 + 2;
                if (iVar4 == 2) {
                  uVar18 = 1;
                  goto LAB_00ca850c;
                }
              }
              puVar19 = puVar19 + 9;
            } while (puVar19 != puVar3);
            uVar18 = 0;
LAB_00ca850c:
            uVar13 = uVar13 & uVar18;
            do {
              piVar1 = (int *)*puVar16;
              while (piVar1 != (int *)puVar16[1]) {
                iVar4 = *piVar1;
                piVar1 = piVar1 + 2;
                if (iVar4 == 4) {
                  uVar18 = 1;
                  goto LAB_00ca8548;
                }
              }
              puVar16 = puVar16 + 9;
            } while (puVar16 != puVar3);
          }
          uVar18 = 0;
LAB_00ca8548:
          uVar12 = uVar12 & uVar18;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != (uVar14 >> 3 & 0xffffffff));
    }
    lVar5 = *(long *)(param_1 + 0xe8);
    plVar7 = *(long **)(*(long *)(lVar5 + 0x30) + 0x110);
    plVar11 = *(long **)(*(long *)(lVar5 + 0x30) + 0x118);
    plVar8 = plVar7;
    if ((plVar7 != plVar11) && (*plVar7 != -0x58074e8447efbca3)) {
      do {
        plVar8 = plVar8 + 0xc;
        if (plVar11 == plVar8) {
          plVar8 = plVar11;
          goto LAB_00ca85b8;
        }
      } while (*plVar8 != -0x58074e8447efbca3);
    }
LAB_00ca85b8:
    if (plVar11 != plVar8) {
      iVar4 = (int)((ulong)((long)plVar8 - (long)plVar7) >> 5) * -0x55555555;
      lVar6 = plVar7[(long)iVar4 * 0xc + 4];
      lVar17 = plVar7[(long)iVar4 * 0xc + 5];
      lVar15 = lVar6;
      if ((lVar6 != lVar17) && (lVar10 = lVar6, *(int *)(lVar6 + 0x20) != 1)) {
        do {
          lVar15 = lVar10 + 0x28;
          if (lVar17 == lVar15) {
            lVar15 = lVar17;
            goto LAB_00ca85f8;
          }
          piVar1 = (int *)(lVar10 + 0x48);
          lVar10 = lVar15;
        } while (*piVar1 != 1);
      }
LAB_00ca85f8:
      if (lVar17 != lVar15) {
        lVar10 = (long)iVar4;
        uVar14 = (ulong)*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x59);
        lVar17 = *(long *)(lVar5 + 0x80);
        if ((ulong)(*(long *)(lVar5 + 0x88) - lVar17 >> 2) <= uVar14) goto LAB_00ca9208;
        *(uint *)(lVar17 + uVar14 * 4) =
             (int)((ulong)(lVar15 - lVar6) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar17 + uVar14 * 4) &
             (*(uint *)((long)plVar7 + lVar10 * 0x60 + 0x5c) ^ 0xffffffff);
        lVar5 = *(long *)(param_1 + 0xe8);
        plVar7 = *(long **)(*(long *)(lVar5 + 0x30) + 0x110);
        plVar11 = *(long **)(*(long *)(lVar5 + 0x30) + 0x118);
      }
    }
    plVar8 = plVar7;
    if ((plVar7 != plVar11) && (*plVar7 != -0x71d3529ee2b24559)) {
      do {
        plVar8 = plVar8 + 0xc;
        if (plVar11 == plVar8) {
          plVar8 = plVar11;
          goto LAB_00ca86b4;
        }
      } while (*plVar8 != -0x71d3529ee2b24559);
    }
LAB_00ca86b4:
    if (plVar11 != plVar8) {
      iVar4 = (int)((ulong)((long)plVar8 - (long)plVar7) >> 5) * -0x55555555;
      lVar6 = plVar7[(long)iVar4 * 0xc + 4];
      lVar17 = plVar7[(long)iVar4 * 0xc + 5];
      lVar15 = lVar6;
      if ((lVar6 != lVar17) && (lVar10 = lVar6, *(int *)(lVar6 + 0x20) != 1)) {
        do {
          lVar15 = lVar10 + 0x28;
          if (lVar17 == lVar15) {
            lVar15 = lVar17;
            goto LAB_00ca86f4;
          }
          piVar1 = (int *)(lVar10 + 0x48);
          lVar10 = lVar15;
        } while (*piVar1 != 1);
      }
LAB_00ca86f4:
      if (lVar17 != lVar15) {
        lVar10 = (long)iVar4;
        uVar14 = (ulong)*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x59);
        lVar17 = *(long *)(lVar5 + 0x80);
        if ((ulong)(*(long *)(lVar5 + 0x88) - lVar17 >> 2) <= uVar14) goto LAB_00ca9208;
        *(uint *)(lVar17 + uVar14 * 4) =
             (int)((ulong)(lVar15 - lVar6) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar17 + uVar14 * 4) &
             (*(uint *)((long)plVar7 + lVar10 * 0x60 + 0x5c) ^ 0xffffffff);
        lVar5 = *(long *)(param_1 + 0xe8);
        plVar7 = *(long **)(*(long *)(lVar5 + 0x30) + 0x110);
        plVar11 = *(long **)(*(long *)(lVar5 + 0x30) + 0x118);
      }
    }
    plVar8 = plVar7;
    if ((plVar7 != plVar11) && (*plVar7 != 0x7dd9cac5a6fdf22a)) {
      do {
        plVar8 = plVar8 + 0xc;
        if (plVar11 == plVar8) {
          plVar8 = plVar11;
          goto LAB_00ca87b0;
        }
      } while (*plVar8 != 0x7dd9cac5a6fdf22a);
    }
LAB_00ca87b0:
    if (plVar11 != plVar8) {
      iVar4 = (int)((ulong)((long)plVar8 - (long)plVar7) >> 5) * -0x55555555;
      lVar6 = plVar7[(long)iVar4 * 0xc + 4];
      lVar17 = plVar7[(long)iVar4 * 0xc + 5];
      lVar15 = lVar6;
      if ((lVar6 != lVar17) && (lVar10 = lVar6, *(int *)(lVar6 + 0x20) != 0)) {
        do {
          lVar15 = lVar10 + 0x28;
          if (lVar17 == lVar15) {
            lVar15 = lVar17;
            goto LAB_00ca87ec;
          }
          piVar1 = (int *)(lVar10 + 0x48);
          lVar10 = lVar15;
        } while (*piVar1 != 0);
      }
LAB_00ca87ec:
      if (lVar17 != lVar15) {
        lVar10 = (long)iVar4;
        uVar14 = (ulong)*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x59);
        lVar17 = *(long *)(lVar5 + 0x80);
        if ((ulong)(*(long *)(lVar5 + 0x88) - lVar17 >> 2) <= uVar14) goto LAB_00ca9208;
        *(uint *)(lVar17 + uVar14 * 4) =
             (int)((ulong)(lVar15 - lVar6) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar17 + uVar14 * 4) &
             (*(uint *)((long)plVar7 + lVar10 * 0x60 + 0x5c) ^ 0xffffffff);
        lVar5 = *(long *)(param_1 + 0xe8);
        plVar7 = *(long **)(*(long *)(lVar5 + 0x30) + 0x110);
        plVar11 = *(long **)(*(long *)(lVar5 + 0x30) + 0x118);
      }
    }
    plVar8 = plVar7;
    if ((plVar7 != plVar11) && (*plVar7 != 0x105d7f844484169b)) {
      do {
        plVar8 = plVar8 + 0xc;
        if (plVar11 == plVar8) {
          plVar8 = plVar11;
          goto LAB_00ca88a8;
        }
      } while (*plVar8 != 0x105d7f844484169b);
    }
LAB_00ca88a8:
    if (plVar11 != plVar8) {
      iVar4 = (int)((ulong)((long)plVar8 - (long)plVar7) >> 5) * -0x55555555;
      lVar6 = plVar7[(long)iVar4 * 0xc + 4];
      lVar17 = plVar7[(long)iVar4 * 0xc + 5];
      lVar15 = lVar6;
      if ((lVar6 != lVar17) && (lVar10 = lVar6, *(uint *)(lVar6 + 0x20) != uVar13)) {
        do {
          lVar15 = lVar10 + 0x28;
          if (lVar17 == lVar15) {
            lVar15 = lVar17;
            goto LAB_00ca88ec;
          }
          puVar2 = (uint *)(lVar10 + 0x48);
          lVar10 = lVar15;
        } while (*puVar2 != uVar13);
      }
LAB_00ca88ec:
      if (lVar17 != lVar15) {
        lVar10 = (long)iVar4;
        uVar14 = (ulong)*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x59);
        lVar17 = *(long *)(lVar5 + 0x80);
        if ((ulong)(*(long *)(lVar5 + 0x88) - lVar17 >> 2) <= uVar14) goto LAB_00ca9208;
        *(uint *)(lVar17 + uVar14 * 4) =
             (int)((ulong)(lVar15 - lVar6) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar17 + uVar14 * 4) &
             (*(uint *)((long)plVar7 + lVar10 * 0x60 + 0x5c) ^ 0xffffffff);
        lVar5 = *(long *)(param_1 + 0xe8);
        plVar7 = *(long **)(*(long *)(lVar5 + 0x30) + 0x110);
        plVar11 = *(long **)(*(long *)(lVar5 + 0x30) + 0x118);
      }
    }
    plVar8 = plVar7;
    if ((plVar7 != plVar11) && (*plVar7 != 0x7679b13314492731)) {
      do {
        plVar8 = plVar8 + 0xc;
        if (plVar11 == plVar8) {
          plVar8 = plVar11;
          goto LAB_00ca89a8;
        }
      } while (*plVar8 != 0x7679b13314492731);
    }
LAB_00ca89a8:
    if (plVar11 != plVar8) {
      iVar4 = (int)((ulong)((long)plVar8 - (long)plVar7) >> 5) * -0x55555555;
      lVar6 = plVar7[(long)iVar4 * 0xc + 4];
      lVar17 = plVar7[(long)iVar4 * 0xc + 5];
      lVar15 = lVar6;
      if ((lVar6 != lVar17) && (lVar10 = lVar6, *(uint *)(lVar6 + 0x20) != uVar12)) {
        do {
          lVar15 = lVar10 + 0x28;
          if (lVar17 == lVar15) {
            lVar15 = lVar17;
            goto LAB_00ca89ec;
          }
          puVar2 = (uint *)(lVar10 + 0x48);
          lVar10 = lVar15;
        } while (*puVar2 != uVar12);
      }
LAB_00ca89ec:
      if (lVar17 != lVar15) {
        lVar10 = (long)iVar4;
        uVar14 = (ulong)*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x59);
        lVar17 = *(long *)(lVar5 + 0x80);
        if ((ulong)(*(long *)(lVar5 + 0x88) - lVar17 >> 2) <= uVar14) goto LAB_00ca9208;
        *(uint *)(lVar17 + uVar14 * 4) =
             (int)((ulong)(lVar15 - lVar6) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar17 + uVar14 * 4) &
             (*(uint *)((long)plVar7 + lVar10 * 0x60 + 0x5c) ^ 0xffffffff);
        lVar5 = *(long *)(param_1 + 0xe8);
        plVar7 = *(long **)(*(long *)(lVar5 + 0x30) + 0x110);
        plVar11 = *(long **)(*(long *)(lVar5 + 0x30) + 0x118);
      }
    }
    plVar8 = plVar7;
    if ((plVar7 != plVar11) && (*plVar7 != 0x695f32fe9cd51278)) {
      do {
        plVar8 = plVar8 + 0xc;
        if (plVar11 == plVar8) {
          plVar8 = plVar11;
          goto LAB_00ca8aac;
        }
      } while (*plVar8 != 0x695f32fe9cd51278);
    }
LAB_00ca8aac:
    if (plVar11 != plVar8) {
      iVar4 = (int)((ulong)((long)plVar8 - (long)plVar7) >> 5) * -0x55555555;
      lVar6 = plVar7[(long)iVar4 * 0xc + 4];
      lVar17 = plVar7[(long)iVar4 * 0xc + 5];
      lVar15 = lVar6;
      if (lVar6 != lVar17) {
        lVar10 = lVar6;
        if (*(uint *)(lVar6 + 0x20) != (local_4 & 0xff)) {
          do {
            lVar15 = lVar10 + 0x28;
            if (lVar17 == lVar15) {
              lVar15 = lVar17;
              goto LAB_00ca8aec;
            }
            puVar2 = (uint *)(lVar10 + 0x48);
            lVar10 = lVar15;
          } while (*puVar2 != (local_4 & 0xff));
        }
      }
LAB_00ca8aec:
      if (lVar17 != lVar15) {
        lVar10 = (long)iVar4;
        uVar14 = (ulong)*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x59);
        lVar17 = *(long *)(lVar5 + 0x80);
        if ((ulong)(*(long *)(lVar5 + 0x88) - lVar17 >> 2) <= uVar14) goto LAB_00ca9208;
        *(uint *)(lVar17 + uVar14 * 4) =
             (int)((ulong)(lVar15 - lVar6) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar17 + uVar14 * 4) &
             (*(uint *)((long)plVar7 + lVar10 * 0x60 + 0x5c) ^ 0xffffffff);
        lVar5 = *(long *)(param_1 + 0xe8);
        plVar7 = *(long **)(*(long *)(lVar5 + 0x30) + 0x110);
        plVar11 = *(long **)(*(long *)(lVar5 + 0x30) + 0x118);
      }
    }
    plVar8 = plVar7;
    if ((plVar7 != plVar11) && (*plVar7 != 0x695f33fe9cd5142b)) {
      do {
        plVar8 = plVar8 + 0xc;
        if (plVar11 == plVar8) {
          plVar8 = plVar11;
          goto LAB_00ca8bac;
        }
      } while (*plVar8 != 0x695f33fe9cd5142b);
    }
LAB_00ca8bac:
    if (plVar11 != plVar8) {
      iVar4 = (int)((ulong)((long)plVar8 - (long)plVar7) >> 5) * -0x55555555;
      lVar6 = plVar7[(long)iVar4 * 0xc + 4];
      lVar17 = plVar7[(long)iVar4 * 0xc + 5];
      lVar15 = lVar6;
      if (lVar6 != lVar17) {
        uVar13 = local_4 >> 8 & 0xff;
        lVar10 = lVar6;
        if (*(uint *)(lVar6 + 0x20) != uVar13) {
          do {
            lVar15 = lVar10 + 0x28;
            if (lVar17 == lVar15) {
              lVar15 = lVar17;
              goto LAB_00ca8bec;
            }
            puVar2 = (uint *)(lVar10 + 0x48);
            lVar10 = lVar15;
          } while (*puVar2 != uVar13);
        }
      }
LAB_00ca8bec:
      if (lVar17 != lVar15) {
        lVar10 = (long)iVar4;
        uVar14 = (ulong)*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x59);
        lVar17 = *(long *)(lVar5 + 0x80);
        if ((ulong)(*(long *)(lVar5 + 0x88) - lVar17 >> 2) <= uVar14) goto LAB_00ca9208;
        *(uint *)(lVar17 + uVar14 * 4) =
             (int)((ulong)(lVar15 - lVar6) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar17 + uVar14 * 4) &
             (*(uint *)((long)plVar7 + lVar10 * 0x60 + 0x5c) ^ 0xffffffff);
        lVar5 = *(long *)(param_1 + 0xe8);
        plVar7 = *(long **)(*(long *)(lVar5 + 0x30) + 0x110);
        plVar11 = *(long **)(*(long *)(lVar5 + 0x30) + 0x118);
      }
    }
    plVar8 = plVar7;
    if ((plVar7 != plVar11) && (*plVar7 != 0x695f34fe9cd515de)) {
      do {
        plVar8 = plVar8 + 0xc;
        if (plVar11 == plVar8) {
          plVar8 = plVar11;
          goto LAB_00ca8cac;
        }
      } while (*plVar8 != 0x695f34fe9cd515de);
    }
LAB_00ca8cac:
    if (plVar11 != plVar8) {
      iVar4 = (int)((ulong)((long)plVar8 - (long)plVar7) >> 5) * -0x55555555;
      lVar6 = plVar7[(long)iVar4 * 0xc + 4];
      lVar17 = plVar7[(long)iVar4 * 0xc + 5];
      lVar15 = lVar6;
      if (lVar6 != lVar17) {
        uVar13 = local_4 >> 0x10 & 0xff;
        lVar10 = lVar6;
        if (*(uint *)(lVar6 + 0x20) != uVar13) {
          do {
            lVar15 = lVar10 + 0x28;
            if (lVar17 == lVar15) {
              lVar15 = lVar17;
              goto LAB_00ca8cec;
            }
            puVar2 = (uint *)(lVar10 + 0x48);
            lVar10 = lVar15;
          } while (*puVar2 != uVar13);
        }
      }
LAB_00ca8cec:
      if (lVar17 != lVar15) {
        lVar10 = (long)iVar4;
        uVar14 = (ulong)*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x59);
        lVar17 = *(long *)(lVar5 + 0x80);
        if ((ulong)(*(long *)(lVar5 + 0x88) - lVar17 >> 2) <= uVar14) goto LAB_00ca9208;
        *(uint *)(lVar17 + uVar14 * 4) =
             (int)((ulong)(lVar15 - lVar6) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar17 + uVar14 * 4) &
             (*(uint *)((long)plVar7 + lVar10 * 0x60 + 0x5c) ^ 0xffffffff);
        lVar5 = *(long *)(param_1 + 0xe8);
        plVar7 = *(long **)(*(long *)(lVar5 + 0x30) + 0x110);
        plVar11 = *(long **)(*(long *)(lVar5 + 0x30) + 0x118);
      }
    }
    plVar8 = plVar7;
    if ((plVar7 != plVar11) && (*plVar7 != 0x695f35fe9cd51791)) {
      do {
        plVar8 = plVar8 + 0xc;
        if (plVar11 == plVar8) {
          plVar8 = plVar11;
          goto LAB_00ca8dac;
        }
      } while (*plVar8 != 0x695f35fe9cd51791);
    }
LAB_00ca8dac:
    if (plVar11 != plVar8) {
      iVar4 = (int)((ulong)((long)plVar8 - (long)plVar7) >> 5) * -0x55555555;
      lVar6 = plVar7[(long)iVar4 * 0xc + 4];
      lVar17 = plVar7[(long)iVar4 * 0xc + 5];
      lVar15 = lVar6;
      if ((lVar6 != lVar17) && (lVar10 = lVar6, *(uint *)(lVar6 + 0x20) != local_4 >> 0x18)) {
        do {
          lVar15 = lVar10 + 0x28;
          if (lVar17 == lVar15) {
            lVar15 = lVar17;
            goto LAB_00ca8dec;
          }
          puVar2 = (uint *)(lVar10 + 0x48);
          lVar10 = lVar15;
        } while (*puVar2 != local_4 >> 0x18);
      }
LAB_00ca8dec:
      if (lVar17 != lVar15) {
        lVar10 = (long)iVar4;
        uVar14 = (ulong)*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x59);
        lVar17 = *(long *)(lVar5 + 0x80);
        if ((ulong)(*(long *)(lVar5 + 0x88) - lVar17 >> 2) <= uVar14) goto LAB_00ca9208;
        *(uint *)(lVar17 + uVar14 * 4) =
             (int)((ulong)(lVar15 - lVar6) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar17 + uVar14 * 4) &
             (*(uint *)((long)plVar7 + lVar10 * 0x60 + 0x5c) ^ 0xffffffff);
        lVar5 = *(long *)(param_1 + 0xe8);
        plVar7 = *(long **)(*(long *)(lVar5 + 0x30) + 0x110);
        plVar11 = *(long **)(*(long *)(lVar5 + 0x30) + 0x118);
      }
    }
    plVar8 = plVar7;
    if ((plVar7 != plVar11) && (*plVar7 != 0x7dd9cac5a6fdf22a)) {
      do {
        plVar8 = plVar8 + 0xc;
        if (plVar11 == plVar8) {
          plVar8 = plVar11;
          goto LAB_00ca8ea4;
        }
      } while (*plVar8 != 0x7dd9cac5a6fdf22a);
    }
LAB_00ca8ea4:
    if (plVar11 != plVar8) {
      iVar4 = (int)((ulong)((long)plVar8 - (long)plVar7) >> 5) * -0x55555555;
      lVar6 = plVar7[(long)iVar4 * 0xc + 4];
      lVar17 = plVar7[(long)iVar4 * 0xc + 5];
      lVar15 = lVar6;
      if (lVar6 != lVar17) {
        uVar13 = (uint)(*(int *)(param_1 + 0x34) == 0);
        lVar10 = lVar6;
        if (*(uint *)(lVar6 + 0x20) != uVar13) {
          do {
            lVar15 = lVar10 + 0x28;
            if (lVar17 == lVar15) {
              lVar15 = lVar17;
              goto LAB_00ca8ee4;
            }
            puVar2 = (uint *)(lVar10 + 0x48);
            lVar10 = lVar15;
          } while (*puVar2 != uVar13);
        }
      }
LAB_00ca8ee4:
      if (lVar17 != lVar15) {
        lVar10 = (long)iVar4;
        uVar14 = (ulong)*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x5a) -
                 (ulong)*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x59);
        lVar17 = *(long *)(lVar5 + 0x80);
        if ((ulong)(*(long *)(lVar5 + 0x88) - lVar17 >> 2) <= uVar14) {
LAB_00ca9208:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        *(uint *)(lVar17 + uVar14 * 4) =
             (int)((ulong)(lVar15 - lVar6) >> 3) * -0x33333333 <<
             (ulong)(*(byte *)((long)plVar7 + lVar10 * 0x60 + 0x5b) & 0x1f) |
             *(uint *)(lVar17 + uVar14 * 4) &
             (*(uint *)((long)plVar7 + lVar10 * 0x60 + 0x5c) ^ 0xffffffff);
        lVar5 = *(long *)(param_1 + 0xe8);
      }
    }
    uVar14 = FUN_00d100a8(lVar5);
    if ((uVar14 & 1) != 0) {
      FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0xf0) + 200),1,
                   *(long *)(param_1 + 0xe8) + 0xf0);
      local_48[0] = '\0';
      FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0xf0) + 200),2,local_48);
      if ((local_48[0] != '\0') && (local_28 != (long *)0x0)) {
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  return;
}


