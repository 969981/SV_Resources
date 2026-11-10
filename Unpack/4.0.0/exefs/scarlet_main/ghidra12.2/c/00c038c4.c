/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c038c4; name: FUN_00c038c4
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00c038c4(ulong *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  ulong uVar9;
  byte bVar10;
  undefined1 *puVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  void *pvVar20;
  undefined8 uVar21;
  int iVar22;
  undefined ***pppuVar23;
  undefined **ppuVar24;
  int iVar25;
  byte *pbVar26;
  ulong uVar27;
  code *pcVar28;
  undefined ***pppuVar29;
  uint *puVar30;
  int *piVar31;
  byte *pbVar32;
  byte *pbVar33;
  int iVar34;
  long lVar35;
  long *plVar36;
  undefined4 uVar37;
  undefined1 auVar38 [16];
  undefined *local_110;
  ulong *puStack_108;
  undefined **local_100;
  byte *local_f8;
  undefined8 local_f0;
  undefined1 uStack_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined1 *local_a8;
  void *local_a0;
  undefined8 local_98;
  ulong local_90;
  ulong local_88;
  undefined1 *local_80;
  byte abStack_78 [8];
  byte *local_70 [2];
  
  lVar15 = (**(code **)(*param_2 + 0xb8))(param_2);
  plVar16 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  if (lVar15 == 0) {
    do {
      pbVar32 = (byte *)*param_1;
      if (pbVar32 < (byte *)param_1[1]) {
        uVar13 = (uint)*pbVar32;
        if ((char)*pbVar32 < '\0') goto LAB_00c05a64;
        *(uint *)(param_1 + 4) = uVar13;
        *param_1 = (ulong)(pbVar32 + 1);
      }
      else {
        uVar13 = 0;
LAB_00c05a64:
        uVar13 = FUN_00c096d0(param_1,uVar13);
        *(uint *)(param_1 + 4) = uVar13;
      }
      if (uVar13 == 0) {
        return 1;
      }
      if ((uVar13 & 7) == 4) {
        return 1;
      }
      plVar16 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
      uVar21 = (**(code **)(*plVar16 + 0x18))(plVar16,param_2);
      uVar27 = FUN_00c01b50(param_1,uVar13,uVar21);
    } while ((uVar27 & 1) != 0);
switchD_00c04838_caseD_9:
    return 0;
  }
  puVar1 = PTR_DAT_047dacc8 + 0x10;
  puVar2 = PTR_DAT_047dac90 + 0x10;
switchD_00c03a30_default:
  pbVar32 = (byte *)*param_1;
  if (pbVar32 < (byte *)param_1[1]) {
    uVar13 = (uint)*pbVar32;
    if ((char)*pbVar32 < '\0') goto LAB_00c039a0;
    *(uint *)(param_1 + 4) = uVar13;
    *param_1 = (ulong)(pbVar32 + 1);
  }
  else {
    uVar13 = 0;
LAB_00c039a0:
    uVar13 = FUN_00c096d0(param_1,uVar13);
    *(uint *)(param_1 + 4) = uVar13;
  }
  if (uVar13 == 0) {
    return 1;
  }
  uVar3 = uVar13 & 7;
  if (uVar3 == 4) {
    return 1;
  }
  uVar8 = uVar13 >> 3;
  lVar17 = FUN_00b7c9fc(lVar15,uVar8);
  if (lVar17 == 0) {
    uVar27 = (ulong)*(uint *)(lVar15 + 0x68);
    if (0 < (int)*(uint *)(lVar15 + 0x68)) {
      piVar31 = (int *)(*(long *)(lVar15 + 0x70) + 4);
      do {
        if ((piVar31[-1] <= (int)uVar8) && ((int)uVar8 < *piVar31)) {
          if (param_1[8] == 0) {
            lVar17 = (**(code **)(*plVar16 + 0x270))(plVar16,uVar8);
          }
          else {
            lVar17 = FUN_00b7c264(param_1[8],lVar15,uVar8);
          }
          if (lVar17 != 0) goto LAB_00c039e0;
          break;
        }
        piVar31 = piVar31 + 2;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
    lVar17 = 0;
    if ((uVar13 == 0xb) && (*(char *)(*(long *)(lVar15 + 0x20) + 0x50) != '\0')) {
      plVar18 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
      uVar27 = 0;
      local_90 = 0;
      uVar21 = 0;
      local_88 = 0;
      local_80 = (undefined1 *)0x0;
LAB_00c03ad8:
      do {
        pbVar32 = (byte *)*param_1;
        if (pbVar32 < (byte *)param_1[1]) {
          uVar13 = (uint)*pbVar32;
          if ((char)*pbVar32 < '\0') goto LAB_00c03b04;
          *(uint *)(param_1 + 4) = uVar13;
          *param_1 = (ulong)(pbVar32 + 1);
        }
        else {
          uVar13 = 0;
LAB_00c03b04:
          uVar13 = FUN_00c096d0(param_1,uVar13);
          *(uint *)(param_1 + 4) = uVar13;
        }
        if ((int)uVar13 < 0x1a) {
          if (uVar13 == 0) break;
          if (uVar13 == 0xc) {
            bVar12 = true;
            goto LAB_00c04720;
          }
          if (uVar13 != 0x10) goto LAB_00c03b58;
          pbVar32 = (byte *)*param_1;
          if (pbVar32 < (byte *)param_1[1]) {
            uVar27 = (ulong)*pbVar32;
            if ((char)*pbVar32 < '\0') goto LAB_00c03f40;
            *param_1 = (ulong)(pbVar32 + 1);
          }
          else {
            uVar27 = 0;
LAB_00c03f40:
            uVar27 = FUN_00c0944c(param_1,uVar27);
            if ((long)uVar27 < 0) break;
          }
          uVar21 = (**(code **)(*plVar18 + 0x270))(plVar18,uVar27 & 0xffffffff);
          if ((local_90 & 1) == 0) {
            if ((byte)local_90 < 2) goto LAB_00c03ad8;
            uVar19 = (ulong)((byte)local_90 >> 1);
            local_a8 = (undefined1 *)((ulong)&local_90 | 1);
          }
          else {
            if (local_88 == 0) goto LAB_00c03ad8;
            uVar19 = local_88;
            local_a8 = local_80;
          }
          local_a0 = (void *)CONCAT44((int)uVar19,(int)uVar19);
          local_f0 = &local_b0;
          local_100 = (undefined **)0x0;
          local_f8 = (byte *)0x0;
          uStack_e8 = 0;
          local_98 = 0;
          local_d8 = 0x7fffffff;
          uStack_d0 = 0x200000004000000;
          local_c8 = *(undefined4 *)PTR_DAT_047dac98;
          local_c0 = 0;
          uStack_b8 = 0;
          uStack_c4 = local_c8;
          local_b0 = puVar1;
          FUN_00c08eb0(&local_100);
          uVar19 = FUN_00c05bcc(uVar27 & 0xffffffff,uVar21,param_2,&local_100);
          if ((uVar19 & 1) == 0) {
            FUN_00c08dac(&local_100);
            break;
          }
          if ((local_90 & 1) == 0) {
            local_90 = local_90 & 0xffffffffffff0000;
          }
          else {
            *local_80 = 0;
            local_88 = 0;
          }
          FUN_00c08dac(&local_100);
          goto LAB_00c03ad8;
        }
        if (uVar13 != 0x1a) {
LAB_00c03b58:
          uVar19 = FUN_00c01b50(param_1,uVar13,0);
joined_r0x00c03b3c:
          if ((uVar19 & 1) == 0) break;
          goto LAB_00c03ad8;
        }
        if ((int)uVar27 != 0) {
          uVar19 = FUN_00c05bcc(uVar27 & 0xffffffff,uVar21,param_2,param_1);
          goto joined_r0x00c03b3c;
        }
        local_a8 = (undefined1 *)0x0;
        local_a0 = (void *)0x0;
        local_b0 = (undefined *)0x0;
        pbVar32 = (byte *)*param_1;
        pbVar26 = (byte *)param_1[1];
        if (pbVar32 < pbVar26) {
          uVar27 = (ulong)*pbVar32;
          if ((char)*pbVar32 < '\0') goto LAB_00c03ea8;
          pbVar32 = pbVar32 + 1;
          *param_1 = (ulong)pbVar32;
LAB_00c03b94:
          uVar13 = (uint)uVar27;
          if ((int)pbVar26 - (int)pbVar32 < (int)uVar13) {
            uVar19 = FUN_00c09150(param_1,&local_b0,uVar27 & 0xffffffff);
            if ((uVar19 & 1) != 0) goto LAB_00c03c30;
            goto LAB_00c03ebc;
          }
          uVar19 = uVar27 & 0xffffffff;
          std::string::resize((ulong)&local_b0,(char)uVar19);
          if (((ulong)local_b0 & 1) == 0) {
            pvVar20 = (void *)((ulong)&local_b0 | 1);
            if (1 < (byte)local_b0) goto LAB_00c03c18;
          }
          else if ((local_a8 != (undefined1 *)0x0) && (pvVar20 = local_a0, local_a0 != (void *)0x0))
          {
LAB_00c03c18:
            memcpy(pvVar20,(void *)*param_1,uVar19);
            *param_1 = *param_1 + uVar19;
          }
LAB_00c03c30:
          puStack_108 = &local_90;
          local_100 = &local_110;
          uStack_e8 = 0;
          local_f8 = (byte *)0x0;
          local_f0 = (undefined **)0x0;
          local_110 = puVar2;
          uVar19 = FUN_00c0ebac(&local_110,local_70,&local_f0);
          if ((uVar19 & 1) == 0) {
            local_f8 = (byte *)0x0;
            local_f0._0_4_ = 0;
LAB_00c03cc0:
            uStack_e8 = 0;
            pbVar32 = abStack_78;
            if (0x7f < uVar13) {
              uVar19 = uVar27 & 0xffffffff;
              pbVar26 = pbVar32;
              do {
                bVar10 = (byte)uVar19;
                uVar19 = uVar27 >> 7 & 0x1ffffff;
                uVar13 = (uint)uVar19;
                uVar9 = uVar27 >> 0xe;
                pbVar32 = pbVar26 + 1;
                *pbVar26 = bVar10 | 0x80;
                pbVar26 = pbVar32;
                uVar27 = uVar19;
              } while ((uVar9 & 0x3ffff) != 0);
            }
            pbVar26 = abStack_78;
            *pbVar32 = (byte)uVar13;
            iVar14 = ((int)pbVar32 - (int)pbVar26) + 1;
            if ((int)local_f0 < iVar14) {
              pbVar26 = abStack_78;
              do {
                memcpy(local_f8,pbVar26,(long)(int)local_f0);
                iVar34 = (int)local_f0;
                lVar17 = (long)(int)local_f0;
                uVar27 = (**(code **)(*local_100 + 0x10))(local_100,local_70,&local_f0);
                if ((uVar27 & 1) == 0) {
                  local_f8 = (byte *)0x0;
                  local_f0._0_4_ = 0;
                  uStack_e8 = 1;
                  goto LAB_00c03dc8;
                }
                iVar14 = iVar14 - iVar34;
                pbVar26 = pbVar26 + lVar17;
                local_f0._4_4_ = local_f0._4_4_ + (int)local_f0;
                local_f8 = local_70[0];
              } while ((int)local_f0 < iVar14);
            }
            memcpy(local_f8,pbVar26,(long)iVar14);
            local_f8 = local_f8 + iVar14;
            local_f0._0_4_ = (int)local_f0 - iVar14;
          }
          else {
            local_f0._4_4_ = local_f0._4_4_ + (int)local_f0;
            local_f8 = local_70[0];
            uStack_e8 = 0;
            if ((int)local_f0 < 5) goto LAB_00c03cc0;
            if (uVar13 < 0x80) {
              pbVar32 = local_70[0];
            }
            else {
              uVar19 = uVar27 & 0xffffffff;
              pbVar26 = local_70[0];
              do {
                bVar10 = (byte)uVar19;
                uVar19 = uVar27 >> 7 & 0x1ffffff;
                uVar13 = (uint)uVar19;
                uVar9 = uVar27 >> 0xe;
                pbVar32 = pbVar26 + 1;
                *pbVar26 = bVar10 | 0x80;
                pbVar26 = pbVar32;
                uVar27 = uVar19;
              } while ((uVar9 & 0x3ffff) != 0);
            }
            *pbVar32 = (byte)uVar13;
            iVar14 = ((int)pbVar32 - (int)local_70[0]) + 1;
            local_f8 = local_70[0] + iVar14;
            local_f0._0_4_ = (int)local_f0 - iVar14;
          }
LAB_00c03dc8:
          pvVar20 = (void *)((ulong)&local_b0 | 1);
          uVar13 = (uint)((byte)local_b0 >> 1);
          if (((ulong)local_b0 & 1) != 0) {
            pvVar20 = local_a0;
            uVar13 = (uint)local_a8;
          }
          for (; (int)local_f0 < (int)uVar13; uVar13 = uVar13 - iVar14) {
            memcpy(local_f8,pvVar20,(long)(int)local_f0);
            iVar14 = (int)local_f0;
            lVar17 = (long)(int)local_f0;
            uVar27 = (**(code **)(*local_100 + 0x10))(local_100,local_70,&local_f0);
            if ((uVar27 & 1) == 0) {
              local_f8 = (byte *)0x0;
              local_f0 = (undefined **)((ulong)local_f0._4_4_ << 0x20);
              uStack_e8 = 1;
              goto LAB_00c03e9c;
            }
            local_f0._4_4_ = local_f0._4_4_ + (int)local_f0;
            pvVar20 = (void *)((long)pvVar20 + lVar17);
            local_f8 = local_70[0];
          }
          memcpy(local_f8,pvVar20,(long)(int)uVar13);
          local_f8 = local_f8 + (int)uVar13;
          local_f0._0_4_ = (int)local_f0 - uVar13;
          if (0 < (int)local_f0) {
            (**(code **)(*local_100 + 0x18))();
            local_f0 = (undefined **)((ulong)(local_f0._4_4_ - (int)local_f0) << 0x20);
            local_f8 = (byte *)0x0;
          }
LAB_00c03e9c:
          bVar12 = true;
        }
        else {
          uVar27 = 0;
LAB_00c03ea8:
          uVar27 = FUN_00c0944c(param_1,uVar27);
          if ((uVar27 & 0x8000000080000000) == 0) {
            pbVar32 = (byte *)*param_1;
            pbVar26 = (byte *)param_1[1];
            goto LAB_00c03b94;
          }
LAB_00c03ebc:
          bVar12 = false;
        }
        pvVar20 = local_a0;
        if ((((ulong)local_b0 & 1) != 0) && (local_a0 != (void *)0x0)) {
          lVar17 = tpidr_el0;
          plVar36 = *(long **)(lVar17 + 0x30);
          if (plVar36 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar14 = __cxa_guard_acquire(&DAT_04859438), iVar14 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar36 = DAT_04859430;
            *(long **)(lVar17 + 0x30) = DAT_04859430;
          }
          uVar27 = (**(code **)(*plVar36 + 0xf8))(plVar36);
          if (((uVar27 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
            (**(code **)(*plVar36 + 0x18))(plVar36,pvVar20,0,8);
          }
          else {
            FUN_00c48fe8(plVar36,pvVar20,0,8);
          }
        }
        uVar27 = 0;
      } while (bVar12);
      bVar12 = false;
LAB_00c04720:
      puVar11 = local_80;
      if (((local_90 & 1) != 0) && (local_80 != (undefined1 *)0x0)) {
        lVar17 = tpidr_el0;
        plVar18 = *(long **)(lVar17 + 0x30);
        if (plVar18 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(&DAT_04859438), iVar14 != 0)) {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar18 = DAT_04859430;
          *(long **)(lVar17 + 0x30) = DAT_04859430;
        }
        uVar27 = (**(code **)(*plVar18 + 0xf8))(plVar18);
        if (((uVar27 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
          (**(code **)(*plVar18 + 0x18))(plVar18,puVar11,0,8);
        }
        else {
          FUN_00c48fe8(plVar18,puVar11,0,8);
        }
      }
      if (!bVar12) {
        return 0;
      }
      goto switchD_00c03a30_default;
    }
  }
LAB_00c039e0:
  plVar18 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  if (lVar17 == 0) {
LAB_00c040f4:
    uVar21 = (**(code **)(*plVar18 + 0x18))(plVar18,param_2);
    uVar27 = FUN_00c01b50(param_1,uVar13,uVar21);
    if ((uVar27 & 1) == 0) {
      return 0;
    }
    goto switchD_00c03a30_default;
  }
  uVar6 = *(uint *)(lVar17 + 0x3c);
  if (uVar3 != *(uint *)(PTR_DAT_047dad68 + (ulong)uVar6 * 4)) {
    if (((uVar3 != 2) || (uVar6 - 9 < 4)) || (*(int *)(lVar17 + 0x40) != 3)) goto LAB_00c040f4;
    pbVar32 = (byte *)*param_1;
    pbVar26 = (byte *)param_1[1];
    if (pbVar32 < pbVar26) {
      uVar27 = (ulong)*pbVar32;
      if ((char)*pbVar32 < '\0') goto LAB_00c0478c;
      pppuVar23 = (undefined ***)(pbVar32 + 1);
      *param_1 = (ulong)pppuVar23;
    }
    else {
      uVar27 = 0;
LAB_00c0478c:
      uVar27 = FUN_00c0944c(param_1,uVar27);
      if ((long)uVar27 < 0) {
        return 0;
      }
      pppuVar23 = (undefined ***)*param_1;
      pbVar26 = (byte *)param_1[1];
    }
    iVar5 = (int)param_1[3];
    iVar22 = (int)pppuVar23;
    iVar4 = (int)param_1[5];
    iVar14 = (iVar5 - *(int *)((long)param_1 + 0x2c)) + (iVar22 - (int)pbVar26);
    iVar25 = (int)uVar27;
    iVar34 = 0x7fffffff;
    if (iVar25 <= 0x7fffffff - iVar14 && -1 < iVar25) {
      iVar34 = iVar14 + iVar25;
    }
    iVar14 = iVar4;
    if (iVar34 <= iVar4) {
      iVar14 = iVar34;
    }
    pppuVar29 = (undefined ***)(pbVar26 + *(int *)((long)param_1 + 0x2c));
    *(int *)(param_1 + 5) = iVar14;
    param_1[1] = (ulong)pppuVar29;
    iVar34 = (int)param_1[6];
    if (iVar14 <= (int)param_1[6]) {
      iVar34 = iVar14;
    }
    iVar25 = iVar5 - iVar34;
    if (iVar25 == 0 || iVar5 < iVar34) {
      iVar25 = 0;
      *(undefined4 *)((long)param_1 + 0x2c) = 0;
    }
    else {
      pppuVar29 = (undefined ***)((long)pppuVar29 - (long)iVar25);
      *(int *)((long)param_1 + 0x2c) = iVar25;
      param_1[1] = (ulong)pppuVar29;
    }
    iVar34 = (int)pppuVar29;
    switch(*(undefined4 *)(lVar17 + 0x3c)) {
    case 1:
      if (iVar14 != 0x7fffffff) {
        iVar14 = (iVar14 - iVar5) + iVar25 + (iVar34 - iVar22);
        while (0 < iVar14) {
          lVar35 = (long)pppuVar29 - (long)pppuVar23;
          if ((int)(uint)lVar35 < 8) {
            if ((uint)lVar35 < 8) {
              pppuVar29 = &local_100;
              iVar14 = 8;
              do {
                iVar34 = (int)lVar35;
                memcpy(pppuVar29,pppuVar23,(long)iVar34);
                *param_1 = *param_1 + (long)iVar34;
                uVar27 = FUN_00c08eb0(param_1);
                if ((uVar27 & 1) == 0) {
                  return 0;
                }
                iVar14 = iVar14 - iVar34;
                pppuVar23 = (undefined ***)*param_1;
                lVar35 = param_1[1] - (long)pppuVar23;
                pppuVar29 = (undefined ***)((long)pppuVar29 + (long)iVar34);
              } while ((int)lVar35 < iVar14);
              memcpy(pppuVar29,pppuVar23,(long)iVar14);
              pppuVar29 = (undefined ***)(*param_1 + (long)iVar14);
              pppuVar23 = &local_100;
            }
            else {
              pppuVar29 = pppuVar23 + 1;
            }
            *param_1 = (ulong)pppuVar29;
            ppuVar24 = *pppuVar23;
          }
          else {
            ppuVar24 = *pppuVar23;
            *param_1 = (ulong)(pppuVar23 + 1);
          }
          (**(code **)(*plVar18 + 0x230))(ppuVar24,plVar18,param_2,lVar17);
          if ((int)param_1[5] == 0x7fffffff) break;
          pppuVar23 = (undefined ***)*param_1;
          pppuVar29 = (undefined ***)param_1[1];
          iVar14 = ((int)param_1[5] - (int)param_1[3]) + *(int *)((long)param_1 + 0x2c) +
                   ((int)pppuVar29 - (int)pppuVar23);
        }
      }
      break;
    case 2:
      if (iVar14 != 0x7fffffff) {
        iVar14 = (iVar14 - iVar5) + iVar25 + (iVar34 - iVar22);
        while (0 < iVar14) {
          lVar35 = (long)pppuVar29 - (long)pppuVar23;
          if ((int)(uint)lVar35 < 4) {
            if ((uint)lVar35 < 4) {
              pppuVar29 = &local_100;
              iVar14 = 4;
              do {
                iVar34 = (int)lVar35;
                memcpy(pppuVar29,pppuVar23,(long)iVar34);
                *param_1 = *param_1 + (long)iVar34;
                uVar27 = FUN_00c08eb0(param_1);
                if ((uVar27 & 1) == 0) {
                  return 0;
                }
                iVar14 = iVar14 - iVar34;
                pppuVar23 = (undefined ***)*param_1;
                lVar35 = param_1[1] - (long)pppuVar23;
                pppuVar29 = (undefined ***)((long)pppuVar29 + (long)iVar34);
              } while ((int)lVar35 < iVar14);
              memcpy(pppuVar29,pppuVar23,(long)iVar14);
              pbVar32 = (byte *)(*param_1 + (long)iVar14);
              pppuVar23 = &local_100;
            }
            else {
              pbVar32 = (byte *)((long)pppuVar23 + 4);
            }
            *param_1 = (ulong)pbVar32;
            uVar37 = *(undefined4 *)pppuVar23;
          }
          else {
            uVar37 = *(undefined4 *)pppuVar23;
            *param_1 = (ulong)((long)pppuVar23 + 4);
          }
          (**(code **)(*plVar18 + 0x228))(uVar37,plVar18,param_2,lVar17);
          if ((int)param_1[5] == 0x7fffffff) break;
          pppuVar23 = (undefined ***)*param_1;
          pppuVar29 = (undefined ***)param_1[1];
          iVar14 = ((int)param_1[5] - (int)param_1[3]) + *(int *)((long)param_1 + 0x2c) +
                   ((int)pppuVar29 - (int)pppuVar23);
        }
      }
      break;
    case 3:
      if (iVar14 != 0x7fffffff) {
        iVar14 = (iVar14 - iVar5) + iVar25 + (iVar34 - iVar22);
        while (0 < iVar14) {
          if ((pppuVar23 < pppuVar29) && (-1 < (char)*(byte *)pppuVar23)) {
            uVar27 = (ulong)*(byte *)pppuVar23;
            *param_1 = (ulong)((long)pppuVar23 + 1);
          }
          else {
            auVar38 = FUN_00c09268(param_1);
            uVar27 = auVar38._0_8_;
            if ((auVar38._8_8_ & 1) == 0) {
              return 0;
            }
          }
          (**(code **)(*plVar18 + 0x210))(plVar18,param_2,lVar17,uVar27);
          if ((int)param_1[5] == 0x7fffffff) break;
          pppuVar23 = (undefined ***)*param_1;
          pppuVar29 = (undefined ***)param_1[1];
          iVar14 = ((int)param_1[5] - (int)param_1[3]) + *(int *)((long)param_1 + 0x2c) +
                   ((int)pppuVar29 - (int)pppuVar23);
        }
      }
      break;
    case 4:
      if (iVar14 != 0x7fffffff) {
        iVar14 = (iVar14 - iVar5) + iVar25 + (iVar34 - iVar22);
        while (0 < iVar14) {
          if ((pppuVar23 < pppuVar29) && (-1 < (char)*(byte *)pppuVar23)) {
            uVar27 = (ulong)*(byte *)pppuVar23;
            *param_1 = (ulong)((long)pppuVar23 + 1);
          }
          else {
            auVar38 = FUN_00c09268(param_1);
            uVar27 = auVar38._0_8_;
            if ((auVar38._8_8_ & 1) == 0) {
              return 0;
            }
          }
          (**(code **)(*plVar18 + 0x220))(plVar18,param_2,lVar17,uVar27);
          if ((int)param_1[5] == 0x7fffffff) break;
          pppuVar23 = (undefined ***)*param_1;
          pppuVar29 = (undefined ***)param_1[1];
          iVar14 = ((int)param_1[5] - (int)param_1[3]) + *(int *)((long)param_1 + 0x2c) +
                   ((int)pppuVar29 - (int)pppuVar23);
        }
      }
      break;
    case 5:
      if (iVar14 != 0x7fffffff) {
        iVar14 = (iVar14 - iVar5) + iVar25 + (iVar34 - iVar22);
        while (0 < iVar14) {
          if (pppuVar23 < pppuVar29) {
            uVar27 = (ulong)*(byte *)pppuVar23;
            if ((char)*(byte *)pppuVar23 < '\0') goto LAB_00c0503c;
            *param_1 = (ulong)((long)pppuVar23 + 1);
          }
          else {
            uVar27 = 0;
LAB_00c0503c:
            uVar27 = FUN_00c0944c(param_1,uVar27);
            if ((long)uVar27 < 0) {
              return 0;
            }
          }
          (**(code **)(*plVar18 + 0x208))(plVar18,param_2,lVar17,uVar27);
          if ((int)param_1[5] == 0x7fffffff) break;
          pppuVar23 = (undefined ***)*param_1;
          pppuVar29 = (undefined ***)param_1[1];
          iVar14 = ((int)param_1[5] - (int)param_1[3]) + *(int *)((long)param_1 + 0x2c) +
                   ((int)pppuVar29 - (int)pppuVar23);
        }
      }
      break;
    case 6:
      if (iVar14 != 0x7fffffff) {
        iVar14 = (iVar14 - iVar5) + iVar25 + (iVar34 - iVar22);
        while (0 < iVar14) {
          lVar35 = (long)pppuVar29 - (long)pppuVar23;
          if ((int)(uint)lVar35 < 8) {
            if ((uint)lVar35 < 8) {
              pppuVar29 = &local_100;
              iVar14 = 8;
              do {
                iVar34 = (int)lVar35;
                memcpy(pppuVar29,pppuVar23,(long)iVar34);
                *param_1 = *param_1 + (long)iVar34;
                uVar27 = FUN_00c08eb0(param_1);
                if ((uVar27 & 1) == 0) {
                  return 0;
                }
                iVar14 = iVar14 - iVar34;
                pppuVar23 = (undefined ***)*param_1;
                lVar35 = param_1[1] - (long)pppuVar23;
                pppuVar29 = (undefined ***)((long)pppuVar29 + (long)iVar34);
              } while ((int)lVar35 < iVar14);
              memcpy(pppuVar29,pppuVar23,(long)iVar14);
              pppuVar29 = (undefined ***)(*param_1 + (long)iVar14);
              pppuVar23 = &local_100;
            }
            else {
              pppuVar29 = pppuVar23 + 1;
            }
            *param_1 = (ulong)pppuVar29;
            ppuVar24 = *pppuVar23;
          }
          else {
            ppuVar24 = *pppuVar23;
            *param_1 = (ulong)(pppuVar23 + 1);
          }
          (**(code **)(*plVar18 + 0x220))(plVar18,param_2,lVar17,ppuVar24);
          if ((int)param_1[5] == 0x7fffffff) break;
          pppuVar23 = (undefined ***)*param_1;
          pppuVar29 = (undefined ***)param_1[1];
          iVar14 = ((int)param_1[5] - (int)param_1[3]) + *(int *)((long)param_1 + 0x2c) +
                   ((int)pppuVar29 - (int)pppuVar23);
        }
      }
      break;
    case 7:
      if (iVar14 != 0x7fffffff) {
        iVar14 = (iVar14 - iVar5) + iVar25 + (iVar34 - iVar22);
        while (0 < iVar14) {
          lVar35 = (long)pppuVar29 - (long)pppuVar23;
          if ((int)(uint)lVar35 < 4) {
            if ((uint)lVar35 < 4) {
              pppuVar29 = &local_100;
              iVar14 = 4;
              do {
                iVar34 = (int)lVar35;
                memcpy(pppuVar29,pppuVar23,(long)iVar34);
                *param_1 = *param_1 + (long)iVar34;
                uVar27 = FUN_00c08eb0(param_1);
                if ((uVar27 & 1) == 0) {
                  return 0;
                }
                iVar14 = iVar14 - iVar34;
                pppuVar23 = (undefined ***)*param_1;
                lVar35 = param_1[1] - (long)pppuVar23;
                pppuVar29 = (undefined ***)((long)pppuVar29 + (long)iVar34);
              } while ((int)lVar35 < iVar14);
              memcpy(pppuVar29,pppuVar23,(long)iVar14);
              pbVar32 = (byte *)(*param_1 + (long)iVar14);
              pppuVar23 = &local_100;
            }
            else {
              pbVar32 = (byte *)((long)pppuVar23 + 4);
            }
            *param_1 = (ulong)pbVar32;
            uVar37 = *(undefined4 *)pppuVar23;
          }
          else {
            uVar37 = *(undefined4 *)pppuVar23;
            *param_1 = (ulong)((long)pppuVar23 + 4);
          }
          (**(code **)(*plVar18 + 0x218))(plVar18,param_2,lVar17,uVar37);
          if ((int)param_1[5] == 0x7fffffff) break;
          pppuVar23 = (undefined ***)*param_1;
          pppuVar29 = (undefined ***)param_1[1];
          iVar14 = ((int)param_1[5] - (int)param_1[3]) + *(int *)((long)param_1 + 0x2c) +
                   ((int)pppuVar29 - (int)pppuVar23);
        }
      }
      break;
    case 8:
      if (iVar14 != 0x7fffffff) {
        iVar14 = (iVar14 - iVar5) + iVar25 + (iVar34 - iVar22);
        while (0 < iVar14) {
          if ((pppuVar23 < pppuVar29) && (-1 < (char)*(byte *)pppuVar23)) {
            uVar27 = (ulong)*(byte *)pppuVar23;
            *param_1 = (ulong)((long)pppuVar23 + 1);
          }
          else {
            auVar38 = FUN_00c09268(param_1);
            uVar27 = auVar38._0_8_;
            if ((auVar38._8_8_ & 1) == 0) {
              return 0;
            }
          }
          (**(code **)(*plVar18 + 0x238))(plVar18,param_2,lVar17,uVar27 != 0);
          if ((int)param_1[5] == 0x7fffffff) break;
          pppuVar23 = (undefined ***)*param_1;
          pppuVar29 = (undefined ***)param_1[1];
          iVar14 = ((int)param_1[5] - (int)param_1[3]) + *(int *)((long)param_1 + 0x2c) +
                   ((int)pppuVar29 - (int)pppuVar23);
        }
      }
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      goto switchD_00c04838_caseD_9;
    case 0xd:
      if (iVar14 != 0x7fffffff) {
        iVar14 = (iVar14 - iVar5) + iVar25 + (iVar34 - iVar22);
        while (0 < iVar14) {
          if (pppuVar23 < pppuVar29) {
            uVar27 = (ulong)*(byte *)pppuVar23;
            if ((char)*(byte *)pppuVar23 < '\0') goto LAB_00c04a90;
            *param_1 = (ulong)((long)pppuVar23 + 1);
          }
          else {
            uVar27 = 0;
LAB_00c04a90:
            uVar27 = FUN_00c0944c(param_1,uVar27);
            if ((long)uVar27 < 0) {
              return 0;
            }
          }
          (**(code **)(*plVar18 + 0x218))(plVar18,param_2,lVar17,uVar27);
          if ((int)param_1[5] == 0x7fffffff) break;
          pppuVar23 = (undefined ***)*param_1;
          pppuVar29 = (undefined ***)param_1[1];
          iVar14 = ((int)param_1[5] - (int)param_1[3]) + *(int *)((long)param_1 + 0x2c) +
                   ((int)pppuVar29 - (int)pppuVar23);
        }
      }
      break;
    case 0xe:
      if (iVar14 != 0x7fffffff) {
        iVar14 = (iVar14 - iVar5) + iVar25 + (iVar34 - iVar22);
        while (0 < iVar14) {
          if (pppuVar23 < pppuVar29) {
            uVar27 = (ulong)*(byte *)pppuVar23;
            if ((char)*(byte *)pppuVar23 < '\0') goto LAB_00c04b34;
            *param_1 = (ulong)((long)pppuVar23 + 1);
          }
          else {
            uVar27 = 0;
LAB_00c04b34:
            uVar27 = FUN_00c0944c(param_1,uVar27);
            if ((long)uVar27 < 0) {
              return 0;
            }
          }
          lVar35 = (**(code **)(*param_2 + 0xb8))(param_2);
          if (*(int *)(*(long *)(lVar35 + 0x10) + 0x7c) == 3) {
            (**(code **)(*plVar18 + 0x250))(plVar18,param_2,lVar17,uVar27 & 0xffffffff);
          }
          else {
            lVar35 = FUN_00b7ccec(*(undefined8 *)(lVar17 + 0x70),uVar27 & 0xffffffff);
            if (lVar35 == 0) {
              uVar21 = (**(code **)(*plVar18 + 0x18))(plVar18,param_2);
              FUN_00c001d0(uVar21,uVar8,(long)(int)uVar27);
            }
            else {
              (**(code **)(*plVar18 + 0x248))(plVar18,param_2,lVar17,lVar35);
            }
          }
          if ((int)param_1[5] == 0x7fffffff) break;
          pppuVar23 = (undefined ***)*param_1;
          pppuVar29 = (undefined ***)param_1[1];
          iVar14 = ((int)param_1[5] - (int)param_1[3]) + *(int *)((long)param_1 + 0x2c) +
                   ((int)pppuVar29 - (int)pppuVar23);
        }
      }
      break;
    case 0xf:
      if (iVar14 != 0x7fffffff) {
        iVar14 = (iVar14 - iVar5) + iVar25 + (iVar34 - iVar22);
        while (0 < iVar14) {
          lVar35 = (long)pppuVar29 - (long)pppuVar23;
          if ((int)(uint)lVar35 < 4) {
            if ((uint)lVar35 < 4) {
              pppuVar29 = &local_100;
              iVar14 = 4;
              do {
                iVar34 = (int)lVar35;
                memcpy(pppuVar29,pppuVar23,(long)iVar34);
                *param_1 = *param_1 + (long)iVar34;
                uVar27 = FUN_00c08eb0(param_1);
                if ((uVar27 & 1) == 0) {
                  return 0;
                }
                iVar14 = iVar14 - iVar34;
                pppuVar23 = (undefined ***)*param_1;
                lVar35 = param_1[1] - (long)pppuVar23;
                pppuVar29 = (undefined ***)((long)pppuVar29 + (long)iVar34);
              } while ((int)lVar35 < iVar14);
              memcpy(pppuVar29,pppuVar23,(long)iVar14);
              pbVar32 = (byte *)(*param_1 + (long)iVar14);
              pppuVar23 = &local_100;
            }
            else {
              pbVar32 = (byte *)((long)pppuVar23 + 4);
            }
            *param_1 = (ulong)pbVar32;
            uVar37 = *(undefined4 *)pppuVar23;
          }
          else {
            uVar37 = *(undefined4 *)pppuVar23;
            *param_1 = (ulong)((long)pppuVar23 + 4);
          }
          (**(code **)(*plVar18 + 0x208))(plVar18,param_2,lVar17,uVar37);
          if ((int)param_1[5] == 0x7fffffff) break;
          pppuVar23 = (undefined ***)*param_1;
          pppuVar29 = (undefined ***)param_1[1];
          iVar14 = ((int)param_1[5] - (int)param_1[3]) + *(int *)((long)param_1 + 0x2c) +
                   ((int)pppuVar29 - (int)pppuVar23);
        }
      }
      break;
    case 0x10:
      if (iVar14 != 0x7fffffff) {
        iVar14 = (iVar14 - iVar5) + iVar25 + (iVar34 - iVar22);
        while (0 < iVar14) {
          lVar35 = (long)pppuVar29 - (long)pppuVar23;
          if ((int)(uint)lVar35 < 8) {
            if ((uint)lVar35 < 8) {
              pppuVar29 = &local_100;
              iVar14 = 8;
              do {
                iVar34 = (int)lVar35;
                memcpy(pppuVar29,pppuVar23,(long)iVar34);
                *param_1 = *param_1 + (long)iVar34;
                uVar27 = FUN_00c08eb0(param_1);
                if ((uVar27 & 1) == 0) {
                  return 0;
                }
                iVar14 = iVar14 - iVar34;
                pppuVar23 = (undefined ***)*param_1;
                lVar35 = param_1[1] - (long)pppuVar23;
                pppuVar29 = (undefined ***)((long)pppuVar29 + (long)iVar34);
              } while ((int)lVar35 < iVar14);
              memcpy(pppuVar29,pppuVar23,(long)iVar14);
              pppuVar29 = (undefined ***)(*param_1 + (long)iVar14);
              pppuVar23 = &local_100;
            }
            else {
              pppuVar29 = pppuVar23 + 1;
            }
            *param_1 = (ulong)pppuVar29;
            ppuVar24 = *pppuVar23;
          }
          else {
            ppuVar24 = *pppuVar23;
            *param_1 = (ulong)(pppuVar23 + 1);
          }
          (**(code **)(*plVar18 + 0x210))(plVar18,param_2,lVar17,ppuVar24);
          if ((int)param_1[5] == 0x7fffffff) break;
          pppuVar23 = (undefined ***)*param_1;
          pppuVar29 = (undefined ***)param_1[1];
          iVar14 = ((int)param_1[5] - (int)param_1[3]) + *(int *)((long)param_1 + 0x2c) +
                   ((int)pppuVar29 - (int)pppuVar23);
        }
      }
      break;
    case 0x11:
      if (iVar14 != 0x7fffffff) {
        iVar14 = (iVar14 - iVar5) + iVar25 + (iVar34 - iVar22);
        while (0 < iVar14) {
          if (pppuVar23 < pppuVar29) {
            uVar27 = (ulong)*(byte *)pppuVar23;
            if ((char)*(byte *)pppuVar23 < '\0') goto LAB_00c0528c;
            *param_1 = (ulong)((long)pppuVar23 + 1);
          }
          else {
            uVar27 = 0;
LAB_00c0528c:
            uVar27 = FUN_00c0944c(param_1,uVar27);
            if ((long)uVar27 < 0) {
              return 0;
            }
          }
          (**(code **)(*plVar18 + 0x208))
                    (plVar18,param_2,lVar17,-((uint)uVar27 & 1) ^ (uint)uVar27 >> 1);
          if ((int)param_1[5] == 0x7fffffff) break;
          pppuVar23 = (undefined ***)*param_1;
          pppuVar29 = (undefined ***)param_1[1];
          iVar14 = ((int)param_1[5] - (int)param_1[3]) + *(int *)((long)param_1 + 0x2c) +
                   ((int)pppuVar29 - (int)pppuVar23);
        }
      }
      break;
    case 0x12:
      if (iVar14 != 0x7fffffff) {
        iVar14 = (iVar14 - iVar5) + iVar25 + (iVar34 - iVar22);
        while (0 < iVar14) {
          if ((pppuVar23 < pppuVar29) && (-1 < (char)*(byte *)pppuVar23)) {
            uVar27 = (ulong)*(byte *)pppuVar23;
            *param_1 = (ulong)((long)pppuVar23 + 1);
          }
          else {
            auVar38 = FUN_00c09268(param_1);
            uVar27 = auVar38._0_8_;
            if ((auVar38._8_8_ & 1) == 0) {
              return 0;
            }
          }
          (**(code **)(*plVar18 + 0x210))(plVar18,param_2,lVar17,-(uVar27 & 1) ^ uVar27 >> 1);
          if ((int)param_1[5] == 0x7fffffff) break;
          pppuVar23 = (undefined ***)*param_1;
          pppuVar29 = (undefined ***)param_1[1];
          iVar14 = ((int)param_1[5] - (int)param_1[3]) + *(int *)((long)param_1 + 0x2c) +
                   ((int)pppuVar29 - (int)pppuVar23);
        }
      }
    }
    uVar27 = param_1[1] + (long)*(int *)((long)param_1 + 0x2c);
    iVar14 = (int)param_1[6];
    if (iVar4 <= (int)param_1[6]) {
      iVar14 = iVar4;
    }
    iVar34 = (int)param_1[3] - iVar14;
    *(int *)(param_1 + 5) = iVar4;
    param_1[1] = uVar27;
    if (iVar34 == 0 || (int)param_1[3] < iVar14) {
      *(undefined4 *)((long)param_1 + 0x2c) = 0;
    }
    else {
      *(int *)((long)param_1 + 0x2c) = iVar34;
      param_1[1] = uVar27 - (long)iVar34;
    }
    *(undefined1 *)((long)param_1 + 0x24) = 0;
    goto switchD_00c03a30_default;
  }
  switch(uVar6) {
  case 1:
    pppuVar23 = (undefined ***)*param_1;
    lVar35 = param_1[1] - (long)pppuVar23;
    if ((int)(uint)lVar35 < 8) {
      if ((uint)lVar35 < 8) {
        pppuVar29 = &local_100;
        iVar14 = 8;
        do {
          iVar34 = (int)lVar35;
          memcpy(pppuVar29,pppuVar23,(long)iVar34);
          *param_1 = *param_1 + (long)iVar34;
          uVar27 = FUN_00c08eb0(param_1);
          if ((uVar27 & 1) == 0) {
            return 0;
          }
          iVar14 = iVar14 - iVar34;
          pppuVar29 = (undefined ***)((long)pppuVar29 + (long)iVar34);
          pppuVar23 = (undefined ***)*param_1;
          lVar35 = param_1[1] - (long)pppuVar23;
        } while ((int)lVar35 < iVar14);
        memcpy(pppuVar29,pppuVar23,(long)iVar14);
        pppuVar29 = (undefined ***)(*param_1 + (long)iVar14);
        pppuVar23 = &local_100;
      }
      else {
        pppuVar29 = pppuVar23 + 1;
      }
      *param_1 = (ulong)pppuVar29;
      ppuVar24 = *pppuVar23;
    }
    else {
      ppuVar24 = *pppuVar23;
      *param_1 = (ulong)(pppuVar23 + 1);
    }
    if (*(int *)(lVar17 + 0x40) == 3) {
      pcVar28 = *(code **)(*plVar18 + 0x230);
    }
    else {
      pcVar28 = *(code **)(*plVar18 + 0x110);
    }
    (*pcVar28)(ppuVar24,plVar18,param_2,lVar17);
    goto switchD_00c03a30_default;
  case 2:
    pppuVar23 = (undefined ***)*param_1;
    lVar35 = param_1[1] - (long)pppuVar23;
    if ((int)(uint)lVar35 < 4) {
      if ((uint)lVar35 < 4) {
        pppuVar29 = &local_100;
        iVar14 = 4;
        do {
          iVar34 = (int)lVar35;
          memcpy(pppuVar29,pppuVar23,(long)iVar34);
          *param_1 = *param_1 + (long)iVar34;
          uVar27 = FUN_00c08eb0(param_1);
          if ((uVar27 & 1) == 0) {
            return 0;
          }
          iVar14 = iVar14 - iVar34;
          pppuVar29 = (undefined ***)((long)pppuVar29 + (long)iVar34);
          pppuVar23 = (undefined ***)*param_1;
          lVar35 = param_1[1] - (long)pppuVar23;
        } while ((int)lVar35 < iVar14);
        memcpy(pppuVar29,pppuVar23,(long)iVar14);
        uVar27 = *param_1 + (long)iVar14;
        pppuVar23 = &local_100;
      }
      else {
        uVar27 = (long)pppuVar23 + 4;
      }
      *param_1 = uVar27;
      uVar37 = *(undefined4 *)pppuVar23;
    }
    else {
      uVar37 = *(undefined4 *)pppuVar23;
      *param_1 = (long)pppuVar23 + 4;
    }
    if (*(int *)(lVar17 + 0x40) == 3) {
      pcVar28 = *(code **)(*plVar18 + 0x228);
    }
    else {
      pcVar28 = *(code **)(*plVar18 + 0x108);
    }
    (*pcVar28)(uVar37,plVar18,param_2,lVar17);
    goto switchD_00c03a30_default;
  case 3:
    pbVar32 = (byte *)*param_1;
    if ((pbVar32 < (byte *)param_1[1]) && (-1 < (char)*pbVar32)) {
      ppuVar24 = (undefined **)(ulong)*pbVar32;
      *param_1 = (ulong)(pbVar32 + 1);
    }
    else {
      auVar38 = FUN_00c09268(param_1);
      ppuVar24 = auVar38._0_8_;
      if ((auVar38._8_8_ & 1) == 0) {
        return 0;
      }
    }
    break;
  case 4:
    pbVar32 = (byte *)*param_1;
    if ((pbVar32 < (byte *)param_1[1]) && (-1 < (char)*pbVar32)) {
      ppuVar24 = (undefined **)(ulong)*pbVar32;
      *param_1 = (ulong)(pbVar32 + 1);
    }
    else {
      auVar38 = FUN_00c09268(param_1);
      ppuVar24 = auVar38._0_8_;
      if ((auVar38._8_8_ & 1) == 0) {
        return 0;
      }
    }
    goto LAB_00c04580;
  case 5:
    pbVar32 = (byte *)*param_1;
    if (pbVar32 < (byte *)param_1[1]) {
      uVar27 = (ulong)*pbVar32;
      if ((char)*pbVar32 < '\0') goto LAB_00c054d4;
      *param_1 = (ulong)(pbVar32 + 1);
    }
    else {
      uVar27 = 0;
LAB_00c054d4:
      uVar27 = FUN_00c0944c(param_1,uVar27);
      if ((long)uVar27 < 0) {
        return 0;
      }
    }
    if (*(int *)(lVar17 + 0x40) == 3) {
      pcVar28 = *(code **)(*plVar18 + 0x208);
    }
    else {
      pcVar28 = *(code **)(*plVar18 + 0xe8);
    }
    goto LAB_00c0553c;
  case 6:
    pppuVar23 = (undefined ***)*param_1;
    lVar35 = param_1[1] - (long)pppuVar23;
    if ((int)(uint)lVar35 < 8) {
      if ((uint)lVar35 < 8) {
        pppuVar29 = &local_100;
        iVar14 = 8;
        do {
          iVar34 = (int)lVar35;
          memcpy(pppuVar29,pppuVar23,(long)iVar34);
          *param_1 = *param_1 + (long)iVar34;
          uVar27 = FUN_00c08eb0(param_1);
          if ((uVar27 & 1) == 0) {
            return 0;
          }
          iVar14 = iVar14 - iVar34;
          pppuVar29 = (undefined ***)((long)pppuVar29 + (long)iVar34);
          pppuVar23 = (undefined ***)*param_1;
          lVar35 = param_1[1] - (long)pppuVar23;
        } while ((int)lVar35 < iVar14);
        memcpy(pppuVar29,pppuVar23,(long)iVar14);
        pppuVar29 = (undefined ***)(*param_1 + (long)iVar14);
        pppuVar23 = &local_100;
      }
      else {
        pppuVar29 = pppuVar23 + 1;
      }
      *param_1 = (ulong)pppuVar29;
      ppuVar24 = *pppuVar23;
    }
    else {
      ppuVar24 = *pppuVar23;
      *param_1 = (ulong)(pppuVar23 + 1);
    }
LAB_00c04580:
    if (*(int *)(lVar17 + 0x40) == 3) {
      pcVar28 = *(code **)(*plVar18 + 0x220);
    }
    else {
      pcVar28 = *(code **)(*plVar18 + 0x100);
    }
    goto LAB_00c04608;
  case 7:
    pppuVar23 = (undefined ***)*param_1;
    lVar35 = param_1[1] - (long)pppuVar23;
    if ((int)(uint)lVar35 < 4) {
      if ((uint)lVar35 < 4) {
        pppuVar29 = &local_100;
        iVar14 = 4;
        do {
          iVar34 = (int)lVar35;
          memcpy(pppuVar29,pppuVar23,(long)iVar34);
          *param_1 = *param_1 + (long)iVar34;
          uVar27 = FUN_00c08eb0(param_1);
          if ((uVar27 & 1) == 0) {
            return 0;
          }
          iVar14 = iVar14 - iVar34;
          pppuVar29 = (undefined ***)((long)pppuVar29 + (long)iVar34);
          pppuVar23 = (undefined ***)*param_1;
          lVar35 = param_1[1] - (long)pppuVar23;
        } while ((int)lVar35 < iVar14);
        memcpy(pppuVar29,pppuVar23,(long)iVar14);
        puVar30 = (uint *)(*param_1 + (long)iVar14);
        pppuVar23 = &local_100;
      }
      else {
        puVar30 = (uint *)((long)pppuVar23 + 4);
      }
      *param_1 = (ulong)puVar30;
      uVar13 = *(uint *)pppuVar23;
    }
    else {
      uVar13 = *(uint *)pppuVar23;
      *param_1 = (ulong)((long)pppuVar23 + 4);
    }
    if (*(int *)(lVar17 + 0x40) == 3) {
      pcVar28 = *(code **)(*plVar18 + 0x218);
    }
    else {
      pcVar28 = *(code **)(*plVar18 + 0xf8);
    }
    goto LAB_00c054ac;
  case 8:
    pbVar32 = (byte *)*param_1;
    if ((pbVar32 < (byte *)param_1[1]) && (-1 < (char)*pbVar32)) {
      uVar27 = (ulong)*pbVar32;
      *param_1 = (ulong)(pbVar32 + 1);
    }
    else {
      auVar38 = FUN_00c09268(param_1);
      uVar27 = auVar38._0_8_;
      if ((auVar38._8_8_ & 1) == 0) {
        return 0;
      }
    }
    if (*(int *)(lVar17 + 0x40) == 3) {
      pcVar28 = *(code **)(*plVar18 + 0x238);
    }
    else {
      pcVar28 = *(code **)(*plVar18 + 0x118);
    }
    uVar13 = (uint)(uVar27 != 0);
    goto LAB_00c054ac;
  case 9:
    iVar14 = *(int *)(*(long *)(lVar17 + 0x30) + 0x7c);
    local_f8 = (byte *)0x0;
    local_f0 = (undefined **)0x0;
    local_100 = (undefined **)0x0;
    uVar27 = FUN_00c0d824(param_1,&local_100);
    if ((uVar27 & 1) == 0) goto LAB_00c05ae8;
    bVar12 = ((ulong)local_100 & 1) != 0;
    ppuVar24 = (undefined **)((ulong)&local_100 | 1);
    if (bVar12) {
      ppuVar24 = local_f0;
    }
    pbVar32 = *(byte **)(lVar17 + 8);
    uVar13 = (uint)((byte)local_100 >> 1);
    if (bVar12) {
      uVar13 = (uint)local_f8;
    }
    if ((*pbVar32 & 1) == 0) {
      pbVar32 = pbVar32 + 1;
    }
    else {
      pbVar32 = *(byte **)(pbVar32 + 0x10);
    }
    if (iVar14 == 3) {
      uVar27 = FUN_00c0d914(ppuVar24,uVar13,0,pbVar32);
      goto joined_r0x00c041b4;
    }
    goto LAB_00c044cc;
  case 10:
    if (*(int *)(lVar17 + 0x40) == 3) {
      pcVar28 = *(code **)(*plVar18 + 600);
    }
    else {
      pcVar28 = *(code **)(*plVar18 + 0x138);
    }
    plVar18 = (long *)(*pcVar28)(plVar18,param_2,lVar17,param_1[9]);
    uVar27 = param_1[7];
    *(int *)(param_1 + 7) = (int)uVar27 + -1;
    if ((int)uVar27 < 1) {
      return 0;
    }
    uVar27 = (**(code **)(*plVar18 + 0x58))(plVar18,param_1);
    if ((uVar27 & 1) == 0) {
      return 0;
    }
    if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
      *(int *)(param_1 + 7) = (int)param_1[7] + 1;
    }
    if ((uint)param_1[4] != (uVar13 & 0xfffffff8 | 4)) {
      return 0;
    }
    goto switchD_00c03a30_default;
  case 0xb:
    goto switchD_00c03a30_caseD_b;
  case 0xc:
    local_100 = (undefined **)0x0;
    local_f8 = (byte *)0x0;
    local_f0 = (undefined **)0x0;
    uVar27 = FUN_00c0d824(param_1,&local_100);
joined_r0x00c041b4:
    if ((uVar27 & 1) == 0) {
LAB_00c05ae8:
      ppuVar24 = local_f0;
      if (((byte)local_100 & 1) == 0) {
        return 0;
      }
      if (local_f0 == (undefined **)0x0) {
        return 0;
      }
      lVar15 = tpidr_el0;
      plVar16 = *(long **)(lVar15 + 0x30);
      if (plVar16 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04859438), iVar14 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar16 = DAT_04859430;
        *(long **)(lVar15 + 0x30) = DAT_04859430;
      }
      uVar27 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar27 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,ppuVar24,0,8);
        return 0;
      }
      FUN_00c48fe8(plVar16,ppuVar24,0,8);
      return 0;
    }
LAB_00c044cc:
    if (*(int *)(lVar17 + 0x40) == 3) {
      pcVar28 = *(code **)(*plVar18 + 0x240);
    }
    else {
      pcVar28 = *(code **)(*plVar18 + 0x120);
    }
    (*pcVar28)(plVar18,param_2,lVar17,&local_100);
    ppuVar24 = local_f0;
    if ((((ulong)local_100 & 1) != 0) && (local_f0 != (undefined **)0x0)) {
      lVar17 = tpidr_el0;
      plVar18 = *(long **)(lVar17 + 0x30);
      if (plVar18 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04859438), iVar14 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar18 = DAT_04859430;
        *(long **)(lVar17 + 0x30) = DAT_04859430;
      }
      uVar27 = (**(code **)(*plVar18 + 0xf8))(plVar18);
      if (((uVar27 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
        (**(code **)(*plVar18 + 0x18))(plVar18,ppuVar24,0,8);
      }
      else {
        FUN_00c48fe8(plVar18,ppuVar24,0,8);
      }
    }
    goto switchD_00c03a30_default;
  case 0xd:
    pbVar32 = (byte *)*param_1;
    if (pbVar32 < (byte *)param_1[1]) {
      uVar27 = (ulong)*pbVar32;
      if ((char)*pbVar32 < '\0') goto LAB_00c0550c;
      *param_1 = (ulong)(pbVar32 + 1);
    }
    else {
      uVar27 = 0;
LAB_00c0550c:
      uVar27 = FUN_00c0944c(param_1,uVar27);
      if ((long)uVar27 < 0) {
        return 0;
      }
    }
    if (*(int *)(lVar17 + 0x40) == 3) {
      pcVar28 = *(code **)(*plVar18 + 0x218);
    }
    else {
      pcVar28 = *(code **)(*plVar18 + 0xf8);
    }
LAB_00c0553c:
    (*pcVar28)(plVar18,param_2,lVar17,uVar27);
    goto switchD_00c03a30_default;
  case 0xe:
    pbVar32 = (byte *)*param_1;
    if (pbVar32 < (byte *)param_1[1]) {
      uVar27 = (ulong)*pbVar32;
      if ((char)*pbVar32 < '\0') goto LAB_00c05594;
      *param_1 = (ulong)(pbVar32 + 1);
    }
    else {
      uVar27 = 0;
LAB_00c05594:
      uVar27 = FUN_00c0944c(param_1,uVar27);
      if ((long)uVar27 < 0) {
        return 0;
      }
    }
    lVar35 = (**(code **)(*param_2 + 0xb8))(param_2);
    if (*(int *)(*(long *)(lVar35 + 0x10) + 0x7c) == 3) {
      if (*(int *)(lVar17 + 0x40) == 3) {
        pcVar28 = *(code **)(*plVar18 + 0x250);
      }
      else {
        pcVar28 = *(code **)(*plVar18 + 0x130);
      }
      (*pcVar28)(plVar18,param_2,lVar17,uVar27 & 0xffffffff);
    }
    else {
      ppuVar24 = (undefined **)FUN_00b7ccec(*(undefined8 *)(lVar17 + 0x70),uVar27 & 0xffffffff);
      if (ppuVar24 != (undefined **)0x0) {
        if (*(int *)(lVar17 + 0x40) == 3) {
          pcVar28 = *(code **)(*plVar18 + 0x248);
        }
        else {
          pcVar28 = *(code **)(*plVar18 + 0x128);
        }
        goto LAB_00c04608;
      }
      uVar21 = (**(code **)(*plVar18 + 0x18))(plVar18,param_2);
      FUN_00c001d0(uVar21,uVar8,(long)(int)uVar27);
    }
    goto switchD_00c03a30_default;
  case 0xf:
    pppuVar23 = (undefined ***)*param_1;
    lVar35 = param_1[1] - (long)pppuVar23;
    if ((int)(uint)lVar35 < 4) {
      if ((uint)lVar35 < 4) {
        pppuVar29 = &local_100;
        iVar14 = 4;
        do {
          iVar34 = (int)lVar35;
          memcpy(pppuVar29,pppuVar23,(long)iVar34);
          *param_1 = *param_1 + (long)iVar34;
          uVar27 = FUN_00c08eb0(param_1);
          if ((uVar27 & 1) == 0) {
            return 0;
          }
          iVar14 = iVar14 - iVar34;
          pppuVar29 = (undefined ***)((long)pppuVar29 + (long)iVar34);
          pppuVar23 = (undefined ***)*param_1;
          lVar35 = param_1[1] - (long)pppuVar23;
        } while ((int)lVar35 < iVar14);
        memcpy(pppuVar29,pppuVar23,(long)iVar14);
        puVar30 = (uint *)(*param_1 + (long)iVar14);
        pppuVar23 = &local_100;
      }
      else {
        puVar30 = (uint *)((long)pppuVar23 + 4);
      }
      *param_1 = (ulong)puVar30;
      uVar13 = *(uint *)pppuVar23;
    }
    else {
      uVar13 = *(uint *)pppuVar23;
      *param_1 = (ulong)((long)pppuVar23 + 4);
    }
    goto LAB_00c05490;
  case 0x10:
    pppuVar23 = (undefined ***)*param_1;
    lVar35 = param_1[1] - (long)pppuVar23;
    if ((int)(uint)lVar35 < 8) {
      if ((uint)lVar35 < 8) {
        pppuVar29 = &local_100;
        iVar14 = 8;
        do {
          iVar34 = (int)lVar35;
          memcpy(pppuVar29,pppuVar23,(long)iVar34);
          *param_1 = *param_1 + (long)iVar34;
          uVar27 = FUN_00c08eb0(param_1);
          if ((uVar27 & 1) == 0) {
            return 0;
          }
          iVar14 = iVar14 - iVar34;
          pppuVar29 = (undefined ***)((long)pppuVar29 + (long)iVar34);
          pppuVar23 = (undefined ***)*param_1;
          lVar35 = param_1[1] - (long)pppuVar23;
        } while ((int)lVar35 < iVar14);
        memcpy(pppuVar29,pppuVar23,(long)iVar14);
        pppuVar29 = (undefined ***)(*param_1 + (long)iVar14);
        pppuVar23 = &local_100;
      }
      else {
        pppuVar29 = pppuVar23 + 1;
      }
      *param_1 = (ulong)pppuVar29;
      ppuVar24 = *pppuVar23;
    }
    else {
      ppuVar24 = *pppuVar23;
      *param_1 = (ulong)(pppuVar23 + 1);
    }
    break;
  case 0x11:
    pbVar32 = (byte *)*param_1;
    if (pbVar32 < (byte *)param_1[1]) {
      uVar27 = (ulong)*pbVar32;
      if ((char)*pbVar32 < '\0') goto LAB_00c05474;
      *param_1 = (ulong)(pbVar32 + 1);
    }
    else {
      uVar27 = 0;
LAB_00c05474:
      uVar27 = FUN_00c0944c(param_1,uVar27);
      if ((long)uVar27 < 0) {
        return 0;
      }
    }
    uVar13 = -((uint)uVar27 & 1) ^ (uint)uVar27 >> 1;
LAB_00c05490:
    if (*(int *)(lVar17 + 0x40) == 3) {
      pcVar28 = *(code **)(*plVar18 + 0x208);
    }
    else {
      pcVar28 = *(code **)(*plVar18 + 0xe8);
    }
LAB_00c054ac:
    (*pcVar28)(plVar18,param_2,lVar17,uVar13);
    goto switchD_00c03a30_default;
  case 0x12:
    pbVar32 = (byte *)*param_1;
    if ((pbVar32 < (byte *)param_1[1]) && (-1 < (char)*pbVar32)) {
      uVar27 = (ulong)*pbVar32;
      *param_1 = (ulong)(pbVar32 + 1);
    }
    else {
      auVar38 = FUN_00c09268(param_1);
      uVar27 = auVar38._0_8_;
      if ((auVar38._8_8_ & 1) == 0) {
        return 0;
      }
    }
    ppuVar24 = (undefined **)(-(uVar27 & 1) ^ uVar27 >> 1);
    break;
  default:
    goto switchD_00c03a30_default;
  }
  if (*(int *)(lVar17 + 0x40) == 3) {
    pcVar28 = *(code **)(*plVar18 + 0x210);
  }
  else {
    pcVar28 = *(code **)(*plVar18 + 0xf0);
  }
LAB_00c04608:
  (*pcVar28)(plVar18,param_2,lVar17,ppuVar24);
  goto switchD_00c03a30_default;
switchD_00c03a30_caseD_b:
  if (*(int *)(lVar17 + 0x40) == 3) {
    pcVar28 = *(code **)(*plVar18 + 600);
  }
  else {
    pcVar28 = *(code **)(*plVar18 + 0x138);
  }
  plVar18 = (long *)(*pcVar28)(plVar18,param_2,lVar17,param_1[9]);
  pbVar32 = (byte *)*param_1;
  pbVar26 = (byte *)param_1[1];
  if ((pbVar32 < pbVar26) && (-1 < (char)*pbVar32)) {
    pbVar33 = pbVar32 + 1;
    uVar13 = (uint)*pbVar32;
    *param_1 = (ulong)pbVar33;
  }
  else {
    uVar13 = FUN_00c0954c(param_1);
    if ((int)uVar13 < 0) {
      return 0;
    }
    pbVar33 = (byte *)*param_1;
    pbVar26 = (byte *)param_1[1];
  }
  iVar22 = (int)param_1[3];
  iVar4 = (int)param_1[5];
  iVar5 = *(int *)((long)param_1 + 0x2c);
  param_1[1] = (ulong)(pbVar26 + iVar5);
  iVar14 = (iVar22 - iVar5) + ((int)pbVar33 - (int)pbVar26);
  iVar34 = 0x7fffffff;
  if ((int)uVar13 <= 0x7fffffff - iVar14) {
    iVar34 = iVar14 + uVar13;
  }
  iVar14 = iVar4;
  if (iVar34 <= iVar4) {
    iVar14 = iVar34;
  }
  *(int *)(param_1 + 5) = iVar14;
  iVar34 = (int)param_1[6];
  if (iVar14 <= (int)param_1[6]) {
    iVar34 = iVar14;
  }
  iVar14 = iVar22 - iVar34;
  if (iVar14 == 0 || iVar22 < iVar34) {
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  else {
    *(int *)((long)param_1 + 0x2c) = iVar14;
    param_1[1] = (long)(pbVar26 + iVar5) - (long)iVar14;
  }
  uVar27 = param_1[7];
  *(int *)(param_1 + 7) = (int)uVar27 + -1;
  if ((int)uVar27 < 1) {
    return 0;
  }
  uVar27 = (**(code **)(*plVar18 + 0x58))(plVar18,param_1);
  if ((uVar27 & 1) == 0) {
    return 0;
  }
  uVar27 = param_1[1] + (long)*(int *)((long)param_1 + 0x2c);
  iVar14 = (int)param_1[6];
  if (iVar4 <= (int)param_1[6]) {
    iVar14 = iVar4;
  }
  cVar7 = *(char *)((long)param_1 + 0x24);
  *(int *)(param_1 + 5) = iVar4;
  param_1[1] = uVar27;
  iVar34 = (int)param_1[3] - iVar14;
  if (iVar34 == 0 || (int)param_1[3] < iVar14) {
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  else {
    *(int *)((long)param_1 + 0x2c) = iVar34;
    param_1[1] = uVar27 - (long)iVar34;
  }
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  if (cVar7 == '\0') {
    return 0;
  }
  goto switchD_00c03a30_default;
}


