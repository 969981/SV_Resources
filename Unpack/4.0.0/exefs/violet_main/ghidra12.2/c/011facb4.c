/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011facb4; name: FUN_011facb4
 */


void FUN_011facb4(undefined8 param_1,long *param_2,ulong *param_3)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x26;
  undefined8 uVar13;
  float fVar14;
  
  lVar10 = *param_2;
  plVar1 = (long *)(lVar10 + 0x20);
  uVar12 = *param_3;
  uVar11 = *(ulong *)(lVar10 + 0x28);
  if (uVar11 != 0) {
    uVar5 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar7 = uVar11 - 1 & uVar12;
    }
    else {
      uVar7 = uVar12;
      if (uVar11 <= uVar12) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar12 / uVar11;
        }
        uVar7 = uVar12 - uVar7 * uVar11;
      }
    }
    lVar6 = *plVar1;
    plVar8 = *(long **)(lVar6 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar8[1] == uVar12) {
            if (plVar8[2] == uVar12) {
              return;
            }
          }
          else if ((plVar8[1] & uVar11 - 1) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar12) {
            if (plVar8[2] == uVar12) {
              return;
            }
          }
          else {
            if (uVar11 <= uVar9) {
              uVar2 = 0;
              if (uVar11 != 0) {
                uVar2 = uVar9 / uVar11;
              }
              uVar9 = uVar9 - uVar2 * uVar11;
            }
            if (uVar9 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    if (uVar5 < 2) {
      unaff_x26 = uVar11 - 1 & uVar12;
      plVar8 = *(long **)(lVar6 + unaff_x26 * 8);
      if (plVar8 != (long *)0x0) {
        while ((plVar8 = (long *)*plVar8, plVar8 != (long *)0x0 &&
               (plVar8[1] == uVar12 || (plVar8[1] & uVar11 - 1) == unaff_x26))) {
          if (plVar8[2] == uVar12) {
            return;
          }
        }
      }
    }
    else {
      unaff_x26 = uVar12;
      if (uVar11 <= uVar12) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar12 / uVar11;
        }
        unaff_x26 = uVar12 - uVar5 * uVar11;
      }
      plVar8 = *(long **)(lVar6 + unaff_x26 * 8);
      if (plVar8 != (long *)0x0) {
        while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
          uVar5 = plVar8[1];
          if (uVar5 != uVar12) {
            if (uVar11 <= uVar5) {
              uVar7 = 0;
              if (uVar11 != 0) {
                uVar7 = uVar5 / uVar11;
              }
              uVar5 = uVar5 - uVar7 * uVar11;
            }
            if (uVar5 != unaff_x26) break;
          }
          if (plVar8[2] == uVar12) {
            return;
          }
        }
      }
    }
  }
  plVar8 = (long *)(**(code **)(**(long **)(lVar10 + 0x58) + 0x10))
                             (*(long **)(lVar10 + 0x58),0x40,8);
  if (plVar8 == (long *)0x0) {
    (**(code **)(**(long **)(lVar10 + 0x58) + 0xe8))();
  }
  uVar13 = *(undefined8 *)(lVar10 + 0x58);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar13;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  plVar8[2] = *param_3;
  plVar8[3] = param_3[1];
  plVar8[4] = param_3[2];
  plVar4 = (long *)param_3[3];
  plVar8[5] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  *(undefined4 *)(plVar8 + 7) = 0;
  plVar8[6] = 0;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  *plVar8 = 0;
  plVar8[1] = uVar12;
  fVar14 = (float)(*(long *)(lVar10 + 0x78) + 1);
  if ((uVar11 == 0) || (*(float *)(lVar10 + 0x80) * (float)uVar11 < fVar14)) {
    uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar5 = (ulong)(fVar14 / *(float *)(lVar10 + 0x80));
    if (uVar5 <= uVar11) {
      uVar5 = uVar11;
    }
    FUN_011fb0d0(plVar1,uVar5);
    uVar11 = *(ulong *)(lVar10 + 0x28);
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x26 = uVar11 - 1 & uVar12;
    }
    else if (uVar12 < uVar11) {
      unaff_x26 = uVar12;
    }
    else {
      uVar5 = 0;
      if (uVar11 != 0) {
        uVar5 = uVar12 / uVar11;
      }
      unaff_x26 = uVar12 - uVar5 * uVar11;
    }
  }
  plVar4 = *(long **)(*plVar1 + unaff_x26 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)(lVar10 + 0x50);
    *plVar8 = *plVar4;
    *plVar4 = (long)plVar8;
    *(long **)(*(long *)(lVar10 + 0x20) + unaff_x26 * 8) = plVar4;
    if (*plVar8 == 0) goto LAB_011faedc;
    uVar12 = *(ulong *)(*plVar8 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar12 = uVar12 & uVar11 - 1;
    }
    else if (uVar11 <= uVar12) {
      uVar5 = 0;
      if (uVar11 != 0) {
        uVar5 = uVar12 / uVar11;
      }
      uVar12 = uVar12 - uVar5 * uVar11;
    }
    plVar4 = (long *)(*plVar1 + uVar12 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_011faedc:
  *(long *)(lVar10 + 0x78) = *(long *)(lVar10 + 0x78) + 1;
  return;
}


