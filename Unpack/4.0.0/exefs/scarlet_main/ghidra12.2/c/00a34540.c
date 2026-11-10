/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a34540; name: FUN_00a34540
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00a34540(long *param_1,ulong param_2)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  long lVar19;
  int *piVar20;
  long *plVar21;
  long extraout_x8;
  long lVar22;
  short sVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  long lVar28;
  long *plVar29;
  uint uVar30;
  ulong uVar31;
  uint uVar32;
  long *plVar33;
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
  long *plVar46;
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
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  ulong local_160;
  long *local_150;
  ulong uStack_148;
  undefined8 local_120;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long *plStack_f0;
  long *local_e8;
  long *local_e0;
  long *plStack_d8;
  char local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long **local_78;
  long *local_70 [2];
  
  lVar19 = *param_1;
  if (lVar19 == 0) {
    uVar14 = 0;
    uVar31 = 0;
LAB_00a34ea0:
    return uVar14 | uVar31 << 8;
  }
  fVar34 = (float)*(undefined8 *)(lVar19 + 0x1c0);
  fVar47 = (float)*(undefined8 *)(lVar19 + 0x200);
  fVar48 = (float)((ulong)*(undefined8 *)(lVar19 + 0x200) >> 0x20);
  fVar49 = (float)*(undefined8 *)(lVar19 + 0x208);
  fVar50 = (float)((ulong)*(undefined8 *)(lVar19 + 0x208) >> 0x20);
  fVar35 = (float)((ulong)*(undefined8 *)(lVar19 + 0x1c0) >> 0x20);
  fVar51 = (float)*(undefined8 *)(lVar19 + 0x210);
  fVar52 = (float)((ulong)*(undefined8 *)(lVar19 + 0x210) >> 0x20);
  fVar53 = (float)*(undefined8 *)(lVar19 + 0x218);
  fVar54 = (float)((ulong)*(undefined8 *)(lVar19 + 0x218) >> 0x20);
  fVar36 = (float)*(undefined8 *)(lVar19 + 0x1c8);
  fVar55 = (float)*(undefined8 *)(lVar19 + 0x220);
  fVar56 = (float)((ulong)*(undefined8 *)(lVar19 + 0x220) >> 0x20);
  fVar57 = (float)*(undefined8 *)(lVar19 + 0x228);
  fVar58 = (float)((ulong)*(undefined8 *)(lVar19 + 0x228) >> 0x20);
  fVar37 = (float)((ulong)*(undefined8 *)(lVar19 + 0x1c8) >> 0x20);
  fVar59 = (float)*(undefined8 *)(lVar19 + 0x230);
  fVar60 = (float)((ulong)*(undefined8 *)(lVar19 + 0x230) >> 0x20);
  fVar61 = (float)*(undefined8 *)(lVar19 + 0x238);
  fVar62 = (float)((ulong)*(undefined8 *)(lVar19 + 0x238) >> 0x20);
  fVar38 = (float)*(undefined8 *)(lVar19 + 0x1d0);
  fVar39 = (float)((ulong)*(undefined8 *)(lVar19 + 0x1d0) >> 0x20);
  uVar14 = *(ulong *)(lVar19 + 0x1f8);
  plVar46 = *(long **)(lVar19 + 0x1f0);
  fVar42 = (float)*(undefined8 *)(lVar19 + 0x1e0);
  fVar43 = (float)((ulong)*(undefined8 *)(lVar19 + 0x1e0) >> 0x20);
  fVar44 = (float)*(undefined8 *)(lVar19 + 0x1e8);
  fVar45 = (float)((ulong)*(undefined8 *)(lVar19 + 0x1e8) >> 0x20);
  fVar40 = (float)*(undefined8 *)(lVar19 + 0x1d8);
  fVar41 = (float)((ulong)*(undefined8 *)(lVar19 + 0x1d8) >> 0x20);
  uStack_b0 = CONCAT44(fVar48 * fVar38 + fVar52 * fVar39 + fVar56 * fVar40 + fVar60 * fVar41,
                       fVar47 * fVar38 + fVar51 * fVar39 + fVar55 * fVar40 + fVar59 * fVar41);
  uStack_a8 = CONCAT44(fVar50 * fVar38 + fVar54 * fVar39 + fVar58 * fVar40 + fVar62 * fVar41,
                       fVar49 * fVar38 + fVar53 * fVar39 + fVar57 * fVar40 + fVar61 * fVar41);
  fVar38 = SUB84(plVar46,0);
  fVar39 = (float)((ulong)plVar46 >> 0x20);
  fVar40 = (float)uVar14;
  fVar41 = (float)(uVar14 >> 0x20);
  uStack_90 = CONCAT44(fVar48 * fVar38 + fVar52 * fVar39 + fVar56 * fVar40 + fVar60 * fVar41,
                       fVar47 * fVar38 + fVar51 * fVar39 + fVar55 * fVar40 + fVar59 * fVar41);
  uStack_88 = CONCAT44(fVar50 * fVar38 + fVar54 * fVar39 + fVar58 * fVar40 + fVar62 * fVar41,
                       fVar49 * fVar38 + fVar53 * fVar39 + fVar57 * fVar40 + fVar61 * fVar41);
  uStack_b8 = CONCAT44(fVar50 * fVar34 + fVar54 * fVar35 + fVar58 * fVar36 + fVar62 * fVar37,
                       fVar49 * fVar34 + fVar53 * fVar35 + fVar57 * fVar36 + fVar61 * fVar37);
  local_c0 = CONCAT44(fVar48 * fVar34 + fVar52 * fVar35 + fVar56 * fVar36 + fVar60 * fVar37,
                      fVar47 * fVar34 + fVar51 * fVar35 + fVar55 * fVar36 + fVar59 * fVar37);
  uStack_98 = CONCAT44(fVar50 * fVar42 + fVar54 * fVar43 + fVar58 * fVar44 + fVar62 * fVar45,
                       fVar49 * fVar42 + fVar53 * fVar43 + fVar57 * fVar44 + fVar61 * fVar45);
  local_a0 = CONCAT44(fVar48 * fVar42 + fVar52 * fVar43 + fVar56 * fVar44 + fVar60 * fVar45,
                      fVar47 * fVar42 + fVar51 * fVar43 + fVar55 * fVar44 + fVar59 * fVar45);
  if (((*PTR_DAT_047d47a0 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d47a0), iVar11 != 0)) {
    FUN_00100190(&LAB_02a42184,PTR_DAT_047d47a8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d47a0);
  }
  lVar19 = *(long *)PTR_DAT_047d47a8;
  *(long *)PTR_DAT_047d47b0 = lVar19;
  lVar19 = *(long *)(lVar19 + 0x48);
  local_120 = 0;
  if ((lVar19 != 0) && (*(short *)(lVar19 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar19 + 0x1a);
    sVar23 = *(short *)(lVar19 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar23) {
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar23 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00a34fb0;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00a34fb0:
        bVar10 = false;
      }
      if (bVar10) {
        lVar19 = *(long *)(lVar19 + 0x10);
        if (lVar19 != 0) {
          plVar27 = (long *)(lVar19 + -0x28);
          lVar28 = (**(code **)(*(long *)(lVar19 + -0x28) + 0x68))(plVar27);
          local_120 = *(undefined8 *)(lVar28 + 0x30);
          lVar19 = *(long *)(lVar19 + 8);
          psVar1 = (short *)(lVar19 + 0x1a);
          do {
            sVar23 = *psVar1;
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar10) {
              *psVar1 = sVar23 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar23 == 1) goto LAB_00a350ac;
          if (sVar23 == 0) {
LAB_00a35014:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        break;
      }
      sVar23 = sVar2;
    } while (sVar2 != 0);
  }
LAB_00a34600:
  plVar27 = (long *)PTR_DAT_047d7b48;
  if (((*PTR_DAT_047d7b48 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d7b48), iVar11 != 0)) {
    FUN_00100190(&LAB_00aa519c,PTR_DAT_047d7b50,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7b48);
  }
  puVar9 = PTR_DAT_047d7b58;
  puVar8 = PTR_DAT_047d7b50;
  lVar19 = *(long *)PTR_DAT_047d7b50;
  *(long *)PTR_DAT_047d7b58 = lVar19;
  plVar33 = *(long **)(lVar19 + 0x58);
  if (((*(byte *)plVar27 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d7b48), iVar11 != 0)
     ) {
    FUN_00100190(&LAB_00aa519c,PTR_DAT_047d7b50,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7b48);
  }
  *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
  uVar7 = _UNK_03cabe58;
  plVar6 = _DAT_03cabe50;
  if (plVar33 != (long *)0x0) {
    uVar32 = 0;
    uVar31 = 0;
LAB_00a34658:
    lVar19 = plVar33[6];
    if ((((*(long *)(lVar19 + 0x38) != 0) && (uVar12 = FUN_00de1730(), (uVar12 & 1) != 0)) &&
        ((*(long *)(lVar19 + 0x80) == 0 || ((*(byte *)(*(long *)(lVar19 + 0x80) + 0x1e8) & 1) != 0))
        )) && (((((*(long *)(lVar19 + 0xc0) == 0 ||
                  ((*(byte *)(*(long *)(lVar19 + 0xc0) + 0x1e8) & 1) != 0)) &&
                 (piVar20 = (int *)plVar33[6], *piVar20 == 4)) &&
                ((piVar20[1] == 0 && (lVar19 = *(long *)(piVar20 + 10), lVar19 != 0)))) &&
               (*(short *)(lVar19 + 0x1a) != 0)))) {
      psVar1 = (short *)(lVar19 + 0x1a);
      sVar23 = *(short *)(lVar19 + 0x1a);
LAB_00a34718:
      sVar2 = *psVar1;
      if (sVar2 == sVar23) {
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar23 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00a3473c;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00a3473c:
        bVar10 = false;
      }
      if (!bVar10) goto code_r0x00a34744;
      lVar19 = *(long *)(lVar19 + 0x10);
      if (lVar19 == 0) goto LAB_00a3469c;
      lVar28 = *(long *)(lVar19 + 8);
      if (*(long *)(lVar28 + 0x10) == 0) goto LAB_00a35060;
      plVar21 = (long *)(lVar19 + -0x28);
      psVar1 = (short *)(lVar28 + 0x1a);
      do {
        sVar23 = *psVar1;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar23 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar23 != 0) {
        if (sVar23 != -1) goto LAB_00a3479c;
        goto LAB_00a35080;
      }
      uVar13 = (**(code **)**(undefined8 **)(lVar28 + 0x10))();
      *(undefined8 *)(lVar28 + 8) = uVar13;
      *(undefined4 *)(lVar28 + 0x1c) = 0xfffffffe;
LAB_00a3479c:
      lVar28 = FUN_0168e7c4(lVar19 + 0xe0,&local_e0);
      if ((lVar28 == 0) || (*(long *)(lVar28 + 0x120) == 0)) {
        bVar10 = false;
      }
      else {
        bVar10 = *(char *)(*(long *)(lVar28 + 0x120) + 0x210) != '\0';
      }
      lVar28 = *(long *)(lVar19 + 8);
      psVar1 = (short *)(lVar28 + 0x1a);
      do {
        sVar23 = *psVar1;
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar3) {
          *psVar1 = sVar23 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar23 == 1) {
        *(undefined8 *)(lVar28 + 0x10) = 0;
        (**(code **)(*plVar21 + 0x50))();
      }
      else if (sVar23 == 0) goto LAB_00a35014;
      if (!bVar10) goto LAB_00a34cd8;
      lVar28 = *(long *)(lVar19 + 8);
      if (*(long *)(lVar28 + 0x10) == 0) goto LAB_00a35060;
      psVar1 = (short *)(lVar28 + 0x1a);
      do {
        sVar23 = *psVar1;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar23 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar23 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar28 + 0x10))();
        *(undefined8 *)(lVar28 + 8) = uVar13;
        *(undefined4 *)(lVar28 + 0x1c) = 0xfffffffe;
      }
      else if (sVar23 == -1) goto LAB_00a35080;
      lVar28 = FUN_01104bd8(lVar19 + 0xe0,&local_e0);
      if (lVar28 == 0) {
        local_d0 = '\0';
        local_e0 = (long *)((ulong)local_e0 & 0xffffffffffffff00);
        goto LAB_00a34aa8;
      }
      lVar22 = *(long *)(*(long *)(lVar28 + 0x138) + 0x70);
      plVar29 = *(long **)(lVar22 + 0x30);
LAB_00a3485c:
      if (plVar29 == *(long **)(lVar22 + 0x38)) goto LAB_00a34a28;
      uVar12 = *(ulong *)(*plVar29 + 0x40);
      if (uVar12 != 0) {
        uVar24 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
        uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
        uVar24 = (uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar24 < 2) {
          uVar25 = uVar12 - 1 & 0x49a7bcfacb27321d;
        }
        else {
          uVar25 = 0x49a7bcfacb27321d;
          if (uVar12 < 0x49a7bcfacb27321e) {
            uVar25 = 0;
            if (uVar12 != 0) {
              uVar25 = 0x49a7bcfacb27321d / uVar12;
            }
            uVar25 = 0x49a7bcfacb27321d - uVar25 * uVar12;
          }
        }
        plVar26 = *(long **)(*(long *)(*plVar29 + 0x38) + uVar25 * 8);
        if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
          if (uVar24 < 2) {
            do {
              if (plVar26[1] == 0x49a7bcfacb27321d) {
                if (plVar26[2] == 0x49a7bcfacb27321d) goto LAB_00a349c8;
              }
              else if ((plVar26[1] & uVar12 - 1) != uVar25) break;
              plVar26 = (long *)*plVar26;
            } while (plVar26 != (long *)0x0);
          }
          else {
            do {
              uVar24 = plVar26[1];
              if (uVar24 == 0x49a7bcfacb27321d) {
                if (plVar26[2] == 0x49a7bcfacb27321d) goto LAB_00a349c8;
              }
              else {
                if (uVar12 <= uVar24) {
                  uVar5 = 0;
                  if (uVar12 != 0) {
                    uVar5 = uVar24 / uVar12;
                  }
                  uVar24 = uVar24 - uVar5 * uVar12;
                }
                if (uVar24 != uVar25) break;
              }
              plVar26 = (long *)*plVar26;
            } while (plVar26 != (long *)0x0);
          }
        }
      }
      goto LAB_00a349d0;
    }
    goto LAB_00a3469c;
  }
  uVar31 = 0;
  uVar32 = 0;
LAB_00a34e90:
  uVar14 = (ulong)(((uint)(param_2 >> 8) & 0xff) <= (uVar32 & 0xff));
  goto LAB_00a34ea0;
code_r0x00a34744:
  sVar23 = sVar2;
  if (sVar2 == 0) goto LAB_00a3469c;
  goto LAB_00a34718;
LAB_00a349c8:
  if ((short)plVar26[6] < 0) {
LAB_00a349d0:
    plVar29 = plVar29 + 2;
    goto LAB_00a3485c;
  }
  if ((~((uint)*(ushort *)((long)plVar29 + 10) + (int)(short)plVar26[6]) & 0xffff) != 0) {
    lVar28 = FUN_00c4c40c(lVar22);
    fVar34 = (float)*(undefined8 *)(lVar28 + 0x30);
    fVar35 = (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20);
    uVar14 = *(ulong *)(lVar22 + 0x418);
    plVar46 = *(long **)(lVar22 + 0x410);
    fVar36 = (float)*(undefined8 *)(lVar28 + 0x38);
    fVar37 = (float)((ulong)*(undefined8 *)(lVar28 + 0x38) >> 0x20);
    local_150 = (long *)CONCAT44((float)((ulong)*(undefined8 *)(lVar22 + 0x3e0) >> 0x20) * fVar34 +
                                 (float)((ulong)*(undefined8 *)(lVar22 + 0x3f0) >> 0x20) * fVar35 +
                                 (float)((ulong)*(undefined8 *)(lVar22 + 0x400) >> 0x20) * fVar36 +
                                 (float)((ulong)plVar46 >> 0x20) * fVar37,
                                 (float)*(undefined8 *)(lVar22 + 0x3e0) * fVar34 +
                                 (float)*(undefined8 *)(lVar22 + 0x3f0) * fVar35 +
                                 (float)*(undefined8 *)(lVar22 + 0x400) * fVar36 +
                                 SUB84(plVar46,0) * fVar37);
    uStack_148 = (ulong)(uint)((float)*(undefined8 *)(lVar22 + 1000) * fVar34 +
                               (float)*(undefined8 *)(lVar22 + 0x3f8) * fVar35 +
                               (float)*(undefined8 *)(lVar22 + 0x408) * fVar36 +
                              (float)uVar14 * fVar37);
    goto LAB_00a34a94;
  }
LAB_00a34a28:
  FUN_00c9e664(&local_e0,lVar28 + 0xe8);
  uStack_148 = uVar7;
  local_150 = plVar6;
  if (local_e0 != (long *)0x0) {
    (**(code **)(*(long *)plStack_d8[9] + 0xb0))();
    local_150 = plVar46;
    uStack_148 = uVar14;
  }
  if (plStack_d8 != (long *)0x0) {
    plVar29 = plStack_d8 + 5;
    do {
      lVar28 = *plVar29;
      iVar11 = (int)lVar28 + -1;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar10) {
        *(int *)plVar29 = iVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plStack_d8 + 0x10))();
    }
    else if ((int)lVar28 == 0) {
      pcVar15 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar16 = "DecrementReferenceInternal";
      pcVar17 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
      ;
      pcVar18 = "Reference counter underflows.";
      goto LAB_00a350a0;
    }
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x60))();
  }
LAB_00a34a94:
  local_d0 = '\x01';
  plStack_d8 = (long *)(uStack_148 & 0xffffffff);
  local_e0 = local_150;
LAB_00a34aa8:
  lVar28 = *(long *)(lVar19 + 8);
  psVar1 = (short *)(lVar28 + 0x1a);
  do {
    sVar23 = *psVar1;
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar10) {
      *psVar1 = sVar23 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar23 == 1) {
    *(undefined8 *)(lVar28 + 0x10) = 0;
    (**(code **)(*plVar21 + 0x50))();
  }
  else if (sVar23 == 0) goto LAB_00a35014;
  if (local_d0 != '\0') {
    lVar28 = *(long *)(lVar19 + 8);
    if (*(long *)(lVar28 + 0x10) == 0) {
LAB_00a35060:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar28 + 0x1a);
    do {
      sVar23 = *psVar1;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar23 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar23 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar28 + 0x10))();
      *(undefined8 *)(lVar28 + 8) = uVar13;
      *(undefined4 *)(lVar28 + 0x1c) = 0xfffffffe;
    }
    else if (sVar23 == -1) {
LAB_00a35080:
      pcVar15 = "count != 0";
      pcVar16 = "AddReference";
      pcVar17 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
      ;
      pcVar18 = "Reference counter overflows.";
LAB_00a350a0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar15,pcVar16,pcVar17,0x58,pcVar18);
    }
    FUN_00cebc38(local_70,plVar21);
    if (local_70[0] == (long *)0x0) {
      bVar10 = false;
    }
    else {
      (**(code **)(*local_70[0] + 0x60))();
      FUN_00cebc38(local_70,plVar21);
      bVar10 = local_70[0][0x33] == -0x65801da142c6c43f;
      if (local_70[0] != (long *)0x0) {
        (**(code **)(*local_70[0] + 0x60))();
      }
    }
    lVar28 = *(long *)(lVar19 + 8);
    psVar1 = (short *)(lVar28 + 0x1a);
    do {
      sVar23 = *psVar1;
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar23 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar23 == 1) {
      *(undefined8 *)(lVar28 + 0x10) = 0;
      (**(code **)(*plVar21 + 0x50))();
    }
    else if (sVar23 == 0) goto LAB_00a35014;
    if (bVar10) {
      plVar29 = (long *)*param_1;
      local_e8 = plVar29;
      if (plVar29 != (long *)0x0) {
        (**(code **)(*plVar29 + 0x58))(plVar29);
      }
      if (local_d0 == '\0') goto LAB_00a350a8;
      local_108 = *(undefined8 *)(lVar19 + 0x340);
      uStack_100 = *(undefined8 *)(lVar19 + 0x348);
      local_f8 = *(undefined8 *)(lVar19 + 0x350);
      plVar26 = *(long **)(lVar19 + 0x358);
      plStack_f0 = plVar26;
      if (plVar26 == (long *)0x0) {
        iVar11 = FUN_00a32280(&local_e8,&local_c0,&local_e0,&local_108);
      }
      else {
        (**(code **)(*plVar26 + 0x18))(plVar26);
        iVar11 = FUN_00a32280(&local_e8,&local_c0,&local_e0,&local_108);
        (**(code **)(*plVar26 + 0x20))();
      }
      if (plVar29 != (long *)0x0) {
        (**(code **)(*plVar29 + 0x60))(plVar29);
      }
      if (iVar11 == 0) {
        local_70[0] = &lStack_80;
        local_78 = local_70;
        plVar29 = (long *)(lVar19 + 0xe8);
        lVar22 = *plVar29;
        lVar28 = nn::os::GetCurrentThread();
        if (lVar28 == lVar22) {
          bVar10 = true;
        }
        else {
          lVar28 = nn::os::GetCurrentThread();
          do {
            if (*plVar29 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0xf0));
                while (*plVar29 == 0) {
                  cVar4 = '\x01';
                  bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar10) {
                    *plVar29 = lVar28;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') goto LAB_00a34c5c;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar10) {
              *plVar29 = lVar28;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_00a34c5c:
          bVar10 = false;
        }
        lVar28 = FUN_00c920dc(&local_78,lVar19 + 0x100);
        if (lVar28 == 0) {
          lVar28 = FUN_00c920dc(&local_78,lVar19 + 0x138);
        }
        if (!bVar10) {
          *(undefined8 *)(lVar19 + 0xe8) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0xf0));
        }
        local_160 = local_160 & 0xffff000000000000 | param_2 & 0xffffffffffff;
        uVar12 = FUN_00a35a94(local_120,local_160,lVar28);
        if ((uVar12 & 1) != 0) {
          uVar32 = uVar32 + 1;
          uVar12 = FUN_00a35968(lVar28);
          uVar30 = (uint)uVar31;
          if ((uVar12 & 1) != 0) {
            uVar30 = 1;
          }
          uVar31 = (ulong)uVar30;
        }
      }
    }
  }
LAB_00a34cd8:
  lVar19 = *(long *)(lVar19 + 8);
  psVar1 = (short *)(lVar19 + 0x1a);
  do {
    sVar23 = *psVar1;
    cVar4 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar10) {
      *psVar1 = sVar23 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar23 == 1) {
    *(undefined8 *)(lVar19 + 0x10) = 0;
    (**(code **)(*plVar21 + 0x50))();
  }
  else if (sVar23 == 0) goto LAB_00a35014;
LAB_00a3469c:
  plVar33 = (long *)*plVar33;
  if (((*(byte *)plVar27 & 1) == 0) && (iVar11 = __cxa_guard_acquire(plVar27), iVar11 != 0)) {
    FUN_00100190(&LAB_00aa519c,puVar8,&PTR_LOOP_04483000);
    __cxa_guard_release(plVar27);
  }
  *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
  if (plVar33 == (long *)0x0) goto LAB_00a34e90;
  goto LAB_00a34658;
LAB_00a350a8:
  FUN_00a353d0();
  lVar19 = extraout_x8;
LAB_00a350ac:
  *(undefined8 *)(lVar19 + 0x10) = 0;
  (**(code **)(*plVar27 + 0x50))(plVar27);
  goto LAB_00a34600;
}


