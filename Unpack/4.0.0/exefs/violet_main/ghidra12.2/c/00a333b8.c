/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a333b8; name: FUN_00a333b8
 */


uint FUN_00a333b8(long *param_1,undefined *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ushort uVar8;
  ushort uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long extraout_x8;
  short sVar20;
  undefined8 *puVar21;
  long *plVar22;
  ulong uVar23;
  undefined *puVar24;
  long *plVar25;
  uint uVar26;
  long *plVar27;
  byte *pbVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar33;
  undefined8 uVar32;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  uint local_1e4;
  long local_1c8;
  long lStack_1c0;
  long local_1b8;
  long *plStack_1b0;
  long *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  char local_180;
  long local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  long *plStack_148;
  long *local_140;
  long *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  char *local_e8;
  long local_e0 [3];
  char *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  char *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  char *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  lVar17 = *param_1;
  if (lVar17 == 0) {
    return 0;
  }
  puVar21 = &local_130;
  fVar29 = (float)*(undefined8 *)(lVar17 + 0x1c0);
  fVar38 = (float)*(undefined8 *)(lVar17 + 0x200);
  fVar39 = (float)((ulong)*(undefined8 *)(lVar17 + 0x200) >> 0x20);
  fVar40 = (float)*(undefined8 *)(lVar17 + 0x208);
  fVar41 = (float)((ulong)*(undefined8 *)(lVar17 + 0x208) >> 0x20);
  fVar30 = (float)((ulong)*(undefined8 *)(lVar17 + 0x1c0) >> 0x20);
  fVar42 = (float)*(undefined8 *)(lVar17 + 0x210);
  fVar43 = (float)((ulong)*(undefined8 *)(lVar17 + 0x210) >> 0x20);
  fVar44 = (float)*(undefined8 *)(lVar17 + 0x218);
  fVar45 = (float)((ulong)*(undefined8 *)(lVar17 + 0x218) >> 0x20);
  fVar31 = (float)*(undefined8 *)(lVar17 + 0x1c8);
  fVar46 = (float)*(undefined8 *)(lVar17 + 0x220);
  fVar47 = (float)((ulong)*(undefined8 *)(lVar17 + 0x220) >> 0x20);
  fVar48 = (float)*(undefined8 *)(lVar17 + 0x228);
  fVar49 = (float)((ulong)*(undefined8 *)(lVar17 + 0x228) >> 0x20);
  fVar33 = (float)((ulong)*(undefined8 *)(lVar17 + 0x1c8) >> 0x20);
  fVar50 = (float)*(undefined8 *)(lVar17 + 0x230);
  fVar51 = (float)((ulong)*(undefined8 *)(lVar17 + 0x230) >> 0x20);
  fVar52 = (float)*(undefined8 *)(lVar17 + 0x238);
  fVar53 = (float)((ulong)*(undefined8 *)(lVar17 + 0x238) >> 0x20);
  fVar34 = (float)*(undefined8 *)(lVar17 + 0x1d0);
  fVar35 = (float)((ulong)*(undefined8 *)(lVar17 + 0x1d0) >> 0x20);
  fVar36 = (float)*(undefined8 *)(lVar17 + 0x1d8);
  fVar37 = (float)((ulong)*(undefined8 *)(lVar17 + 0x1d8) >> 0x20);
  uStack_120 = CONCAT44(fVar39 * fVar34 + fVar43 * fVar35 + fVar47 * fVar36 + fVar51 * fVar37,
                        fVar38 * fVar34 + fVar42 * fVar35 + fVar46 * fVar36 + fVar50 * fVar37);
  uStack_118 = CONCAT44(fVar41 * fVar34 + fVar45 * fVar35 + fVar49 * fVar36 + fVar53 * fVar37,
                        fVar40 * fVar34 + fVar44 * fVar35 + fVar48 * fVar36 + fVar52 * fVar37);
  fVar34 = (float)*(undefined8 *)(lVar17 + 0x1e0);
  fVar35 = (float)((ulong)*(undefined8 *)(lVar17 + 0x1e0) >> 0x20);
  fVar54 = (float)*(undefined8 *)(lVar17 + 0x1f0);
  fVar55 = (float)((ulong)*(undefined8 *)(lVar17 + 0x1f0) >> 0x20);
  fVar36 = (float)*(undefined8 *)(lVar17 + 0x1e8);
  fVar56 = (float)*(undefined8 *)(lVar17 + 0x1f8);
  fVar37 = (float)((ulong)*(undefined8 *)(lVar17 + 0x1e8) >> 0x20);
  local_110 = CONCAT44(fVar39 * fVar34 + fVar43 * fVar35 + fVar47 * fVar36 + fVar51 * fVar37,
                       fVar38 * fVar34 + fVar42 * fVar35 + fVar46 * fVar36 + fVar50 * fVar37);
  uStack_108 = CONCAT44(fVar41 * fVar34 + fVar45 * fVar35 + fVar49 * fVar36 + fVar53 * fVar37,
                        fVar40 * fVar34 + fVar44 * fVar35 + fVar48 * fVar36 + fVar52 * fVar37);
  fVar34 = (float)((ulong)*(undefined8 *)(lVar17 + 0x1f8) >> 0x20);
  uStack_100 = CONCAT44(fVar39 * fVar54 + fVar43 * fVar55 + fVar47 * fVar56 + fVar51 * fVar34,
                        fVar38 * fVar54 + fVar42 * fVar55 + fVar46 * fVar56 + fVar50 * fVar34);
  uStack_f8 = CONCAT44(fVar41 * fVar54 + fVar45 * fVar55 + fVar49 * fVar56 + fVar53 * fVar34,
                       fVar40 * fVar54 + fVar44 * fVar55 + fVar48 * fVar56 + fVar52 * fVar34);
  uStack_128 = CONCAT44(fVar41 * fVar29 + fVar45 * fVar30 + fVar49 * fVar31 + fVar53 * fVar33,
                        fVar40 * fVar29 + fVar44 * fVar30 + fVar48 * fVar31 + fVar52 * fVar33);
  local_130 = CONCAT44(fVar39 * fVar29 + fVar43 * fVar30 + fVar47 * fVar31 + fVar51 * fVar33,
                       fVar38 * fVar29 + fVar42 * fVar30 + fVar46 * fVar31 + fVar50 * fVar33);
  if (((*PTR_DAT_047d47a0 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d47a0), iVar12 != 0)) {
    FUN_00100190(&LAB_02a42184,PTR_DAT_047d47a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d47a0);
  }
  lVar17 = *(long *)PTR_DAT_047d47a8;
  *(long *)PTR_DAT_047d47b0 = lVar17;
  lVar17 = *(long *)(lVar17 + 0x48);
  if (lVar17 == 0) {
    uVar13 = 0;
  }
  else if (*(short *)(lVar17 + 0x1a) == 0) {
LAB_00a33a08:
    uVar13 = 0;
  }
  else {
    psVar1 = (short *)(lVar17 + 0x1a);
    sVar20 = *(short *)(lVar17 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar20) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00a33984;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00a33984:
        bVar4 = false;
      }
      if (bVar4) {
        uVar23 = *(ulong *)(lVar17 + 0x10);
        if (uVar23 == 0) goto LAB_00a33a08;
        lVar17 = *(long *)(uVar23 + 8);
        if (*(long *)(lVar17 + 0x10) != 0) {
          plVar25 = (long *)(uVar23 - 0x28);
          psVar1 = (short *)(lVar17 + 0x1a);
          do {
            sVar20 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar20 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar20 == 0) {
            uVar15 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
            *(undefined8 *)(lVar17 + 8) = uVar15;
            *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
          }
          else if (sVar20 == -1) goto LAB_00a33cbc;
          lVar17 = FUN_0168e7c4(uVar23 + 0xe0,&local_f0);
          if ((lVar17 == 0) || (*(long *)(lVar17 + 0x120) == 0)) {
            puVar24 = (undefined *)0x0;
          }
          else {
            puVar24 = (undefined *)(ulong)(*(char *)(*(long *)(lVar17 + 0x120) + 0x210) != '\0');
          }
          lVar17 = *(long *)(uVar23 + 8);
          psVar1 = (short *)(lVar17 + 0x1a);
          do {
            sVar20 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar20 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar20 == 1) goto LAB_00a33c54;
          if (sVar20 != 0) {
            if ((int)puVar24 == 0) goto LAB_00a33b74;
            goto LAB_00a33a44;
          }
          goto LAB_00a33ba4;
        }
        goto LAB_00a33c9c;
      }
      uVar13 = 0;
      sVar20 = sVar2;
    } while (sVar2 != 0);
  }
LAB_00a33478:
  plVar25 = (long *)PTR_DAT_047d6c98;
  if (DAT_048353d0 == (code *)0x0) {
    return uVar13;
  }
  if (((*PTR_DAT_047d6c98 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  puVar7 = PTR_DAT_047d6ca8;
  puVar6 = PTR_DAT_047d6ca0;
  lVar17 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar17;
  puVar24 = PTR_DAT_047d0a08;
  if ((lVar17 == 0) || (*(long *)PTR_DAT_047d0a08 == 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_00d0ca58();
  }
  if (DAT_048353d0 != (code *)0x0) {
    if (((*(byte *)plVar25 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar17 = *(long *)puVar6;
    *(long *)puVar7 = lVar17;
    if (((lVar17 != 0) && (*(long *)puVar24 != 0)) &&
       (lVar17 = *(long *)(*(long *)puVar24 + 0xb8), lVar17 != 0)) {
      if (((*(byte *)plVar25 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar12 != 0)) {
        FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6c98);
      }
      lVar19 = *(long *)puVar6;
      *(long *)puVar7 = lVar19;
      if ((lVar19 != 0) && (*(long *)puVar24 != 0)) {
        uVar8 = FUN_00d0ca58();
        if (uVar8 != 0) {
          uVar26 = 0;
          local_1e4 = 0x7fffffff;
          do {
            lVar19 = FUN_00fe9ad0(uVar26);
            if (lVar17 == lVar19) {
              local_f0 = CONCAT44(local_f0._4_4_,uVar26);
              local_1e4 = (*DAT_048353d0)(&DAT_048353f0,&local_f0);
            }
            uVar26 = uVar26 + 1;
          } while (uVar8 != uVar26);
          goto LAB_00a334f8;
        }
      }
    }
  }
  local_1e4 = 0x7fffffff;
LAB_00a334f8:
  puVar5 = PTR_DAT_047d62a8;
  if (uVar9 == 0) {
    return uVar13;
  }
  uVar26 = 0;
  pbVar28 = PTR_DAT_047d62a0;
  do {
    uVar23 = (ulong)local_1e4;
    local_168 = FUN_00fe9ad0(uVar26);
    if (local_168 != 0) {
      if (((*(byte *)plVar25 & 1) == 0) && (iVar12 = __cxa_guard_acquire(plVar25), iVar12 != 0)) {
        FUN_00100190(PTR_LAB_047d6cb0,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(plVar25);
      }
      lVar19 = local_168;
      lVar18 = *(long *)puVar6;
      *(long *)puVar7 = lVar18;
      lVar17 = 0;
      if (lVar18 != 0) {
        lVar17 = 0;
        if (*(long *)puVar24 != 0) {
          lVar17 = *(long *)(*(long *)puVar24 + 0xb8);
        }
      }
      if (local_168 != lVar17) {
        if (((*pbVar28 & 1) == 0) && (iVar12 = __cxa_guard_acquire(pbVar28), iVar12 != 0)) {
          FUN_00100190(&LAB_00b12850,puVar5,&PTR_LOOP_04483000);
          __cxa_guard_release(pbVar28);
        }
        lVar17 = *(long *)puVar5;
        *(long *)PTR_DAT_047d62b0 = lVar17;
        if (lVar17 != 0) {
          uVar14 = FUN_00b0ea70(lVar17,lVar19);
          if ((uVar14 & 1) != 0) {
            uVar10 = FUN_00f41680(&local_168);
            local_f0 = CONCAT44(local_f0._4_4_,uVar10) & 0xffffffff000000ff;
            uVar11 = (*DAT_048353d0)(&DAT_048353f0,&local_f0);
            if (local_1e4 == uVar11) {
              uVar14 = FUN_00f41680(&local_168);
              puVar21 = (undefined8 *)(uVar14 & 0xffffffff);
              FUN_00a32e20(&local_190);
              if (local_180 != '\0') {
                local_1a0 = local_190;
                uStack_198 = uStack_188;
                plVar27 = (long *)*param_1;
                local_1a8 = plVar27;
                if (plVar27 != (long *)0x0) {
                  (**(code **)(*plVar27 + 0x58))(plVar27);
                }
                local_78 = 0;
                local_f0 = 0xdd89716d5b07e188;
                local_e8 = "other_player_0";
                local_e0[0] = 0xe;
                local_e0[1] = 0;
                local_e0[2] = 0xdd89726d5b07e33b;
                local_c8 = "other_player_1";
                uStack_c0 = 0xe;
                local_b8 = 0;
                uStack_b0 = 0xdd89736d5b07e4ee;
                local_a8 = "other_player_2";
                uStack_a0 = 0xe;
                local_98 = 0;
                uStack_90 = 0xdd89746d5b07e6a1;
                local_88 = "other_player_3";
                uStack_80 = 0xe;
                if (3 < ((uint)uVar14 & 0xff)) break;
                uVar14 = uVar14 & 0xff;
                local_1c8 = local_e0[uVar14 * 4 + -2];
                lStack_1c0 = local_e0[uVar14 * 4 + -1];
                local_1b8 = local_e0[uVar14 * 4];
                plVar22 = (long *)local_e0[uVar14 * 4 + 1];
                plStack_1b0 = plVar22;
                if (plVar22 == (long *)0x0) {
                  iVar12 = FUN_00a32280(&local_1a8,&local_130,&local_1a0,&local_1c8);
                }
                else {
                  (**(code **)(*plVar22 + 0x18))(plVar22);
                  iVar12 = FUN_00a32280(&local_1a8,&local_130,&local_1a0,&local_1c8);
                  (**(code **)(*plVar22 + 0x20))(plVar22);
                }
                if (plVar27 != (long *)0x0) {
                  (**(code **)(*plVar27 + 0x60))(plVar27);
                }
                if (iVar12 == 0) {
                  uVar11 = FUN_00a35f08(local_1a0,param_2);
                  uVar13 = uVar13 + (uVar11 & 1);
                }
                pbVar28 = PTR_DAT_047d62a0;
              }
            }
          }
        }
      }
    }
    uVar26 = uVar26 + 1;
    if (uVar9 == uVar26) {
      return uVar13;
    }
  } while( true );
  FUN_00a353e0();
  lVar17 = extraout_x8;
  param_2 = puVar7;
  param_1 = plVar27;
LAB_00a33c54:
  *(undefined8 *)(lVar17 + 0x10) = 0;
  (**(code **)(*plVar25 + 0x50))(plVar25);
  if ((int)puVar24 != 0) {
LAB_00a33a44:
    lVar17 = (**(code **)(*(long *)(uVar23 - 0x28) + 0x68))(plVar25);
    uVar32 = *(undefined8 *)(lVar17 + 0x38);
    uVar15 = *(undefined8 *)(lVar17 + 0x30);
    lVar17 = *(long *)(uVar23 + 8);
    local_138 = plVar25;
    if (*(long *)(lVar17 + 0x10) == 0) {
LAB_00a33c9c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar20 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar20 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar20 == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      *(undefined8 *)(lVar17 + 8) = uVar16;
      *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
    }
    else if (sVar20 == -1) {
LAB_00a33cbc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    FUN_00a32780(&local_f0,&local_138);
    if (local_138 != (long *)0x0) {
      lVar17 = local_138[6];
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar20 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar20 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar20 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*local_138 + 0x50))();
      }
      else if (sVar20 == 0) goto LAB_00a33ba4;
    }
    if ((char)local_e0[0] != '\0') {
      uVar15 = CONCAT44((float)((ulong)uVar15 >> 0x20) + (float)((ulong)puVar21[8] >> 0x20),
                        (float)uVar15 + (float)puVar21[8]);
      uStack_188 = CONCAT44((float)((ulong)puVar21[9] >> 0x20) + 0.0,
                            (float)uVar32 + (float)puVar21[9]);
      plVar27 = (long *)*param_1;
      local_190 = uVar15;
      local_140 = plVar27;
      if (plVar27 != (long *)0x0) {
        (**(code **)(*plVar27 + 0x58))(plVar27);
      }
      local_160 = *(undefined8 *)(uVar23 + 0x340);
      uStack_158 = *(undefined8 *)(uVar23 + 0x348);
      local_150 = *(undefined8 *)(uVar23 + 0x350);
      plVar22 = *(long **)(uVar23 + 0x358);
      plStack_148 = plVar22;
      if (plVar22 == (long *)0x0) {
        iVar12 = FUN_00a32280(&local_140,&local_130,&local_190,&local_160);
      }
      else {
        (**(code **)(*plVar22 + 0x18))(plVar22);
        iVar12 = FUN_00a32280(&local_140,&local_130,&local_190,&local_160);
        (**(code **)(*plVar22 + 0x20))(plVar22);
      }
      if (plVar27 != (long *)0x0) {
        (**(code **)(*plVar27 + 0x60))(plVar27);
      }
      if (iVar12 == 0) {
        uVar13 = FUN_00a35f08(uVar15,(ulong)param_2 & 0xffffffff);
        uVar13 = uVar13 & 1;
        goto LAB_00a33b78;
      }
    }
  }
LAB_00a33b74:
  uVar13 = 0;
LAB_00a33b78:
  lVar17 = *(long *)(uVar23 + 8);
  psVar1 = (short *)(lVar17 + 0x1a);
  do {
    sVar20 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar20 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar20 == 1) {
    *(undefined8 *)(lVar17 + 0x10) = 0;
    (**(code **)(*plVar25 + 0x50))(plVar25);
  }
  else if (sVar20 == 0) {
LAB_00a33ba4:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_00a33478;
}


