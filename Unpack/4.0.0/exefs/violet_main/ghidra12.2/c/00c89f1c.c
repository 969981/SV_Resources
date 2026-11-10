/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c89f1c; name: FUN_00c89f1c
 */


void FUN_00c89f1c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined4 uVar18;
  ulong uVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  long lVar26;
  long *plVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  code *pcVar30;
  ulong uVar31;
  byte *pbVar32;
  long *plVar33;
  float __x;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  long local_100;
  long local_f8;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  long *local_d0;
  long *plStack_c8;
  
  uVar40 = param_4._8_8_;
  uVar44 = param_4._4_4_;
  uVar43 = param_4._0_4_;
  fVar36 = param_2._12_4_;
  fVar35 = param_2._8_4_;
  fVar34 = param_2._4_4_;
  __x = param_2._0_4_;
  plVar25 = *(long **)(param_5 + 0x88);
  plVar27 = *(long **)(param_5 + 0x90);
  do {
    while( true ) {
      do {
        if (plVar27 == plVar25) {
          plVar27 = *(long **)(param_5 + 0x50);
          plVar9 = *(long **)(param_5 + 0x58);
          *(long **)(param_5 + 0x90) = plVar25;
          if (plVar27 != plVar9) goto LAB_00c89fb4;
          *(undefined1 *)(param_5 + 0x17b) = 0;
          *(undefined2 *)(param_5 + 0x179) = 0;
          uVar28 = 0;
          fVar41 = 0.0;
          fVar42 = 0.0;
          goto LAB_00c8a3c8;
        }
        plVar27 = plVar27 + -2;
        plVar9 = (long *)*plVar27;
      } while (plVar9 == (long *)0x0);
      plVar11 = plVar9 + 5;
      do {
        lVar15 = *plVar11;
        iVar8 = (int)lVar15 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != 0) break;
      (**(code **)(*plVar9 + 0x10))();
    }
  } while ((int)lVar15 != 0);
  goto LAB_00c89f78;
code_r0x00c8a660:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar5) {
    *plVar11 = lVar15;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00c8a668;
  goto LAB_00c8a658;
code_r0x00c8a888:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar33,0x10);
  if (bVar5) {
    *plVar33 = lVar15;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00c8a890;
  goto LAB_00c8a880;
LAB_00c89fb4:
  do {
    lVar15 = *plVar27;
    if ((int)((ulong)(*(long *)(lVar15 + 0x58) - *(long *)(lVar15 + 0x50)) >> 3) != 0) {
      uVar31 = 0;
      do {
        lVar15 = *(long *)(*(long *)(lVar15 + 0x50) + uVar31 * 8);
        if (lVar15 != 0) {
          piVar1 = (int *)(lVar15 + 0x28);
          do {
            iVar8 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 == -1) goto LAB_00c8b008;
        }
        plVar25 = *(long **)(param_5 + 0x90);
        uVar21 = (undefined4)plVar27[1];
        if (plVar25 < *(long **)(param_5 + 0x98)) {
          uVar28 = *(undefined8 *)(param_5 + 0xa0);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar26 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar26 == 0) {
            *plVar25 = lVar15;
            *(undefined4 *)(plVar25 + 1) = uVar21;
          }
          else {
            if (0xf < *(ulong *)(lVar26 + 0x80)) goto LAB_00c8afe4;
            *(undefined8 *)(lVar26 + *(ulong *)(lVar26 + 0x80) * 8) = uVar28;
            *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + 1;
            *plVar25 = lVar15;
            *(undefined4 *)(plVar25 + 1) = uVar21;
            *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + -1;
          }
          *(long **)(param_5 + 0x90) = plVar25 + 2;
        }
        else {
          uVar19 = *(ulong *)(param_5 + 0xa8);
          lVar26 = (long)plVar25 - *(long *)(param_5 + 0x88) >> 4;
          uVar10 = lVar26 + 1;
          if (0x7ffffffffffffffe < uVar19) {
            uVar19 = 0x7fffffffffffffff;
          }
          if (uVar19 < uVar10) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar16 = (long)*(long **)(param_5 + 0x98) - *(long *)(param_5 + 0x88);
          uVar17 = lVar16 >> 3;
          if (uVar10 <= uVar17) {
            uVar10 = uVar17;
          }
          if (uVar19 >> 1 <= (ulong)(lVar16 >> 4)) {
            uVar10 = uVar19;
          }
          if (uVar10 == 0) {
            lVar16 = 0;
          }
          else {
            lVar16 = (**(code **)(**(long **)(param_5 + 0xa0) + 0x10))
                               (*(long **)(param_5 + 0xa0),uVar10 << 4,8);
            if (lVar16 == 0) {
              (**(code **)(**(long **)(param_5 + 0xa0) + 0xe8))();
            }
          }
          uVar28 = *(undefined8 *)(param_5 + 0xa0);
          plVar25 = (long *)(lVar16 + lVar26 * 0x10);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar26 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar26 == 0) {
            *plVar25 = lVar15;
            *(undefined4 *)(plVar25 + 1) = uVar21;
          }
          else {
            if (0xf < *(ulong *)(lVar26 + 0x80)) {
LAB_00c8afe4:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar26 + *(ulong *)(lVar26 + 0x80) * 8) = uVar28;
            *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + 1;
            *plVar25 = lVar15;
            *(undefined4 *)(plVar25 + 1) = uVar21;
            *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + -1;
          }
          plVar11 = *(long **)(param_5 + 0x88);
          plVar14 = *(long **)(param_5 + 0x90);
          if (plVar14 == plVar11) {
            plVar14 = plVar25;
            plVar33 = plVar11;
          }
          else {
            lVar15 = 0;
            do {
              uVar28 = *(undefined8 *)(param_5 + 0xa0);
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar26 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar26 == 0) {
                uVar28 = *(undefined8 *)((long)plVar14 + lVar15 + -0x10);
                *(undefined8 *)((long)plVar14 + lVar15 + -0x10) = 0;
                *(undefined8 *)((long)plVar25 + lVar15 + -0x10) = uVar28;
                *(undefined4 *)((long)plVar25 + lVar15 + -8) =
                     *(undefined4 *)((long)plVar14 + lVar15 + -8);
              }
              else {
                if (0xf < *(ulong *)(lVar26 + 0x80)) goto LAB_00c8afe4;
                *(undefined8 *)(lVar26 + *(ulong *)(lVar26 + 0x80) * 8) = uVar28;
                *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + 1;
                uVar28 = *(undefined8 *)((long)plVar14 + lVar15 + -0x10);
                *(undefined8 *)((long)plVar14 + lVar15 + -0x10) = 0;
                *(undefined8 *)((long)plVar25 + lVar15 + -0x10) = uVar28;
                *(undefined4 *)((long)plVar25 + lVar15 + -8) =
                     *(undefined4 *)((long)plVar14 + lVar15 + -8);
                *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + -1;
              }
              lVar15 = lVar15 + -0x10;
            } while ((long)plVar11 - (long)plVar14 != lVar15);
            plVar11 = *(long **)(param_5 + 0x90);
            plVar14 = (long *)((long)plVar25 + lVar15);
            plVar33 = *(long **)(param_5 + 0x88);
          }
          lVar15 = *(long *)(param_5 + 0x98);
          *(long **)(param_5 + 0x88) = plVar14;
          *(long **)(param_5 + 0x90) = plVar25 + 2;
          *(ulong *)(param_5 + 0x98) = lVar16 + uVar10 * 0x10;
          while (plVar11 != plVar33) {
            plVar11 = plVar11 + -2;
            plVar25 = (long *)*plVar11;
            if (plVar25 != (long *)0x0) {
              plVar14 = plVar25 + 5;
              do {
                lVar26 = *plVar14;
                iVar8 = (int)lVar26 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar5) {
                  *(int *)plVar14 = iVar8;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar8 == 0) {
                (**(code **)(*plVar25 + 0x10))();
              }
              else if ((int)lVar26 == 0) goto LAB_00c89f78;
            }
          }
          if (plVar33 != (long *)0x0) {
            plVar25 = *(long **)(param_5 + 0xa0);
            lVar15 = lVar15 - (long)plVar33;
            uVar10 = (**(code **)(*plVar25 + 0xf8))(plVar25);
            if (((uVar10 & 1) == 0) || (lVar26 = FUN_00c4e600(), *(int *)(lVar26 + 0x12c8) < 1)) {
              (**(code **)(*plVar25 + 0x18))(plVar25,plVar33,lVar15,8);
            }
            else {
              FUN_00c48fe8(plVar25,plVar33,lVar15,8);
            }
          }
        }
        lVar15 = *plVar27;
        uVar31 = uVar31 + 1;
      } while (uVar31 < ((ulong)(*(long *)(lVar15 + 0x58) - *(long *)(lVar15 + 0x50)) >> 3 &
                        0xffffffff));
    }
    plVar27 = plVar27 + 2;
  } while (plVar27 != plVar9);
  lVar15 = *(long *)(param_5 + 0x50);
  lVar26 = *(long *)(param_5 + 0x58);
  uVar28 = 0;
  fVar41 = 0.0;
  fVar42 = 0.0;
  *(undefined2 *)(param_5 + 0x179) = 0;
  *(undefined1 *)(param_5 + 0x17b) = 0;
  if (lVar15 != lVar26) {
    *(undefined1 *)(param_5 + *(int *)(lVar15 + 8) + 0x179) = 1;
    if ((lVar15 + 0x10 != lVar26) &&
       (*(undefined1 *)(param_5 + *(int *)(lVar15 + 0x18) + 0x179) = 1, lVar15 + 0x20 != lVar26)) {
      *(undefined1 *)(param_5 + *(int *)(lVar15 + 0x28) + 0x179) = 1;
      for (lVar15 = lVar15 + 0x30; lVar15 != lVar26; lVar15 = lVar15 + 0x10) {
        *(undefined1 *)(param_5 + *(int *)(lVar15 + 8) + 0x179) = 1;
      }
    }
    plVar25 = *(long **)(param_5 + 0x50);
    plVar27 = *(long **)(param_5 + 0x58);
    if (plVar25 != plVar27) {
      uVar28 = 0;
      fVar37 = 0.0;
      fVar38 = 0.0;
      do {
        lVar15 = *plVar25;
        fVar41 = *(float *)(lVar15 + 0x1a8);
        fVar42 = *(float *)(lVar15 + 0x1ac);
        uVar40 = *(undefined8 *)(lVar15 + 0x1a0);
        if (0.0 < fVar38) {
          if (fVar42 <= 0.0) {
LAB_00c8a360:
            uVar40 = uVar28;
            fVar41 = fVar37;
            fVar42 = fVar38;
          }
          else {
            fVar47 = (float)uVar40 - (float)uVar28;
            fVar46 = (float)((ulong)uVar28 >> 0x20);
            fVar48 = (float)((ulong)uVar40 >> 0x20) - fVar46;
            fVar49 = fVar41 - fVar37;
            fVar45 = fVar42 - fVar38;
            auVar39._0_4_ = fVar47 * fVar47 + fVar48 * fVar48;
            auVar39._4_4_ = fVar49 * fVar49 + 0.0;
            auVar39._8_4_ = fVar47 * fVar47 + fVar48 * fVar48;
            auVar39._12_4_ = fVar49 * fVar49 + 0.0;
            auVar39 = NEON_ext(auVar39,auVar39,4,1);
            __x = auVar39._0_4_ + auVar39._4_4_;
            fVar34 = auVar39._8_4_ + auVar39._12_4_;
            fVar35 = auVar39._0_4_ + auVar39._4_4_;
            fVar36 = auVar39._8_4_ + auVar39._12_4_;
            if (fVar45 * fVar45 < __x) {
              fVar35 = SQRT(__x);
              if (NAN(fVar35)) {
                fVar35 = sqrtf(__x);
              }
              fVar36 = (fVar45 + fVar35) / (fVar35 + fVar35);
              __x = fVar37 + fVar49 * fVar36;
              fVar34 = (fVar38 + fVar35 + *(float *)(lVar15 + 0x1ac)) * 0.5;
              uVar40 = CONCAT44(fVar46 + fVar48 * fVar36,(float)uVar28 + fVar47 * fVar36);
              fVar35 = __x;
              fVar36 = __x;
              fVar41 = __x;
              fVar42 = fVar34;
            }
            else if (fVar45 < 0.0) goto LAB_00c8a360;
          }
        }
        uVar28 = uVar40;
        uVar40 = 0;
        uVar44 = 0;
        uVar43 = 0x3f000000;
        plVar25 = plVar25 + 2;
        fVar37 = fVar41;
        fVar38 = fVar42;
      } while (plVar27 != plVar25);
    }
  }
LAB_00c8a3c8:
  *(undefined1 *)(param_5 + 200) = 1;
  plVar25 = *(long **)(param_5 + 0x88);
  plVar27 = *(long **)(param_5 + 0x90);
  *(float *)(param_5 + 0x128) = fVar41;
  *(float *)(param_5 + 300) = fVar42;
  *(undefined8 *)(param_5 + 0x120) = uVar28;
  if (plVar27 != plVar25) {
    lVar15 = *plVar25;
    uVar3 = *(uint *)(lVar15 + 0x15c);
    uVar31 = (ulong)uVar3;
    if (plVar25 == plVar27) {
LAB_00c8a41c:
      uVar10 = (**(code **)(*(long *)(*(long *)(param_5 + 0x40) + 0x30) + 0x18))();
      *(ulong *)(param_5 + 0xc0) = (ulong)(uVar10 == uVar31) | uVar31 << 0x20;
      if (uVar10 != uVar31) goto LAB_00c8ac70;
      if (*(char *)(param_5 + 200) == '\0') {
        return;
      }
      lVar15 = *(long *)(param_5 + 0x88);
      lVar26 = *(long *)(param_5 + 0x90);
      if (lVar15 != lVar26) {
        if ((int)*(uint *)(lVar15 + 8) < 0) {
          uVar21 = 0;
LAB_00c8ad28:
          *(undefined4 *)(lVar15 + 8) = uVar21;
        }
        else if (2 < *(uint *)(lVar15 + 8)) {
          uVar21 = 2;
          goto LAB_00c8ad28;
        }
        if (lVar15 + 0x10 != lVar26) {
          if ((int)*(uint *)(lVar15 + 0x18) < 0) {
            uVar21 = 0;
LAB_00c8ad3c:
            *(undefined4 *)(lVar15 + 0x18) = uVar21;
          }
          else if (2 < *(uint *)(lVar15 + 0x18)) {
            uVar21 = 2;
            goto LAB_00c8ad3c;
          }
          if (lVar15 + 0x20 != lVar26) {
            if ((int)*(uint *)(lVar15 + 0x28) < 0) {
              uVar21 = 0;
LAB_00c8ad50:
              *(undefined4 *)(lVar15 + 0x28) = uVar21;
            }
            else if (2 < *(uint *)(lVar15 + 0x28)) {
              uVar21 = 2;
              goto LAB_00c8ad50;
            }
            if (lVar15 + 0x30 != lVar26) {
              if ((int)*(uint *)(lVar15 + 0x38) < 0) {
                uVar21 = 0;
LAB_00c8ad64:
                *(undefined4 *)(lVar15 + 0x38) = uVar21;
              }
              else if (2 < *(uint *)(lVar15 + 0x38)) {
                uVar21 = 2;
                goto LAB_00c8ad64;
              }
              if (lVar15 + 0x40 != lVar26) {
                if ((int)*(uint *)(lVar15 + 0x48) < 0) {
                  uVar21 = 0;
LAB_00c8ad78:
                  *(undefined4 *)(lVar15 + 0x48) = uVar21;
                }
                else if (2 < *(uint *)(lVar15 + 0x48)) {
                  uVar21 = 2;
                  goto LAB_00c8ad78;
                }
                if (lVar15 + 0x50 != lVar26) {
                  if ((int)*(uint *)(lVar15 + 0x58) < 0) {
                    uVar21 = 0;
LAB_00c8ad8c:
                    *(undefined4 *)(lVar15 + 0x58) = uVar21;
                  }
                  else if (2 < *(uint *)(lVar15 + 0x58)) {
                    uVar21 = 2;
                    goto LAB_00c8ad8c;
                  }
                  for (lVar15 = lVar15 + 0x60; lVar15 != lVar26; lVar15 = lVar15 + 0x10) {
                    if ((int)*(uint *)(lVar15 + 8) < 0) {
                      uVar21 = 0;
LAB_00c8b054:
                      *(undefined4 *)(lVar15 + 8) = uVar21;
                    }
                    else if (2 < *(uint *)(lVar15 + 8)) {
                      uVar21 = 2;
                      goto LAB_00c8b054;
                    }
                  }
                }
              }
            }
          }
        }
        if (*(char *)(param_5 + 200) == '\0') {
          return;
        }
      }
      puVar7 = PTR_DAT_047e0db8;
      puVar6 = PTR_DAT_047e0db0;
      pbVar32 = PTR_DAT_047e0da8;
      plVar25 = (long *)(param_5 + 0xf0);
      if (*plVar25 == 0) {
        if (((*PTR_DAT_047e0da8 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047e0da8), iVar8 != 0)) {
          FUN_00100190(&LAB_02bafa7c,PTR_DAT_047e0db0,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047e0da8);
        }
        lVar15 = *(long *)puVar6;
        local_f0 = (undefined1 *)0x1;
        *(long *)puVar7 = lVar15;
        lVar15 = FUN_00c8b084(*(undefined8 *)(lVar15 + 8),lVar15 + 0x78,&local_f0);
        if (lVar15 != 0) {
          piVar1 = (int *)(lVar15 + 0x28);
          do {
            iVar8 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 == -1) goto LAB_00c8b008;
        }
        plVar27 = (long *)*plVar25;
        *plVar25 = 0;
        if (plVar27 != (long *)0x0) {
          plVar9 = plVar27 + 5;
          do {
            lVar26 = *plVar9;
            iVar8 = (int)lVar26 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *(int *)plVar9 = iVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*plVar27 + 0x10))();
          }
          else if ((int)lVar26 == 0) goto LAB_00c89f78;
        }
        *plVar25 = lVar15;
      }
      plVar27 = (long *)(param_5 + 0xf8);
      if (*plVar27 == 0) {
        if (((*pbVar32 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047e0da8), iVar8 != 0)) {
          FUN_00100190(&LAB_02bafa7c,PTR_DAT_047e0db0,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047e0da8);
        }
        lVar15 = *(long *)puVar6;
        local_f0 = (undefined1 *)0x1;
        *(long *)puVar7 = lVar15;
        lVar15 = FUN_00c8b084(*(undefined8 *)(lVar15 + 8),lVar15 + 0x78,&local_f0);
        if (lVar15 != 0) {
          piVar1 = (int *)(lVar15 + 0x28);
          do {
            iVar8 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 == -1) goto LAB_00c8b008;
        }
        plVar9 = (long *)*plVar27;
        *plVar27 = 0;
        if (plVar9 != (long *)0x0) {
          plVar11 = plVar9 + 5;
          do {
            lVar26 = *plVar11;
            iVar8 = (int)lVar26 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *(int *)plVar11 = iVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*plVar9 + 0x10))();
          }
          else if ((int)lVar26 == 0) goto LAB_00c89f78;
        }
        *plVar27 = lVar15;
      }
      plVar9 = (long *)(param_5 + 0x100);
      if (*(long *)(param_5 + 0x100) == 0) {
        if (((*pbVar32 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047e0da8), iVar8 != 0)) {
          FUN_00100190(&LAB_02bafa7c,PTR_DAT_047e0db0,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047e0da8);
        }
        lVar15 = *(long *)puVar6;
        *(long *)puVar7 = lVar15;
        local_f0 = (undefined1 *)(long)*(int *)(param_5 + 0xc4);
        lVar15 = FUN_00c8b084(*(undefined8 *)(lVar15 + 8),lVar15 + 0x80,&local_f0);
        if (lVar15 != 0) {
          piVar1 = (int *)(lVar15 + 0x28);
          do {
            iVar8 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 == -1) goto LAB_00c8b008;
        }
        plVar11 = (long *)*plVar9;
        *plVar9 = 0;
        if (plVar11 != (long *)0x0) {
          plVar14 = plVar11 + 5;
          do {
            lVar26 = *plVar14;
            iVar8 = (int)lVar26 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *(int *)plVar14 = iVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*plVar11 + 0x10))();
          }
          else if ((int)lVar26 == 0) goto LAB_00c89f78;
        }
        *(long *)(param_5 + 0x100) = lVar15;
        lVar26 = *(long *)(lVar15 + 0x30);
        local_100 = *(long *)(lVar15 + 0x38);
        local_f8 = param_5;
        if (local_100 != 0) {
          plVar11 = (long *)(lVar26 + 0x30);
          lVar15 = nn::os::GetCurrentThread();
LAB_00c8a658:
          if (*plVar11 == 0) goto code_r0x00c8a660;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0x38));
          do {
            if (*plVar11 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0x38));
                while (*plVar11 == 0) {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar5) {
                    *plVar11 = lVar15;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') goto LAB_00c8a668;
                }
              } while( true );
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = lVar15;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_00c8a668:
          lVar16 = *(long *)(lVar26 + 0x60);
          local_d0 = &local_f8;
          plStack_c8 = &local_100;
          local_f0 = &LAB_02bafa80;
          local_e8 = FUN_02bafafc;
          lVar15 = lVar16 + 0x30;
          local_e0 = &LAB_02bafb00;
          puStack_d8 = &LAB_02bafb0c;
          pcVar12 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar16 + 0x70) + 0x110),lVar15);
          if (*pcVar12 == '\0' || *(long *)(pcVar12 + 8) == 0) {
            lVar13 = 0;
          }
          else {
            if (*(long *)(*(long *)(pcVar12 + 8) + 0x20) == 0) goto LAB_00c8b05c;
            lVar13 = (**(code **)PTR_DAT_047d8da8)();
          }
          lVar23 = local_f8;
          if (*(int *)(local_f8 + 0xc4) < 1) {
            FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar16 + 0x70) + 0x110),lVar15);
            pcVar30 = FUN_02bafafc;
LAB_00c8a758:
            local_e0 = (undefined1 *)0x0;
            puStack_d8 = (undefined1 *)0x0;
            local_f0 = (undefined1 *)0x0;
            local_e8 = (code *)0x0;
            (*pcVar30)(&local_d0);
          }
          else {
            uVar31 = 0;
            puVar29 = (undefined8 *)(*(long *)(local_100 + 0x30) + lVar13 + 0x20);
            do {
              plVar11 = (long *)(*(long *)(lVar23 + 0x40) + 0x30);
              auVar39 = (**(code **)(*plVar11 + 0x28))(plVar11,uVar31 & 0xffffffff);
              pcVar30 = local_e8;
              *(undefined1 (*) [16])(puVar29 + -4) = auVar39;
              *(float *)(puVar29 + -1) = fVar35;
              *(float *)((long)puVar29 + -4) = fVar36;
              *(float *)(puVar29 + -2) = __x;
              *(float *)((long)puVar29 + -0xc) = fVar34;
              uVar31 = uVar31 + 1;
              *(float *)(puVar29 + 1) = fVar41;
              *(float *)((long)puVar29 + 0xc) = fVar42;
              *puVar29 = uVar28;
              puVar29[3] = uVar40;
              puVar29[2] = CONCAT44(uVar44,uVar43);
              puVar29 = puVar29 + 8;
            } while ((long)uVar31 < (long)*(int *)(lVar23 + 0xc4));
            FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar16 + 0x70) + 0x110),lVar15);
            if (pcVar30 != (code *)0x0) goto LAB_00c8a758;
          }
          *(undefined8 *)(lVar26 + 0x30) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar26 + 0x38));
          pbVar32 = PTR_DAT_047e0da8;
        }
      }
      plVar11 = (long *)(param_5 + 0x110);
      if (*(long *)(param_5 + 0x110) == 0) {
        if (((*pbVar32 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047e0da8), iVar8 != 0)) {
          FUN_00100190(&LAB_02bafa7c,PTR_DAT_047e0db0,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047e0da8);
        }
        lVar15 = *(long *)puVar6;
        *(long *)puVar7 = lVar15;
        local_f0 = (undefined1 *)((long)*(int *)(param_5 + 0xc4) * 5);
        lVar15 = FUN_00c8b084(*(undefined8 *)(lVar15 + 8),lVar15 + 0x90,&local_f0);
        if (lVar15 != 0) {
          piVar1 = (int *)(lVar15 + 0x28);
          do {
            iVar8 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 == -1) goto LAB_00c8b008;
        }
        plVar14 = (long *)*plVar11;
        *plVar11 = 0;
        if (plVar14 != (long *)0x0) {
          plVar33 = plVar14 + 5;
          do {
            lVar26 = *plVar33;
            iVar8 = (int)lVar26 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar5) {
              *(int *)plVar33 = iVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*plVar14 + 0x10))();
          }
          else if ((int)lVar26 == 0) goto LAB_00c89f78;
        }
        *plVar11 = lVar15;
      }
      if (((*pbVar32 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047e0da8), iVar8 != 0)) {
        FUN_00100190(&LAB_02bafa7c,PTR_DAT_047e0db0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047e0da8);
      }
      lVar15 = *(long *)puVar6;
      *(long *)puVar7 = lVar15;
      local_f0 = (undefined1 *)(*(long *)(param_5 + 0x90) - *(long *)(param_5 + 0x88) >> 3);
      lVar15 = FUN_00c8b084(*(undefined8 *)(lVar15 + 8),lVar15 + 0x88,&local_f0);
      if (lVar15 != 0) {
        piVar1 = (int *)(lVar15 + 0x28);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 == -1) {
LAB_00c8b008:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      plVar14 = *(long **)(param_5 + 0x108);
      *(undefined8 *)(param_5 + 0x108) = 0;
      if (plVar14 != (long *)0x0) {
        plVar33 = plVar14 + 5;
        do {
          lVar26 = *plVar33;
          iVar8 = (int)lVar26 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar5) {
            *(int *)plVar33 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
        else if ((int)lVar26 == 0) {
LAB_00c89f78:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      plVar14 = (long *)(param_5 + 0x108);
      *plVar14 = lVar15;
      lVar26 = *(long *)(lVar15 + 0x38);
      if (lVar26 != 0) {
        lVar16 = *(long *)(lVar15 + 0x30);
        plVar33 = (long *)(lVar16 + 0x30);
        lVar15 = nn::os::GetCurrentThread();
LAB_00c8a880:
        if (*plVar33 == 0) goto code_r0x00c8a888;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x38));
        do {
          if (*plVar33 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(lVar16 + 0x38));
              while (*plVar33 == 0) {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                if (bVar5) {
                  *plVar33 = lVar15;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_00c8a890;
              }
            } while( true );
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar5) {
            *plVar33 = lVar15;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_00c8a890:
        lVar15 = *(long *)(lVar16 + 0x60);
        pcVar12 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar15 + 0x70) + 0x110),
                                       lVar15 + 0x30);
        if (*pcVar12 == '\0' || *(long *)(pcVar12 + 8) == 0) {
          lVar13 = 0;
        }
        else {
          if (*(long *)(*(long *)(pcVar12 + 8) + 0x20) == 0) {
LAB_00c8b05c:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_buffer","Map",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                       ,0x31);
          }
          lVar13 = (**(code **)PTR_DAT_047d8da8)();
        }
        lVar23 = *(long *)(param_5 + 0x88);
        lVar24 = *(long *)(param_5 + 0x90) - lVar23;
        if (lVar24 != 0) {
          lVar22 = *(long *)(lVar26 + 0x30);
          lVar26 = 0;
          uVar31 = 0;
          puVar20 = (undefined4 *)(lVar22 + lVar13 + 0x10);
          do {
            plVar33 = (long *)(lVar23 + lVar26);
            lVar26 = lVar26 + 0x10;
            lVar23 = *plVar33;
            uVar43 = (undefined4)plVar33[1];
            puVar2 = (undefined4 *)(lVar13 + lVar22 + ((lVar24 >> 4) + uVar31) * 0x20);
            uVar31 = uVar31 + 1;
            uVar44 = *(undefined4 *)(lVar23 + 0x158);
            uVar21 = *(undefined4 *)(lVar23 + 0x150);
            uVar18 = *(undefined4 *)(lVar23 + 0x154);
            puVar20[-4] = uVar21;
            puVar20[-3] = 0;
            puVar20[-2] = uVar44;
            puVar20[-1] = uVar18;
            *puVar20 = 0;
            puVar20[1] = uVar43;
            *(undefined8 *)(puVar20 + 2) = 0;
            *puVar2 = uVar21;
            puVar2[1] = 0;
            puVar2[2] = uVar44;
            puVar2[3] = uVar18;
            puVar2[4] = 0;
            puVar2[5] = uVar43;
            *(undefined8 *)(puVar2 + 6) = 0;
            lVar23 = *(long *)(param_5 + 0x88);
            lVar24 = *(long *)(param_5 + 0x90) - lVar23;
            puVar20 = puVar20 + 8;
          } while (uVar31 < (ulong)(lVar24 >> 4));
        }
        FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar15 + 0x70) + 0x110),lVar15 + 0x30);
        *(undefined8 *)(lVar16 + 0x30) = 0;
        nn::os::SignalLightEvent((LightEventType *)(lVar16 + 0x38));
      }
      lVar15 = *(long *)(*plVar9 + 0x38);
      if (lVar15 != 0) {
        lVar26 = *(long *)(*plVar25 + 0x38);
        if ((lVar26 != 0) && (lVar16 = *plVar27, *(long *)(lVar16 + 0x38) != 0)) {
          lVar13 = *(long *)(*plVar14 + 0x38);
          if (lVar13 != 0) {
            lVar23 = *(long *)(*plVar11 + 0x38);
            if (lVar23 != 0) {
              lVar24 = *(long *)(*plVar25 + 0x30);
              if (lVar24 == 0) {
                uVar43 = 0;
              }
              else {
                uVar31 = *(ulong *)(lVar24 + 0x70);
                uVar43 = 0;
                if (uVar31 != 0) {
                  uVar43 = (undefined4)(*(ulong *)(lVar26 + 0x30) / uVar31);
                }
              }
              lVar26 = *(long *)(*plVar9 + 0x30);
              if (lVar26 == 0) {
                uVar44 = 0;
              }
              else {
                uVar31 = *(ulong *)(lVar26 + 0x70);
                uVar44 = 0;
                if (uVar31 != 0) {
                  uVar44 = (undefined4)(*(ulong *)(lVar15 + 0x30) / uVar31);
                }
              }
              lVar15 = *(long *)(*plVar14 + 0x30);
              if (lVar15 == 0) {
                uVar21 = 0;
              }
              else {
                uVar31 = *(ulong *)(lVar15 + 0x70);
                uVar21 = 0;
                if (uVar31 != 0) {
                  uVar21 = (undefined4)(*(ulong *)(lVar13 + 0x30) / uVar31);
                }
              }
              lVar15 = *(long *)(*plVar11 + 0x30);
              if (lVar15 == 0) {
                uVar18 = 0;
              }
              else {
                uVar31 = *(ulong *)(lVar15 + 0x70);
                uVar18 = 0;
                if (uVar31 != 0) {
                  uVar18 = (undefined4)(*(ulong *)(lVar23 + 0x30) / uVar31);
                }
              }
              *(undefined4 *)(param_5 + 0xcc) = uVar43;
              *(undefined4 *)(param_5 + 0xd0) = uVar44;
              *(undefined8 *)(param_5 + 0xdc) = *(undefined8 *)(param_5 + 0xcc);
              *(undefined4 *)(param_5 + 0xd4) = uVar21;
              *(undefined4 *)(param_5 + 0xd8) = uVar18;
              *(undefined8 *)(param_5 + 0xe4) = *(undefined8 *)(param_5 + 0xd4);
              if (*(long *)(lVar16 + 0x38) == 0) {
                uVar43 = 0;
              }
              else {
                uVar43 = 0;
                if (*(long *)(lVar16 + 0x30) != 0) {
                  uVar31 = *(ulong *)(*(long *)(lVar16 + 0x30) + 0x70);
                  uVar43 = 0;
                  if (uVar31 != 0) {
                    uVar43 = (undefined4)(*(ulong *)(*(long *)(lVar16 + 0x38) + 0x30) / uVar31);
                  }
                }
              }
              *(undefined4 *)(param_5 + 0xdc) = uVar43;
              return;
            }
          }
        }
      }
      FUN_00c8bfb4(plVar25);
      FUN_00c8bfb4(plVar27);
      FUN_00c8bfb4(plVar9);
      FUN_00c8bfb4(plVar14);
      FUN_00c8bfb4(plVar11);
      goto LAB_00c8ac70;
    }
    do {
      plVar25 = plVar25 + 2;
      if (*(int *)(lVar15 + 0x160) != 0) break;
      if (plVar27 == plVar25) goto LAB_00c8a41c;
      lVar15 = *plVar25;
    } while (uVar3 == *(uint *)(lVar15 + 0x15c));
  }
  *(undefined8 *)(param_5 + 0xc0) = 0;
LAB_00c8ac70:
  *(undefined1 *)(param_5 + 200) = 0;
  return;
}


