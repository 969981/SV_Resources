/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012e68e4; name: FUN_012e68e4
 */


/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_012e68e4(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  long **pplVar5;
  int iVar6;
  uint extraout_var;
  uint *puVar7;
  long lVar8;
  long **pplVar9;
  long lVar10;
  int extraout_w1;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ushort *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long *plVar18;
  long **pplVar19;
  size_t __n;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  long **local_160;
  long **local_158;
  long **local_150;
  long *local_148;
  ulong local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  long local_128;
  long *local_120;
  long *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  long **local_f8;
  long *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  long local_d0;
  float local_c8;
  uint *local_c0;
  long *plStack_b8;
  size_t local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  long **local_90;
  long **local_88;
  long **local_80;
  long **local_78;
  long **local_70;
  
  lVar23 = (long)(int)param_2[5];
  plVar22 = param_1 + lVar23 * 0x1b + 0x15;
  if ((*plVar22 == 0) && (iVar6 = FUN_0172bf60(param_2), iVar6 == 1)) {
    FUN_012e75d0(&local_128,*param_1);
    lVar8 = local_128;
    local_128 = 0;
    lVar11 = *plVar22;
    *plVar22 = lVar8;
    if (lVar11 == 0) {
      puVar16 = param_1 + lVar23 * 0x1b + 0x16;
      *puVar16 = local_120;
      param_1[lVar23 * 0x1b + 0x17] = local_118;
      param_1[lVar23 * 0x1b + 0x18] = local_110;
    }
    else {
      puVar16 = param_1 + lVar23 * 0x1b + 0x16;
      FUN_028a42bc(puVar16);
      param_1[lVar23 * 0x1b + 0x17] = local_118;
      param_1[lVar23 * 0x1b + 0x18] = local_110;
      param_1[lVar23 * 0x1b + 0x16] = local_120;
      lVar8 = *plVar22;
    }
    puVar2 = (undefined8 *)PTR_PTR_047d4508;
    if (*param_2 != 0) {
      puVar2 = (undefined8 *)(*param_2 + 0x38);
    }
    FUN_00cf9fc0(lVar8,*puVar2,1);
    if (extraout_w1 == 0 && (extraout_var & 0xff) != 0) {
      local_a0 = 0;
      local_98 = 0;
      iVar6 = nn::fs::ReadFile(*(undefined8 *)(*plVar22 + 0x10),0,&local_a0,0x10);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("handle->Read(&header, sizeof(header), 0)","OpenArchiveStorage",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/fs/archive_storage_system.cpp"
                   ,0x3a);
      }
      plVar20 = (long *)*param_1;
      __n = *(long *)*plVar22 - local_98;
      puVar7 = (uint *)(**(code **)(*plVar20 + 0x10))(plVar20,__n,1);
      if (puVar7 == (uint *)0x0) {
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = (uint *)0x0;
        plStack_b8 = (long *)0x0;
      }
      else {
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_012e71bc:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar20;
        lVar11 = *(long *)(lVar8 + 0x80) + 1;
        *(long *)(lVar8 + 0x80) = lVar11;
        if (__n != 0) {
          memset(puVar7,0,__n);
          lVar11 = *(long *)(lVar8 + 0x80);
        }
        uStack_a8 = 1;
        *(long *)(lVar8 + 0x80) = lVar11 + -1;
        local_c0 = puVar7;
        plStack_b8 = plVar20;
        local_b0 = __n;
      }
      iVar6 = nn::fs::ReadFile(*(undefined8 *)(*plVar22 + 0x10),local_98,puVar7,__n);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("handle->Read(buffer.get(), bufferSize, header.tableOffset)","OpenArchiveStorage"
                   ,
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/fs/archive_storage_system.cpp"
                   ,0x3f);
      }
      local_148 = (long *)*param_1;
      local_128 = 0;
      local_120 = (long *)0x0;
      local_110 = 0xfffffffffffffff;
      piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
      local_108 = 0;
      local_100 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 1.0;
      local_130 = 0;
      local_f8 = (long **)0x0;
      local_e8 = 0xfffffffffffffff;
      uStack_e0 = 0;
      local_160 = (long **)0x0;
      local_158 = (long **)0x0;
      local_150 = (long **)0x0;
      local_140 = 0xfffffffffffffff;
      local_138 = 0;
      puVar14 = (ushort *)((long)piVar1 - (long)*piVar1);
      if (*puVar14 < 5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar7 = (uint *)((long)piVar1 + (ulong)puVar14[2]);
      puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
      uVar4 = *puVar7;
      puVar3 = (uint *)0x0;
      if (puVar14[2] != 0) {
        puVar3 = puVar7;
      }
      if ((*puVar14 < 7) || ((ulong)puVar14[3] == 0)) {
        lVar8 = 0;
      }
      else {
        puVar7 = (uint *)((long)piVar1 + (ulong)puVar14[3]);
        lVar8 = (long)puVar7 + (ulong)*puVar7;
      }
      local_118 = local_148;
      local_f0 = local_148;
      if (uVar4 != 0) {
        uVar21 = 0;
        do {
          plVar22 = *(long **)(puVar3 + uVar21 * 2 + 1);
          pplVar9 = (long **)(**(code **)(*local_f0 + 0x10))(local_f0,0x20,8);
          if (pplVar9 == (long **)0x0) {
            (**(code **)(*local_f0 + 0xe8))();
          }
          plVar20 = local_f0;
          local_80 = (long **)((ulong)local_80 & 0xffffffffffffff00);
          local_90 = pplVar9;
          local_88 = &local_f0;
          if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar11 = nn::os::GetTlsValue(DAT_04865a30);
          pplVar19 = local_90;
          if (lVar11 == 0) {
            pplVar9[2] = plVar22;
            *(int *)(pplVar9 + 3) = (int)uVar21;
          }
          else {
            if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_012e71bc;
            *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar20;
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
            pplVar9[2] = plVar22;
            *(int *)(pplVar9 + 3) = (int)uVar21;
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
            plVar22 = pplVar9[2];
          }
          local_80 = (long **)CONCAT71(local_80._1_7_,1);
          *pplVar9 = (long *)0x0;
          pplVar9[1] = plVar22;
          if (local_120 == (long *)0x0) {
LAB_012e6c88:
            if ((local_120 == (long *)0x0) || (local_c8 * (float)local_120 < (float)(local_d0 + 1)))
            {
              uVar13 = (ulong)(local_120 < (long *)0x3 ||
                              ((ulong)local_120 & (long)local_120 - 1U) != 0) | (long)local_120 << 1
              ;
              uVar17 = (ulong)((float)(local_d0 + 1) / local_c8);
              if (uVar17 <= uVar13) {
                uVar17 = uVar13;
              }
              FUN_01012fac(&local_128,uVar17);
              plVar22 = pplVar9[1];
            }
            uVar13 = (long)local_120 - ((ulong)local_120 >> 1 & 0x5555555555555555);
            uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
            uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar13 < 2) {
              plVar22 = (long *)((long)local_120 - 1U & (ulong)plVar22);
            }
            else if (local_120 <= plVar22) {
              uVar17 = 0;
              if (local_120 != (long *)0x0) {
                uVar17 = (ulong)plVar22 / (ulong)local_120;
              }
              plVar22 = (long *)((long)plVar22 - uVar17 * (long)local_120);
            }
            puVar16 = *(undefined8 **)(local_128 + (long)plVar22 * 8);
            if (puVar16 == (undefined8 *)0x0) {
              *pplVar9 = (long *)local_f8;
              local_f8 = pplVar9;
              *(long ****)(local_128 + (long)plVar22 * 8) = &local_f8;
              if (*pplVar9 != (long *)0x0) {
                plVar22 = (long *)(*pplVar9)[1];
                if (uVar13 < 2) {
                  plVar22 = (long *)((ulong)plVar22 & (long)local_120 - 1U);
                }
                else if (local_120 <= plVar22) {
                  uVar13 = 0;
                  if (local_120 != (long *)0x0) {
                    uVar13 = (ulong)plVar22 / (ulong)local_120;
                  }
                  plVar22 = (long *)((long)plVar22 - uVar13 * (long)local_120);
                }
                puVar16 = (undefined8 *)(local_128 + (long)plVar22 * 8);
                goto LAB_012e6d50;
              }
            }
            else {
              *pplVar9 = (long *)*puVar16;
LAB_012e6d50:
              *puVar16 = pplVar9;
            }
            local_d0 = local_d0 + 1;
            local_90 = (long **)0x0;
          }
          else {
            uVar13 = (long)local_120 - 1;
            if (((ulong)local_120 & uVar13) == 0) {
              plVar20 = *(long **)(local_128 + (uVar13 & (ulong)plVar22) * 8);
              if (plVar20 == (long *)0x0) goto LAB_012e6c88;
              do {
                plVar20 = (long *)*plVar20;
                if ((plVar20 == (long *)0x0) || ((plVar20[1] & uVar13) != (uVar13 & (ulong)plVar22))
                   ) goto LAB_012e6c88;
              } while ((long *)plVar20[2] != plVar22);
            }
            else {
              plVar20 = plVar22;
              if (local_120 <= plVar22) {
                uVar13 = 0;
                if (local_120 != (long *)0x0) {
                  uVar13 = (ulong)plVar22 / (ulong)local_120;
                }
                plVar20 = (long *)((long)plVar22 - uVar13 * (long)local_120);
              }
              plVar15 = *(long **)(local_128 + (long)plVar20 * 8);
              if (plVar15 == (long *)0x0) goto LAB_012e6c88;
              do {
                plVar15 = (long *)*plVar15;
                if (plVar15 == (long *)0x0) goto LAB_012e6c88;
                plVar18 = (long *)plVar15[1];
                if (local_120 <= plVar18) {
                  uVar13 = 0;
                  if (local_120 != (long *)0x0) {
                    uVar13 = (ulong)plVar18 / (ulong)local_120;
                  }
                  plVar18 = (long *)((long)plVar18 - uVar13 * (long)local_120);
                }
                if (plVar18 != plVar20) goto LAB_012e6c88;
              } while ((long *)plVar15[2] != plVar22);
            }
            local_90 = (long **)0x0;
            if (pplVar19 != (long **)0x0) {
              FUN_012e8ae0(&local_88);
            }
          }
          plVar20 = local_148;
          pplVar9 = local_158;
          puVar16 = (undefined8 *)(lVar8 + 4 + uVar21 * 8);
          plVar15 = (long *)*puVar16;
          plVar22 = &local_98;
          if (uVar21 != uVar4 - 1) {
            plVar22 = puVar16 + 1;
          }
          plVar22 = (long *)*plVar22;
          if (local_158 < local_150) {
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar11 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar11 == 0) {
              *pplVar9 = plVar15;
              pplVar9[1] = plVar22;
            }
            else {
              if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_012e71bc;
              *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar20;
              *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
              *pplVar9 = plVar15;
              pplVar9[1] = plVar22;
              *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
            }
            local_158 = pplVar9 + 2;
          }
          else {
            lVar11 = (long)local_158 - (long)local_160 >> 4;
            uVar13 = lVar11 + 1;
            uVar17 = local_140;
            if (0x7ffffffffffffffe < local_140) {
              uVar17 = 0x7fffffffffffffff;
            }
            if (uVar17 < uVar13) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            uVar12 = (long)local_150 - (long)local_160 >> 3;
            if (uVar13 <= uVar12) {
              uVar13 = uVar12;
            }
            if (uVar17 >> 1 <= (ulong)((long)local_150 - (long)local_160 >> 4)) {
              uVar13 = uVar17;
            }
            local_78 = (long **)0x0;
            local_70 = &local_148;
            if (uVar13 == 0) {
              pplVar9 = (long **)0x0;
            }
            else {
              pplVar9 = (long **)(**(code **)(*local_148 + 0x10))(local_148,uVar13 << 4,8);
              if (pplVar9 == (long **)0x0) {
                (**(code **)(*local_148 + 0xe8))();
              }
            }
            plVar20 = local_148;
            pplVar19 = pplVar9 + lVar11 * 2;
            local_78 = pplVar9 + uVar13 * 2;
            local_90 = pplVar9;
            local_88 = pplVar19;
            local_80 = pplVar19;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar11 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar11 == 0) {
              *pplVar19 = plVar15;
              pplVar19[1] = plVar22;
            }
            else {
              if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_012e71bc;
              *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar20;
              *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
              *pplVar19 = plVar15;
              pplVar19[1] = plVar22;
              *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
              pplVar19 = local_80;
            }
            local_80 = pplVar19 + 2;
            FUN_012e72c0(&local_148,local_160,local_158,&local_88);
            pplVar5 = local_150;
            pplVar19 = local_158;
            pplVar9 = local_160;
            local_90 = local_160;
            local_160 = local_88;
            local_158 = local_80;
            local_150 = local_78;
            local_88 = pplVar9;
            local_80 = pplVar19;
            local_78 = pplVar5;
            if ((long)pplVar19 - (long)pplVar9 != 0) {
              local_80 = pplVar19 +
                         (((long)pplVar19 - (long)pplVar9) - 0x10U >> 4 ^ 0xffffffffffffffff) * 2;
            }
            if (pplVar9 != (long **)0x0) {
              lVar11 = (long)pplVar5 - (long)pplVar9;
              plVar22 = *local_70;
              uVar13 = (**(code **)(*plVar22 + 0xf8))(plVar22);
              if (((uVar13 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
                (**(code **)(*plVar22 + 0x18))(plVar22,pplVar9,lVar11,8);
              }
              else {
                FUN_00c48fe8(plVar22,pplVar9,lVar11,8);
              }
            }
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar4);
      }
      FUN_014237e0(param_1 + lVar23 * 0x1b + 1,&local_128);
      FUN_012e73e4(param_1 + lVar23 * 0x1b + 0xe);
      param_1[lVar23 * 0x1b + 0x13] = local_138;
      param_1[lVar23 * 0x1b + 0x14] = CONCAT44(uStack_12c,local_130);
      param_1[lVar23 * 0x1b + 0x11] = local_148;
      param_1[lVar23 * 0x1b + 0x12] = local_140;
      param_1[lVar23 * 0x1b + 0xe] = local_160;
      param_1[lVar23 * 0x1b + 0xf] = local_158;
      param_1[lVar23 * 0x1b + 0x10] = local_150;
      local_160 = (long **)0x0;
      local_158 = (long **)0x0;
      local_150 = (long **)0x0;
      FUN_012e7480(&local_160);
      FUN_012e76d0(&local_128);
      FUN_012e7520(&local_c0);
      return 1;
    }
    lVar23 = *plVar22;
    *plVar22 = 0;
    if (lVar23 != 0) {
      FUN_028a42bc(puVar16);
    }
  }
  return 0;
}


