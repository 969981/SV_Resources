/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b9d258; name: FUN_00b9d258
 */


void FUN_00b9d258(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong *puVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  undefined8 *puVar17;
  size_t sVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 local_290;
  undefined4 local_288;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_140;
  undefined4 local_138;
  byte *local_110;
  size_t local_108;
  void *local_100;
  byte *local_e0;
  undefined8 local_d8;
  long local_d0;
  ulong local_b0 [4];
  size_t local_90;
  void *local_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  
  puVar2 = PTR_DAT_047dac30;
  if (*(long *)(param_2 + 0x20) == 0) {
    lVar7 = *(long *)PTR_DAT_047dac30;
    if (lVar7 == 0) {
      FUN_00bb5d70();
      lVar7 = *(long *)puVar2;
    }
    *(long *)(param_2 + 0x20) = lVar7;
  }
  if (0 < *(int *)(param_2 + 0x48)) {
    lVar13 = 0;
    lVar7 = 0;
    do {
      FUN_00b9d258(param_1,*(long *)(param_2 + 0x50) + lVar13,
                   *(undefined8 *)(*(long *)(param_3 + 0x60) + lVar7 * 8 + 8));
      lVar7 = lVar7 + 1;
      lVar13 = lVar13 + 0xa8;
    } while (lVar7 < *(int *)(param_2 + 0x48));
  }
  puVar2 = PTR_DAT_047dabe8;
  if (0 < *(int *)(param_2 + 0x58)) {
    lVar7 = 0;
    do {
      lVar13 = *(long *)(param_2 + 0x60);
      plVar14 = (long *)(lVar13 + lVar7 * 0x38 + 0x20);
      if (*plVar14 == 0) {
        lVar8 = *(long *)PTR_DAT_047dac48;
        if (lVar8 == 0) {
          FUN_00bb5d70();
          lVar8 = *(long *)PTR_DAT_047dac48;
        }
        *plVar14 = lVar8;
      }
      piVar16 = (int *)(lVar13 + lVar7 * 0x38 + 0x2c);
      iVar3 = *piVar16;
      if (0 < iVar3) {
        lVar8 = 0;
        lVar20 = 0x20;
        do {
          lVar15 = *(long *)(lVar13 + lVar7 * 0x38 + 0x30);
          if (*(long *)(lVar15 + lVar20) == 0) {
            lVar9 = *(long *)puVar2;
            if (lVar9 == 0) {
              FUN_00bb5d70();
              lVar9 = *(long *)puVar2;
            }
            *(long *)(lVar15 + lVar20) = lVar9;
            iVar3 = *piVar16;
          }
          lVar8 = lVar8 + 1;
          lVar20 = lVar20 + 0x28;
        } while (lVar8 < iVar3);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_2 + 0x58));
  }
  uVar10 = (ulong)*(uint *)(param_2 + 0x2c);
  if (0 < (int)*(uint *)(param_2 + 0x2c)) {
    lVar13 = 0;
    lVar7 = 0;
    do {
      FUN_00b9def4(param_1,*(long *)(param_2 + 0x30) + lVar13,
                   *(undefined8 *)(*(long *)(param_3 + 0x30) + lVar7 * 8 + 8));
      uVar10 = (ulong)*(int *)(param_2 + 0x2c);
      lVar7 = lVar7 + 1;
      lVar13 = lVar13 + 0x90;
    } while (lVar7 < (long)uVar10);
  }
  if (0 < *(int *)(param_2 + 0x78)) {
    lVar13 = 0;
    lVar7 = 0;
    do {
      FUN_00b9def4(param_1,*(long *)(param_2 + 0x80) + lVar13,
                   *(undefined8 *)(*(long *)(param_3 + 0x48) + lVar7 * 8 + 8));
      lVar7 = lVar7 + 1;
      lVar13 = lVar13 + 0x90;
    } while (lVar7 < *(int *)(param_2 + 0x78));
    uVar10 = (ulong)*(uint *)(param_2 + 0x2c);
  }
  lVar7 = tpidr_el0;
  if (0 < (int)uVar10) {
    lVar8 = 0;
    lVar13 = 0;
    do {
      lVar20 = *(long *)(param_2 + 0x30) + lVar8;
      puVar17 = *(undefined8 **)(lVar20 + 0x58);
      if (puVar17 != (undefined8 *)0x0) {
        if ((0 < *(int *)((long)puVar17 + 0x1c)) && (*(undefined8 **)(lVar20 + -0x38) != puVar17)) {
          pbVar11 = *(byte **)(param_2 + 8);
          local_90 = 0;
          local_88 = (void *)0x0;
          local_b0[3] = 0;
          if ((*pbVar11 & 1) == 0) {
            sVar18 = (size_t)(*pbVar11 >> 1);
            pbVar11 = pbVar11 + 1;
          }
          else {
            sVar18 = *(size_t *)(pbVar11 + 8);
            pbVar11 = *(byte **)(pbVar11 + 0x10);
          }
          if (0xffffffffffffffef < sVar18 + 1) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (sVar18 + 1 < 0x17) {
            local_b0[3] = (ulong)(byte)((int)sVar18 << 1);
            pvVar6 = (void *)((ulong)(local_b0 + 3) | 1);
            if (sVar18 != 0) goto LAB_00b9d53c;
          }
          else {
            uVar10 = sVar18 + 0x11 & 0xfffffffffffffff0;
            plVar14 = *(long **)(lVar7 + 0x30);
            if (plVar14 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar14 = DAT_04859430;
              *(long **)(lVar7 + 0x30) = DAT_04859430;
            }
            pvVar6 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar10,8);
            local_b0[3] = uVar10 | 1;
            local_90 = sVar18;
            local_88 = pvVar6;
LAB_00b9d53c:
            memcpy(pvVar6,pbVar11,sVar18);
          }
          *(undefined1 *)((long)pvVar6 + sVar18) = 0;
          std::string::append((char *)(local_b0 + 3),0x3bdface);
          pbVar12 = *(byte **)(*(long *)(param_2 + 0x30) + lVar8 + -0x90);
          pbVar11 = *(byte **)(pbVar12 + 0x10);
          if ((*pbVar12 & 1) == 0) {
            pbVar11 = pbVar12 + 1;
          }
          puVar4 = (ulong *)std::string::append((char *)(local_b0 + 3),(ulong)pbVar11);
          uStack_78 = puVar4[1];
          local_70 = puVar4[2];
          local_80 = *puVar4;
          puVar4[1] = 0;
          puVar4[2] = 0;
          *puVar4 = 0;
          pbVar11 = *(byte **)(*(long *)(param_2 + 0x30) + lVar8 + -0x90);
          local_e0 = *(byte **)(pbVar11 + 0x10);
          uVar19 = *(undefined8 *)(*(long *)(param_3 + 0x30) + lVar13 * 8);
          if ((*pbVar11 & 1) == 0) {
            local_e0 = pbVar11 + 1;
          }
          uVar1 = (uint)(*pbVar11 >> 1);
          if ((*pbVar11 & 1) != 0) {
            uVar1 = (uint)*(undefined8 *)(pbVar11 + 8);
          }
          local_d8 = CONCAT44(local_d8._4_4_,uVar1);
          pbVar11 = (byte *)*puVar17;
          local_110 = *(byte **)(pbVar11 + 0x10);
          if ((*pbVar11 & 1) == 0) {
            local_110 = pbVar11 + 1;
          }
          local_138 = 0xffffffff;
          local_168 = 0xffffffff;
          local_198 = 0xffffffff;
          local_1c8 = 0xffffffff;
          local_1f8 = 0xffffffff;
          local_228 = 0xffffffff;
          local_258 = 0xffffffff;
          local_288 = 0xffffffff;
          local_b0[1] = 0;
          local_b0[2] = 0;
          uVar1 = (uint)(*pbVar11 >> 1);
          if ((*pbVar11 & 1) != 0) {
            uVar1 = (uint)*(undefined8 *)(pbVar11 + 8);
          }
          local_108 = CONCAT44(local_108._4_4_,uVar1);
          local_140 = 0;
          local_1a0 = 0;
          local_200 = 0;
          local_b0[0] = 0;
          local_170 = 0;
          local_1d0 = 0;
          local_230 = 0;
          local_260 = 0;
          local_290 = 0;
          FUN_00c2ce10(local_b0,
                       "Fields in the same oneof must be defined consecutively. \"$0\" cannot be defined before the completion of the \"$1\" oneof definition."
                       ,&local_e0,&local_110,&local_140,&local_170,&local_1a0,&local_1d0,&local_200,
                       &local_230,&local_260,&local_290);
          FUN_00b89f94(param_1,&local_80,uVar19,9,local_b0);
          uVar10 = local_b0[2];
          if (((local_b0[0] & 1) != 0) && (local_b0[2] != 0)) {
            plVar14 = *(long **)(lVar7 + 0x30);
            if (plVar14 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar14 = DAT_04859430;
              *(long **)(lVar7 + 0x30) = DAT_04859430;
            }
            uVar5 = (**(code **)(*plVar14 + 0xf8))(plVar14);
            if (((uVar5 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
              (**(code **)(*plVar14 + 0x18))(plVar14,uVar10,0,8);
            }
            else {
              FUN_00c48fe8(plVar14,uVar10,0,8);
            }
          }
          uVar10 = local_70;
          if (((local_80 & 1) != 0) && (local_70 != 0)) {
            plVar14 = *(long **)(lVar7 + 0x30);
            if (plVar14 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar14 = DAT_04859430;
              *(long **)(lVar7 + 0x30) = DAT_04859430;
            }
            uVar5 = (**(code **)(*plVar14 + 0xf8))(plVar14);
            if (((uVar5 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
              (**(code **)(*plVar14 + 0x18))(plVar14,uVar10,0,8);
            }
            else {
              FUN_00c48fe8(plVar14,uVar10,0,8);
            }
          }
          pvVar6 = local_88;
          if (((local_b0[3] & 1) != 0) && (local_88 != (void *)0x0)) {
            plVar14 = *(long **)(lVar7 + 0x30);
            if (plVar14 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar14 = DAT_04859430;
              *(long **)(lVar7 + 0x30) = DAT_04859430;
            }
            uVar10 = (**(code **)(*plVar14 + 0xf8))(plVar14);
            if (((uVar10 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
              (**(code **)(*plVar14 + 0x18))(plVar14,pvVar6,0,8);
            }
            else {
              FUN_00c48fe8(plVar14,pvVar6,0,8);
            }
          }
        }
        lVar20 = *(long *)(param_2 + 0x40) +
                 (long)((int)((ulong)((long)puVar17 - *(long *)(puVar17[2] + 0x40)) >> 4) *
                       -0x55555555) * 0x30;
        *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
        uVar10 = (ulong)*(uint *)(param_2 + 0x2c);
      }
      lVar13 = lVar13 + 1;
      lVar8 = lVar8 + 0x90;
    } while (lVar13 < (int)uVar10);
  }
  if (0 < *(int *)(param_2 + 0x38)) {
    lVar8 = 0;
    lVar13 = 0;
    do {
      lVar15 = *(long *)(param_2 + 0x40);
      lVar20 = lVar15 + lVar8;
      iVar3 = *(int *)(lVar20 + 0x1c);
      if (iVar3 == 0) {
        pbVar11 = *(byte **)(param_2 + 8);
        local_108 = 0;
        local_100 = (void *)0x0;
        local_110 = (byte *)0x0;
        if ((*pbVar11 & 1) == 0) {
          sVar18 = (size_t)(*pbVar11 >> 1);
          pbVar11 = pbVar11 + 1;
        }
        else {
          sVar18 = *(size_t *)(pbVar11 + 8);
          pbVar11 = *(byte **)(pbVar11 + 0x10);
        }
        if (0xffffffffffffffef < sVar18 + 1) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar18 + 1 < 0x17) {
          local_110 = (byte *)(ulong)(byte)((int)sVar18 << 1);
          pvVar6 = (void *)((ulong)&local_110 | 1);
          if (sVar18 != 0) goto LAB_00b9db20;
        }
        else {
          uVar10 = sVar18 + 0x11 & 0xfffffffffffffff0;
          plVar14 = *(long **)(lVar7 + 0x30);
          if (plVar14 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar14 = DAT_04859430;
            *(long **)(lVar7 + 0x30) = DAT_04859430;
          }
          pvVar6 = (void *)(**(code **)(*plVar14 + 0x10))(plVar14,uVar10,8);
          local_110 = (byte *)(uVar10 | 1);
          local_108 = sVar18;
          local_100 = pvVar6;
LAB_00b9db20:
          memcpy(pvVar6,pbVar11,sVar18);
        }
        *(undefined1 *)((long)pvVar6 + sVar18) = 0;
        std::string::append((char *)&local_110,0x3bdface);
        pbVar12 = *(byte **)(lVar15 + lVar8);
        pbVar11 = *(byte **)(pbVar12 + 0x10);
        if ((*pbVar12 & 1) == 0) {
          pbVar11 = pbVar12 + 1;
        }
        puVar17 = (undefined8 *)std::string::append((char *)&local_110,(ulong)pbVar11);
        local_d8 = puVar17[1];
        local_d0 = puVar17[2];
        local_e0 = (byte *)*puVar17;
        puVar17[1] = 0;
        puVar17[2] = 0;
        *puVar17 = 0;
        FUN_00b8a120(param_1,&local_e0,*(undefined8 *)(*(long *)(param_3 + 0xa8) + lVar13 * 8 + 8),0
                     ,"Oneof must have at least one field.");
        lVar15 = local_d0;
        if ((((ulong)local_e0 & 1) != 0) && (local_d0 != 0)) {
          plVar14 = *(long **)(lVar7 + 0x30);
          if (plVar14 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar14 = DAT_04859430;
            *(long **)(lVar7 + 0x30) = DAT_04859430;
          }
          uVar10 = (**(code **)(*plVar14 + 0xf8))(plVar14);
          if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
            (**(code **)(*plVar14 + 0x18))(plVar14,lVar15,0,8);
          }
          else {
            FUN_00c48fe8(plVar14,lVar15,0,8);
          }
        }
        pvVar6 = local_100;
        if ((((ulong)local_110 & 1) != 0) && (local_100 != (void *)0x0)) {
          plVar14 = *(long **)(lVar7 + 0x30);
          if (plVar14 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar14 = DAT_04859430;
            *(long **)(lVar7 + 0x30) = DAT_04859430;
          }
          uVar10 = (**(code **)(*plVar14 + 0xf8))(plVar14);
          if (((uVar10 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
            (**(code **)(*plVar14 + 0x18))(plVar14,pvVar6,0,8);
          }
          else {
            FUN_00c48fe8(plVar14,pvVar6,0,8);
          }
        }
        iVar3 = *(int *)(lVar20 + 0x1c);
      }
      uVar19 = FUN_00b7a704(*(undefined8 *)(param_1 + 8),iVar3 << 3);
      *(undefined8 *)(lVar20 + 0x20) = uVar19;
      *(undefined4 *)(lVar20 + 0x1c) = 0;
      if (*(long *)(lVar20 + 0x28) == 0) {
        lVar15 = *(long *)PTR_DAT_047dac20;
        if (lVar15 == 0) {
          FUN_00bb5d70();
          lVar15 = *(long *)PTR_DAT_047dac20;
        }
        *(long *)(lVar20 + 0x28) = lVar15;
      }
      lVar13 = lVar13 + 1;
      lVar8 = lVar8 + 0x30;
    } while (lVar13 < *(int *)(param_2 + 0x38));
    uVar10 = (ulong)*(uint *)(param_2 + 0x2c);
  }
  if (0 < (int)uVar10) {
    lVar13 = 0;
    lVar7 = 0;
    do {
      lVar8 = *(long *)(param_2 + 0x30) + lVar13;
      lVar20 = *(long *)(lVar8 + 0x58);
      if (lVar20 != 0) {
        lVar20 = *(long *)(param_2 + 0x40) +
                 (long)((int)((ulong)(lVar20 - *(long *)(*(long *)(lVar20 + 0x10) + 0x40)) >> 4) *
                       -0x55555555) * 0x30;
        *(undefined4 *)(lVar8 + 0x48) = *(undefined4 *)(lVar20 + 0x1c);
        lVar8 = *(long *)(param_2 + 0x30);
        iVar3 = *(int *)(lVar20 + 0x1c);
        *(int *)(lVar20 + 0x1c) = iVar3 + 1;
        *(long *)(*(long *)(lVar20 + 0x20) + (long)iVar3 * 8) = lVar8 + lVar13;
        uVar10 = (ulong)*(uint *)(param_2 + 0x2c);
      }
      lVar7 = lVar7 + 1;
      lVar13 = lVar13 + 0x90;
    } while (lVar7 < (int)uVar10);
  }
  return;
}


