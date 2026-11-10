/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01336810; name: FUN_01336810
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01336810(undefined4 param_1,undefined4 param_2,ulong param_3,undefined8 param_4,int param_5
                 )

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  long *plVar4;
  ulong *puVar5;
  int *piVar6;
  long lVar7;
  ushort *puVar8;
  ulong *puVar9;
  byte bVar10;
  char cVar11;
  char cVar12;
  undefined *puVar13;
  ulong *puVar14;
  undefined4 uVar15;
  bool bVar16;
  undefined2 uVar17;
  ushort uVar18;
  int iVar19;
  uint uVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *puVar23;
  size_t sVar24;
  void *pvVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  short sVar31;
  long *plVar32;
  long *plVar33;
  undefined1 *puVar34;
  byte *pbVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  char *pcVar39;
  long *plVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 *puVar43;
  undefined1 *puVar44;
  ulong *puVar45;
  ulong uVar46;
  undefined1 *puVar47;
  undefined1 *puVar48;
  long lVar49;
  long lVar50;
  ulong uVar51;
  ulong uVar52;
  long lVar53;
  ulong uVar54;
  ulong uVar55;
  long lVar56;
  ulong uVar57;
  ulong uVar58;
  undefined4 *puVar59;
  uint *puVar60;
  long *plVar61;
  long lVar62;
  undefined4 *puVar63;
  undefined8 *puVar64;
  char *pcVar65;
  ulong uVar66;
  undefined8 uVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined4 local_288;
  ulong *local_240;
  long *local_238;
  long *local_230;
  ulong local_228;
  ulong *local_220;
  ulong uStack_218;
  undefined4 local_210;
  long local_1c8;
  long local_1c0;
  undefined8 uStack_1b0;
  long local_1a8;
  undefined1 local_1a0;
  undefined8 local_19c;
  ulong *local_190;
  ulong uStack_188;
  ulong local_180;
  undefined8 local_178;
  ulong local_170;
  undefined8 local_168;
  long *local_160;
  undefined2 local_158;
  undefined1 uStack_156;
  undefined1 uStack_155;
  undefined4 uStack_154;
  uint local_150;
  undefined4 uStack_14c;
  uint local_148;
  undefined4 uStack_144;
  undefined8 local_140;
  char local_138;
  long local_e8;
  long local_e0;
  undefined2 local_d8;
  uint uStack_d4;
  undefined8 uStack_d0;
  long local_c8;
  undefined1 local_c0;
  undefined8 local_bc;
  long *local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  long *local_88;
  
  lVar49 = *(long *)(param_3 + 0x10);
  if (((*PTR_DAT_047daf58 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_047daf58), iVar19 != 0)) {
    FUN_00100190(PTR_LAB_047dd580,PTR_DAT_047daf60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047daf58);
  }
  lVar49 = *(long *)(lVar49 + 0xc0);
  plVar32 = (long *)PTR_DAT_047daf60;
  if (lVar49 != 0) {
    plVar32 = (long *)(lVar49 + 0x70);
  }
  plVar32 = (long *)*plVar32;
  if (plVar32 == (long *)0x0) {
    return;
  }
  plVar4 = plVar32 + 5;
  do {
    lVar49 = *plVar4;
    cVar11 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar16) {
      *(int *)plVar4 = (int)lVar49 + 1;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if ((int)lVar49 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  if (((*PTR_DAT_047d8c00 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar19 != 0)) {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar49 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar49;
  cVar11 = *(char *)(*(long *)(lVar49 + 0x70) + 0x118);
  local_b0 = (long *)0x0;
  FUN_0133b1dc(param_4,&local_b0);
  puVar13 = PTR_DAT_047d1a08;
  if (local_b0 == (long *)0x0) goto LAB_013388cc;
  lVar49 = *(long *)local_b0[3];
  iVar19 = *(int *)(lVar49 + 0x20);
  local_160 = (long *)0x78;
  plVar21 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_160,0);
  if (*(code **)(puVar13 + 0x10) != (code *)0x0) {
    (**(code **)(puVar13 + 0x10))(plVar21,"hknpMaterialLibrary");
  }
  FUN_0133b5b8(plVar21,iVar19 + 4);
  puVar13 = PTR_DAT_047d1a08;
  iVar19 = *(int *)(lVar49 + 0x30);
  local_160 = (long *)&DAT_00000070;
  plVar22 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_160,0);
  if (*(code **)(puVar13 + 0x10) != (code *)0x0) {
    (**(code **)(puVar13 + 0x10))(plVar22,"hknpMotionPropertiesLibrary");
  }
  plVar22[1] = 0xffffffff;
  plVar28 = plVar22 + 2;
  *plVar28 = 1;
  *plVar22 = (long)(PTR_DAT_047e3130 + 0x10);
  plVar22[3] = 0;
  plVar22[4] = 0;
  plVar22[5] = 0;
  plVar22[6] = 0;
  plVar22[7] = 0;
  plVar22[8] = 0;
  plVar22[9] = -0x8000000000000000;
  plVar22[10] = 0;
  *(undefined4 *)((long)plVar22 + 0x5c) = 0xffffffff;
  *(undefined4 *)(plVar22 + 0xc) = 0;
  *(undefined4 *)((long)plVar22 + 100) = 0xffffffff;
  lVar50 = plVar22[9];
  *(undefined4 *)(plVar22 + 0xb) = 0;
  iVar19 = FUN_0133ae28(plVar22 + 8,0,iVar19 + 5,0x10);
  if (-1 < iVar19) {
    FUN_01339e74(plVar22 + 3,plVar22,(int)lVar50);
  }
  puVar23 = (undefined8 *)(**(code **)(**(long **)(param_3 + 0x18) + 0x38))();
  fVar68 = (float)*puVar23;
  fVar69 = (float)((ulong)*puVar23 >> 0x20);
  fVar68 = fVar68 * fVar68;
  fVar69 = fVar69 * fVar69;
  fVar70 = (float)puVar23[1] * (float)puVar23[1];
  FUN_0133a20c(CONCAT44(SQRT(fVar68 + fVar69 + fVar70),SQRT(fVar68 + fVar69 + fVar70)),plVar22);
  if (0 < *(int *)(lVar49 + 0x40)) {
    lVar50 = *(long *)(lVar49 + 0x38);
    uVar17 = FUN_00cb1704(plVar21,*(long *)(lVar49 + 0x18) +
                                  (ulong)*(ushort *)(lVar50 + 0x14) * 0x50);
    *(undefined2 *)(lVar50 + 0x14) = uVar17;
    uVar17 = FUN_0133a350(plVar22,*(long *)(lVar49 + 0x28) +
                                  (ulong)*(ushort *)(lVar50 + 0x88) * 0x70);
    *(undefined2 *)(lVar50 + 0x88) = uVar17;
    if (1 < *(int *)(lVar49 + 0x40)) {
      lVar50 = *(long *)(lVar49 + 0x38);
      uVar17 = FUN_00cb1704(plVar21,*(long *)(lVar49 + 0x18) +
                                    (ulong)*(ushort *)(lVar50 + 0xc4) * 0x50);
      *(undefined2 *)(lVar50 + 0xc4) = uVar17;
      uVar17 = FUN_0133a350(plVar22,*(long *)(lVar49 + 0x28) +
                                    (ulong)*(ushort *)(lVar50 + 0x138) * 0x70);
      *(undefined2 *)(lVar50 + 0x138) = uVar17;
      if (2 < *(int *)(lVar49 + 0x40)) {
        lVar50 = *(long *)(lVar49 + 0x38);
        uVar17 = FUN_00cb1704(plVar21,*(long *)(lVar49 + 0x18) +
                                      (ulong)*(ushort *)(lVar50 + 0x174) * 0x50);
        *(undefined2 *)(lVar50 + 0x174) = uVar17;
        uVar17 = FUN_0133a350(plVar22,*(long *)(lVar49 + 0x28) +
                                      (ulong)*(ushort *)(lVar50 + 0x1e8) * 0x70);
        *(undefined2 *)(lVar50 + 0x1e8) = uVar17;
        if (3 < *(int *)(lVar49 + 0x40)) {
          lVar50 = *(long *)(lVar49 + 0x38);
          uVar17 = FUN_00cb1704(plVar21,*(long *)(lVar49 + 0x18) +
                                        (ulong)*(ushort *)(lVar50 + 0x224) * 0x50);
          *(undefined2 *)(lVar50 + 0x224) = uVar17;
          uVar17 = FUN_0133a350(plVar22,*(long *)(lVar49 + 0x28) +
                                        (ulong)*(ushort *)(lVar50 + 0x298) * 0x70);
          *(undefined2 *)(lVar50 + 0x298) = uVar17;
          if (4 < *(int *)(lVar49 + 0x40)) {
            lVar50 = *(long *)(lVar49 + 0x38);
            uVar17 = FUN_00cb1704(plVar21,*(long *)(lVar49 + 0x18) +
                                          (ulong)*(ushort *)(lVar50 + 0x2d4) * 0x50);
            *(undefined2 *)(lVar50 + 0x2d4) = uVar17;
            uVar17 = FUN_0133a350(plVar22,*(long *)(lVar49 + 0x28) +
                                          (ulong)*(ushort *)(lVar50 + 0x348) * 0x70);
            *(undefined2 *)(lVar50 + 0x348) = uVar17;
            if (5 < *(int *)(lVar49 + 0x40)) {
              lVar50 = *(long *)(lVar49 + 0x38);
              uVar17 = FUN_00cb1704(plVar21,*(long *)(lVar49 + 0x18) +
                                            (ulong)*(ushort *)(lVar50 + 900) * 0x50);
              *(undefined2 *)(lVar50 + 900) = uVar17;
              uVar17 = FUN_0133a350(plVar22,*(long *)(lVar49 + 0x28) +
                                            (ulong)*(ushort *)(lVar50 + 0x3f8) * 0x70);
              *(undefined2 *)(lVar50 + 0x3f8) = uVar17;
              if (6 < *(int *)(lVar49 + 0x40)) {
                lVar50 = 6;
                lVar26 = 0x4a8;
                do {
                  puVar8 = (ushort *)(*(long *)(lVar49 + 0x38) + lVar26);
                  uVar18 = FUN_00cb1704(plVar21,*(long *)(lVar49 + 0x18) +
                                                (ulong)puVar8[-0x3a] * 0x50);
                  puVar8[-0x3a] = uVar18;
                  uVar18 = FUN_0133a350(plVar22,*(long *)(lVar49 + 0x28) + (ulong)*puVar8 * 0x70);
                  *puVar8 = uVar18;
                  lVar50 = lVar50 + 1;
                  lVar26 = lVar26 + 0xb0;
                } while (lVar50 < *(int *)(lVar49 + 0x40));
              }
            }
          }
        }
      }
    }
  }
  uVar51 = plVar21[9];
  if (4 < (int)plVar21[0xd]) {
    uVar55 = 4;
    do {
      local_160 = (long *)0x0;
      local_158 = 0;
      uStack_156 = 0;
      uStack_155 = 0;
      uStack_154 = 0;
      pcVar65 = (char *)(*(ulong *)(uVar51 + uVar55 * 0x50) & 0xfffffffffffffffe);
      if (pcVar65 == (char *)0x0) {
        plVar61 = (long *)0x0;
      }
      else {
        sVar24 = strlen(pcVar65);
        sVar24 = (size_t)((int)sVar24 + 1);
        pvVar25 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar24);
        memcpy(pvVar25,pcVar65,sVar24);
        local_160 = (long *)((ulong)pvVar25 | 1);
        plVar61 = (long *)CONCAT44(uStack_154,CONCAT13(uStack_155,CONCAT12(uStack_156,local_158)));
      }
      plVar40 = (long *)(uVar51 + uVar55 * 0x50 + 8);
      plVar33 = (long *)*plVar40;
      if (plVar61 != plVar33) {
        if ((plVar33 != (long *)0x0) && (plVar33[1] != 0)) {
          plVar33 = plVar33 + 2;
          do {
            cVar12 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar16) {
              *plVar33 = *plVar33 + 1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          plVar33 = (long *)*plVar40;
        }
        local_158 = SUB82(plVar33,0);
        uStack_156 = (undefined1)((ulong)plVar33 >> 0x10);
        uStack_155 = (undefined1)((ulong)plVar33 >> 0x18);
        uStack_154 = (undefined4)((ulong)plVar33 >> 0x20);
        if ((plVar61 != (long *)0x0) && (plVar61[1] != 0)) {
          plVar33 = plVar61 + 2;
          do {
            lVar50 = *plVar33;
            cVar12 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
            if (bVar16) {
              *plVar33 = lVar50 + -1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          if (lVar50 + -1 == 0) {
            (**(code **)(*plVar61 + 0x18))();
          }
        }
      }
      memcpy(&local_150,(void *)(uVar51 + uVar55 * 0x50 + 0x10),0x40);
      local_150 = 1;
      uVar18 = (**(code **)(**(long **)(param_3 + 0x18) + 0x78))
                         (*(long **)(param_3 + 0x18),&local_160);
      plVar61 = *(long **)(param_3 + 0x20);
      uVar54 = (ulong)uVar18;
      uVar57 = plVar61[1];
      uVar52 = uVar51;
      if (uVar57 == 0) {
LAB_01336d14:
        plVar33 = (long *)(**(code **)(*(long *)plVar61[7] + 0x10))((long *)plVar61[7],0x18,2);
        if (plVar33 == (long *)0x0) {
          (**(code **)(*(long *)plVar61[7] + 0xe8))();
        }
        lVar50 = plVar61[7];
        if (((DAT_04865a38 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_04865a38), iVar19 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar26 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar26 == 0) {
          *(ushort *)(plVar33 + 2) = uVar18;
          *(ushort *)((long)plVar33 + 0x12) = uVar18;
        }
        else {
          if (0xf < *(ulong *)(lVar26 + 0x80)) goto LAB_01339620;
          *(long *)(lVar26 + *(ulong *)(lVar26 + 0x80) * 8) = lVar50;
          *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + 1;
          *(ushort *)(plVar33 + 2) = uVar18;
          *(ushort *)((long)plVar33 + 0x12) = uVar18;
          *(long *)(lVar26 + 0x80) = *(long *)(lVar26 + 0x80) + -1;
        }
        *plVar33 = 0;
        plVar33[1] = uVar54;
        if ((uVar57 == 0) || (*(float *)(plVar61 + 0xc) * (float)uVar57 < (float)(plVar61[0xb] + 1))
           ) {
          uVar52 = (ulong)(uVar57 < 3 || (uVar57 & uVar57 - 1) != 0) | uVar57 << 1;
          uVar57 = (ulong)((float)(plVar61[0xb] + 1) / *(float *)(plVar61 + 0xc));
          if (uVar57 <= uVar52) {
            uVar57 = uVar52;
          }
          if (uVar57 - 1 == 0) {
            uVar57 = 2;
          }
          else if ((uVar57 & uVar57 - 1) != 0) {
            uVar57 = std::__next_prime(uVar57);
          }
          uVar52 = plVar61[1];
          if (uVar52 < uVar57) {
            uVar66 = uVar57;
LAB_01336e00:
            FUN_0133aafc(plVar61,uVar66);
          }
          else if (uVar57 < uVar52) {
            uVar66 = (ulong)((float)(ulong)plVar61[0xb] / *(float *)(plVar61 + 0xc));
            if ((uVar52 < 3) ||
               (uVar58 = uVar52 - (uVar52 >> 1 & 0x5555555555555555),
               uVar58 = (uVar58 & 0x3333333333333333) + (uVar58 >> 2 & 0x3333333333333333),
               1 < (uVar58 + (uVar58 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar66 = std::__next_prime(uVar66);
            }
            else if (1 < uVar66) {
              uVar66 = 1L << (-LZCOUNT(uVar66 - 1) & 0x3fU);
            }
            if (uVar66 <= uVar57) {
              uVar66 = uVar57;
            }
            if (uVar66 < uVar52) goto LAB_01336e00;
          }
          uVar57 = plVar61[1];
          if ((uVar57 & uVar57 - 1) == 0) {
            uVar52 = (int)uVar57 - 1 & uVar54;
          }
          else if (uVar54 < uVar57) {
            uVar52 = uVar54;
          }
          else {
            uVar52 = 0;
            if (uVar57 != 0) {
              uVar52 = uVar54 / uVar57;
            }
            uVar52 = uVar54 - uVar52 * uVar57;
          }
        }
        plVar40 = *(long **)(*plVar61 + uVar52 * 8);
        if (plVar40 == (long *)0x0) {
          plVar40 = plVar61 + 6;
          *plVar33 = *plVar40;
          *plVar40 = (long)plVar33;
          *(long **)(*plVar61 + uVar52 * 8) = plVar40;
          if (*plVar33 != 0) {
            uVar52 = *(ulong *)(*plVar33 + 8);
            if ((uVar57 & uVar57 - 1) == 0) {
              uVar52 = uVar52 & uVar57 - 1;
            }
            else if (uVar57 <= uVar52) {
              uVar54 = 0;
              if (uVar57 != 0) {
                uVar54 = uVar52 / uVar57;
              }
              uVar52 = uVar52 - uVar54 * uVar57;
            }
            plVar40 = (long *)(*plVar61 + uVar52 * 8);
            goto LAB_01338f48;
          }
        }
        else {
          *plVar33 = *plVar40;
LAB_01338f48:
          *plVar40 = (long)plVar33;
        }
        plVar61[0xb] = plVar61[0xb] + 1;
      }
      else if ((uVar57 & uVar57 - 1) == 0) {
        uVar52 = (int)uVar57 - 1 & uVar54;
        plVar33 = *(long **)(*plVar61 + uVar52 * 8);
        if (plVar33 == (long *)0x0) goto LAB_01336d14;
        do {
          plVar33 = (long *)*plVar33;
          if ((plVar33 == (long *)0x0) ||
             (plVar33[1] != uVar54 && (plVar33[1] & uVar57 - 1) != uVar52)) goto LAB_01336d14;
        } while (*(ushort *)(plVar33 + 2) != uVar18);
      }
      else {
        uVar52 = uVar54;
        if (uVar57 <= uVar54) {
          uVar52 = 0;
          if (uVar57 != 0) {
            uVar52 = uVar54 / uVar57;
          }
          uVar52 = uVar54 - uVar52 * uVar57;
        }
        plVar33 = *(long **)(*plVar61 + uVar52 * 8);
        if (plVar33 == (long *)0x0) goto LAB_01336d14;
        do {
          plVar33 = (long *)*plVar33;
          if (plVar33 == (long *)0x0) goto LAB_01336d14;
          uVar66 = plVar33[1];
          if (uVar66 != uVar54) {
            if (uVar57 <= uVar66) {
              uVar58 = 0;
              if (uVar57 != 0) {
                uVar58 = uVar66 / uVar57;
              }
              uVar66 = uVar66 - uVar58 * uVar57;
            }
            if (uVar66 != uVar52) goto LAB_01336d14;
          }
        } while (*(ushort *)(plVar33 + 2) != uVar18);
      }
      iVar19 = *(int *)(lVar49 + 0x40);
      if (0 < iVar19) {
        if (uVar55 == *(ushort *)(*(long *)(lVar49 + 0x38) + 0x14)) {
          *(ushort *)(*(long *)(lVar49 + 0x38) + 0x14) = uVar18;
          iVar19 = *(int *)(lVar49 + 0x40);
        }
        if (1 < iVar19) {
          if (uVar55 == *(ushort *)(*(long *)(lVar49 + 0x38) + 0xc4)) {
            *(ushort *)(*(long *)(lVar49 + 0x38) + 0xc4) = uVar18;
            iVar19 = *(int *)(lVar49 + 0x40);
          }
          if (2 < iVar19) {
            if (uVar55 == *(ushort *)(*(long *)(lVar49 + 0x38) + 0x174)) {
              *(ushort *)(*(long *)(lVar49 + 0x38) + 0x174) = uVar18;
              iVar19 = *(int *)(lVar49 + 0x40);
            }
            if (3 < iVar19) {
              if (uVar55 == *(ushort *)(*(long *)(lVar49 + 0x38) + 0x224)) {
                *(ushort *)(*(long *)(lVar49 + 0x38) + 0x224) = uVar18;
                iVar19 = *(int *)(lVar49 + 0x40);
              }
              if (4 < iVar19) {
                if (uVar55 == *(ushort *)(*(long *)(lVar49 + 0x38) + 0x2d4)) {
                  *(ushort *)(*(long *)(lVar49 + 0x38) + 0x2d4) = uVar18;
                  iVar19 = *(int *)(lVar49 + 0x40);
                }
                if (5 < iVar19) {
                  if (uVar55 == *(ushort *)(*(long *)(lVar49 + 0x38) + 900)) {
                    *(ushort *)(*(long *)(lVar49 + 0x38) + 900) = uVar18;
                    iVar19 = *(int *)(lVar49 + 0x40);
                  }
                  if (6 < iVar19) {
                    lVar26 = 0x434;
                    lVar50 = 6;
                    do {
                      if (uVar55 == *(ushort *)(*(long *)(lVar49 + 0x38) + lVar26)) {
                        *(ushort *)(*(long *)(lVar49 + 0x38) + lVar26) = uVar18;
                        iVar19 = *(int *)(lVar49 + 0x40);
                      }
                      lVar50 = lVar50 + 1;
                      lVar26 = lVar26 + 0xb0;
                    } while (lVar50 < iVar19);
                  }
                }
              }
            }
          }
        }
      }
      plVar61 = (long *)CONCAT44(uStack_154,CONCAT13(uStack_155,CONCAT12(uStack_156,local_158)));
      if ((plVar61 != (long *)0x0) && (plVar61[1] != 0)) {
        plVar33 = plVar61 + 2;
        do {
          lVar50 = *plVar33;
          cVar12 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar16) {
            *plVar33 = lVar50 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (lVar50 + -1 == 0) {
          (**(code **)(*plVar61 + 0x18))();
        }
      }
      if (((ulong)local_160 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,(undefined1 *)((long)local_160 + -1),0);
      }
      uVar55 = uVar55 + 1;
    } while ((long)uVar55 < (long)(int)plVar21[0xd]);
  }
  lVar50 = plVar22[8];
  if ((int)plVar22[0xc] < 6) {
    if (plVar22[1] != 0) {
      do {
        lVar50 = *plVar28;
        cVar12 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar16) {
          *plVar28 = lVar50 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar50 + -1 == 0) {
        (**(code **)(*plVar22 + 0x18))(plVar22);
      }
    }
LAB_01338964:
    if (plVar21[1] != 0) {
      plVar22 = plVar21 + 2;
      do {
        lVar50 = *plVar22;
        cVar12 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar16) {
          *plVar22 = lVar50 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar50 + -1 == 0) {
        (**(code **)(*plVar21 + 0x18))(plVar21);
      }
    }
  }
  else {
    uVar51 = 5;
    do {
      memcpy(&local_160,(void *)(lVar50 + uVar51 * 0x70),0x70);
      local_160 = (long *)CONCAT44(local_160._4_4_,1);
      uVar18 = (**(code **)(**(long **)(param_3 + 0x18) + 0x90))
                         (*(long **)(param_3 + 0x18),&local_160);
      plVar61 = *(long **)(param_3 + 0x40);
      uVar54 = (ulong)uVar18;
      uVar52 = plVar61[1];
      uVar55 = param_3;
      if (uVar52 == 0) {
LAB_01337018:
        plVar33 = (long *)(**(code **)(*(long *)plVar61[7] + 0x10))((long *)plVar61[7],0x18,2);
        if (plVar33 == (long *)0x0) {
          (**(code **)(*(long *)plVar61[7] + 0xe8))();
        }
        lVar26 = plVar61[7];
        if (((DAT_04865a38 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_04865a38), iVar19 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar27 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar27 == 0) {
          *(ushort *)(plVar33 + 2) = uVar18;
          *(ushort *)((long)plVar33 + 0x12) = uVar18;
        }
        else {
          if (0xf < *(ulong *)(lVar27 + 0x80)) goto LAB_01339620;
          *(long *)(lVar27 + *(ulong *)(lVar27 + 0x80) * 8) = lVar26;
          *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + 1;
          *(ushort *)(plVar33 + 2) = uVar18;
          *(ushort *)((long)plVar33 + 0x12) = uVar18;
          *(long *)(lVar27 + 0x80) = *(long *)(lVar27 + 0x80) + -1;
        }
        *plVar33 = 0;
        plVar33[1] = uVar54;
        if ((uVar52 == 0) || (*(float *)(plVar61 + 0xc) * (float)uVar52 < (float)(plVar61[0xb] + 1))
           ) {
          uVar55 = (ulong)(uVar52 < 3 || (uVar52 & uVar52 - 1) != 0) | uVar52 << 1;
          uVar52 = (ulong)((float)(plVar61[0xb] + 1) / *(float *)(plVar61 + 0xc));
          if (uVar52 <= uVar55) {
            uVar52 = uVar55;
          }
          if (uVar52 - 1 == 0) {
            uVar52 = 2;
          }
          else if ((uVar52 & uVar52 - 1) != 0) {
            uVar52 = std::__next_prime(uVar52);
          }
          uVar55 = plVar61[1];
          if (uVar55 < uVar52) {
            uVar57 = uVar52;
LAB_01337100:
            FUN_0133a7d0(plVar61,uVar57);
          }
          else if (uVar52 < uVar55) {
            uVar57 = (ulong)((float)(ulong)plVar61[0xb] / *(float *)(plVar61 + 0xc));
            if ((uVar55 < 3) ||
               (uVar66 = uVar55 - (uVar55 >> 1 & 0x5555555555555555),
               uVar66 = (uVar66 & 0x3333333333333333) + (uVar66 >> 2 & 0x3333333333333333),
               1 < (uVar66 + (uVar66 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar57 = std::__next_prime(uVar57);
            }
            else if (1 < uVar57) {
              uVar57 = 1L << (-LZCOUNT(uVar57 - 1) & 0x3fU);
            }
            if (uVar57 <= uVar52) {
              uVar57 = uVar52;
            }
            if (uVar57 < uVar55) goto LAB_01337100;
          }
          uVar52 = plVar61[1];
          if ((uVar52 & uVar52 - 1) == 0) {
            uVar55 = (int)uVar52 - 1 & uVar54;
          }
          else if (uVar54 < uVar52) {
            uVar55 = uVar54;
          }
          else {
            uVar55 = 0;
            if (uVar52 != 0) {
              uVar55 = uVar54 / uVar52;
            }
            uVar55 = uVar54 - uVar55 * uVar52;
          }
        }
        plVar40 = *(long **)(*plVar61 + uVar55 * 8);
        if (plVar40 == (long *)0x0) {
          plVar40 = plVar61 + 6;
          *plVar33 = *plVar40;
          *plVar40 = (long)plVar33;
          *(long **)(*plVar61 + uVar55 * 8) = plVar40;
          if (*plVar33 != 0) {
            uVar55 = *(ulong *)(*plVar33 + 8);
            if ((uVar52 & uVar52 - 1) == 0) {
              uVar55 = uVar55 & uVar52 - 1;
            }
            else if (uVar52 <= uVar55) {
              uVar54 = 0;
              if (uVar52 != 0) {
                uVar54 = uVar55 / uVar52;
              }
              uVar55 = uVar55 - uVar54 * uVar52;
            }
            plVar40 = (long *)(*plVar61 + uVar55 * 8);
            goto LAB_0133725c;
          }
        }
        else {
          *plVar33 = *plVar40;
LAB_0133725c:
          *plVar40 = (long)plVar33;
        }
        plVar61[0xb] = plVar61[0xb] + 1;
      }
      else if ((uVar52 & uVar52 - 1) == 0) {
        uVar55 = (int)uVar52 - 1 & uVar54;
        plVar33 = *(long **)(*plVar61 + uVar55 * 8);
        if (plVar33 == (long *)0x0) goto LAB_01337018;
        do {
          plVar33 = (long *)*plVar33;
          if ((plVar33 == (long *)0x0) ||
             (plVar33[1] != uVar54 && (plVar33[1] & uVar52 - 1) != uVar55)) goto LAB_01337018;
        } while (*(ushort *)(plVar33 + 2) != uVar18);
      }
      else {
        uVar55 = uVar54;
        if (uVar52 <= uVar54) {
          uVar55 = 0;
          if (uVar52 != 0) {
            uVar55 = uVar54 / uVar52;
          }
          uVar55 = uVar54 - uVar55 * uVar52;
        }
        plVar33 = *(long **)(*plVar61 + uVar55 * 8);
        if (plVar33 == (long *)0x0) goto LAB_01337018;
        do {
          plVar33 = (long *)*plVar33;
          if (plVar33 == (long *)0x0) goto LAB_01337018;
          uVar57 = plVar33[1];
          if (uVar57 != uVar54) {
            if (uVar52 <= uVar57) {
              uVar66 = 0;
              if (uVar52 != 0) {
                uVar66 = uVar57 / uVar52;
              }
              uVar57 = uVar57 - uVar66 * uVar52;
            }
            if (uVar57 != uVar55) goto LAB_01337018;
          }
        } while (*(ushort *)(plVar33 + 2) != uVar18);
      }
      iVar19 = *(int *)(lVar49 + 0x40);
      if (0 < iVar19) {
        if (uVar51 == *(ushort *)(*(long *)(lVar49 + 0x38) + 0x88)) {
          *(ushort *)(*(long *)(lVar49 + 0x38) + 0x88) = uVar18;
          iVar19 = *(int *)(lVar49 + 0x40);
        }
        if (1 < iVar19) {
          if (uVar51 == *(ushort *)(*(long *)(lVar49 + 0x38) + 0x138)) {
            *(ushort *)(*(long *)(lVar49 + 0x38) + 0x138) = uVar18;
            iVar19 = *(int *)(lVar49 + 0x40);
          }
          if (2 < iVar19) {
            if (uVar51 == *(ushort *)(*(long *)(lVar49 + 0x38) + 0x1e8)) {
              *(ushort *)(*(long *)(lVar49 + 0x38) + 0x1e8) = uVar18;
              iVar19 = *(int *)(lVar49 + 0x40);
            }
            if (3 < iVar19) {
              if (uVar51 == *(ushort *)(*(long *)(lVar49 + 0x38) + 0x298)) {
                *(ushort *)(*(long *)(lVar49 + 0x38) + 0x298) = uVar18;
                iVar19 = *(int *)(lVar49 + 0x40);
              }
              if (4 < iVar19) {
                if (uVar51 == *(ushort *)(*(long *)(lVar49 + 0x38) + 0x348)) {
                  *(ushort *)(*(long *)(lVar49 + 0x38) + 0x348) = uVar18;
                  iVar19 = *(int *)(lVar49 + 0x40);
                }
                if (5 < iVar19) {
                  if (uVar51 == *(ushort *)(*(long *)(lVar49 + 0x38) + 0x3f8)) {
                    *(ushort *)(*(long *)(lVar49 + 0x38) + 0x3f8) = uVar18;
                    iVar19 = *(int *)(lVar49 + 0x40);
                  }
                  if (6 < iVar19) {
                    lVar27 = 0x4a8;
                    lVar26 = 6;
                    do {
                      if (uVar51 == *(ushort *)(*(long *)(lVar49 + 0x38) + lVar27)) {
                        *(ushort *)(*(long *)(lVar49 + 0x38) + lVar27) = uVar18;
                        iVar19 = *(int *)(lVar49 + 0x40);
                      }
                      lVar26 = lVar26 + 1;
                      lVar27 = lVar27 + 0xb0;
                    } while (lVar26 < iVar19);
                  }
                }
              }
            }
          }
        }
      }
      uVar51 = uVar51 + 1;
    } while ((long)uVar51 < (long)(int)plVar22[0xc]);
    if (plVar22[1] != 0) {
      do {
        lVar50 = *plVar28;
        cVar12 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar16) {
          *plVar28 = lVar50 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar50 + -1 == 0) {
        (**(code **)(*plVar22 + 0x18))(plVar22);
      }
    }
    if (plVar21 != (long *)0x0) goto LAB_01338964;
  }
  uVar51 = _UNK_03caa988;
  puVar9 = _DAT_03caa980;
  if (0 < *(int *)(lVar49 + 0x40)) {
    lVar50 = 0;
    do {
      lVar26 = *(long *)(lVar49 + 0x38);
      local_160 = *(long **)(lVar26 + lVar50 * 0xb0);
      if ((local_160 != (long *)0x0) && (local_160[1] != 0)) {
        plVar21 = local_160 + 2;
        do {
          cVar12 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar16) {
            *plVar21 = *plVar21 + 1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
      }
      lVar27 = lVar26 + lVar50 * 0xb0;
      uVar41 = *(undefined8 *)(lVar27 + 8);
      *(undefined8 *)((long)((ulong)&local_160 | 8) + 7) = *(undefined8 *)(lVar27 + 0xf);
      *(undefined8 *)((ulong)&local_160 | 8) = uVar41;
      local_148 = 0;
      uStack_144 = 0;
      pcVar65 = (char *)(*(ulong *)(lVar27 + 0x18) & 0xfffffffffffffffe);
      if (pcVar65 != (char *)0x0) {
        sVar24 = strlen(pcVar65);
        sVar24 = (size_t)((int)sVar24 + 1);
        pvVar25 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar24);
        memcpy(pvVar25,pcVar65,sVar24);
        local_148 = (uint)pvVar25 | 1;
        uStack_144 = (undefined4)((ulong)pvVar25 >> 0x20);
      }
      lVar27 = lVar26 + lVar50 * 0xb0;
      memcpy(&local_140,(void *)(lVar27 + 0x20),0x54);
      local_e8 = *(long *)(lVar27 + 0x78);
      if ((local_e8 != 0) && (*(long *)(local_e8 + 8) != 0)) {
        plVar21 = (long *)(local_e8 + 0x10);
        do {
          cVar12 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar16) {
            *plVar21 = *plVar21 + 1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
      }
      local_e0 = *(long *)(lVar26 + lVar50 * 0xb0 + 0x80);
      if ((local_e0 != 0) && (*(long *)(local_e0 + 8) != 0)) {
        plVar21 = (long *)(local_e0 + 0x10);
        do {
          cVar12 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar16) {
            *plVar21 = *plVar21 + 1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
      }
      lVar27 = lVar26 + lVar50 * 0xb0;
      uStack_d0 = *(undefined8 *)(lVar27 + 0x90);
      local_d8 = (undefined2)*(undefined8 *)(lVar27 + 0x88);
      local_c8 = *(long *)(lVar27 + 0x98);
      if ((local_c8 != 0) && (*(long *)(local_c8 + 8) != 0)) {
        plVar21 = (long *)(local_c8 + 0x10);
        do {
          cVar12 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar16) {
            *plVar21 = *plVar21 + 1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
      }
      lVar26 = lVar26 + lVar50 * 0xb0;
      local_c0 = *(undefined1 *)(lVar26 + 0xa0);
      local_bc = *(undefined8 *)(lVar26 + 0xa4);
      if (cVar11 == '\0') {
        if (*(char *)(param_3 + 0x174) != '\0') goto LAB_01338b3c;
      }
      else if (*(char *)(param_3 + 0x174) == '\0') {
        local_150 = (local_150 & 0x7fff8000) << 1 |
                    local_150 & 0x1f | (local_150 >> 5 & 0x1f) << 6 |
                    (local_150 >> 10 & 0x1f) << 0xb | 0x20;
      }
      else {
LAB_01338b3c:
        local_150 = local_150 & 0x1f;
      }
      pcVar65 = (char *)(CONCAT44(uStack_144,local_148) & 0xfffffffffffffffe);
      if (pcVar65 == (char *)0x0) {
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar19 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        plVar21 = *(long **)(PTR_DAT_047d3e30 + 0x18);
        pcVar65 = *(char **)(PTR_DAT_047d3e30 + 8);
        uVar55 = *(ulong *)(PTR_DAT_047d3e30 + 0x10);
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x18))(plVar21);
        }
      }
      else {
        uVar55 = strlen(pcVar65);
        if (*pcVar65 != '\0') {
          lVar26 = 1;
          do {
            pcVar39 = pcVar65 + lVar26;
            lVar26 = lVar26 + 1;
          } while (*pcVar39 != '\0');
        }
        plVar21 = (long *)0x0;
      }
      plVar22 = local_160;
      uVar52 = uVar55;
      if (3 < uVar55) {
        uVar52 = 4;
      }
      uVar54 = uVar55 - uVar52;
      puVar34 = &DAT_cbf29ce484222645;
      if (uVar54 != 0) {
        pbVar35 = (byte *)(pcVar65 + uVar52);
        uVar57 = uVar54 & 3;
        if (uVar55 + ~uVar52 < 3) {
          puVar34 = &DAT_cbf29ce484222645;
        }
        else {
          lVar26 = -(uVar54 & 0xfffffffffffffffc);
          puVar34 = &DAT_cbf29ce484222645;
          do {
            bVar10 = *pbVar35;
            pbVar1 = pbVar35 + 1;
            pbVar2 = pbVar35 + 2;
            pbVar3 = pbVar35 + 3;
            pbVar35 = pbVar35 + 4;
            puVar34 = (undefined1 *)
                      ((((((ulong)puVar34 ^ (ulong)bVar10) * 0x100000001b3 ^ (ulong)*pbVar1) *
                         0x100000001b3 ^ (ulong)*pbVar2) * 0x100000001b3 ^ (ulong)*pbVar3) *
                      0x100000001b3);
            lVar26 = lVar26 + 4;
          } while (lVar26 != 0);
        }
        for (; uVar57 != 0; uVar57 = uVar57 - 1) {
          puVar34 = (undefined1 *)(((ulong)puVar34 ^ (ulong)*pbVar35) * 0x100000001b3);
          pbVar35 = pbVar35 + 1;
        }
      }
      plVar28 = (long *)plVar32[6];
LAB_013375c8:
      if (plVar28 != (long *)plVar32[7]) {
        puVar44 = *(undefined1 **)(*plVar28 + 0x40);
        if (puVar44 != (undefined1 *)0x0) {
          uVar55 = (long)puVar44 - ((ulong)puVar44 >> 1 & 0x5555555555555555);
          uVar55 = (uVar55 & 0x3333333333333333) + (uVar55 >> 2 & 0x3333333333333333);
          uVar55 = (uVar55 + (uVar55 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar55 < 2) {
            puVar47 = (undefined1 *)((ulong)(puVar44 + -1) & (ulong)puVar34);
          }
          else {
            puVar47 = puVar34;
            if (puVar44 <= puVar34) {
              uVar52 = 0;
              if (puVar44 != (undefined1 *)0x0) {
                uVar52 = (ulong)puVar34 / (ulong)puVar44;
              }
              puVar47 = puVar34 + -(uVar52 * (long)puVar44);
            }
          }
          plVar61 = *(long **)(*(long *)(*plVar28 + 0x38) + (long)puVar47 * 8);
          if ((plVar61 != (long *)0x0) && (plVar61 = (long *)*plVar61, plVar61 != (long *)0x0)) {
            if (uVar55 < 2) {
              do {
                if ((undefined1 *)plVar61[1] == puVar34) {
                  if ((undefined1 *)plVar61[2] == puVar34) goto LAB_013376c4;
                }
                else if ((undefined1 *)((ulong)plVar61[1] & (ulong)(puVar44 + -1)) != puVar47)
                break;
                plVar61 = (long *)*plVar61;
              } while (plVar61 != (long *)0x0);
            }
            else {
              do {
                puVar48 = (undefined1 *)plVar61[1];
                if (puVar48 == puVar34) {
                  if ((undefined1 *)plVar61[2] == puVar34) goto LAB_013376c4;
                }
                else {
                  if (puVar44 <= puVar48) {
                    uVar55 = 0;
                    if (puVar44 != (undefined1 *)0x0) {
                      uVar55 = (ulong)puVar48 / (ulong)puVar44;
                    }
                    puVar48 = puVar48 + -(uVar55 * (long)puVar44);
                  }
                  if (puVar48 != puVar47) break;
                }
                plVar61 = (long *)*plVar61;
              } while (plVar61 != (long *)0x0);
            }
          }
        }
        goto LAB_013376cc;
      }
      sVar31 = -1;
LAB_013376d8:
      uVar41 = *(undefined8 *)(*(long *)(param_3 + 8) + 0x368);
      local_240 = (ulong *)0xffffffffffffffff;
      *(undefined8 *)((ulong)&local_240 | 8) = 0;
      ((undefined8 *)((ulong)&local_240 | 8))[1] = 0;
      puVar13 = PTR_DAT_047d1a08;
      uStack_218 = uVar51;
      local_220 = puVar9;
      local_140 = CONCAT44(0xffffffff,CONCAT22((short)uVar41,sVar31));
      local_210 = 0xffffffff;
      if ((local_160 == (long *)0x0) || ((*(ushort *)((long)local_160 + 0x1a) & 1) == 0)) {
        local_190 = *(ulong **)PTR_DAT_047ddaf0;
        uStack_188 = *(ulong *)(PTR_DAT_047ddaf0 + 8);
        local_180 = *(ulong *)(PTR_DAT_047ddaf0 + 0x10);
        local_178 = *(undefined8 *)(PTR_DAT_047ddaf0 + 0x18);
        uVar55 = FUN_00cb0cc0(local_160,&local_230,&local_190);
        plVar22 = local_160;
        if (((uVar55 & 1) != 0) && (local_160 != local_230)) {
          if ((local_230 != (long *)0x0) && (local_230[1] != 0)) {
            plVar22 = local_230 + 2;
            do {
              cVar12 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar16) {
                *plVar22 = *plVar22 + 1;
                cVar12 = ExclusiveMonitorsStatus();
              }
            } while (cVar12 != '\0');
          }
          plVar22 = local_230;
          if ((local_160 != (long *)0x0) && (plVar22 = local_230, local_160[1] != 0)) {
            plVar22 = local_160 + 2;
            do {
              lVar26 = *plVar22 + -1;
              cVar12 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar16) {
                *plVar22 = lVar26;
                cVar12 = ExclusiveMonitorsStatus();
              }
              plVar28 = local_160;
              plVar61 = local_230;
            } while (cVar12 != '\0');
            goto LAB_0133782c;
          }
        }
      }
      else {
        local_a8 = (undefined8 *)&DAT_00000080;
        uStack_188 = uVar51;
        local_190 = puVar9;
        plVar28 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_a8,0);
        if (*(code **)(puVar13 + 0x10) != (code *)0x0) {
          (**(code **)(puVar13 + 0x10))(plVar28,"hknpScaledConvexShape");
        }
        FUN_00cb10b4(plVar28,plVar22,&local_190,1,1);
        if ((local_238 != (long *)0x0) && (local_238[1] != 0)) {
          plVar22 = local_238 + 2;
          do {
            lVar26 = *plVar22;
            cVar12 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar16) {
              *plVar22 = lVar26 + -1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          if (lVar26 + -1 == 0) {
            lVar26 = *local_238;
            local_238 = plVar28;
            (**(code **)(lVar26 + 0x18))();
            plVar28 = local_238;
          }
        }
        local_238 = plVar28;
        plVar22 = local_160;
        if (local_160 != local_238) {
          if ((local_238 != (long *)0x0) && (local_238[1] != 0)) {
            plVar22 = local_238 + 2;
            do {
              cVar12 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar16) {
                *plVar22 = *plVar22 + 1;
                cVar12 = ExclusiveMonitorsStatus();
              }
            } while (cVar12 != '\0');
          }
          plVar22 = local_238;
          if ((local_160 != (long *)0x0) && (plVar22 = local_238, local_160[1] != 0)) {
            plVar22 = local_160 + 2;
            do {
              lVar26 = *plVar22 + -1;
              cVar12 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar16) {
                *plVar22 = lVar26;
                cVar12 = ExclusiveMonitorsStatus();
              }
              plVar28 = local_160;
              plVar61 = local_238;
            } while (cVar12 != '\0');
LAB_0133782c:
            local_160 = plVar61;
            plVar22 = local_160;
            if (lVar26 == 0) {
              (**(code **)(*plVar28 + 0x18))();
              plVar22 = local_160;
            }
          }
        }
      }
      local_160 = plVar22;
      if (local_138 == '\x01') {
        local_d8 = 3;
      }
      local_240 = (ulong *)(**(code **)(**(long **)(param_3 + 0x18) + 0xc0))
                                     (*(long **)(param_3 + 0x18),&local_160,0xffffffffffffffff);
      *(int *)(*(long *)(lVar49 + 0x38) + lVar50 * 0xb0 + 0x8c) = (int)local_240;
      lVar26 = 0x80;
      if (local_138 != '\x02') {
        lVar26 = 0x60;
      }
      FUN_01339908(*(undefined8 *)(param_3 + lVar26),&local_240);
      (**(code **)(**(long **)(param_3 + 0x18) + 200))(*(long **)(param_3 + 0x18),local_240,1,0);
      if ((local_230 != (long *)0x0) && (local_230[1] != 0)) {
        plVar22 = local_230 + 2;
        do {
          lVar26 = *plVar22;
          cVar12 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar16) {
            *plVar22 = lVar26 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (lVar26 + -1 == 0) {
          (**(code **)(*local_230 + 0x18))();
        }
      }
      if ((local_238 != (long *)0x0) && (local_238[1] != 0)) {
        plVar22 = local_238 + 2;
        do {
          lVar26 = *plVar22;
          cVar12 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar16) {
            *plVar22 = lVar26 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (lVar26 + -1 == 0) {
          (**(code **)(*local_238 + 0x18))();
        }
      }
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x20))(plVar21);
      }
      FUN_00cb081c(&local_160);
      lVar50 = lVar50 + 1;
    } while (lVar50 < *(int *)(lVar49 + 0x40));
  }
  puVar13 = PTR_DAT_047d3e30;
  puVar45 = (ulong *)(*(long **)(param_3 + 0x80))[1];
  plVar21 = (long *)PTR_DAT_047d3910;
  for (puVar9 = (ulong *)**(long **)(param_3 + 0x80); PTR_DAT_047d3910 = (undefined *)plVar21,
      puVar9 != puVar45; puVar9 = puVar9 + 8) {
    lVar50 = *(long *)(*(long *)(param_3 + 0x18) + 0x38) + (*puVar9 & 0xffffff) * 0xc0;
    if ((*(short *)(lVar50 + 0x98) != -1) &&
       (uVar20 = FUN_00c9edd0(plVar32), (~uVar20 & 0xffff) != 0)) {
      FUN_00e1561c(&local_160,plVar32,uVar20);
      if (*(int *)(lVar49 + 0x40) != 0) {
        lVar26 = *(long *)(lVar49 + 0x38);
        lVar27 = lVar26 + (long)*(int *)(lVar49 + 0x40) * 0xb0;
        do {
          pcVar65 = (char *)(*(ulong *)(lVar26 + 0x18) & 0xfffffffffffffffe);
          if (pcVar65 == (char *)0x0) {
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar19 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,puVar13,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            pcVar65 = *(char **)(puVar13 + 8);
            uVar51 = *(ulong *)(puVar13 + 0x10);
            plVar21 = *(long **)(puVar13 + 0x18);
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x18))(plVar21);
            }
          }
          else {
            uVar51 = strlen(pcVar65);
            cVar11 = *pcVar65;
            pcVar39 = pcVar65;
            while (cVar11 != '\0') {
              pcVar39 = pcVar39 + 1;
              cVar11 = *pcVar39;
            }
            plVar21 = (long *)0x0;
          }
          uVar55 = uVar51;
          if (3 < uVar51) {
            uVar55 = 4;
          }
          plVar22 = (long *)&DAT_cbf29ce484222645;
          uVar52 = uVar51 - uVar55;
          if (uVar52 != 0) {
            pbVar35 = (byte *)(pcVar65 + uVar55);
            uVar54 = uVar52 & 3;
            if (uVar51 + ~uVar55 < 3) {
              plVar22 = (long *)&DAT_cbf29ce484222645;
            }
            else {
              lVar53 = -(uVar52 & 0xfffffffffffffffc);
              plVar22 = (long *)&DAT_cbf29ce484222645;
              do {
                bVar10 = *pbVar35;
                pbVar1 = pbVar35 + 1;
                pbVar2 = pbVar35 + 2;
                pbVar3 = pbVar35 + 3;
                pbVar35 = pbVar35 + 4;
                plVar22 = (long *)((((((ulong)plVar22 ^ (ulong)bVar10) * 0x100000001b3 ^
                                     (ulong)*pbVar1) * 0x100000001b3 ^ (ulong)*pbVar2) *
                                    0x100000001b3 ^ (ulong)*pbVar3) * 0x100000001b3);
                lVar53 = lVar53 + 4;
              } while (lVar53 != 0);
            }
            for (; uVar54 != 0; uVar54 = uVar54 - 1) {
              plVar22 = (long *)(((ulong)plVar22 ^ (ulong)*pbVar35) * 0x100000001b3);
              pbVar35 = pbVar35 + 1;
            }
          }
          bVar16 = plVar22 == local_160;
          if (bVar16) {
            *(undefined4 *)(lVar50 + 0x9c) = *(undefined4 *)(lVar26 + 0x8c);
          }
          if (plVar21 != (long *)0x0) {
            (**(code **)(*plVar21 + 0x20))(plVar21);
          }
          lVar26 = lVar26 + 0xb0;
        } while (lVar26 != lVar27 && !bVar16);
      }
      if ((long *)CONCAT44(uStack_144,local_148) != (long *)0x0) {
        (**(code **)(*(long *)CONCAT44(uStack_144,local_148) + 0x20))();
      }
    }
    plVar21 = (long *)PTR_DAT_047d3910;
  }
  if (*(char *)(param_3 + 0x174) != '\0') {
    puVar45 = (ulong *)(*(long **)(param_3 + 0x80))[1];
    for (puVar9 = (ulong *)**(long **)(param_3 + 0x80); puVar9 != puVar45; puVar9 = puVar9 + 8) {
      if (((*PTR_DAT_047d8c00 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar19 != 0)) {
        FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c00);
      }
      lVar50 = *(long *)PTR_DAT_047d8c08;
      *(long *)PTR_DAT_047d8c10 = lVar50;
      uVar41 = *(undefined8 *)(lVar50 + 0x70);
      uVar67 = *(undefined8 *)
                (*(long *)(*(long *)(param_3 + 0x18) + 0x38) + (*puVar9 & 0xffffff) * 0xc0 + 0x98);
      local_240 = (ulong *)0x0;
      local_238 = (long *)0x0;
      plVar28 = *(long **)(param_3 + 8);
      (**(code **)(*plVar28 + 0x18))(&local_160,plVar28);
      local_190 = (ulong *)0x0;
      uStack_188 = 0;
      plVar22 = (long *)0x0;
      if (plVar28 != (long *)0x0) {
        plVar22 = plVar28 + 5;
      }
      if ((long *)local_160[2] == plVar22) {
        FUN_00c9ea00(&local_190,&local_160);
      }
      plVar22 = local_160;
      if (local_160 != (long *)0x0) {
        plVar28 = local_160 + 3;
        do {
          sVar31 = (short)*plVar28;
          cVar11 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar16) {
            *(short *)plVar28 = sVar31 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar31 == 1) {
          piVar6 = (int *)((long)local_160 + 0x1c);
          do {
            iVar19 = *piVar6;
            cVar11 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar16) {
              *piVar6 = -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar19 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar19 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,plVar21,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar50 = *plVar21;
            *(long *)PTR_DAT_047d3918 = lVar50;
            local_a8 = (undefined8 *)*plVar22;
            FUN_00c44438(lVar50 + 0x8040,&local_a8);
          }
        }
        else if (sVar31 == 0) goto LAB_0133974c;
      }
      FUN_00d0a34c(&local_240,&local_190);
      puVar14 = local_190;
      if (local_190 != (ulong *)0x0) {
        puVar5 = local_190 + 3;
        do {
          sVar31 = (short)*puVar5;
          cVar11 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar16) {
            *(short *)puVar5 = sVar31 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar31 == 1) {
          piVar6 = (int *)((long)local_190 + 0x1c);
          do {
            iVar19 = *piVar6;
            cVar11 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar16) {
              *piVar6 = -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar19 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar19 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,plVar21,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar50 = *plVar21;
            *(long *)PTR_DAT_047d3918 = lVar50;
            local_160 = (long *)*puVar14;
            FUN_00c44438(lVar50 + 0x8040,&local_160);
          }
        }
        else if (sVar31 == 0) goto LAB_0133974c;
      }
      FUN_0133bb3c(uVar41,uVar67,&local_240);
      puVar14 = local_240;
      if (local_240 != (ulong *)0x0) {
        puVar5 = local_240 + 3;
        do {
          sVar31 = (short)*puVar5;
          cVar11 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar16) {
            *(short *)puVar5 = sVar31 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (sVar31 == 1) {
          piVar6 = (int *)((long)local_240 + 0x1c);
          do {
            iVar19 = *piVar6;
            cVar11 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar6,0x10);
            if (bVar16) {
              *piVar6 = -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar19 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar19 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,plVar21,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar50 = *plVar21;
            *(long *)PTR_DAT_047d3918 = lVar50;
            local_160 = (long *)*puVar14;
            FUN_00c44438(lVar50 + 0x8040,&local_160);
          }
        }
        else if (sVar31 == 0) {
LAB_0133974c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
  }
  lVar50 = **(long **)(param_3 + 0xc0);
  lVar26 = (*(long **)(param_3 + 0xc0))[1];
  if (param_5 < 1) {
    local_288 = 0x7fffffff;
  }
  else {
    local_158 = 0;
    uStack_156 = 0;
    uStack_154 = 0x3089705f;
    local_150 = 0x3f000000;
    uStack_14c = 0x3f000000;
    local_148 = 0x7fffffff;
    local_140 = 0;
    local_160 = (long *)(CONCAT44((int)((ulong)local_160 >> 0x20),param_5) & 0xffffff00ffffffff);
    local_288 = (**(code **)(**(long **)(param_3 + 0x18) + 800))
                          (*(long **)(param_3 + 0x18),&local_160);
  }
  uVar67 = _UNK_03cabe58;
  uVar41 = _DAT_03cabe50;
  if (0 < *(int *)(lVar49 + 0x50)) {
    lVar27 = 0;
    do {
      lVar53 = *(long *)(lVar49 + 0x48);
      local_190 = *(ulong **)(lVar53 + lVar27 * 0x30);
      if ((local_190 != (ulong *)0x0) && (local_190[1] != 0)) {
        puVar9 = local_190 + 2;
        do {
          cVar11 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(puVar9,0x10);
          if (bVar16) {
            *puVar9 = *puVar9 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      lVar36 = lVar53 + lVar27 * 0x30;
      uStack_188 = *(undefined8 *)(lVar36 + 8);
      local_180 = *(undefined8 *)(lVar36 + 0x10);
      local_178 = CONCAT62(local_178._2_6_,*(undefined2 *)(lVar36 + 0x18));
      local_170 = 0;
      pcVar65 = (char *)(*(ulong *)(lVar36 + 0x20) & 0xfffffffffffffffe);
      if (pcVar65 != (char *)0x0) {
        sVar24 = strlen(pcVar65);
        sVar24 = (size_t)((int)sVar24 + 1);
        pvVar25 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar24);
        memcpy(pvVar25,pcVar65,sVar24);
        local_170 = (ulong)pvVar25 | 1;
      }
      lVar36 = (long)(int)uStack_188;
      local_168 = *(undefined8 *)(lVar53 + lVar27 * 0x30 + 0x28);
      lVar53 = *(long *)(lVar49 + 0x38);
      local_160 = *(long **)(lVar53 + lVar36 * 0xb0);
      if ((local_160 != (long *)0x0) && (local_160[1] != 0)) {
        plVar21 = local_160 + 2;
        do {
          cVar11 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar16) {
            *plVar21 = *plVar21 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      lVar37 = lVar53 + lVar36 * 0xb0;
      uVar42 = *(undefined8 *)(lVar37 + 8);
      *(undefined8 *)((long)((ulong)&local_160 | 8) + 7) = *(undefined8 *)(lVar37 + 0xf);
      *(undefined8 *)((ulong)&local_160 | 8) = uVar42;
      local_148 = 0;
      uStack_144 = 0;
      pcVar65 = (char *)(*(ulong *)(lVar37 + 0x18) & 0xfffffffffffffffe);
      if (pcVar65 != (char *)0x0) {
        sVar24 = strlen(pcVar65);
        sVar24 = (size_t)((int)sVar24 + 1);
        pvVar25 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar24);
        memcpy(pvVar25,pcVar65,sVar24);
        local_148 = (uint)pvVar25 | 1;
        uStack_144 = (undefined4)((ulong)pvVar25 >> 0x20);
      }
      lVar37 = lVar53 + lVar36 * 0xb0;
      memcpy(&local_140,(void *)(lVar37 + 0x20),0x54);
      local_e8 = *(long *)(lVar37 + 0x78);
      if ((local_e8 != 0) && (*(long *)(local_e8 + 8) != 0)) {
        plVar21 = (long *)(local_e8 + 0x10);
        do {
          cVar11 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar16) {
            *plVar21 = *plVar21 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      local_e0 = *(long *)(lVar53 + lVar36 * 0xb0 + 0x80);
      if ((local_e0 != 0) && (*(long *)(local_e0 + 8) != 0)) {
        plVar21 = (long *)(local_e0 + 0x10);
        do {
          cVar11 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar16) {
            *plVar21 = *plVar21 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      lVar37 = lVar53 + lVar36 * 0xb0;
      uStack_d0 = *(undefined8 *)(lVar37 + 0x90);
      local_d8 = (undefined2)*(undefined8 *)(lVar37 + 0x88);
      uStack_d4 = (uint)((ulong)*(undefined8 *)(lVar37 + 0x88) >> 0x20);
      local_c8 = *(long *)(lVar37 + 0x98);
      if ((local_c8 != 0) && (*(long *)(local_c8 + 8) != 0)) {
        plVar21 = (long *)(local_c8 + 0x10);
        do {
          cVar11 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar16) {
            *plVar21 = *plVar21 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      lVar53 = lVar53 + lVar36 * 0xb0;
      lVar36 = (long)(int)local_180;
      local_c0 = *(undefined1 *)(lVar53 + 0xa0);
      local_bc = *(undefined8 *)(lVar53 + 0xa4);
      lVar53 = *(long *)(lVar49 + 0x38);
      local_240 = *(ulong **)(lVar53 + lVar36 * 0xb0);
      if ((local_240 != (ulong *)0x0) && (local_240[1] != 0)) {
        puVar9 = local_240 + 2;
        do {
          cVar11 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(puVar9,0x10);
          if (bVar16) {
            *puVar9 = *puVar9 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      lVar37 = lVar53 + lVar36 * 0xb0;
      uVar42 = *(undefined8 *)(lVar37 + 8);
      *(undefined8 *)((long)((ulong)&local_240 | 8) + 7) = *(undefined8 *)(lVar37 + 0xf);
      *(undefined8 *)((ulong)&local_240 | 8) = uVar42;
      local_228 = 0;
      pcVar65 = (char *)(*(ulong *)(lVar37 + 0x18) & 0xfffffffffffffffe);
      if (pcVar65 != (char *)0x0) {
        sVar24 = strlen(pcVar65);
        sVar24 = (size_t)((int)sVar24 + 1);
        pvVar25 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar24);
        memcpy(pvVar25,pcVar65,sVar24);
        local_228 = (ulong)pvVar25 | 1;
      }
      lVar37 = lVar53 + lVar36 * 0xb0;
      memcpy(&local_220,(void *)(lVar37 + 0x20),0x54);
      local_1c8 = *(long *)(lVar37 + 0x78);
      if ((local_1c8 != 0) && (*(long *)(local_1c8 + 8) != 0)) {
        plVar21 = (long *)(local_1c8 + 0x10);
        do {
          cVar11 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar16) {
            *plVar21 = *plVar21 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      local_1c0 = *(long *)(lVar53 + lVar36 * 0xb0 + 0x80);
      if ((local_1c0 != 0) && (*(long *)(local_1c0 + 8) != 0)) {
        plVar21 = (long *)(local_1c0 + 0x10);
        do {
          cVar11 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar16) {
            *plVar21 = *plVar21 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      lVar37 = lVar53 + lVar36 * 0xb0;
      uVar51 = *(ulong *)(lVar37 + 0x88);
      uStack_1b0 = *(undefined8 *)(lVar37 + 0x90);
      local_1a8 = *(long *)(lVar37 + 0x98);
      if ((local_1a8 != 0) && (*(long *)(local_1a8 + 8) != 0)) {
        plVar21 = (long *)(local_1a8 + 0x10);
        do {
          cVar11 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar16) {
            *plVar21 = *plVar21 + 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
      }
      lVar53 = lVar53 + lVar36 * 0xb0;
      local_1a0 = *(undefined1 *)(lVar53 + 0xa0);
      local_19c = *(undefined8 *)(lVar53 + 0xa4);
      uStack_188 = (ulong)uStack_d4 | 0x8000000000000000;
      local_180 = uVar51 >> 0x20 | 0x8000000000000000;
      local_168 = CONCAT44(local_168._4_4_,local_288);
      uVar42 = (**(code **)(**(long **)(param_3 + 0x18) + 0x298))
                         (*(long **)(param_3 + 0x18),&local_190,0xffffffffffffffff);
      (**(code **)(**(long **)(param_3 + 0x18) + 0x2a8))(*(long **)(param_3 + 0x18),uVar42,0);
      plVar22 = *(long **)(param_3 + 0xa0);
      plVar21 = plVar22 + 3;
      puVar23 = (undefined8 *)plVar22[1];
      if (puVar23 < (undefined8 *)plVar22[2]) {
        lVar53 = *plVar21;
        if (((DAT_04865a38 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_04865a38), iVar19 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar36 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar36 == 0) {
          *puVar23 = uVar42;
        }
        else {
          if (0xf < *(ulong *)(lVar36 + 0x80)) goto LAB_01339620;
          *(long *)(lVar36 + *(ulong *)(lVar36 + 0x80) * 8) = lVar53;
          *(long *)(lVar36 + 0x80) = *(long *)(lVar36 + 0x80) + 1;
          *puVar23 = uVar42;
          *(long *)(lVar36 + 0x80) = *(long *)(lVar36 + 0x80) + -1;
        }
        plVar22[1] = (long)(puVar23 + 1);
      }
      else {
        uVar55 = plVar22[4];
        lVar53 = (long)puVar23 - *plVar22 >> 3;
        uVar51 = lVar53 + 1;
        if (0x7ffffffffffffffe < uVar55) {
          uVar55 = 0x7fffffffffffffff;
        }
        if (uVar55 < uVar51) goto LAB_0133962c;
        lVar36 = plVar22[2] - *plVar22;
        uVar52 = lVar36 >> 2;
        local_90 = (undefined8 *)0x0;
        if (uVar51 <= uVar52) {
          uVar51 = uVar52;
        }
        if (uVar55 >> 1 <= (ulong)(lVar36 >> 3)) {
          uVar51 = uVar55;
        }
        local_88 = plVar21;
        if (uVar51 == 0) {
          puVar23 = (undefined8 *)0x0;
        }
        else {
          puVar23 = (undefined8 *)
                    (**(code **)(*(long *)*plVar21 + 0x10))((long *)*plVar21,uVar51 << 3,8);
          if (puVar23 == (undefined8 *)0x0) {
            (**(code **)(*(long *)*plVar21 + 0xe8))();
          }
        }
        puVar43 = puVar23 + lVar53;
        local_90 = puVar23 + uVar51;
        lVar53 = *plVar21;
        local_a8 = puVar23;
        local_a0 = puVar43;
        local_98 = puVar43;
        if (((DAT_04865a38 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_04865a38), iVar19 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar36 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar36 == 0) {
          *puVar43 = uVar42;
        }
        else {
          if (0xf < *(ulong *)(lVar36 + 0x80)) {
LAB_01339620:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar36 + *(ulong *)(lVar36 + 0x80) * 8) = lVar53;
          *(long *)(lVar36 + 0x80) = *(long *)(lVar36 + 0x80) + 1;
          *puVar43 = uVar42;
          *(long *)(lVar36 + 0x80) = *(long *)(lVar36 + 0x80) + -1;
          puVar43 = local_98;
        }
        local_98 = puVar43 + 1;
        FUN_013397e8(plVar21,*plVar22,plVar22[1],&local_a0);
        puVar64 = (undefined8 *)*plVar22;
        *plVar22 = (long)local_a0;
        puVar43 = (undefined8 *)plVar22[1];
        plVar22[1] = (long)local_98;
        puVar23 = (undefined8 *)plVar22[2];
        plVar22[2] = (long)local_90;
        local_98 = puVar43;
        if ((long)puVar43 - (long)puVar64 != 0) {
          local_98 = puVar43 + (((long)puVar43 - (long)puVar64) - 8U >> 3 ^ 0xffffffffffffffff);
        }
        local_a8 = puVar64;
        local_a0 = puVar64;
        local_90 = puVar23;
        if (puVar64 != (undefined8 *)0x0) {
          plVar21 = (long *)*local_88;
          uVar51 = (**(code **)(*plVar21 + 0xf8))(plVar21);
          if (((uVar51 & 1) == 0) || (lVar53 = FUN_00c4e600(), *(int *)(lVar53 + 0x12c8) < 1)) {
            (**(code **)(*plVar21 + 0x18))(plVar21,puVar64,(long)puVar23 - (long)puVar64,8);
          }
          else {
            FUN_00c48fe8(plVar21,puVar64,(long)puVar23 - (long)puVar64,8);
          }
        }
      }
      uVar55 = local_180;
      uVar51 = uStack_188;
      if (local_138 == '\x02') {
LAB_013381c0:
        bVar16 = local_138 == '\x02' && (char)uStack_218 != '\x02';
        uVar52 = uStack_188;
        uVar54 = local_180;
        if (local_138 == '\x02' && (char)uStack_218 != '\x02') goto LAB_013381e8;
        uVar52 = 0xffffffffffffffff;
        uVar54 = 0xffffffffffffffff;
        plVar21 = (long *)**(long **)(param_3 + 0x80);
        lVar53 = (*(long **)(param_3 + 0x80))[1] - (long)plVar21;
        uVar57 = lVar53 >> 6;
        if ((int)uVar57 < 1) {
          uVar52 = 0xffffffffffffffff;
          bVar16 = false;
          uVar54 = 0xffffffffffffffff;
        }
        else {
          uVar58 = lVar53 * 0x4000000 >> 0x20;
          uVar66 = 0;
          plVar22 = plVar21;
          if ((long)uVar58 < 2) {
            uVar58 = 1;
          }
          do {
            if (uVar57 == uVar66) goto LAB_0133961c;
            if (*plVar22 == -1) {
              *(int *)(plVar21 + (uVar66 & 0xffffffff) * 8 + 6) =
                   (int)((ulong)((*(long **)(param_3 + 0xc0))[1] - **(long **)(param_3 + 0xc0)) >> 7
                        );
              goto LAB_0133825c;
            }
            uVar66 = uVar66 + 1;
            plVar22 = plVar22 + 8;
          } while (uVar58 != uVar66);
        }
      }
      else {
        uVar52 = local_180;
        uVar54 = uStack_188;
        if ((char)uStack_218 != '\x02') goto LAB_013381c0;
LAB_013381e8:
        puVar9 = (ulong *)**(long **)(param_3 + 0x60);
        lVar53 = (*(long **)(param_3 + 0x60))[1] - (long)puVar9;
        uVar57 = lVar53 >> 6;
        if (0 < (int)uVar57) {
          uVar66 = 0;
          puVar45 = puVar9;
          do {
            if (uVar57 == uVar66) goto LAB_0133961c;
            if (*puVar45 == uVar54) {
              bVar16 = true;
              *(int *)(puVar9 + (uVar66 & 0xffffffff) * 8 + 6) =
                   (int)((ulong)((*(long **)(param_3 + 0xc0))[1] - **(long **)(param_3 + 0xc0)) >> 7
                        );
              goto LAB_0133825c;
            }
            uVar58 = lVar53 * 0x4000000 >> 0x20;
            if ((long)uVar58 < 2) {
              uVar58 = 1;
            }
            uVar66 = uVar66 + 1;
            puVar45 = puVar45 + 8;
          } while (uVar66 != uVar58);
        }
        bVar16 = true;
      }
      uVar66 = 0xffffffff;
LAB_0133825c:
      puVar9 = (ulong *)**(long **)(param_3 + 0x80);
      lVar53 = (*(long **)(param_3 + 0x80))[1] - (long)puVar9;
      uVar57 = lVar53 >> 6;
      if (0 < (int)uVar57) {
        uVar46 = lVar53 * 0x4000000 >> 0x20;
        uVar58 = 0;
        puVar45 = puVar9;
        if ((long)uVar46 < 2) {
          uVar46 = 1;
        }
        do {
          if (uVar57 == uVar58) {
LAB_0133961c:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          if (*puVar45 == uVar52) {
            *(int *)(puVar9 + (uVar58 & 0xffffffff) * 8 + 6) =
                 (int)((ulong)((*(long **)(param_3 + 0xc0))[1] - **(long **)(param_3 + 0xc0)) >> 7);
            goto LAB_013382d4;
          }
          uVar58 = uVar58 + 1;
          puVar45 = puVar45 + 8;
        } while (uVar46 != uVar58);
      }
      uVar58 = 0xffffffff;
LAB_013382d4:
      plVar21 = *(long **)(param_3 + 0xc0);
      uVar57 = plVar21[1];
      if (uVar57 < (ulong)plVar21[2]) {
        lVar53 = plVar21[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_04865a38), iVar19 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar36 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar36 != 0) {
          if (0xf < *(ulong *)(lVar36 + 0x80)) goto LAB_01339620;
          *(long *)(lVar36 + *(ulong *)(lVar36 + 0x80) * 8) = lVar53;
          *(long *)(lVar36 + 0x80) = *(long *)(lVar36 + 0x80) + 1;
        }
        *(bool *)uVar57 = bVar16;
        uVar15 = (undefined4)local_a8;
        *(ulong *)(uVar57 + 8) = uVar54;
        *(ulong *)(uVar57 + 0x10) = uVar52;
        *(undefined4 *)(uVar57 + 4) = local_a8._3_4_;
        *(undefined4 *)(uVar57 + 1) = uVar15;
        *(ulong *)(uVar57 + 0x18) = uVar51;
        *(ulong *)(uVar57 + 0x20) = uVar55;
        *(int *)(uVar57 + 0x50) = (int)uVar66;
        *(int *)(uVar57 + 0x54) = (int)uVar58;
        *(undefined4 *)(uVar57 + 0x6c) = param_1;
        *(undefined4 *)(uVar57 + 0x70) = param_2;
        *(undefined4 *)(uVar57 + 0x68) = 0;
        *(undefined8 *)(uVar57 + 0x30) = 0;
        *(undefined8 *)(uVar57 + 0x38) = 0;
        *(undefined8 *)(uVar57 + 0x58) = 0;
        *(undefined8 *)(uVar57 + 0x60) = 0x8000000000000000;
        *(undefined8 *)(uVar57 + 0x48) = uVar67;
        *(undefined8 *)(uVar57 + 0x40) = uVar41;
        if (lVar36 != 0) {
          *(long *)(lVar36 + 0x80) = *(long *)(lVar36 + 0x80) + -1;
        }
        plVar21[1] = uVar57 + 0x80;
      }
      else {
        uVar46 = plVar21[4];
        lVar53 = (long)(uVar57 - *plVar21) >> 7;
        uVar57 = lVar53 + 1;
        if (0x7ffffffffffffffe < uVar46) {
          uVar46 = 0x7fffffffffffffff;
        }
        if (uVar46 < uVar57) {
LAB_0133962c:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar36 = plVar21[2] - *plVar21;
        uVar38 = lVar36 >> 6;
        if (uVar57 <= uVar38) {
          uVar57 = uVar38;
        }
        if (uVar46 >> 1 <= (ulong)(lVar36 >> 7)) {
          uVar57 = uVar46;
        }
        if (uVar57 == 0) {
          lVar36 = 0;
        }
        else {
          lVar36 = (**(code **)(*(long *)plVar21[3] + 0x10))((long *)plVar21[3],uVar57 << 7,0x10);
          if (lVar36 == 0) {
            (**(code **)(*(long *)plVar21[3] + 0xe8))();
          }
        }
        lVar37 = plVar21[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_04865a38), iVar19 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar29 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar29 != 0) {
          if (0xf < *(ulong *)(lVar29 + 0x80)) goto LAB_01339620;
          *(long *)(lVar29 + *(ulong *)(lVar29 + 0x80) * 8) = lVar37;
          *(long *)(lVar29 + 0x80) = *(long *)(lVar29 + 0x80) + 1;
        }
        lVar53 = lVar36 + lVar53 * 0x80;
        *(bool *)lVar53 = bVar16;
        uVar15 = (undefined4)local_a8;
        *(undefined4 *)(lVar53 + 4) = local_a8._3_4_;
        *(ulong *)(lVar53 + 8) = uVar54;
        *(ulong *)(lVar53 + 0x10) = uVar52;
        *(undefined4 *)(lVar53 + 1) = uVar15;
        *(int *)(lVar53 + 0x50) = (int)uVar66;
        *(int *)(lVar53 + 0x54) = (int)uVar58;
        *(ulong *)(lVar53 + 0x18) = uVar51;
        *(ulong *)(lVar53 + 0x20) = uVar55;
        *(undefined4 *)(lVar53 + 0x6c) = param_1;
        *(undefined4 *)(lVar53 + 0x70) = param_2;
        *(undefined4 *)(lVar53 + 0x68) = 0;
        *(undefined8 *)(lVar53 + 0x30) = 0;
        *(undefined8 *)(lVar53 + 0x38) = 0;
        *(undefined8 *)(lVar53 + 0x58) = 0;
        *(undefined8 *)(lVar53 + 0x60) = 0x8000000000000000;
        *(undefined8 *)(lVar53 + 0x48) = uVar67;
        *(undefined8 *)(lVar53 + 0x40) = uVar41;
        if (lVar29 != 0) {
          *(long *)(lVar29 + 0x80) = *(long *)(lVar29 + 0x80) + -1;
        }
        lVar37 = *plVar21;
        lVar29 = plVar21[1];
        if (lVar29 == lVar37) {
          lVar29 = lVar53;
          lVar56 = lVar37;
        }
        else {
          lVar56 = 0;
          do {
            lVar62 = plVar21[3];
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(&DAT_04865a38), iVar19 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar30 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar30 != 0) {
              if (0xf < *(ulong *)(lVar30 + 0x80)) goto LAB_01339620;
              *(long *)(lVar30 + *(ulong *)(lVar30 + 0x80) * 8) = lVar62;
              *(long *)(lVar30 + 0x80) = *(long *)(lVar30 + 0x80) + 1;
            }
            lVar62 = lVar53 + lVar56;
            lVar7 = lVar29 + lVar56;
            memcpy((void *)(lVar62 + -0x80),(void *)(lVar7 + -0x80),0x58);
            *(undefined8 *)(lVar62 + -0x28) = 0;
            *(undefined8 *)(lVar62 + -0x20) = 0x8000000000000000;
            FUN_01339774(lVar7 + -0x28,PTR_PTR_047d1a50);
            *(undefined8 *)(lVar62 + -0x28) = *(undefined8 *)(lVar7 + -0x28);
            *(undefined4 *)(lVar62 + -0x20) = *(undefined4 *)(lVar7 + -0x20);
            *(undefined4 *)(lVar62 + -0x1c) = *(undefined4 *)(lVar7 + -0x1c);
            uVar42 = *(undefined8 *)(lVar7 + -0x18);
            *(undefined8 *)(lVar7 + -0x28) = 0;
            *(undefined8 *)(lVar7 + -0x20) = 0;
            *(undefined4 *)(lVar62 + -0x10) = *(undefined4 *)(lVar7 + -0x10);
            *(undefined8 *)(lVar62 + -0x18) = uVar42;
            if (lVar30 != 0) {
              *(long *)(lVar30 + 0x80) = *(long *)(lVar30 + 0x80) + -1;
            }
            lVar56 = lVar56 + -0x80;
          } while (lVar37 - lVar29 != lVar56);
          lVar37 = plVar21[1];
          lVar29 = lVar53 + lVar56;
          lVar56 = *plVar21;
        }
        *plVar21 = lVar29;
        plVar21[1] = lVar53 + 0x80;
        lVar53 = plVar21[2];
        plVar21[2] = lVar36 + uVar57 * 0x80;
        if (lVar37 != lVar56) {
          *(undefined4 *)(lVar37 + -0x20) = 0;
          if ((-1 < (int)*(uint *)(lVar37 + -0x1c)) && (*(long *)(lVar37 + -0x28) != 0)) {
            (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                      (PTR_PTR_047d1a50,*(long *)(lVar37 + -0x28),
                       (ulong)*(uint *)(lVar37 + -0x1c) << 2);
          }
          *(undefined8 *)(lVar37 + -0x28) = 0;
          *(undefined4 *)(lVar37 + -0x1c) = 0x80000000;
          if (lVar37 + -0x80 != lVar56) {
            *(undefined4 *)(lVar37 + -0xa0) = 0;
            if ((-1 < (int)*(uint *)(lVar37 + -0x9c)) && (*(long *)(lVar37 + -0xa8) != 0)) {
              (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                        (PTR_PTR_047d1a50,*(long *)(lVar37 + -0xa8),
                         (ulong)*(uint *)(lVar37 + -0x9c) << 2);
            }
            *(undefined8 *)(lVar37 + -0xa8) = 0;
            *(undefined4 *)(lVar37 + -0x9c) = 0x80000000;
            if (lVar37 + -0x100 != lVar56) {
              *(undefined4 *)(lVar37 + -0x120) = 0;
              uVar20 = *(uint *)(lVar37 + -0x11c);
              if ((-1 < (int)uVar20) && (lVar36 = *(long *)(lVar37 + -0x128), lVar36 != 0)) {
                (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                          (PTR_PTR_047d1a50,lVar36,(ulong)uVar20 << 2);
              }
              *(long *)(lVar37 + -0x128) = 0;
              *(uint *)(lVar37 + -0x11c) = 0x80000000;
              if (lVar37 + -0x180 != lVar56) {
                do {
                  *(undefined4 *)(lVar37 + -0x1a0) = 0;
                  puVar60 = (uint *)(lVar37 + -0x19c);
                  uVar20 = *puVar60;
                  if ((-1 < (int)uVar20) && (*(long *)(lVar37 + -0x1a8) != 0)) {
                    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                              (PTR_PTR_047d1a50,*(long *)(lVar37 + -0x1a8),(ulong)uVar20 << 2);
                  }
                  puVar23 = (undefined8 *)(lVar37 + -0x1a8);
                  lVar37 = lVar37 + -0x80;
                  *puVar23 = 0;
                  *puVar60 = 0x80000000;
                } while (lVar56 + 0x180 != lVar37);
              }
            }
          }
        }
        if (lVar56 != 0) {
          plVar21 = (long *)plVar21[3];
          uVar51 = (**(code **)(*plVar21 + 0xf8))(plVar21);
          if (((uVar51 & 1) == 0) || (lVar36 = FUN_00c4e600(), *(int *)(lVar36 + 0x12c8) < 1)) {
            (**(code **)(*plVar21 + 0x18))(plVar21,lVar56,lVar53 - lVar56,0x10);
          }
          else {
            FUN_00c48fe8(plVar21,lVar56,lVar53 - lVar56,0x10);
          }
        }
      }
      FUN_00cb081c(&local_240);
      FUN_00cb081c(&local_160);
      if ((local_170 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_170 - 1,0);
      }
      if ((local_190 != (ulong *)0x0) && (local_190[1] != 0)) {
        puVar9 = local_190 + 2;
        do {
          uVar51 = *puVar9;
          cVar11 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(puVar9,0x10);
          if (bVar16) {
            *puVar9 = uVar51 - 1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (uVar51 - 1 == 0) {
          (**(code **)(*local_190 + 0x18))();
        }
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 < *(int *)(lVar49 + 0x50));
  }
  puVar13 = PTR_PTR_047d1a50;
  uVar51 = lVar26 - lVar50 >> 7;
  plVar21 = *(long **)(param_3 + 0xc0);
  if (uVar51 < (ulong)(plVar21[1] - *plVar21 >> 7)) {
    do {
      pcVar65 = (char *)(*plVar21 + uVar51 * 0x80);
      uVar20 = *(uint *)(pcVar65 + 0x60);
      cVar11 = *pcVar65;
      if ((int)uVar20 < 1) {
        puVar59 = (undefined4 *)0x0;
        uVar20 = 0x80000000;
      }
      else {
        puVar63 = *(undefined4 **)(pcVar65 + 0x58);
        puVar59 = (undefined4 *)(**(code **)(*(long *)puVar13 + 0x18))(puVar13,(ulong)uVar20 << 2);
        *puVar59 = *puVar63;
        if (uVar20 != 1) {
          lVar49 = 1;
          do {
            puVar59[lVar49] = puVar63[lVar49];
            lVar49 = lVar49 + 1;
          } while (uVar20 != (uint)lVar49);
        }
      }
      if (cVar11 != '\0') {
        FUN_01339f20(param_3,uVar51);
      }
      if ((-1 < (int)uVar20) && (puVar59 != (undefined4 *)0x0)) {
        (**(code **)(*(long *)puVar13 + 0x20))(puVar13,puVar59,(ulong)uVar20 << 2);
      }
      plVar21 = *(long **)(param_3 + 0xc0);
      uVar51 = uVar51 + 1;
    } while (uVar51 < (ulong)(plVar21[1] - *plVar21 >> 7));
  }
  if ((local_b0 != (long *)0x0) && (local_b0[1] != 0)) {
    plVar21 = local_b0 + 2;
    do {
      lVar49 = *plVar21;
      cVar11 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar16) {
        *plVar21 = lVar49 + -1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (lVar49 + -1 == 0) {
      (**(code **)(*local_b0 + 0x18))();
    }
  }
LAB_013388cc:
  do {
    lVar49 = *plVar4;
    iVar19 = (int)lVar49 + -1;
    cVar11 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar16) {
      *(int *)plVar4 = iVar19;
      cVar11 = ExclusiveMonitorsStatus();
    }
  } while (cVar11 != '\0');
  if (iVar19 == 0) {
    (**(code **)(*plVar32 + 0x10))();
  }
  else if ((int)lVar49 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
LAB_013376c4:
  if (-1 < (short)plVar61[6]) {
    sVar31 = *(short *)((long)plVar28 + 10) + (short)plVar61[6];
    goto LAB_013376d8;
  }
LAB_013376cc:
  plVar28 = plVar28 + 2;
  goto LAB_013375c8;
}


