/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02c7277c; name: FUN_02c7277c
 */


void FUN_02c7277c(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long **pplVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long **pplVar17;
  int iVar18;
  long *plVar19;
  long **pplVar20;
  long **pplVar21;
  long *plVar22;
  long local_178;
  int local_14c;
  undefined8 local_148;
  ulong local_140;
  undefined8 local_138;
  long **local_130;
  long *local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  long local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  long local_f0;
  undefined4 local_e8;
  long *local_e0;
  long *local_d8 [5];
  long *local_b0;
  long *local_a8;
  long local_88;
  undefined4 local_80;
  long *local_78;
  long *aplStack_70 [2];
  
  plVar16 = param_1 + 1;
  plVar19 = (long *)*plVar16;
  pplVar20 = &local_e0;
  *plVar16 = 0;
  local_e0 = plVar19;
  memcpy(local_d8,param_1 + 2,0x28);
  param_1[2] = 0;
  memcpy(&local_b0,param_1 + 7,0x28);
  local_88 = param_1[0xc];
  local_80 = *(undefined4 *)(param_1 + 0xd);
  if (local_88 != 0) {
    plVar8 = (long *)local_b0[1];
    if (((ulong)local_d8[0] & (long)local_d8[0] - 1U) == 0) {
      plVar8 = (long *)((long)local_d8[0] - 1U & (ulong)plVar8);
    }
    else if (local_d8[0] <= plVar8) {
      uVar5 = 0;
      if (local_d8[0] != (long *)0x0) {
        uVar5 = (ulong)plVar8 / (ulong)local_d8[0];
      }
      plVar8 = (long *)((long)plVar8 - uVar5 * (long)local_d8[0]);
    }
    plVar19[(long)plVar8] = (long)&local_b0;
    param_1[7] = 0;
    param_1[0xc] = 0;
  }
  local_138 = *param_1;
  lVar7 = param_1[1];
  local_148 = 0;
  local_140 = 0;
  local_128 = (long *)0x0;
  local_130 = (long **)0x276276276276276;
  local_120 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_118 = 0;
  local_e8 = 0x3f800000;
  local_108 = 0x276276276276276;
  local_100 = 0;
  param_1[1] = 0;
  local_110 = local_138;
  if (lVar7 != 0) {
    lVar9 = param_1[2];
    plVar19 = (long *)param_1[3];
    uVar5 = (**(code **)(*plVar19 + 0xf8))(plVar19);
    if (((uVar5 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar19 + 0x18))(plVar19,lVar7,lVar9 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar19,lVar7,lVar9 << 3,8);
    }
  }
  uVar5 = local_140;
  param_1[2] = local_140;
  param_1[3] = local_138;
  local_140 = 0;
  param_1[5] = local_128;
  param_1[6] = CONCAT44(uStack_11c,local_120);
  param_1[4] = local_130;
  param_1[9] = local_108;
  puVar13 = param_1 + 8;
  *puVar13 = local_110;
  param_1[10] = local_100;
  param_1[0xb] = CONCAT44(uStack_f4,local_f8);
  param_1[0xc] = local_f0;
  *(undefined4 *)(param_1 + 0xd) = local_e8;
  plVar19 = param_1 + 7;
  *plVar19 = local_118;
  if (local_f0 != 0) {
    uVar10 = *(ulong *)(local_118 + 8);
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar10 = uVar10 & uVar5 - 1;
    }
    else if (uVar5 <= uVar10) {
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = uVar10 / uVar5;
      }
      uVar10 = uVar10 - uVar3 * uVar5;
    }
    *(long **)(*plVar16 + uVar10 * 8) = plVar19;
    local_118 = 0;
    local_f0 = 0;
  }
  FUN_028a1890(&local_148);
  iVar4 = nn::aoc::CountAddOnContent();
  FUN_02c74e08(plVar16,(long)((float)(ulong)(long)iVar4 / *(float *)(param_1 + 0xd)));
  plVar8 = local_b0;
  if (0 < iVar4) {
    iVar18 = 0;
LAB_02c72998:
    local_14c = 0;
    nn::aoc::ListAddOnContent(&local_14c,iVar18,1);
    if (local_d8[0] != (long *)0x0) {
      uVar5 = (long)local_d8[0] - ((ulong)local_d8[0] >> 1 & 0x5555555555555555);
      uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
      plVar8 = (long *)(long)local_14c;
      uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar5 < 2) {
        plVar14 = (long *)((long)local_d8[0] - 1U & (ulong)plVar8);
      }
      else {
        plVar14 = plVar8;
        if (local_d8[0] <= plVar8) {
          uVar10 = 0;
          if (local_d8[0] != (long *)0x0) {
            uVar10 = (ulong)plVar8 / (ulong)local_d8[0];
          }
          plVar14 = (long *)((long)plVar8 - uVar10 * (long)local_d8[0]);
        }
      }
      if (((undefined8 *)local_e0[(long)plVar14] != (undefined8 *)0x0) &&
         (pplVar20 = *(long ***)local_e0[(long)plVar14], pplVar20 != (long **)0x0)) {
        if (uVar5 < 2) {
          do {
            pplVar17 = pplVar20 + 1;
            if (*pplVar17 == plVar8) {
              if (*(int *)(pplVar20 + 2) == local_14c) goto LAB_02c72b7c;
            }
            else if ((long *)((ulong)*pplVar17 & (long)local_d8[0] - 1U) != plVar14) break;
            pplVar20 = (long **)*pplVar20;
          } while (pplVar20 != (long **)0x0);
        }
        else {
          do {
            pplVar17 = pplVar20 + 1;
            plVar15 = *pplVar17;
            if (plVar15 == plVar8) {
              if (*(int *)(pplVar20 + 2) == local_14c) goto LAB_02c72b7c;
            }
            else {
              if (local_d8[0] <= plVar15) {
                uVar5 = 0;
                if (local_d8[0] != (long *)0x0) {
                  uVar5 = (ulong)plVar15 / (ulong)local_d8[0];
                }
                plVar15 = (long *)((long)plVar15 - uVar5 * (long)local_d8[0]);
              }
              if (plVar15 != plVar14) break;
            }
            pplVar20 = (long **)*pplVar20;
          } while (pplVar20 != (long **)0x0);
        }
      }
    }
    memset(&local_148,0,0x60);
    FUN_02c731c4(plVar16,&local_14c,&local_148);
    FUN_028a19b0(&local_108,0);
    pplVar20 = local_130;
    local_130 = (long **)0x0;
    if (pplVar20 != (long **)0x0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar7 = FUN_00c4e600();
      iVar2 = *(int *)(lVar7 + 0x12c8);
      iVar1 = iVar2 + 1;
      *(int *)(lVar7 + 0x12c8) = iVar1;
      if (*(int *)(lVar7 + 0x12cc) <= iVar2) {
        *(int *)(lVar7 + 0x12cc) = iVar1;
      }
      FUN_00db239c(pplVar20);
      lVar7 = local_118;
      plVar8 = local_128;
      uVar6 = CONCAT44(uStack_11c,local_120);
      uVar5 = (**(code **)(*local_128 + 0xf8))(local_128);
      if (((uVar5 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,pplVar20,uVar6,lVar7);
      }
      else {
        FUN_00c48fe8(plVar8,pplVar20,uVar6,lVar7);
      }
      pplVar17 = (long **)FUN_00c4e600();
      iVar1 = *(int *)(pplVar17 + 0x259);
      *(int *)(pplVar17 + 0x259) = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        plVar8 = (long *)FUN_00c4e600();
        if (plVar8[600] != 0) {
          local_78 = plVar8 + plVar8[600] * 3;
          aplStack_70[0] = plVar8;
          FUN_00c4ea30(aplStack_70,&local_78);
          plVar15 = (long *)*plVar8;
          plVar14 = plVar8;
          if (plVar8[600] != 0) {
            plVar14 = plVar8 + plVar8[600] * 3;
          }
          if (plVar14 == plVar8) {
            lVar7 = 0;
            local_178 = 0;
          }
          else {
            lVar7 = 0;
            local_178 = 0;
            plVar22 = plVar8;
            do {
              (**(code **)(*(long *)*plVar22 + 0xd0))();
              if ((long *)*plVar22 != plVar15) {
                (**(code **)(*plVar15 + 0x100))(plVar15,plVar8 + local_178 * 3,plVar22);
                plVar15 = (long *)*plVar22;
                local_178 = lVar7;
              }
              plVar22 = plVar22 + 3;
              lVar7 = lVar7 + 1;
            } while (plVar14 != plVar22);
          }
          (**(code **)(*plVar15 + 0x100))(plVar15,plVar8 + local_178 * 3,plVar8 + lVar7 * 3);
          plVar8[600] = 0;
        }
        *(undefined4 *)((long)pplVar17 + 0x12cc) = 0;
        pplVar20 = pplVar17;
      }
    }
    goto LAB_02c72b6c;
  }
joined_r0x02c72e64:
  do {
    if (plVar8 == (long *)0x0) {
      FUN_028a1890(&local_e0);
      return;
    }
    *(undefined1 *)((long)plVar8 + 0x29) = 1;
    plVar14 = (long *)FUN_02c734ec(&local_e0,plVar8 + 2);
    iVar4 = *(int *)(plVar8 + 2);
    pplVar21 = (long **)(long)iVar4;
    pplVar17 = (long **)param_1[2];
    if (pplVar17 == (long **)0x0) {
LAB_02c72f34:
      plVar15 = (long *)(**(code **)(*(long *)*puVar13 + 0x10))((long *)*puVar13,0x78,8);
      if (plVar15 == (long *)0x0) {
        (**(code **)(*(long *)*puVar13 + 0xe8))();
      }
      uVar6 = *puVar13;
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar7 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar7 != 0) {
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar6;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      }
      *(undefined4 *)(plVar15 + 2) = *(undefined4 *)(plVar8 + 2);
      lVar9 = *plVar14;
      lVar12 = plVar14[1];
      *(short *)(plVar15 + 5) = (short)plVar14[2];
      plVar15[3] = lVar9;
      plVar15[4] = lVar12;
      lVar9 = plVar14[3];
      plVar14[3] = 0;
      plVar15[6] = lVar9;
      lVar12 = plVar14[6];
      lVar9 = plVar14[5];
      plVar15[7] = plVar14[4];
      plVar15[8] = lVar9;
      plVar15[9] = lVar12;
      plVar15[10] = plVar14[7];
      lVar9 = plVar14[8];
      plVar14[8] = 0;
      plVar15[0xb] = lVar9;
      lVar9 = plVar14[9];
      lVar12 = plVar14[0xb];
      plVar15[0xd] = plVar14[10];
      plVar15[0xe] = lVar12;
      plVar15[0xc] = lVar9;
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      }
      *plVar15 = 0;
      plVar15[1] = (long)pplVar21;
      if ((pplVar17 == (long **)0x0) ||
         (*(float *)(param_1 + 0xd) * (float)pplVar17 < (float)(param_1[0xc] + 1))) {
        uVar5 = (ulong)(pplVar17 < (long **)0x3 || ((ulong)pplVar17 & (long)pplVar17 - 1U) != 0) |
                (long)pplVar17 << 1;
        uVar10 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
        if (uVar10 <= uVar5) {
          uVar10 = uVar5;
        }
        FUN_02c74e08(plVar16,uVar10);
        pplVar17 = (long **)param_1[2];
        if (((ulong)pplVar17 & (long)pplVar17 - 1U) == 0) {
          pplVar20 = (long **)((long)pplVar17 - 1U & (ulong)pplVar21);
        }
        else if (pplVar21 < pplVar17) {
          pplVar20 = pplVar21;
        }
        else {
          uVar5 = 0;
          if (pplVar17 != (long **)0x0) {
            uVar5 = (ulong)pplVar21 / (ulong)pplVar17;
          }
          pplVar20 = (long **)((long)pplVar21 - uVar5 * (long)pplVar17);
        }
      }
      plVar14 = *(long **)(*plVar16 + (long)pplVar20 * 8);
      if (plVar14 == (long *)0x0) {
        *plVar15 = *plVar19;
        *plVar19 = (long)plVar15;
        *(long **)(*plVar16 + (long)pplVar20 * 8) = plVar19;
        if (*plVar15 != 0) {
          pplVar21 = *(long ***)(*plVar15 + 8);
          if (((ulong)pplVar17 & (long)pplVar17 - 1U) == 0) {
            pplVar21 = (long **)((ulong)pplVar21 & (long)pplVar17 - 1U);
          }
          else if (pplVar17 <= pplVar21) {
            uVar5 = 0;
            if (pplVar17 != (long **)0x0) {
              uVar5 = (ulong)pplVar21 / (ulong)pplVar17;
            }
            pplVar21 = (long **)((long)pplVar21 - uVar5 * (long)pplVar17);
          }
          plVar14 = (long *)(*plVar16 + (long)pplVar21 * 8);
          goto LAB_02c73104;
        }
      }
      else {
        *plVar15 = *plVar14;
LAB_02c73104:
        *plVar14 = (long)plVar15;
      }
      param_1[0xc] = param_1[0xc] + 1;
    }
    else {
      uVar5 = (long)pplVar17 - 1;
      if (((ulong)pplVar17 & uVar5) == 0) {
        pplVar20 = (long **)(uVar5 & (ulong)pplVar21);
        plVar15 = *(long **)(*plVar16 + (long)pplVar20 * 8);
        if (plVar15 == (long *)0x0) goto LAB_02c72f34;
        do {
          plVar15 = (long *)*plVar15;
          if ((plVar15 == (long *)0x0) ||
             ((long **)plVar15[1] != pplVar21 && (long **)((ulong)plVar15[1] & uVar5) != pplVar20))
          goto LAB_02c72f34;
        } while (*(int *)(plVar15 + 2) != iVar4);
      }
      else {
        pplVar20 = pplVar21;
        if (pplVar17 <= pplVar21) {
          uVar5 = 0;
          if (pplVar17 != (long **)0x0) {
            uVar5 = (ulong)pplVar21 / (ulong)pplVar17;
          }
          pplVar20 = (long **)((long)pplVar21 - uVar5 * (long)pplVar17);
        }
        plVar15 = *(long **)(*plVar16 + (long)pplVar20 * 8);
        if (plVar15 == (long *)0x0) goto LAB_02c72f34;
        do {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_02c72f34;
          pplVar11 = (long **)plVar15[1];
          if (pplVar11 != pplVar21) {
            if (pplVar17 <= pplVar11) {
              uVar5 = 0;
              if (pplVar17 != (long **)0x0) {
                uVar5 = (ulong)pplVar11 / (ulong)pplVar17;
              }
              pplVar11 = (long **)((long)pplVar11 - uVar5 * (long)pplVar17);
            }
            if (pplVar11 != pplVar20) goto LAB_02c72f34;
          }
        } while (*(int *)(plVar15 + 2) != iVar4);
      }
    }
    plVar8 = (long *)*plVar8;
  } while( true );
LAB_02c72b7c:
  *(undefined1 *)((long)pplVar20 + 0x29) = 0;
  uVar6 = FUN_02c734ec(&local_e0,&local_14c);
  FUN_02c731c4(plVar16,&local_14c,uVar6);
  uVar5 = (long)local_d8[0] - ((ulong)local_d8[0] >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  plVar8 = *pplVar17;
  uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar5 < 2) {
    plVar8 = (long *)((long)local_d8[0] - 1U & (ulong)plVar8);
  }
  else if (local_d8[0] <= plVar8) {
    uVar10 = 0;
    if (local_d8[0] != (long *)0x0) {
      uVar10 = (ulong)plVar8 / (ulong)local_d8[0];
    }
    plVar8 = (long *)((long)plVar8 - uVar10 * (long)local_d8[0]);
  }
  pplVar17 = (long **)local_e0[(long)plVar8];
  do {
    pplVar21 = pplVar17;
    pplVar17 = (long **)*pplVar21;
  } while ((long **)*pplVar21 != pplVar20);
  if (pplVar21 != &local_b0) {
    plVar14 = pplVar21[1];
    if (uVar5 < 2) {
      plVar14 = (long *)((ulong)plVar14 & (long)local_d8[0] - 1U);
    }
    else if (local_d8[0] <= plVar14) {
      uVar10 = 0;
      if (local_d8[0] != (long *)0x0) {
        uVar10 = (ulong)plVar14 / (ulong)local_d8[0];
      }
      plVar14 = (long *)((long)plVar14 - uVar10 * (long)local_d8[0]);
    }
    if (plVar14 == plVar8) goto LAB_02c72c88;
  }
  if (*pplVar20 != (long *)0x0) {
    plVar14 = (long *)(*pplVar20)[1];
    if (uVar5 < 2) {
      plVar14 = (long *)((ulong)plVar14 & (long)local_d8[0] - 1U);
    }
    else if (local_d8[0] <= plVar14) {
      uVar10 = 0;
      if (local_d8[0] != (long *)0x0) {
        uVar10 = (ulong)plVar14 / (ulong)local_d8[0];
      }
      plVar14 = (long *)((long)plVar14 - uVar10 * (long)local_d8[0]);
    }
    if (plVar14 == plVar8) goto LAB_02c72c88;
  }
  local_e0[(long)plVar8] = 0;
LAB_02c72c88:
  plVar14 = *pplVar20;
  if (plVar14 != (long *)0x0) {
    plVar15 = (long *)plVar14[1];
    if (uVar5 < 2) {
      plVar15 = (long *)((ulong)plVar15 & (long)local_d8[0] - 1U);
    }
    else if (local_d8[0] <= plVar15) {
      uVar5 = 0;
      if (local_d8[0] != (long *)0x0) {
        uVar5 = (ulong)plVar15 / (ulong)local_d8[0];
      }
      plVar15 = (long *)((long)plVar15 - uVar5 * (long)local_d8[0]);
    }
    if (plVar15 != plVar8) {
      local_e0[(long)plVar15] = (long)pplVar21;
      plVar14 = *pplVar20;
    }
  }
  *pplVar21 = plVar14;
  *pplVar20 = (long *)0x0;
  local_88 = local_88 + -1;
  FUN_02c74b08(pplVar20 + 2);
  plVar8 = local_a8;
  uVar5 = (**(code **)(*local_a8 + 0xf8))(local_a8);
  if (((uVar5 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
    (**(code **)(*plVar8 + 0x18))(plVar8,pplVar20,0x78,8);
  }
  else {
    FUN_00c48fe8(plVar8,pplVar20,0x78,8);
  }
LAB_02c72b6c:
  iVar18 = iVar18 + 1;
  plVar8 = local_b0;
  if (iVar18 == iVar4) goto joined_r0x02c72e64;
  goto LAB_02c72998;
}


