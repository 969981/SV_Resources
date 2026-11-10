/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0160f348; name: FUN_0160f348
 */


void FUN_0160f348(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  uint *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  ulong uVar17;
  ushort *puVar18;
  ulong uVar19;
  uint uVar20;
  int *piVar21;
  int *piVar22;
  long *plVar23;
  long lVar24;
  byte *pbVar25;
  int param3;
  float fVar26;
  float fVar27;
  byte *local_d8;
  long *local_d0;
  int *local_c8;
  undefined8 local_b8;
  long *local_b0;
  undefined8 local_a8;
  long *local_a0;
  byte *local_98;
  byte *local_90;
  byte *local_88;
  byte *local_80;
  undefined8 *local_78;
  byte local_68 [8];
  
  local_b8 = 0xfa8911f5bc0fa97c;
  local_b0 = (long *)0x3bf6acb;
  local_a8 = 8;
  local_a0 = (long *)0x0;
  FUN_00cee868(&local_98,param_2,&local_b8);
  if (*local_90 == 0) {
    plVar23 = (long *)FUN_00d44228();
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar9 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar9;
    FUN_00cf9884(&local_d0,uVar9,local_90);
    plVar23 = local_d0;
  }
  plVar10 = *(long **)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(long **)(param_1 + 0x180) = plVar23;
  if (local_80 != (byte *)0x0) {
    (**(code **)(*(long *)local_80 + 0x20))();
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  local_98 = (byte *)0x6f73086b4cf5b1d8;
  local_90 = (byte *)0x3c5776c;
  local_88 = (byte *)0xe;
  local_80 = (byte *)0x0;
  FUN_00d996a8(&local_d0,param_2,&local_98);
  if (local_80 != (byte *)0x0) {
    (**(code **)(*(long *)local_80 + 0x20))();
  }
  puVar5 = PTR_DAT_047d5608;
  if (((local_c8 == (int *)0x0) || (*(ushort *)((long)local_c8 - (long)*local_c8) < 7)) ||
     (uVar17 = (ulong)((ushort *)((long)local_c8 - (long)*local_c8))[3], uVar17 == 0))
  goto LAB_0160fa2c;
  puVar11 = (uint *)((long)local_c8 + uVar17);
  puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
  local_98 = (byte *)0x3c07d63;
  puVar11 = bsearch(&local_98,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
  if ((puVar11 == (uint *)0x0) || (local_d0 == (long *)0x0)) goto LAB_0160fa2c;
  piVar16 = (int *)((long)puVar11 + (ulong)*puVar11);
  puVar18 = (ushort *)((long)piVar16 - (long)*piVar16);
  uVar2 = *puVar18;
  if (uVar2 < 7) {
    piVar21 = (int *)0x0;
  }
  else {
    piVar21 = (int *)0x0;
    if ((ulong)puVar18[3] != 0) {
      puVar11 = (uint *)((long)piVar16 + (ulong)puVar18[3]);
      piVar21 = (int *)((long)puVar11 + (ulong)*puVar11);
    }
  }
  if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
     (uVar17 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar17 == 0)) {
    uVar17 = 0;
  }
  else {
    uVar17 = (long)*(char *)((long)piVar21 + uVar17) & 0xffffffff;
  }
  if (*(long *)(puVar5 + uVar17 * 8) == 4) {
    if (uVar2 < 0xb) {
      uVar20 = 0;
LAB_0160f8bc:
      iVar8 = 0;
    }
    else {
      uVar20 = 0;
      if ((ulong)puVar18[5] != 0) {
        uVar20 = (uint)*(ushort *)((long)piVar16 + (ulong)puVar18[5]);
      }
      if ((uVar2 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_0160f8bc;
      iVar8 = *(int *)((long)piVar16 + (ulong)puVar18[6]);
    }
    puVar18 = (ushort *)((long)local_d0 - (long)(int)*local_d0);
    if ((uVar20 < *puVar18) &&
       (uVar17 = (ulong)*(ushort *)((long)puVar18 + (ulong)uVar20), uVar17 != 0)) {
      iVar8 = *(int *)((long)local_d0 + uVar17);
    }
  }
  else {
    if ((uVar2 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_0160fa2c;
    iVar8 = *(int *)((long)piVar16 + (ulong)puVar18[6]);
  }
  if (0 < iVar8) {
    param3 = 0;
    puVar1 = (undefined8 *)(param_1 + 0x1a0);
    do {
      snprintf((char *)local_68,8,"name%d",param3);
      local_88 = (byte *)strlen((char *)local_68);
      local_98 = &DAT_cbf29ce484222645;
      if (local_68[0] != 0) {
        local_98 = &DAT_cbf29ce484222645;
        pbVar13 = (byte *)((ulong)local_68 | 1);
        bVar6 = local_68[0];
        do {
          local_98 = (byte *)(((ulong)local_98 ^ (ulong)bVar6) * 0x100000001b3);
          bVar6 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar6 != 0);
      }
      local_90 = local_68;
      local_80 = (byte *)0x0;
      FUN_00cee868(&local_b8,&local_d0,&local_98);
      if (local_80 != (byte *)0x0) {
        (**(code **)(*(long *)local_80 + 0x20))();
      }
      plVar23 = local_b0;
      local_d8 = (byte *)0x0;
      if ((char)*local_b0 == '\0') {
        pbVar13 = (byte *)FUN_00d44228();
        if (pbVar13 != (byte *)0x0) {
          (**(code **)(*(long *)pbVar13 + 0x18))(pbVar13);
        }
      }
      else {
        if (((*PTR_DAT_047d4240 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4240);
        }
        uVar9 = *(undefined8 *)PTR_DAT_047d4248;
        *(undefined8 *)PTR_DAT_047d4250 = uVar9;
        FUN_00cf9884(&local_98,uVar9,plVar23);
        pbVar13 = local_d8;
        local_d8 = (byte *)0x0;
        if (pbVar13 != (byte *)0x0) {
          (**(code **)(*(long *)pbVar13 + 0x20))();
        }
        pbVar13 = local_98;
      }
      local_d8 = pbVar13;
      if (*(ulong *)(param_1 + 400) < *(ulong *)(param_1 + 0x198)) {
        FUN_016112a8(param_1 + 0x188,&local_d8);
        if (local_d8 != (byte *)0x0) {
          (**(code **)(*(long *)local_d8 + 0x20))();
        }
      }
      else {
        uVar19 = *(ulong *)(param_1 + 0x1a8);
        lVar24 = (long)(*(ulong *)(param_1 + 400) - *(long *)(param_1 + 0x188)) >> 3;
        uVar17 = lVar24 + 1;
        if (0x7ffffffffffffffe < uVar19) {
          uVar19 = 0x7fffffffffffffff;
        }
        if (uVar19 < uVar17) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar14 = *(ulong *)(param_1 + 0x198) - *(long *)(param_1 + 0x188);
        uVar15 = lVar14 >> 2;
        local_80 = (byte *)0x0;
        if (uVar17 <= uVar15) {
          uVar17 = uVar15;
        }
        if (uVar19 >> 1 <= (ulong)(lVar14 >> 3)) {
          uVar17 = uVar19;
        }
        local_78 = puVar1;
        if (uVar17 == 0) {
          pbVar12 = (byte *)0x0;
        }
        else {
          pbVar12 = (byte *)(**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar17 << 3,8);
          if (pbVar12 == (byte *)0x0) {
            (**(code **)(*(long *)*puVar1 + 0xe8))();
          }
        }
        pbVar25 = pbVar12 + lVar24 * 8;
        local_80 = pbVar12 + uVar17 * 8;
        uVar9 = *puVar1;
        local_98 = pbVar12;
        local_90 = pbVar25;
        local_88 = pbVar25;
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar24 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar24 == 0) {
          *(byte **)pbVar25 = pbVar13;
        }
        else {
          if (0xf < *(ulong *)(lVar24 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = uVar9;
          *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
          *(byte **)pbVar25 = local_d8;
          *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
          pbVar25 = local_88;
        }
        local_d8 = (byte *)0x0;
        local_88 = pbVar25 + 8;
        FUN_0160fee0(puVar1,*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 400),
                     &local_90);
        pbVar12 = *(byte **)(param_1 + 0x188);
        pbVar13 = *(byte **)(param_1 + 400);
        plVar23 = *(long **)(param_1 + 0x198);
        *(byte **)(param_1 + 0x188) = local_90;
        *(byte **)(param_1 + 400) = local_88;
        *(byte **)(param_1 + 0x198) = local_80;
        local_98 = pbVar12;
        local_90 = pbVar12;
        local_88 = pbVar13;
        local_80 = (byte *)plVar23;
        while (pbVar13 != pbVar12) {
          local_88 = pbVar13 + -8;
          pbVar25 = pbVar13 + -8;
          pbVar13 = local_88;
          if (*(long **)pbVar25 != (long *)0x0) {
            (**(code **)(**(long **)pbVar25 + 0x20))();
          }
        }
        if (pbVar12 != (byte *)0x0) {
          lVar24 = (long)plVar23 - (long)pbVar12;
          plVar23 = (long *)*local_78;
          uVar17 = (**(code **)(*plVar23 + 0xf8))(plVar23);
          if (((uVar17 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
            (**(code **)(*plVar23 + 0x18))(plVar23,pbVar12,lVar24,8);
          }
          else {
            FUN_00c48fe8(plVar23,pbVar12,lVar24,8);
          }
        }
      }
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x20))();
      }
      param3 = param3 + 1;
    } while (param3 != iVar8);
  }
LAB_0160fa2c:
  local_b0 = (long *)0x0;
  plVar23 = *(long **)(param_1 + 0x180);
  if (plVar23 == (long *)0x0) {
  }
  else {
    (**(code **)(*plVar23 + 0x18))(plVar23);
    if (local_b0 != (long *)0x0) {
      lVar24 = *local_b0;
      local_b0 = plVar23;
      (**(code **)(lVar24 + 0x20))();
      plVar23 = local_b0;
    }
  }
  local_b0 = plVar23;
  puVar5 = PTR_DAT_047d5608;
  piVar16 = (int *)param_2[1];
  if (piVar16 == (int *)0x0) {
    local_b8 = 0;
    fVar27 = 0.0;
  }
  else {
    fVar27 = 0.0;
    fVar26 = 0.0;
    if (6 < *(ushort *)((long)piVar16 - (long)*piVar16)) {
      uVar17 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[3];
      fVar26 = 0.0;
      if (uVar17 != 0) {
        puVar11 = (uint *)((long)piVar16 + uVar17);
        puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
        local_98 = (byte *)0x3c71821;
        puVar11 = bsearch(&local_98,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar11 == (uint *)0x0) {
          fVar26 = 0.0;
        }
        else {
          piVar16 = (int *)*param_2;
          fVar26 = 0.0;
          if (piVar16 != (int *)0x0) {
            piVar21 = (int *)((long)puVar11 + (ulong)*puVar11);
            puVar18 = (ushort *)((long)piVar21 - (long)*piVar21);
            uVar2 = *puVar18;
            if (uVar2 < 7) {
              piVar22 = (int *)0x0;
            }
            else {
              piVar22 = (int *)0x0;
              if ((ulong)puVar18[3] != 0) {
                puVar11 = (uint *)((long)piVar21 + (ulong)puVar18[3]);
                piVar22 = (int *)((long)puVar11 + (ulong)*puVar11);
              }
            }
            if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
               (uVar17 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar17 == 0)) {
              uVar17 = 0;
            }
            else {
              uVar17 = (long)*(char *)((long)piVar22 + uVar17) & 0xffffffff;
            }
            if (*(long *)(puVar5 + uVar17 * 8) == 4) {
              fVar26 = 0.0;
              if (uVar2 < 0xb) {
                uVar20 = 0;
              }
              else {
                uVar20 = 0;
                if ((ulong)puVar18[5] != 0) {
                  uVar20 = (uint)*(ushort *)((long)piVar21 + (ulong)puVar18[5]);
                }
                if ((0xe < uVar2) && ((ulong)puVar18[7] != 0)) {
                  fVar26 = (float)*(double *)((long)piVar21 + (ulong)puVar18[7]);
                }
              }
              if ((uVar20 < *(ushort *)((long)piVar16 - (long)*piVar16)) &&
                 (uVar17 = (ulong)*(ushort *)(((long)piVar16 - (long)*piVar16) + (ulong)uVar20),
                 uVar17 != 0)) {
                fVar26 = *(float *)((long)piVar16 + uVar17);
              }
            }
            else {
              fVar26 = 0.0;
              if (0xe < uVar2) {
                fVar26 = 0.0;
                if ((ulong)puVar18[7] != 0) {
                  fVar26 = (float)*(double *)((long)piVar21 + (ulong)puVar18[7]);
                }
              }
            }
          }
        }
      }
    }
    piVar16 = (int *)param_2[1];
    local_b8 = CONCAT44(local_b8._4_4_,fVar26);
    if (((piVar16 != (int *)0x0) && (6 < *(ushort *)((long)piVar16 - (long)*piVar16))) &&
       (uVar17 = (ulong)((ushort *)((long)piVar16 - (long)*piVar16))[3], uVar17 != 0)) {
      puVar11 = (uint *)((long)piVar16 + uVar17);
      puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
      local_98 = (byte *)0x3c78006;
      puVar11 = bsearch(&local_98,puVar11 + 1,(ulong)*puVar11,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar11 != (uint *)0x0) && (piVar16 = (int *)*param_2, piVar16 != (int *)0x0)) {
        piVar21 = (int *)((long)puVar11 + (ulong)*puVar11);
        puVar18 = (ushort *)((long)piVar21 - (long)*piVar21);
        uVar2 = *puVar18;
        if (uVar2 < 7) {
          piVar22 = (int *)0x0;
        }
        else {
          piVar22 = (int *)0x0;
          if ((ulong)puVar18[3] != 0) {
            puVar11 = (uint *)((long)piVar21 + (ulong)puVar18[3]);
            piVar22 = (int *)((long)puVar11 + (ulong)*puVar11);
          }
        }
        if ((*(ushort *)((long)piVar22 - (long)*piVar22) < 5) ||
           (uVar17 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2], uVar17 == 0)) {
          uVar17 = 0;
        }
        else {
          uVar17 = (long)*(char *)((long)piVar22 + uVar17) & 0xffffffff;
        }
        if (*(long *)(puVar5 + uVar17 * 8) == 4) {
          fVar27 = 0.0;
          if (uVar2 < 0xb) {
            uVar20 = 0;
          }
          else {
            uVar20 = 0;
            if ((ulong)puVar18[5] != 0) {
              uVar20 = (uint)*(ushort *)((long)piVar21 + (ulong)puVar18[5]);
            }
            if ((0xe < uVar2) && ((ulong)puVar18[7] != 0)) {
              fVar27 = (float)*(double *)((long)piVar21 + (ulong)puVar18[7]);
            }
          }
          if ((uVar20 < *(ushort *)((long)piVar16 - (long)*piVar16)) &&
             (uVar17 = (ulong)*(ushort *)(((long)piVar16 - (long)*piVar16) + (ulong)uVar20),
             uVar17 != 0)) {
            fVar27 = *(float *)((long)piVar16 + uVar17);
          }
        }
        else if ((0xe < uVar2) && ((ulong)puVar18[7] != 0)) {
          fVar27 = (float)*(double *)((long)piVar21 + (ulong)puVar18[7]);
        }
      }
    }
  }
  local_b8 = CONCAT44(fVar27,(undefined4)local_b8);
  FUN_015e48cc(&local_98,&local_b8);
  plVar23 = *(long **)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (plVar23 != (long *)0x0) {
    plVar10 = plVar23 + 5;
    do {
      lVar24 = *plVar10;
      iVar8 = (int)lVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *(int *)plVar10 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar23 + 0x10))();
    }
    else if ((int)lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(byte **)(param_1 + 0x178) = local_98;
  local_98 = (byte *)0x45fb0e9c7a2e54b5;
  local_90 = (byte *)0x3c35a46;
  local_88 = (byte *)0x15;
  local_80 = (byte *)0x0;
  bVar6 = FUN_00cf7518(param_2,&local_98);
  bVar6 = bVar6 & 1;
  *(byte *)(param_1 + 0x1c0) = bVar6;
  if (local_80 != (byte *)0x0) {
    (**(code **)(*(long *)local_80 + 0x20))();
    bVar6 = *(byte *)(param_1 + 0x1c0);
  }
  if (bVar6 != 0) {
    if (((*PTR_DAT_047d4df8 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4df8);
    }
    *(undefined8 *)PTR_DAT_047d4e08 = *(undefined8 *)PTR_DAT_047d4e00;
    uVar9 = FUN_018a59d0();
    FUN_018a671c(uVar9,param_1 + 0x20,param_1 + 0x28);
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  return;
}


