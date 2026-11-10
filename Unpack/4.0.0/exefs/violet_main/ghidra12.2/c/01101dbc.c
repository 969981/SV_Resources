/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01101dbc; name: FUN_01101dbc
 */


undefined8 FUN_01101dbc(long param_1,byte param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  uint **ppuVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  bool bVar19;
  uint *puVar20;
  byte *pbVar21;
  ulong uVar22;
  long lVar23;
  int iVar24;
  uint *puVar25;
  undefined8 uVar26;
  uint *puVar27;
  long *plVar28;
  float fVar29;
  float fVar30;
  uint *local_88;
  uint *local_80;
  uint *local_78;
  uint *local_70;
  undefined8 *local_68;
  
  if ((*(long *)(param_1 + 0x140) != 0) &&
     ((*(byte *)(*(long *)(param_1 + 0x140) + 0x1e8) & 1) != 0)) {
    lVar16 = *(long *)(param_1 + 0x1c0);
    if ((((*(long *)(lVar16 + 0xf8) == 0) ||
         ((*(int *)(lVar16 + 0x100) != *(int *)(*(long *)(lVar16 + 0xf8) + 0x2c) ||
          (lVar16 = FUN_00c41664(lVar16 + 0xf8), lVar16 == 0)))) ||
        ((lVar16 = FUN_00c41664(*(long *)(param_1 + 0x1c0) + 0xf8), *(char *)(lVar16 + 8) == '\0' &&
         (uVar13 = FUN_0110263c(lVar16), (uVar13 & 1) == 0)))) || (*(char *)(lVar16 + 9) != '\0')) {
      if ((*(char *)(param_1 + 0x298) == '\0') || (*(char *)(param_1 + 0x299) == '\0')) {
        FUN_010b70f8(param_1);
      }
      FUN_00c9e664(&local_88,param_1 + 0xe8);
      if (local_80 == (uint *)0x0) {
        *(undefined8 *)(param_1 + 0x128) = 0;
      }
      else {
        puVar25 = local_80 + 10;
        *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(local_80 + 0x12);
        do {
          uVar2 = *puVar25;
          uVar7 = uVar2 - 1;
          cVar6 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(puVar25,0x10);
          if (bVar8) {
            *puVar25 = uVar7;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (uVar7 == 0) {
          (**(code **)(*(long *)local_80 + 0x10))();
        }
        else if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      if (local_88 != (uint *)0x0) {
        (**(code **)(*(long *)local_88 + 0x60))();
      }
      lVar16 = *(long *)(param_1 + 0x1c0);
      if ((*(long *)(lVar16 + 0xf8) != 0) &&
         (*(int *)(lVar16 + 0x100) == *(int *)(*(long *)(lVar16 + 0xf8) + 0x2c))) {
        *(undefined8 *)(lVar16 + 0xf8) = 0;
        *(undefined4 *)(lVar16 + 0x100) = 0xffffffff;
      }
      FUN_01103adc(param_1);
      *(byte *)(param_1 + 0x1c8) = param_2 & 1;
      if (**(char **)(param_1 + 0x180) == '\0') {
        uVar13 = FUN_01102768(*(undefined8 *)(param_1 + 0x130),param_1 + 0x138,
                              *(undefined8 *)(param_1 + 0x1c0));
        if ((uVar13 & 1) != 0) {
          local_78 = (uint *)0x0;
          local_70 = (uint *)0x0;
          ppuVar15 = &local_88;
          local_88 = (uint *)&DAT_cbf29ce484222645;
          local_80 = (uint *)&DAT_03c886bc;
LAB_01101f1c:
          FUN_01103138(param_1,ppuVar15);
          if (*(char *)(param_1 + 0x2e4) != '\0') {
            lVar16 = FUN_00c41664(*(long *)(param_1 + 0x1c0) + 0xf8);
            *(undefined1 *)(lVar16 + 0xb) = *(undefined1 *)(param_1 + 0x269);
            cVar6 = *(char *)(param_1 + 0x2d8);
            iVar3 = **(int **)(lVar16 + 0x238);
            *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_1 + 0x2a0);
            cVar4 = *(char *)(param_1 + 0x2d9);
            bVar8 = cVar4 != '\0';
            if (*(char *)(lVar16 + 8) == '\0') {
              bVar10 = FUN_0110263c(lVar16);
              bVar8 = (bool)(cVar4 != '\0' & bVar10);
            }
            bVar9 = cVar6 != '\0';
            if (iVar3 < 1) {
              bVar10 = 0;
              bVar5 = 0;
            }
            else {
              puVar1 = (undefined8 *)(param_1 + 0x2b8);
              bVar10 = 0;
              iVar24 = 0;
              bVar5 = 0;
              do {
                lVar14 = FUN_01102618(lVar16,iVar24);
                if (lVar14 != 0) {
                  puVar25 = *(uint **)(param_1 + 0x2a8);
                  uVar2 = *(uint *)(lVar14 + 0x400);
                  if (puVar25 < *(uint **)(param_1 + 0x2b0)) {
                    uVar26 = *puVar1;
                    if (((DAT_04865a38 & 1) == 0) &&
                       (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
                      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                      __cxa_guard_release(&DAT_04865a38);
                    }
                    lVar23 = nn::os::GetTlsValue(DAT_04865a30);
                    if (lVar23 == 0) {
                      *puVar25 = uVar2;
                    }
                    else {
                      if (0xf < *(ulong *)(lVar23 + 0x80)) goto LAB_011025dc;
                      *(undefined8 *)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = uVar26;
                      *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
                      *puVar25 = uVar2;
                      *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
                    }
                    *(uint **)(param_1 + 0x2a8) = puVar25 + 1;
                  }
                  else {
                    uVar22 = *(ulong *)(param_1 + 0x2c0);
                    lVar23 = (long)puVar25 - *(long *)(param_1 + 0x2a0) >> 2;
                    uVar13 = lVar23 + 1;
                    if (0x7ffffffffffffffe < uVar22) {
                      uVar22 = 0x7fffffffffffffff;
                    }
                    if (uVar22 < uVar13) {
                    /* WARNING: Subroutine does not return */
                      std::__vector_base_common<true>::__throw_length_error();
                    }
                    lVar17 = (long)*(uint **)(param_1 + 0x2b0) - *(long *)(param_1 + 0x2a0);
                    uVar18 = lVar17 >> 1;
                    if (uVar13 <= uVar18) {
                      uVar13 = uVar18;
                    }
                    if (uVar22 >> 1 <= (ulong)(lVar17 >> 2)) {
                      uVar13 = uVar22;
                    }
                    local_70 = (uint *)0x0;
                    local_68 = puVar1;
                    if (uVar13 == 0) {
                      puVar25 = (uint *)0x0;
                    }
                    else {
                      puVar25 = (uint *)(**(code **)(*(long *)*puVar1 + 0x10))
                                                  ((long *)*puVar1,uVar13 << 2,4);
                      if (puVar25 == (uint *)0x0) {
                        (**(code **)(*(long *)*puVar1 + 0xe8))();
                      }
                    }
                    puVar20 = puVar25 + lVar23;
                    local_70 = puVar25 + uVar13;
                    uVar26 = *puVar1;
                    local_88 = puVar25;
                    local_80 = puVar20;
                    local_78 = puVar20;
                    if (((DAT_04865a38 & 1) == 0) &&
                       (iVar12 = __cxa_guard_acquire(&DAT_04865a38), iVar12 != 0)) {
                      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                      __cxa_guard_release(&DAT_04865a38);
                    }
                    lVar23 = nn::os::GetTlsValue(DAT_04865a30);
                    if (lVar23 == 0) {
                      *puVar20 = uVar2;
                    }
                    else {
                      if (0xf < *(ulong *)(lVar23 + 0x80)) {
LAB_011025dc:
                    /* WARNING: Subroutine does not return */
                        abort();
                      }
                      *(undefined8 *)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = uVar26;
                      *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
                      *puVar20 = uVar2;
                      *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
                      puVar20 = local_78;
                    }
                    local_78 = puVar20 + 1;
                    FUN_01102648(puVar1,*(undefined8 *)(param_1 + 0x2a0),
                                 *(undefined8 *)(param_1 + 0x2a8),&local_80);
                    puVar27 = *(uint **)(param_1 + 0x2a0);
                    *(uint **)(param_1 + 0x2a0) = local_80;
                    puVar20 = *(uint **)(param_1 + 0x2a8);
                    *(uint **)(param_1 + 0x2a8) = local_78;
                    puVar25 = *(uint **)(param_1 + 0x2b0);
                    *(uint **)(param_1 + 0x2b0) = local_70;
                    local_78 = puVar20;
                    if ((long)puVar20 - (long)puVar27 != 0) {
                      local_78 = puVar20 + (((long)puVar20 - (long)puVar27) - 4U >> 2 ^
                                           0xffffffffffffffff);
                    }
                    local_88 = puVar27;
                    local_80 = puVar27;
                    local_70 = puVar25;
                    if (puVar27 != (uint *)0x0) {
                      plVar28 = (long *)*local_68;
                      uVar13 = (**(code **)(*plVar28 + 0xf8))(plVar28);
                      if (((uVar13 & 1) == 0) ||
                         (lVar23 = FUN_00c4e600(), *(int *)(lVar23 + 0x12c8) < 1)) {
                        (**(code **)(*plVar28 + 0x18))
                                  (plVar28,puVar27,(long)puVar25 - (long)puVar27,4);
                      }
                      else {
                        FUN_00c48fe8(plVar28,puVar27,(long)puVar25 - (long)puVar27,4);
                      }
                    }
                  }
                  if (((*PTR_DAT_047d8a48 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8a48), iVar12 != 0)) {
                    FUN_00100190(PTR_LAB_047dcf08,PTR_DAT_047d8a50,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d8a48);
                  }
                  lVar23 = *(long *)PTR_DAT_047d8a50;
                  *(long *)PTR_DAT_047d8a58 = lVar23;
                  lVar17 = *(long *)(lVar23 + 0x440);
                  lVar23 = *(long *)(lVar23 + 0x448) - lVar17;
                  if (lVar23 != 0) {
                    uVar13 = (lVar23 >> 4) * 0x6db6db6db6db6db7;
                    if (uVar13 < 2) {
                      uVar13 = 1;
                    }
                    lVar23 = lVar17;
                    do {
                      if (*(int *)(lVar23 + 0x58) == 1 << (ulong)(uVar2 & 0x1f)) goto LAB_011021cc;
                      lVar23 = lVar23 + 0x70;
                      uVar13 = uVar13 - 1;
                    } while (uVar13 != 0);
                  }
                  lVar23 = lVar17;
LAB_011021cc:
                  uVar26 = *(undefined8 *)(lVar23 + 0x40);
                  plVar28 = *(long **)(lVar23 + 0x50);
                  if (plVar28 != (long *)0x0) {
                    (**(code **)(*plVar28 + 0x18))(plVar28);
                  }
                  bVar11 = (**(code **)(*DAT_0485a020 + 0x40))(DAT_0485a020,uVar26);
                  pbVar21 = *(byte **)(*(long *)(lVar14 + 0x238) + 0x288);
                  if (pbVar21 != (byte *)0x0) {
                    bVar5 = bVar5 | *pbVar21 & 1;
                  }
                  lVar23 = *(long *)(*(long *)(lVar14 + 0x238) + 0x10);
                  bVar8 = (bool)(bVar8 & (bVar11 ^ 1));
                  fVar29 = *(float *)(lVar23 + 0x7cc);
                  fVar30 = *(float *)(lVar23 + 2000);
                  if (((*PTR_DAT_047d8a48 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8a48), iVar12 != 0)) {
                    FUN_00100190(PTR_LAB_047dcf08,PTR_DAT_047d8a50,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d8a48);
                  }
                  bVar9 = (bool)(bVar9 & (bVar11 ^ 1));
                  bVar10 = bVar10 | fVar29 <= fVar30;
                  *(undefined8 *)PTR_DAT_047d8a58 = *(undefined8 *)PTR_DAT_047d8a50;
                  puVar25 = *(uint **)(*(long *)(lVar14 + 0x238) + 0x318);
                  if (puVar25 != (uint *)0x0) {
                    if (*puVar25 < 2) {
                      bVar19 = false;
                    }
                    else {
                      bVar19 = 1.1920929e-07 <= (float)puVar25[0x72];
                    }
                    *(bool *)(param_1 + 0x241) = bVar19;
                    if (3 < *puVar25) {
                      bVar8 = (bool)(bVar8 & puVar25[0x74] != 2);
                      fVar29 = (float)puVar25[0x75];
                      if ((float)puVar25[0x75] <= *(float *)(param_1 + 0x2e0)) {
                        fVar29 = *(float *)(param_1 + 0x2e0);
                      }
                      *(float *)(param_1 + 0x2e0) = fVar29;
                    }
                  }
                  if (plVar28 != (long *)0x0) {
                    (**(code **)(*plVar28 + 0x20))(plVar28);
                  }
                }
                iVar24 = iVar24 + 1;
              } while (iVar24 != iVar3);
            }
            *(bool *)(param_1 + 0x2d9) = bVar8;
            *(bool *)(param_1 + 0x2d8) = bVar9;
            *(byte *)(param_1 + 0x240) = bVar10;
            *(byte *)(param_1 + 0x1cb) = bVar5;
            if (param_3 != 0) {
              FUN_01105554(lVar16);
            }
            *(undefined1 *)(param_1 + 0x2e4) = 0;
          }
          *(undefined1 *)(param_1 + 0x242) = 0;
          return 1;
        }
      }
      else {
        uVar13 = FUN_01105068(*(undefined8 *)(param_1 + 0x130),param_1 + 0x138);
        if ((uVar13 & 1) != 0) {
          ppuVar15 = (uint **)(param_1 + 0x178);
          goto LAB_01101f1c;
        }
      }
    }
  }
  return 0;
}


