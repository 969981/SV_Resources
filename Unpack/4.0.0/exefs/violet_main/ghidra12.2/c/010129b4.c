/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010129b4; name: FUN_010129b4
 */


void FUN_010129b4(long *param_1,long *param_2)

{
  undefined4 uVar1;
  char cVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  ulong unaff_x26;
  undefined8 uVar20;
  float fVar21;
  
  lVar15 = *param_1;
  plVar12 = (long *)(lVar15 + 0xbf0);
  lVar16 = *param_2;
  if (*(ulong *)(lVar15 + 0xc58) <= *(ulong *)(lVar15 + 0xc48)) {
    uVar17 = *(ulong *)(lVar15 + 0xbf8);
    if (uVar17 != 0) {
      uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar5 = *(ulong *)(lVar16 + 0x38);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        uVar8 = uVar17 - 1 & uVar5;
      }
      else if (uVar5 < uVar17) {
        uVar8 = uVar5;
      }
      else {
        uVar8 = 0;
        if (uVar17 != 0) {
          uVar8 = uVar5 / uVar17;
        }
        uVar8 = uVar5 - uVar8 * uVar17;
      }
      plVar12 = *(long **)(*plVar12 + uVar8 * 8);
      if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if (plVar12[1] == uVar5) {
              if (plVar12[2] == uVar5) goto LAB_01012ec0;
            }
            else if ((plVar12[1] & uVar17 - 1) != uVar8) break;
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
        else {
          do {
            uVar18 = plVar12[1];
            if (uVar18 == uVar5) {
              if (plVar12[2] == uVar5) {
LAB_01012ec0:
                if (*(char *)(lVar16 + 0x40) == '\0') {
                  return;
                }
                lVar15 = *(long *)(lVar16 + 0x10);
                uVar20 = *(undefined8 *)(lVar16 + 0x51);
                uVar10 = *(undefined8 *)(lVar16 + 0x4c);
                *(undefined8 *)(lVar15 + 0x6e0) = *(undefined8 *)(lVar16 + 0x44);
                *(undefined8 *)(lVar15 + 0x6e8) = uVar10;
                *(undefined8 *)(lVar15 + 0x6ed) = uVar20;
                FUN_00e5a938(lVar15,1);
                *(undefined1 *)(lVar16 + 0x40) = 0;
                return;
              }
            }
            else {
              if (uVar17 <= uVar18) {
                uVar11 = 0;
                if (uVar17 != 0) {
                  uVar11 = uVar18 / uVar17;
                }
                uVar18 = uVar18 - uVar11 * uVar17;
              }
              if (uVar18 != uVar8) break;
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
        }
      }
    }
    puVar7 = (undefined8 *)param_1[1];
    lVar15 = *(long *)(lVar16 + 0x10);
    if (*(char *)(lVar16 + 0x40) == '\0') {
      uVar20 = *(undefined8 *)(lVar15 + 0x6ed);
      uVar10 = *(undefined8 *)(lVar15 + 0x6e8);
      *(undefined8 *)(lVar16 + 0x44) = *(undefined8 *)(lVar15 + 0x6e0);
      *(undefined8 *)(lVar16 + 0x51) = uVar20;
      *(undefined8 *)(lVar16 + 0x4c) = uVar10;
      *(undefined1 *)(lVar16 + 0x40) = 1;
    }
    cVar2 = *(char *)(lVar16 + 0x54);
    uVar1 = *(undefined4 *)(lVar16 + 0x55);
    uVar20 = *puVar7;
    uVar10 = puVar7[1];
    if (cVar2 == '\0') {
      cVar2 = '\x01';
    }
    *(char *)(lVar15 + 0x6f0) = cVar2;
    *(undefined8 *)(lVar15 + 0x6e8) = uVar10;
    *(undefined8 *)(lVar15 + 0x6e0) = uVar20;
    *(undefined4 *)(lVar15 + 0x6f1) = uVar1;
    FUN_00e5a938(lVar15,1);
    return;
  }
  if (*(char *)(lVar16 + 0x40) != '\0') {
    lVar9 = *(long *)(lVar16 + 0x10);
    uVar20 = *(undefined8 *)(lVar16 + 0x51);
    uVar10 = *(undefined8 *)(lVar16 + 0x4c);
    *(undefined8 *)(lVar9 + 0x6e0) = *(undefined8 *)(lVar16 + 0x44);
    *(undefined8 *)(lVar9 + 0x6e8) = uVar10;
    *(undefined8 *)(lVar9 + 0x6ed) = uVar20;
    FUN_00e5a938(lVar9,1);
    *(undefined1 *)(lVar16 + 0x40) = 0;
    lVar16 = *param_2;
  }
  uVar18 = *(ulong *)(lVar16 + 0x38);
  uVar17 = *(ulong *)(lVar15 + 0xbf8);
  if (uVar17 != 0) {
    uVar5 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar8 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar5 = 0;
    if (uVar17 != 0) {
      uVar5 = uVar18 / uVar17;
    }
    if (uVar8 < 2) {
      uVar11 = uVar17 - 1 & uVar18;
    }
    else {
      uVar11 = uVar18;
      if (uVar17 <= uVar18) {
        uVar11 = uVar18 - uVar5 * uVar17;
      }
    }
    lVar9 = *plVar12;
    plVar13 = *(long **)(lVar9 + uVar11 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar13[1] == uVar18) {
            if (plVar13[2] == uVar18) goto LAB_01012d30;
          }
          else if ((plVar13[1] & uVar17 - 1) != uVar11) goto LAB_01012aa8;
          plVar13 = (long *)*plVar13;
          plVar19 = (long *)0x0;
        } while (plVar13 != (long *)0x0);
        goto LAB_01012aac;
      }
      do {
        uVar14 = plVar13[1];
        if (uVar14 == uVar18) {
          if (plVar13[2] == uVar18) goto LAB_01012d30;
        }
        else {
          if (uVar17 <= uVar14) {
            uVar3 = 0;
            if (uVar17 != 0) {
              uVar3 = uVar14 / uVar17;
            }
            uVar14 = uVar14 - uVar3 * uVar17;
          }
          if (uVar14 != uVar11) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
LAB_01012aa8:
    plVar19 = (long *)0x0;
    goto LAB_01012aac;
  }
  plVar19 = (long *)0x0;
LAB_01012b0c:
  plVar13 = (long *)(**(code **)(**(long **)(lVar15 + 0xc28) + 0x10))
                              (*(long **)(lVar15 + 0xc28),0x20,8);
  if (plVar13 == (long *)0x0) {
    (**(code **)(**(long **)(lVar15 + 0xc28) + 0xe8))();
  }
  uVar20 = *(undefined8 *)(lVar15 + 0xc28);
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar9 == 0) {
    plVar13[2] = *(long *)(lVar16 + 0x38);
    *(undefined4 *)(plVar13 + 3) = 0;
  }
  else {
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar20;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    plVar13[2] = *(long *)(lVar16 + 0x38);
    *(undefined4 *)(plVar13 + 3) = 0;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  *plVar13 = 0;
  plVar13[1] = uVar18;
  fVar21 = (float)(*(long *)(lVar15 + 0xc48) + 1);
  if ((uVar17 == 0) || (*(float *)(lVar15 + 0xc50) * (float)uVar17 < fVar21)) {
    uVar17 = (ulong)(uVar17 < 3 || (uVar17 & uVar17 - 1) != 0) | uVar17 << 1;
    uVar5 = (ulong)(fVar21 / *(float *)(lVar15 + 0xc50));
    if (uVar5 <= uVar17) {
      uVar5 = uVar17;
    }
    FUN_01012fac(plVar12,uVar5);
    uVar17 = *(ulong *)(lVar15 + 0xbf8);
    if ((uVar17 & uVar17 - 1) == 0) {
      unaff_x26 = uVar17 - 1 & uVar18;
    }
    else if (uVar18 < uVar17) {
      unaff_x26 = uVar18;
    }
    else {
      uVar5 = 0;
      if (uVar17 != 0) {
        uVar5 = uVar18 / uVar17;
      }
      unaff_x26 = uVar18 - uVar5 * uVar17;
    }
  }
  plVar6 = *(long **)(*plVar12 + unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    *plVar13 = *(long *)(lVar15 + 0xc20);
    *(long **)(lVar15 + 0xc20) = plVar13;
    *(long *)(*(long *)(lVar15 + 0xbf0) + unaff_x26 * 8) = lVar15 + 0xc20;
    if (*plVar13 != 0) {
      uVar18 = *(ulong *)(*plVar13 + 8);
      if ((uVar17 & uVar17 - 1) == 0) {
        uVar18 = uVar18 & uVar17 - 1;
      }
      else if (uVar17 <= uVar18) {
        uVar5 = 0;
        if (uVar17 != 0) {
          uVar5 = uVar18 / uVar17;
        }
        uVar18 = uVar18 - uVar5 * uVar17;
      }
      plVar6 = (long *)(*plVar12 + uVar18 * 8);
      goto LAB_01012c14;
    }
  }
  else {
    *plVar13 = *plVar6;
LAB_01012c14:
    *plVar6 = (long)plVar13;
  }
  *(long *)(lVar15 + 0xc48) = *(long *)(lVar15 + 0xc48) + 1;
LAB_01012c24:
  iVar4 = 1;
  if (plVar19 != (long *)0x0) {
    iVar4 = (int)plVar13[3] + 1;
  }
  *(int *)(plVar13 + 3) = iVar4;
  return;
LAB_01012d30:
  plVar19 = plVar13;
LAB_01012aac:
  if (uVar8 < 2) {
    unaff_x26 = uVar17 - 1 & uVar18;
    plVar13 = *(long **)(lVar9 + unaff_x26 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        plVar13 = (long *)*plVar13;
        if ((plVar13 == (long *)0x0) ||
           (plVar13[1] != uVar18 && (plVar13[1] & uVar17 - 1) != unaff_x26)) goto LAB_01012b0c;
      } while (plVar13[2] != uVar18);
      goto LAB_01012c24;
    }
  }
  else {
    unaff_x26 = uVar18;
    if (uVar17 <= uVar18) {
      unaff_x26 = uVar18 - uVar5 * uVar17;
    }
    plVar13 = *(long **)(lVar9 + unaff_x26 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) goto LAB_01012b0c;
        uVar5 = plVar13[1];
        if (uVar5 != uVar18) {
          if (uVar17 <= uVar5) {
            uVar8 = 0;
            if (uVar17 != 0) {
              uVar8 = uVar5 / uVar17;
            }
            uVar5 = uVar5 - uVar8 * uVar17;
          }
          if (uVar5 != unaff_x26) goto LAB_01012b0c;
        }
      } while (plVar13[2] != uVar18);
      goto LAB_01012c24;
    }
  }
  goto LAB_01012b0c;
}


