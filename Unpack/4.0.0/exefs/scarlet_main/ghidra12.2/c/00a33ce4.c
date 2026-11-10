/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a33ce4; name: FUN_00a33ce4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00a33ce4(void)

{
  uint uVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  uint uVar20;
  ushort uVar21;
  int iVar22;
  int iVar23;
  undefined8 uVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  short sVar30;
  uint uVar31;
  long *plVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar47;
  float fVar48;
  undefined1 auVar46 [16];
  float fVar50;
  float fVar51;
  undefined1 auVar49 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  long *local_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  char local_70;
  
  puVar19 = PTR_DAT_047d6ca8;
  puVar18 = PTR_DAT_047d6ca0;
  puVar17 = PTR_DAT_047d6c98;
  puVar16 = PTR_DAT_047d0a08;
  if (DAT_048353d0 != (code *)0x0) {
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar22 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar22 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar26 = *(long *)puVar18;
    *(long *)puVar19 = lVar26;
    if (((lVar26 != 0) && (*(long *)puVar16 != 0)) &&
       (lVar26 = *(long *)(*(long *)puVar16 + 0xb8), lVar26 != 0)) {
      if (((*puVar17 & 1) == 0) && (iVar22 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar22 != 0)) {
        FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6c98);
      }
      lVar28 = *(long *)puVar18;
      *(long *)puVar19 = lVar28;
      if ((lVar28 != 0) && (*(long *)puVar16 != 0)) {
        uVar21 = FUN_00d0ca58();
        if (uVar21 != 0) {
          fVar45 = 0.0;
          iVar22 = 0x7fffffff;
          do {
            lVar28 = FUN_00fe9ad0(fVar45);
            if (lVar26 == lVar28) {
              local_80 = fVar45;
              iVar22 = (*DAT_048353d0)(&DAT_048353f0,&local_80);
            }
            fVar45 = (float)((int)fVar45 + 1);
          } while ((float)(uint)uVar21 != fVar45);
          if (iVar22 == 2) {
            if (((*PTR_DAT_047d47a0 & 1) == 0) &&
               (iVar22 = __cxa_guard_acquire(PTR_DAT_047d47a0), iVar22 != 0)) {
              FUN_00100190(&LAB_02a42184,PTR_DAT_047d47a8,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d47a0);
            }
            lVar26 = *(long *)PTR_DAT_047d47a8;
            *(long *)PTR_DAT_047d47b0 = lVar26;
            lVar26 = *(long *)(lVar26 + 0x48);
            if ((lVar26 != 0) && (*(short *)(lVar26 + 0x1a) != 0)) {
              psVar2 = (short *)(lVar26 + 0x1a);
              uVar31 = 1;
              uVar33 = 1;
              uVar35 = 1;
              uVar34 = 1;
              iVar22 = 1;
              sVar30 = *(short *)(lVar26 + 0x1a);
LAB_00a33f38:
              sVar3 = *psVar2;
              if (sVar3 == sVar30) {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar5) {
                  *psVar2 = sVar30 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 != '\0') goto LAB_00a33f5c;
                bVar5 = true;
              }
              else {
                ClearExclusiveLocal();
LAB_00a33f5c:
                bVar5 = false;
              }
              if (!bVar5) goto code_r0x00a33f64;
              lVar26 = *(long *)(lVar26 + 0x10);
              if (lVar26 != 0) {
                plVar32 = (long *)(lVar26 + -0x28);
                lVar28 = (**(code **)(*(long *)(lVar26 + -0x28) + 0x68))(plVar32);
                auVar46 = *(undefined1 (*) [16])(lVar28 + 0x30);
                lVar28 = *(long *)(lVar26 + 8);
                local_88 = plVar32;
                if (*(long *)(lVar28 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("m_object != nullptr","AddReference",
                             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                             ,0x3d);
                }
                psVar2 = (short *)(lVar28 + 0x1a);
                do {
                  sVar30 = *psVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                  if (bVar5) {
                    *psVar2 = sVar30 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (sVar30 == 0) {
                  uVar24 = (**(code **)**(undefined8 **)(lVar28 + 0x10))();
                  *(undefined8 *)(lVar28 + 8) = uVar24;
                  *(undefined4 *)(lVar28 + 0x1c) = 0xfffffffe;
                }
                else if (sVar30 == -1) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != 0","AddReference",
                             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                             ,0x58,"Reference counter overflows.");
                }
                FUN_00a32780(&local_80,&local_88);
                if (local_88 != (long *)0x0) {
                  lVar28 = local_88[6];
                  psVar2 = (short *)(lVar28 + 0x1a);
                  do {
                    sVar30 = *psVar2;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                    if (bVar5) {
                      *psVar2 = sVar30 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (sVar30 == 1) {
                    *(undefined8 *)(lVar28 + 0x10) = 0;
                    (**(code **)(*local_88 + 0x50))();
                  }
                  else if (sVar30 == 0) goto LAB_00a34480;
                }
                if (local_70 == '\0') {
                  uVar31 = 1;
                  uVar33 = 1;
                  uVar35 = 1;
                  uVar34 = 1;
LAB_00a34430:
                  iVar22 = 1;
                }
                else {
                  local_a0 = auVar46._0_4_;
                  fStack_9c = auVar46._4_4_;
                  fStack_98 = auVar46._8_4_;
                  local_a0 = local_a0 + local_80;
                  fStack_9c = fStack_9c + fStack_7c;
                  fStack_98 = fStack_98 + fStack_78;
                  fVar45 = (float)_DAT_03caa990 - local_a0;
                  fVar44 = (float)((ulong)_DAT_03caa990 >> 0x20) - fStack_9c;
                  fVar47 = (float)_UNK_03caa998 - fStack_98;
                  fVar48 = (float)_DAT_03caad70 - local_a0;
                  fVar50 = (float)((ulong)_DAT_03caad70 >> 0x20) - fStack_9c;
                  fVar51 = (float)_UNK_03caad78 - fStack_98;
                  fVar45 = fVar45 * fVar45;
                  fVar44 = fVar44 * fVar44;
                  fVar47 = fVar47 * fVar47;
                  fVar48 = fVar48 * fVar48;
                  fVar50 = fVar50 * fVar50;
                  fVar51 = fVar51 * fVar51;
                  auVar46._0_4_ = fVar45 + fVar44;
                  auVar46._4_4_ = fVar47 + 0.0;
                  auVar46._8_4_ = fVar45 + fVar44;
                  auVar46._12_4_ = fVar47 + 0.0;
                  auVar46 = NEON_ext(auVar46,auVar46,4,1);
                  fVar52 = (float)_DAT_03cab8c0 - local_a0;
                  fVar53 = (float)((ulong)_DAT_03cab8c0 >> 0x20) - fStack_9c;
                  fVar54 = (float)_UNK_03cab8c8 - fStack_98;
                  auVar49._0_4_ = fVar48 + fVar50;
                  auVar49._4_4_ = fVar51 + 0.0;
                  auVar49._8_4_ = fVar48 + fVar50;
                  auVar49._12_4_ = fVar51 + 0.0;
                  auVar49 = NEON_ext(auVar49,auVar49,4,1);
                  uVar35 = (uint)(100.0 <= auVar46._0_4_ + auVar46._4_4_);
                  fVar45 = (float)_DAT_03cab9e0 - local_a0;
                  fVar44 = (float)((ulong)_DAT_03cab9e0 >> 0x20) - fStack_9c;
                  fVar47 = (float)_UNK_03cab9e8 - fStack_98;
                  local_a0 = (float)_DAT_03cab830 - local_a0;
                  fStack_9c = (float)((ulong)_DAT_03cab830 >> 0x20) - fStack_9c;
                  fStack_98 = (float)_UNK_03cab838 - fStack_98;
                  uVar31 = (uint)(100.0 <= auVar49._0_4_ + auVar49._4_4_);
                  fVar52 = fVar52 * fVar52;
                  fVar53 = fVar53 * fVar53;
                  fVar54 = fVar54 * fVar54;
                  fVar45 = fVar45 * fVar45;
                  fVar44 = fVar44 * fVar44;
                  fVar47 = fVar47 * fVar47;
                  auVar41._0_4_ = fVar52 + fVar53;
                  auVar41._4_4_ = fVar54 + 0.0;
                  auVar41._8_4_ = fVar52 + fVar53;
                  auVar41._12_4_ = fVar54 + 0.0;
                  auVar46 = NEON_ext(auVar41,auVar41,4,1);
                  local_a0 = local_a0 * local_a0;
                  fStack_9c = fStack_9c * fStack_9c;
                  fStack_98 = fStack_98 * fStack_98;
                  auVar42._0_4_ = fVar45 + fVar44;
                  auVar42._4_4_ = fVar47 + 0.0;
                  auVar42._8_4_ = fVar45 + fVar44;
                  auVar42._12_4_ = fVar47 + 0.0;
                  auVar49 = NEON_ext(auVar42,auVar42,4,1);
                  uVar33 = (uint)(100.0 <= auVar46._0_4_ + auVar46._4_4_);
                  auVar43._0_4_ = local_a0 + fStack_9c;
                  auVar43._4_4_ = fStack_98 + 0.0;
                  auVar43._8_4_ = local_a0 + fStack_9c;
                  auVar43._12_4_ = fStack_98 + 0.0;
                  auVar46 = NEON_ext(auVar43,auVar43,4,1);
                  uVar34 = (uint)(100.0 <= auVar49._0_4_ + auVar49._4_4_);
                  if (100.0 <= auVar46._0_4_ + auVar46._4_4_) goto LAB_00a34430;
                  iVar22 = 0;
                }
                lVar26 = *(long *)(lVar26 + 8);
                psVar2 = (short *)(lVar26 + 0x1a);
                do {
                  sVar30 = *psVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                  if (bVar5) {
                    *psVar2 = sVar30 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (sVar30 == 1) {
                  *(undefined8 *)(lVar26 + 0x10) = 0;
                  (**(code **)(*plVar32 + 0x50))();
                }
                else if (sVar30 == 0) {
LAB_00a34480:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                             ,0x60,"Reference counter underflows.");
                }
                goto LAB_00a33d60;
              }
            }
          }
        }
      }
    }
  }
  uVar31 = 1;
  uVar33 = 1;
  uVar35 = 1;
  uVar34 = 1;
  iVar22 = 1;
LAB_00a33d60:
  if (((*puVar17 & 1) == 0) && (iVar23 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar23 != 0)) {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar26 = *(long *)puVar18;
  *(long *)puVar19 = lVar26;
  if ((lVar26 != 0) && (*(long *)puVar16 != 0)) {
    uVar21 = FUN_00d0ca58();
    uVar15 = _UNK_03cab9e8;
    uVar14 = _DAT_03cab9e0;
    uVar13 = _UNK_03cab8c8;
    uVar12 = _DAT_03cab8c0;
    uVar11 = _UNK_03cab838;
    uVar10 = _DAT_03cab830;
    uVar9 = _UNK_03caad78;
    uVar8 = _DAT_03caad70;
    uVar7 = _UNK_03caa998;
    uVar24 = _DAT_03caa990;
    if (uVar21 != 0) {
      fVar45 = 0.0;
      do {
        local_80 = fVar45;
        iVar23 = (*DAT_048353d0)(&DAT_048353f0,&local_80);
        if ((iVar23 == 2) && (FUN_00a32e20(&local_80,fVar45), local_70 != '\0')) {
          if (uVar35 == 0) {
            uVar35 = 0;
          }
          else {
            local_e0 = (float)uVar24;
            fStack_dc = (float)((ulong)uVar24 >> 0x20);
            fStack_d8 = (float)uVar7;
            fVar44 = (local_e0 - local_80) * (local_e0 - local_80);
            fVar47 = (fStack_dc - fStack_7c) * (fStack_dc - fStack_7c);
            fVar48 = (fStack_d8 - fStack_78) * (fStack_d8 - fStack_78);
            auVar36._0_4_ = fVar44 + fVar47;
            auVar36._4_4_ = fVar48 + 0.0;
            auVar36._8_4_ = fVar44 + fVar47;
            auVar36._12_4_ = fVar48 + 0.0;
            auVar46 = NEON_ext(auVar36,auVar36,4,1);
            if (auVar46._0_4_ + auVar46._4_4_ < 100.0) {
              uVar35 = 0;
            }
          }
          if (uVar31 == 0) {
LAB_00a3408c:
            uVar31 = 0;
          }
          else {
            local_d0 = (float)uVar8;
            fStack_cc = (float)((ulong)uVar8 >> 0x20);
            fStack_c8 = (float)uVar9;
            fVar44 = (local_d0 - local_80) * (local_d0 - local_80);
            fVar47 = (fStack_cc - fStack_7c) * (fStack_cc - fStack_7c);
            fVar48 = (fStack_c8 - fStack_78) * (fStack_c8 - fStack_78);
            auVar37._0_4_ = fVar44 + fVar47;
            auVar37._4_4_ = fVar48 + 0.0;
            auVar37._8_4_ = fVar44 + fVar47;
            auVar37._12_4_ = fVar48 + 0.0;
            auVar46 = NEON_ext(auVar37,auVar37,4,1);
            if (auVar46._0_4_ + auVar46._4_4_ < 100.0) goto LAB_00a3408c;
          }
          if (uVar33 == 0) {
LAB_00a340c0:
            uVar33 = 0;
          }
          else {
            local_c0 = (float)uVar12;
            fStack_bc = (float)((ulong)uVar12 >> 0x20);
            fStack_b8 = (float)uVar13;
            fVar44 = (local_c0 - local_80) * (local_c0 - local_80);
            fVar47 = (fStack_bc - fStack_7c) * (fStack_bc - fStack_7c);
            fVar48 = (fStack_b8 - fStack_78) * (fStack_b8 - fStack_78);
            auVar38._0_4_ = fVar44 + fVar47;
            auVar38._4_4_ = fVar48 + 0.0;
            auVar38._8_4_ = fVar44 + fVar47;
            auVar38._12_4_ = fVar48 + 0.0;
            auVar46 = NEON_ext(auVar38,auVar38,4,1);
            if (auVar46._0_4_ + auVar46._4_4_ < 100.0) goto LAB_00a340c0;
          }
          if (uVar34 == 0) {
LAB_00a340f4:
            uVar34 = 0;
          }
          else {
            local_b0 = (float)uVar14;
            fStack_ac = (float)((ulong)uVar14 >> 0x20);
            fStack_a8 = (float)uVar15;
            fVar44 = (local_b0 - local_80) * (local_b0 - local_80);
            fVar47 = (fStack_ac - fStack_7c) * (fStack_ac - fStack_7c);
            fVar48 = (fStack_a8 - fStack_78) * (fStack_a8 - fStack_78);
            auVar39._0_4_ = fVar44 + fVar47;
            auVar39._4_4_ = fVar48 + 0.0;
            auVar39._8_4_ = fVar44 + fVar47;
            auVar39._12_4_ = fVar48 + 0.0;
            auVar46 = NEON_ext(auVar39,auVar39,4,1);
            if (auVar46._0_4_ + auVar46._4_4_ < 100.0) goto LAB_00a340f4;
          }
          if (iVar22 != 0) {
            local_a0 = (float)uVar10;
            fStack_9c = (float)((ulong)uVar10 >> 0x20);
            fStack_98 = (float)uVar11;
            fVar44 = (local_a0 - local_80) * (local_a0 - local_80);
            fVar47 = (fStack_9c - fStack_7c) * (fStack_9c - fStack_7c);
            fVar48 = (fStack_98 - fStack_78) * (fStack_98 - fStack_78);
            auVar40._0_4_ = fVar44 + fVar47;
            auVar40._4_4_ = fVar48 + 0.0;
            auVar40._8_4_ = fVar44 + fVar47;
            auVar40._12_4_ = fVar48 + 0.0;
            auVar46 = NEON_ext(auVar40,auVar40,4,1);
            if (100.0 <= auVar46._0_4_ + auVar46._4_4_) goto LAB_00a3412c;
          }
          iVar22 = 0;
        }
LAB_00a3412c:
        fVar45 = (float)((int)fVar45 + 1);
      } while ((float)(uint)uVar21 != fVar45);
    }
  }
  uVar1 = uVar33 + uVar31 + uVar35 + uVar34 + iVar22;
  if (uVar1 == 1) {
    if (uVar35 != 0) {
      return 1;
    }
    if (uVar31 != 0) {
      return 2;
    }
    if (uVar33 != 0) {
      return 3;
    }
    if (uVar34 != 0) {
      return 4;
    }
    if (iVar22 == 0) {
      return 6;
    }
  }
  else {
    if (uVar1 == 0) {
      uVar25 = (int)DAT_04540820 + (int)DAT_04540818;
      uVar29 = DAT_04540820 ^ DAT_04540818;
      DAT_04540818 = uVar29 ^ (DAT_04540818 >> 0x28 | DAT_04540818 << 0x18) ^ uVar29 << 0x10;
      DAT_04540820 = uVar29 >> 0x1b | uVar29 << 0x25;
    }
    else {
      lVar26 = 0x1f;
      if ((uVar1 << (ulong)((uint)LZCOUNT(uVar1) & 0x1f) & 0x7fffffff) != 0) {
        lVar26 = 0x20;
      }
      uVar27 = lVar26 - LZCOUNT(uVar1);
      uVar29 = uVar27 >> 6;
      if ((uVar27 & 0x3f) != 0) {
        uVar29 = uVar29 + 1;
      }
      uVar6 = 0;
      if (uVar29 != 0) {
        uVar6 = uVar27 / uVar29;
      }
      uVar20 = 0;
      if (uVar29 <= uVar27) {
        uVar20 = (uint)(0xffffffffffffffff >> (-uVar6 & 0x3f));
      }
      do {
        uVar29 = DAT_04540818 ^ DAT_04540820;
        iVar23 = (int)DAT_04540820;
        DAT_04540820 = uVar29 >> 0x1b | uVar29 << 0x25;
        uVar25 = (int)DAT_04540818 + iVar23 & uVar20;
        DAT_04540818 = uVar29 ^ (DAT_04540818 >> 0x28 | DAT_04540818 << 0x18) ^ uVar29 << 0x10;
      } while (uVar1 <= uVar25);
    }
    if (uVar35 == 0) {
      uVar35 = 0;
    }
    else {
      uVar35 = 1;
      if (uVar25 == 0) {
        return 1;
      }
    }
    if (uVar31 != 0) {
      if (uVar35 == uVar25) {
        return 2;
      }
      uVar35 = uVar35 + 1;
    }
    if (uVar33 != 0) {
      if (uVar35 == uVar25) {
        return 3;
      }
      uVar35 = uVar35 + 1;
    }
    if (uVar34 != 0) {
      if (uVar35 == uVar25) {
        return 4;
      }
      uVar35 = uVar35 + 1;
    }
    if (iVar22 == 0) {
      return 6;
    }
    if (uVar35 != uVar25) {
      return 6;
    }
  }
  return 5;
code_r0x00a33f64:
  sVar30 = sVar3;
  if (sVar3 == 0) goto LAB_00a33d60;
  goto LAB_00a33f38;
}


