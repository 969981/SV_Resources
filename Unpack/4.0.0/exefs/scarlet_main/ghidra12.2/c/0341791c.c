/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0341791c; name: FUN_0341791c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0341791c(long param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ushort *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  float *pfVar18;
  undefined4 *puVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  ulong *puVar22;
  long lVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long lVar26;
  long *plVar27;
  long *plVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  long local_d0;
  int local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long *local_68;
  
  lVar12 = *(long *)(param_1 + 0x38);
  if (lVar12 == 0) {
    return;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 == 0) goto LAB_034180fc;
  if (*(short *)(param_1 + 0x30) != 0) {
    auVar29 = NEON_fmov(0x3f800000,4);
    uVar25 = 0;
    plVar15 = (long *)(lVar12 + 0x10);
    plVar3 = (long *)(lVar12 + 0x20);
    plVar4 = (long *)(lVar12 + 0x28);
    do {
      lVar23 = *(long *)(param_1 + 0x10);
      puVar5 = (ushort *)(*(long *)(param_1 + 8) + uVar25 * 8);
      pfVar18 = (float *)(lVar23 + (ulong)*puVar5 * 0xc);
      fVar35 = pfVar18[2];
      fVar33 = *pfVar18;
      fVar34 = pfVar18[1];
      puVar19 = (undefined4 *)(lVar23 + (ulong)puVar5[1] * 0xc);
      pfVar18 = (float *)(lVar23 + (ulong)puVar5[2] * 0xc);
      lVar8 = lVar8 + uVar25 * 0x40;
      fVar31 = *pfVar18;
      fVar32 = pfVar18[1];
      fVar30 = pfVar18[2];
      local_d0 = lVar8;
      if (*plVar15 != 0) {
        local_c4 = 1;
        uVar37 = NEON_fminnm(fVar33,0x7f7fffff);
        if (fVar33 <= -3.4028235e+38) {
          fVar33 = -3.4028235e+38;
        }
        uVar37 = NEON_fminnm(uVar37,*puVar19);
        uVar38 = NEON_fminnm(fVar34,0x7f7fffff);
        if (fVar34 <= -3.4028235e+38) {
          fVar34 = -3.4028235e+38;
        }
        uVar36 = NEON_fminnm(fVar35,0x7f7fffff);
        if (fVar35 <= -3.4028235e+38) {
          fVar35 = -3.4028235e+38;
        }
        uVar39 = NEON_fminnm(uVar38,puVar19[1]);
        uVar38 = NEON_fminnm(uVar36,puVar19[2]);
        if (fVar34 <= fVar32) {
          fVar34 = fVar32;
        }
        if (fVar33 <= fVar31) {
          fVar33 = fVar31;
        }
        uVar37 = NEON_fminnm(uVar37,fVar31);
        if (fVar35 <= fVar30) {
          fVar35 = fVar30;
        }
        uVar36 = NEON_fminnm(uVar39,fVar32);
        uStack_b0 = CONCAT44(fVar34,fVar33);
        local_c0 = CONCAT44(uVar36,uVar37);
        uStack_a8 = CONCAT44(auVar29._12_4_,fVar35);
        uVar37 = NEON_fminnm(uVar38,fVar30);
        uStack_b8 = CONCAT44(auVar29._12_4_,uVar37);
        local_68 = (long *)0x0;
        uVar7 = FUN_03419868(lVar12 + 8,&local_c0,&local_d0,*plVar15,&local_68,&local_c4);
        plVar28 = local_68;
        if ((uVar7 & 1) == 0) {
          while (plVar28 != (long *)0x0) {
            plVar9 = (long *)plVar28[1];
            if (0 < (int)plVar9[0x50]) {
              lVar26 = 0;
              lVar23 = 0x40;
              do {
                puVar17 = (undefined8 *)((long)plVar9 + lVar26);
                local_88 = puVar17[3];
                local_98 = puVar17[1];
                local_a0 = *puVar17;
                uStack_90 = puVar17[2];
                if (*(int *)((long)plVar9 + 0x284) < 1) {
                  local_78 = plVar9[lVar23];
                }
                else {
                  local_80 = plVar9[lVar23];
                }
                FUN_03418500(lVar12 + 8,&local_a0,plVar15,*(int *)((long)plVar9 + 0x284),&local_c4);
                lVar13 = lVar23 + -0x3f;
                lVar23 = lVar23 + 1;
                lVar26 = lVar26 + 0x20;
              } while (lVar13 < (int)plVar9[0x50]);
              plVar9 = (long *)plVar28[1];
            }
            plVar27 = (long *)*plVar28;
            plVar10 = (long *)*plVar3;
            local_68 = plVar27;
            if (plVar10 == (long *)0x0) {
LAB_03417b78:
              if (_DAT_00000f70 == (long *)0x0) {
                _DAT_00000f70 = plVar9;
                *plVar9 = 0;
              }
              else {
                *plVar9 = (long)_DAT_00000f70;
                _DAT_00000f70 = plVar9;
              }
              _DAT_00000f68 = _DAT_00000f68 + 1;
            }
            else {
              if ((plVar9 < plVar10) || (plVar10 + 0x1ec <= plVar9)) {
                do {
                  plVar14 = plVar10;
                  plVar10 = (long *)plVar14[0x1ec];
                  if (plVar10 == (long *)0x0) goto LAB_03417b78;
                } while ((plVar9 < plVar10) || (plVar10 + 0x1ec <= plVar9));
              }
              else {
                plVar14 = (long *)0x0;
              }
              if (plVar10[0x1ee] == 0) {
                plVar10[0x1ee] = (long)plVar9;
                *plVar9 = 0;
              }
              else {
                *plVar9 = plVar10[0x1ee];
                plVar10[0x1ee] = (long)plVar9;
              }
              iVar2 = (int)plVar10[0x1ed] + 1;
              *(int *)(plVar10 + 0x1ed) = iVar2;
              if (iVar2 == 6) {
                plVar9 = plVar3;
                if ((long *)*plVar3 != plVar10) {
                  plVar9 = plVar14 + 0x1ec;
                }
                *plVar9 = plVar10[0x1ec];
                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(10);
              }
            }
            plVar9 = (long *)*plVar4;
            if (plVar9 == (long *)0x0) {
LAB_03417c50:
              if (_DAT_00000410 == (long *)0x0) {
                _DAT_00000410 = plVar28;
                *plVar28 = 0;
              }
              else {
                *plVar28 = (long)_DAT_00000410;
                _DAT_00000410 = plVar28;
              }
              _DAT_00000408 = _DAT_00000408 + 1;
              plVar28 = plVar27;
            }
            else {
              if ((plVar28 < plVar9) || (plVar9 + 0x80 <= plVar28)) {
                do {
                  plVar10 = plVar9;
                  plVar9 = (long *)plVar10[0x80];
                  if (plVar9 == (long *)0x0) goto LAB_03417c50;
                } while ((plVar28 < plVar9) || (plVar9 + 0x80 <= plVar28));
              }
              else {
                plVar10 = (long *)0x0;
              }
              if (plVar9[0x82] == 0) {
                plVar9[0x82] = (long)plVar28;
                *plVar28 = 0;
              }
              else {
                *plVar28 = plVar9[0x82];
                plVar9[0x82] = (long)plVar28;
              }
              iVar2 = (int)plVar9[0x81] + 1;
              *(int *)(plVar9 + 0x81) = iVar2;
              plVar28 = plVar27;
              if (iVar2 == 0x40) {
                plVar28 = plVar4;
                if ((long *)*plVar4 != plVar9) {
                  plVar28 = plVar10 + 0x80;
                }
                *plVar28 = plVar9[0x80];
                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(10);
                plVar28 = plVar27;
              }
            }
          }
          plVar28 = (long *)*plVar15;
          if (((int)plVar28[0x50] == 1) && (0 < *(int *)((long)plVar28 + 0x284))) {
            lVar23 = plVar28[0x40];
            plVar9 = (long *)*plVar3;
            if (plVar9 == (long *)0x0) {
LAB_03417d54:
              if (_DAT_00000f70 == (long *)0x0) {
                _DAT_00000f70 = plVar28;
                *plVar28 = 0;
              }
              else {
                *plVar28 = (long)_DAT_00000f70;
                _DAT_00000f70 = plVar28;
              }
              _DAT_00000f68 = _DAT_00000f68 + 1;
            }
            else {
              if ((plVar28 < plVar9) || (plVar9 + 0x1ec <= plVar28)) {
                do {
                  plVar10 = plVar9;
                  plVar9 = (long *)plVar10[0x1ec];
                  if (plVar9 == (long *)0x0) goto LAB_03417d54;
                } while ((plVar28 < plVar9) || (plVar9 + 0x1ec <= plVar28));
              }
              else {
                plVar10 = (long *)0x0;
              }
              if (plVar9[0x1ee] == 0) {
                plVar9[0x1ee] = (long)plVar28;
                *plVar28 = 0;
              }
              else {
                *plVar28 = plVar9[0x1ee];
                plVar9[0x1ee] = (long)plVar28;
              }
              iVar2 = (int)plVar9[0x1ed] + 1;
              *(int *)(plVar9 + 0x1ed) = iVar2;
              if (iVar2 == 6) {
                plVar28 = plVar3;
                if ((long *)*plVar3 != plVar9) {
                  plVar28 = plVar10 + 0x1ec;
                }
                *plVar28 = plVar9[0x1ec];
                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(10);
              }
            }
            *plVar15 = lVar23;
          }
        }
        else if (local_c4 == 1) {
          local_c4 = 0xf;
        }
      }
      plVar28 = *(long **)(lVar8 + 0x38);
      if (plVar28 != (long *)0x0) {
        uVar7 = (ulong)*(uint *)(plVar28 + 7);
        if (*(uint *)(plVar28 + 7) != 0) {
          puVar16 = (ulong *)plVar28[6];
          puVar22 = puVar16 + uVar7;
          puVar20 = puVar16;
          do {
            uVar11 = (uint)uVar7;
            if ((*puVar20 < *(ulong *)(param_1 + 0x28)) ||
               (*(ulong *)(param_1 + 0x28) + (ulong)*(ushort *)(param_1 + 0x36) * 0x80 <= *puVar20))
            {
              puVar20 = puVar20 + 1;
            }
            else {
              if (1 < uVar11) {
                *puVar20 = puVar22[-1];
                uVar11 = *(uint *)(plVar28 + 7);
                puVar16 = (ulong *)plVar28[6];
              }
              uVar7 = (ulong)(uVar11 - 1);
              *(uint *)(plVar28 + 7) = uVar11 - 1;
            }
            puVar22 = puVar16 + uVar7;
          } while (puVar22 != puVar20);
        }
        uVar11 = *(uint *)(plVar28 + 3);
        if (uVar11 != 0) {
          lVar23 = (ulong)uVar11 << 3;
          plVar9 = (long *)plVar28[2];
LAB_03417e60:
          if (*plVar9 != lVar8) goto code_r0x03417e6c;
          plVar10 = (long *)plVar28[2] + ((ulong)uVar11 - 1);
          if (plVar9 < plVar10) {
            do {
              plVar27 = plVar9 + 1;
              *plVar9 = *plVar27;
              plVar9 = plVar27;
            } while (plVar27 < plVar10);
            uVar11 = *(uint *)(plVar28 + 3);
          }
          *(uint *)(plVar28 + 3) = uVar11 - 1;
          if (uVar11 - 1 == 0) goto LAB_03417eb0;
          goto LAB_034180c8;
        }
LAB_03417eb0:
        uVar11 = *(uint *)(param_1 + 0x58);
        if (uVar11 == 0) {
LAB_03417ef4:
          plVar9 = (long *)plVar28[2];
        }
        else {
          puVar17 = *(undefined8 **)(param_1 + 0x50);
          if ((long *)*puVar17 == plVar28) {
            puVar21 = puVar17;
          }
          else {
            lVar8 = (ulong)uVar11 * 8;
            puVar24 = puVar17;
            do {
              lVar8 = lVar8 + -8;
              if (lVar8 == 0) goto LAB_03417ef4;
              puVar21 = puVar24 + 1;
              puVar1 = puVar24 + 1;
              puVar24 = puVar21;
            } while ((long *)*puVar1 != plVar28);
          }
          if (1 < uVar11) {
            *puVar21 = puVar17[(ulong)uVar11 - 1];
            uVar11 = *(uint *)(param_1 + 0x58);
          }
          *(uint *)(param_1 + 0x58) = uVar11 - 1;
          plVar9 = (long *)plVar28[2];
          plVar10 = plVar9;
          if ((int)plVar28[3] != 0) {
            do {
              plVar27 = plVar10 + 1;
              *(undefined8 *)(*plVar10 + 0x38) = 0;
              plVar9 = (long *)plVar28[2];
              plVar10 = plVar27;
            } while (plVar27 != plVar9 + *(uint *)(plVar28 + 3));
          }
        }
        if (plVar9 != (long *)0x0) {
          *(undefined4 *)(plVar28 + 3) = 0;
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
          plVar28[2] = 0;
          *(undefined4 *)((long)plVar28 + 0x1c) = 0;
        }
        plVar10 = (long *)plVar28[4];
        plVar9 = plVar10;
        if ((int)plVar28[5] != 0) {
          do {
            plVar27 = plVar9 + 1;
            *(undefined8 *)(*plVar9 + 0x38) = 0;
            plVar10 = (long *)plVar28[4];
            plVar9 = plVar27;
          } while (plVar27 != plVar10 + *(uint *)(plVar28 + 5));
        }
        if (plVar10 != (long *)0x0) {
          *(undefined4 *)(plVar28 + 5) = 0;
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
          plVar28[4] = 0;
          *(undefined4 *)((long)plVar28 + 0x2c) = 0;
        }
        if (plVar28[6] != 0) {
          *(undefined4 *)(plVar28 + 7) = 0;
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
          plVar28[6] = 0;
          *(undefined4 *)((long)plVar28 + 0x3c) = 0;
        }
        plVar9 = (long *)*param_2;
        if (plVar9 == (long *)0x0) {
LAB_03418044:
          if (_DAT_00002010 == (long *)0x0) {
            _DAT_00002010 = plVar28;
            *plVar28 = 0;
          }
          else {
            *plVar28 = (long)_DAT_00002010;
            _DAT_00002010 = plVar28;
          }
          _DAT_00002008 = _DAT_00002008 + 1;
        }
        else {
          if ((plVar28 < plVar9) || (plVar9 + 0x400 <= plVar28)) {
            do {
              plVar10 = plVar9;
              plVar9 = (long *)plVar10[0x400];
              if (plVar9 == (long *)0x0) goto LAB_03418044;
            } while ((plVar28 < plVar9) || (plVar9 + 0x400 <= plVar28));
          }
          else {
            plVar10 = (long *)0x0;
          }
          if (plVar9[0x402] == 0) {
            plVar9[0x402] = (long)plVar28;
            *plVar28 = 0;
          }
          else {
            *plVar28 = plVar9[0x402];
            plVar9[0x402] = (long)plVar28;
          }
          iVar2 = (int)plVar9[0x401] + 1;
          *(int *)(plVar9 + 0x401) = iVar2;
          if (iVar2 == 0x80) {
            plVar28 = param_2;
            if ((long *)*param_2 != plVar9) {
              plVar28 = plVar10 + 0x400;
            }
            *plVar28 = plVar9[0x400];
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
          }
        }
      }
LAB_034180c8:
      uVar25 = uVar25 + 1;
      if (*(ushort *)(param_1 + 0x30) <= uVar25) goto LAB_034180e0;
      lVar8 = *(long *)(param_1 + 0x20);
    } while( true );
  }
LAB_034180e4:
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9,lVar8);
  *(undefined8 *)(param_1 + 0x20) = 0;
LAB_034180fc:
  lVar12 = *(long *)(param_1 + 0x28);
  if (lVar12 != 0) {
    if (*(short *)(param_1 + 0x36) != 0) {
      lVar8 = 0x60;
      uVar25 = 1;
      while( true ) {
        puVar6 = (undefined1 *)(lVar12 + lVar8);
        *(undefined4 *)(puVar6 + -0x20) = 0;
        puVar6[-0x18] = 0;
        *(undefined4 *)(puVar6 + -8) = 0;
        *puVar6 = 0;
        lVar23 = *(long *)(param_1 + 0x28);
        lVar12 = lVar23 + lVar8;
        if (*(long *)(lVar12 + -0x28) != 0) {
          *(undefined4 *)(lVar12 + -0x20) = 0;
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(10);
          *(undefined8 *)(lVar12 + -0x28) = 0;
          *(undefined4 *)(lVar12 + -0x1c) = 0;
        }
        *(undefined1 *)(lVar12 + -0x18) = 0;
        if (*(long *)(lVar12 + -0x10) != 0) {
          *(undefined4 *)(lVar12 + -8) = 0;
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(10);
          *(undefined8 *)(lVar12 + -0x10) = 0;
          *(undefined4 *)(lVar12 + -4) = 0;
        }
        *(undefined1 *)(lVar23 + lVar8) = 0;
        if (*(ushort *)(param_1 + 0x36) <= uVar25) break;
        lVar12 = *(long *)(param_1 + 0x28);
        lVar8 = lVar8 + 0x80;
        uVar25 = uVar25 + 1;
      }
      lVar12 = *(long *)(param_1 + 0x28);
    }
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9,lVar12);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  lVar12 = 0;
  plVar15 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
  lVar23 = *plVar15;
  lVar8 = lVar23;
  if ((lVar23 != 0) && (lVar23 != param_1)) {
    do {
      lVar12 = lVar8;
      lVar8 = *(long *)(lVar12 + 0x48);
    } while (lVar8 != 0 && lVar8 != param_1);
  }
  if (lVar8 != 0) {
    if (lVar8 != lVar23) {
      plVar15 = (long *)(lVar12 + 0x48);
    }
    *plVar15 = *(long *)(lVar8 + 0x48);
  }
  *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x3c) = 1;
  *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + -1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
code_r0x03417e6c:
  plVar9 = plVar9 + 1;
  lVar23 = lVar23 + -8;
  if (lVar23 == 0) goto LAB_034180c8;
  goto LAB_03417e60;
LAB_034180e0:
  lVar8 = *(long *)(param_1 + 0x20);
  goto LAB_034180e4;
}


