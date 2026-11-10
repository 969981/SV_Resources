/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c3eb24; name: FUN_00c3eb24
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00c3eb24(long param_1,double param_2,long *param_3,undefined8 *param_4)

{
  uint uVar1;
  byte *pbVar2;
  string sVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  ulong *puVar10;
  double *pdVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long extraout_x1;
  double dVar16;
  code *pcVar17;
  byte *pbVar18;
  char *pcVar19;
  char *pcVar20;
  ulong uVar21;
  undefined8 uVar22;
  long *plVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  double local_e0;
  char *local_d8;
  double local_d0;
  char local_c8 [40];
  double local_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  double local_68;
  double local_60;
  double local_58;
  
  switch(*(undefined4 *)(PTR_DAT_047dad58 + (ulong)*(uint *)((long)param_4 + 0x3c) * 4)) {
  case 1:
    local_e0 = (double)CONCAT53(local_e0._3_5_,0x2d02);
    bVar6 = *(byte *)(param_1 + 0x30);
    uVar13 = (ulong)(bVar6 >> 1);
    uVar12 = uVar13;
    if ((bVar6 & 1) != 0) {
      uVar12 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar12 == 1) {
      if ((bVar6 & 1) == 0) {
        if (*(char *)(param_1 + 0x31) == '-') {
          pcVar19 = (char *)(param_1 + 0x32);
          pcVar20 = (char *)((ulong)&local_e0 | 2);
          do {
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_00c3f1c4;
            cVar4 = *pcVar20;
            cVar5 = *pcVar19;
            pcVar19 = pcVar19 + 1;
            pcVar20 = pcVar20 + 1;
          } while (cVar5 == cVar4);
        }
        goto LAB_00c3f1d8;
      }
      if (**(char **)(param_1 + 0x40) != '-') goto LAB_00c3f1d8;
LAB_00c3f1c4:
      FUN_00c2f698(param_1 + 0x28);
      bVar24 = true;
      uVar22 = 0x80000000;
    }
    else {
LAB_00c3f1d8:
      bVar24 = false;
      uVar22 = 0x7fffffff;
    }
    uVar12 = FUN_00c408c0(param_1,&local_e0,uVar22);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    uVar1 = -local_e0._0_4_;
    if (!bVar24) {
      uVar1 = local_e0._0_4_;
    }
    uVar12 = (ulong)uVar1;
    if (*(int *)(param_4 + 8) == 3) {
      pcVar17 = *(code **)(*param_3 + 0x208);
    }
    else {
      pcVar17 = *(code **)(*param_3 + 0xe8);
    }
    goto LAB_00c3f388;
  case 2:
    local_e0 = (double)CONCAT53(local_e0._3_5_,0x2d02);
    bVar6 = *(byte *)(param_1 + 0x30);
    uVar13 = (ulong)(bVar6 >> 1);
    uVar12 = uVar13;
    if ((bVar6 & 1) != 0) {
      uVar12 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar12 == 1) {
      if ((bVar6 & 1) == 0) {
        if (*(char *)(param_1 + 0x31) == '-') {
          pcVar19 = (char *)(param_1 + 0x32);
          pcVar20 = (char *)((ulong)&local_e0 | 2);
          do {
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_00c3f224;
            cVar4 = *pcVar20;
            cVar5 = *pcVar19;
            pcVar19 = pcVar19 + 1;
            pcVar20 = pcVar20 + 1;
          } while (cVar5 == cVar4);
        }
        goto LAB_00c3f238;
      }
      if (**(char **)(param_1 + 0x40) != '-') goto LAB_00c3f238;
LAB_00c3f224:
      FUN_00c2f698(param_1 + 0x28);
      uVar22 = 0x8000000000000000;
      bVar24 = true;
    }
    else {
LAB_00c3f238:
      bVar24 = false;
      uVar22 = 0x7fffffffffffffff;
    }
    uVar12 = FUN_00c408c0(param_1,&local_e0,uVar22);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    dVar16 = (double)-(long)local_e0;
    if (!bVar24) {
      dVar16 = local_e0;
    }
    if (*(int *)(param_4 + 8) == 3) {
      pcVar17 = *(code **)(*param_3 + 0x210);
    }
    else {
      pcVar17 = *(code **)(*param_3 + 0xf0);
    }
    goto LAB_00c3f28c;
  case 3:
    uVar12 = FUN_00c408c0(param_1,&local_e0,0xffffffff);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    uVar12 = (ulong)local_e0 & 0xffffffff;
    if (*(int *)(param_4 + 8) == 3) {
      pcVar17 = *(code **)(*param_3 + 0x218);
    }
    else {
      pcVar17 = *(code **)(*param_3 + 0xf8);
    }
    goto LAB_00c3f388;
  case 4:
    uVar12 = FUN_00c408c0(param_1,&local_e0,0xffffffffffffffff);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    dVar16 = local_e0;
    if (*(int *)(param_4 + 8) == 3) {
      pcVar17 = *(code **)(*param_3 + 0x220);
    }
    else {
      pcVar17 = *(code **)(*param_3 + 0x100);
    }
    goto LAB_00c3f28c;
  case 5:
    uVar12 = FUN_029fff3c(param_1,&local_e0);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    if (*(int *)(param_4 + 8) == 3) {
      pcVar17 = *(code **)(*param_3 + 0x230);
    }
    else {
      pcVar17 = *(code **)(*param_3 + 0x110);
    }
    (*pcVar17)(local_e0,param_3,param_2,param_4);
    break;
  case 6:
    uVar12 = FUN_029fff3c(param_1,&local_e0);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    fVar26 = -INFINITY;
    if (-3.4028234663852886e+38 <= local_e0) {
      fVar26 = (float)local_e0;
    }
    fVar25 = INFINITY;
    if (local_e0 <= 3.4028234663852886e+38) {
      fVar25 = fVar26;
    }
    if (*(int *)(param_4 + 8) == 3) {
      pcVar17 = *(code **)(*param_3 + 0x228);
    }
    else {
      pcVar17 = *(code **)(*param_3 + 0x108);
    }
    (*pcVar17)(fVar25,param_3,param_2,param_4);
    break;
  case 7:
    if (*(int *)(param_1 + 0x28) != 3) {
      local_e0 = 0.0;
      local_d8 = (char *)0x0;
      local_d0 = 0.0;
      uVar12 = FUN_00c3d340(param_1,&local_e0);
      dVar16 = local_d0;
      dVar7 = local_e0;
      if ((uVar12 & 1) == 0) goto joined_r0x00c3f17c;
      pcVar20 = (char *)(ulong)(local_e0._0_1_ >> 1);
      pcVar19 = pcVar20;
      if (((ulong)local_e0 & 1) != 0) {
        pcVar19 = local_d8;
      }
      if (pcVar19 == (char *)0x4) {
        iVar9 = std::string::compare((ulong)&local_e0,0,(char *)0xffffffffffffffff,0x3c38de7);
        if (iVar9 != 0) {
          pcVar20 = (char *)(ulong)(local_e0._0_1_ >> 1);
          goto LAB_00c3ef3c;
        }
LAB_00c3f39c:
        if (*(int *)(param_4 + 8) == 3) {
          pcVar17 = *(code **)(*param_3 + 0x238);
        }
        else {
          pcVar17 = *(code **)(*param_3 + 0x118);
        }
        uVar22 = 1;
      }
      else {
LAB_00c3ef3c:
        pcVar19 = pcVar20;
        if ((local_e0._0_1_ & 1) != 0) {
          pcVar19 = local_d8;
        }
        bVar6 = local_e0._0_1_;
        if (pcVar19 == (char *)0x4) {
          iVar9 = std::string::compare((ulong)&local_e0,0,(char *)0xffffffffffffffff,0x3c7144e);
          if (iVar9 == 0) goto LAB_00c3f39c;
          pcVar20 = (char *)(ulong)(local_e0._0_1_ >> 1);
          bVar6 = local_e0._0_1_;
        }
        pcVar19 = pcVar20;
        if ((bVar6 & 1) != 0) {
          pcVar19 = local_d8;
        }
        if (pcVar19 == (char *)0x1) {
          iVar9 = std::string::compare((ulong)&local_e0,0,(char *)0xffffffffffffffff,0x3be69bd);
          if (iVar9 == 0) goto LAB_00c3f39c;
          pcVar20 = (char *)(ulong)(local_e0._0_1_ >> 1);
          bVar6 = local_e0._0_1_;
        }
        pcVar19 = pcVar20;
        if ((bVar6 & 1) != 0) {
          pcVar19 = local_d8;
        }
        if (pcVar19 == (char *)0x5) {
          iVar9 = std::string::compare((ulong)&local_e0,0,(char *)0xffffffffffffffff,0x3c00ba2);
          if (iVar9 != 0) {
            pcVar20 = (char *)(ulong)(local_e0._0_1_ >> 1);
            bVar6 = local_e0._0_1_;
            goto LAB_00c3effc;
          }
        }
        else {
LAB_00c3effc:
          pcVar19 = pcVar20;
          if ((bVar6 & 1) != 0) {
            pcVar19 = local_d8;
          }
          if (pcVar19 == (char *)0x5) {
            iVar9 = std::string::compare((ulong)&local_e0,0,(char *)0xffffffffffffffff,0x3c19639);
            if (iVar9 == 0) goto LAB_00c3f68c;
            pcVar20 = (char *)(ulong)(local_e0._0_1_ >> 1);
            bVar6 = local_e0._0_1_;
          }
          if ((bVar6 & 1) != 0) {
            pcVar20 = local_d8;
          }
          if ((pcVar20 != (char *)0x1) ||
             (iVar9 = std::string::compare((ulong)&local_e0,0,(char *)0xffffffffffffffff,0x3bec811),
             iVar9 != 0)) {
            std::operator+("Invalid value for boolean field \"",(string *)*param_4);
            puVar10 = (ulong *)std::string::append(local_c8 + 0x18);
            uStack_90 = puVar10[1];
            local_88 = puVar10[2];
            local_98 = *puVar10;
            puVar10[1] = 0;
            puVar10[2] = 0;
            *puVar10 = 0;
            dVar16 = (double)((ulong)&local_e0 | 1);
            if (((ulong)local_e0 & 1) != 0) {
              dVar16 = local_d0;
            }
            puVar10 = (ulong *)std::string::append((char *)&local_98,(ulong)dVar16);
            uStack_78 = puVar10[1];
            local_70 = puVar10[2];
            local_80 = *puVar10;
            *puVar10 = 0;
            puVar10[1] = 0;
            puVar10[2] = 0;
            pdVar11 = (double *)std::string::append((char *)&local_80);
            local_60 = pdVar11[1];
            local_58 = pdVar11[2];
            local_68 = *pdVar11;
            pdVar11[1] = 0.0;
            pdVar11[2] = 0.0;
            *pdVar11 = 0.0;
            FUN_00c340d8(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                         &local_68);
            dVar16 = local_58;
            if ((((ulong)local_68 & 1) != 0) && (local_58 != 0.0)) {
              lVar15 = tpidr_el0;
              plVar23 = *(long **)(lVar15 + 0x30);
              if (plVar23 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar23 = DAT_04859430;
                *(long **)(lVar15 + 0x30) = DAT_04859430;
              }
              uVar12 = (**(code **)(*plVar23 + 0xf8))(plVar23);
              if (((uVar12 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
                (**(code **)(*plVar23 + 0x18))(plVar23,dVar16,0,8);
              }
              else {
                FUN_00c48fe8(plVar23,dVar16,0,8);
              }
            }
            uVar12 = local_70;
            if (((local_80 & 1) != 0) && (local_70 != 0)) {
              lVar15 = tpidr_el0;
              plVar23 = *(long **)(lVar15 + 0x30);
              if (plVar23 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar23 = DAT_04859430;
                *(long **)(lVar15 + 0x30) = DAT_04859430;
              }
              uVar13 = (**(code **)(*plVar23 + 0xf8))(plVar23);
              if (((uVar13 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
                (**(code **)(*plVar23 + 0x18))(plVar23,uVar12,0,8);
              }
              else {
                FUN_00c48fe8(plVar23,uVar12,0,8);
              }
            }
            uVar12 = local_88;
            if (((local_98 & 1) != 0) && (local_88 != 0)) {
              lVar15 = tpidr_el0;
              plVar23 = *(long **)(lVar15 + 0x30);
              if (plVar23 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar23 = DAT_04859430;
                *(long **)(lVar15 + 0x30) = DAT_04859430;
              }
              uVar13 = (**(code **)(*plVar23 + 0xf8))(plVar23);
              if (((uVar13 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
                (**(code **)(*plVar23 + 0x18))(plVar23,uVar12,0,8);
              }
              else {
                FUN_00c48fe8(plVar23,uVar12,0,8);
              }
            }
            dVar16 = local_d0;
            dVar7 = local_e0;
            if (((local_c8[0x18] & 1U) != 0) && (local_a0 != 0.0)) {
              lVar15 = tpidr_el0;
              plVar23 = *(long **)(lVar15 + 0x30);
              if (plVar23 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar23 = DAT_04859430;
                *(long **)(lVar15 + 0x30) = DAT_04859430;
              }
              uVar12 = (**(code **)(*plVar23 + 0xf8))(plVar23);
              if (((uVar12 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
                (**(code **)(*plVar23 + 0x18))(plVar23,local_a0,0,8);
                dVar16 = local_d0;
                dVar7 = local_e0;
              }
              else {
                FUN_00c48fe8(plVar23,local_a0,0,8);
                dVar16 = local_d0;
                dVar7 = local_e0;
              }
            }
joined_r0x00c3f17c:
            if (((ulong)dVar7 & 1) == 0) {
              return 0;
            }
            if (dVar16 == 0.0) {
              return 0;
            }
            lVar15 = tpidr_el0;
            plVar23 = *(long **)(lVar15 + 0x30);
            if (plVar23 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar23 = DAT_04859430;
              *(long **)(lVar15 + 0x30) = DAT_04859430;
            }
            uVar12 = (**(code **)(*plVar23 + 0xf8))(plVar23);
            if (((uVar12 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
              (**(code **)(*plVar23 + 0x18))(plVar23,dVar16,0,8);
              return 0;
            }
            FUN_00c48fe8(plVar23,dVar16,0,8);
            return 0;
          }
        }
LAB_00c3f68c:
        if (*(int *)(param_4 + 8) == 3) {
          pcVar17 = *(code **)(*param_3 + 0x238);
        }
        else {
          pcVar17 = *(code **)(*param_3 + 0x118);
        }
        uVar22 = 0;
      }
      (*pcVar17)(param_3,param_2,param_4,uVar22);
      param_2 = local_d0;
      dVar16 = local_e0;
      goto joined_r0x00c3f2d4;
    }
    uVar12 = FUN_00c408c0(param_1,&local_e0,1);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    if (*(int *)(param_4 + 8) == 3) {
      pcVar17 = *(code **)(*param_3 + 0x238);
    }
    else {
      pcVar17 = *(code **)(*param_3 + 0x118);
    }
    uVar12 = (ulong)(local_e0 != 0.0);
LAB_00c3f388:
    (*pcVar17)(param_3,param_2,param_4,uVar12);
    break;
  case 8:
    local_60 = 0.0;
    local_58 = 0.0;
    local_68 = 0.0;
    lVar15 = param_4[0xe];
    if (*(int *)(param_1 + 0x28) == 2) {
      uVar12 = FUN_00c3d340(param_1,&local_68);
      if ((uVar12 & 1) == 0) goto LAB_00c3f674;
      iVar9 = FUN_00b7cb3c(*(undefined8 *)(*(long *)(lVar15 + 0x10) + 0x98),lVar15,&local_68,5);
      if (iVar9 != 0) {
        lVar15 = extraout_x1;
        goto LAB_00c3f484;
      }
LAB_00c3f4a0:
      if (*(char *)(param_1 + 0xe6) == '\0') {
        std::operator+("Unknown enumeration value of \"",(string *)&local_68);
        puVar10 = (ulong *)std::string::append(local_c8 + 0x18);
        uStack_90 = puVar10[1];
        local_88 = puVar10[2];
        local_98 = *puVar10;
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        pbVar18 = (byte *)*param_4;
        pbVar2 = *(byte **)(pbVar18 + 0x10);
        if ((*pbVar18 & 1) == 0) {
          pbVar2 = pbVar18 + 1;
        }
        puVar10 = (ulong *)std::string::append((char *)&local_98,(ulong)pbVar2);
        uStack_78 = puVar10[1];
        local_70 = puVar10[2];
        local_80 = *puVar10;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        pdVar11 = (double *)std::string::append((char *)&local_80);
        local_d8 = (char *)pdVar11[1];
        local_d0 = pdVar11[2];
        local_e0 = *pdVar11;
        pdVar11[1] = 0.0;
        pdVar11[2] = 0.0;
        *pdVar11 = 0.0;
        FUN_00c340d8(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                     &local_e0);
        dVar16 = local_d0;
        if ((((ulong)local_e0 & 1) != 0) && (local_d0 != 0.0)) {
          lVar15 = tpidr_el0;
          plVar23 = *(long **)(lVar15 + 0x30);
          if (plVar23 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar23 = DAT_04859430;
            *(long **)(lVar15 + 0x30) = DAT_04859430;
          }
          uVar12 = (**(code **)(*plVar23 + 0xf8))(plVar23);
          if (((uVar12 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
            (**(code **)(*plVar23 + 0x18))(plVar23,dVar16,0,8);
          }
          else {
            FUN_00c48fe8(plVar23,dVar16,0,8);
          }
        }
        uVar12 = local_70;
        if (((local_80 & 1) != 0) && (local_70 != 0)) {
          lVar15 = tpidr_el0;
          plVar23 = *(long **)(lVar15 + 0x30);
          if (plVar23 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar23 = DAT_04859430;
            *(long **)(lVar15 + 0x30) = DAT_04859430;
          }
          uVar13 = (**(code **)(*plVar23 + 0xf8))(plVar23);
          if (((uVar13 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
            (**(code **)(*plVar23 + 0x18))(plVar23,uVar12,0,8);
          }
          else {
            FUN_00c48fe8(plVar23,uVar12,0,8);
          }
        }
        uVar12 = local_88;
        if (((local_98 & 1) != 0) && (local_88 != 0)) {
          lVar15 = tpidr_el0;
          plVar23 = *(long **)(lVar15 + 0x30);
          if (plVar23 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar23 = DAT_04859430;
            *(long **)(lVar15 + 0x30) = DAT_04859430;
          }
          uVar13 = (**(code **)(*plVar23 + 0xf8))(plVar23);
          if (((uVar13 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
            (**(code **)(*plVar23 + 0x18))(plVar23,uVar12,0,8);
          }
          else {
            FUN_00c48fe8(plVar23,uVar12,0,8);
          }
        }
        if (((local_c8[0x18] & 1U) != 0) && (dVar16 = local_a0, local_a0 != 0.0)) goto LAB_00c3facc;
        goto LAB_00c3f674;
      }
      std::operator+("Unknown enumeration value of \"",(string *)&local_68);
      puVar10 = (ulong *)std::string::append(local_c8 + 0x18);
      uStack_90 = puVar10[1];
      local_88 = puVar10[2];
      local_98 = *puVar10;
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = 0;
      pbVar18 = (byte *)*param_4;
      pbVar2 = *(byte **)(pbVar18 + 0x10);
      if ((*pbVar18 & 1) == 0) {
        pbVar2 = pbVar18 + 1;
      }
      puVar10 = (ulong *)std::string::append((char *)&local_98,(ulong)pbVar2);
      uStack_78 = puVar10[1];
      local_70 = puVar10[2];
      local_80 = *puVar10;
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      pdVar11 = (double *)std::string::append((char *)&local_80);
      local_d8 = (char *)pdVar11[1];
      local_d0 = pdVar11[2];
      local_e0 = *pdVar11;
      pdVar11[1] = 0.0;
      pdVar11[2] = 0.0;
      *pdVar11 = 0.0;
      FUN_00c38498(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_e0
                  );
      dVar16 = local_d0;
      if ((((ulong)local_e0 & 1) != 0) && (local_d0 != 0.0)) {
        lVar15 = tpidr_el0;
        plVar23 = *(long **)(lVar15 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar15 + 0x30) = DAT_04859430;
        }
        uVar12 = (**(code **)(*plVar23 + 0xf8))(plVar23);
        if (((uVar12 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
          (**(code **)(*plVar23 + 0x18))(plVar23,dVar16,0,8);
        }
        else {
          FUN_00c48fe8(plVar23,dVar16,0,8);
        }
      }
      uVar12 = local_70;
      if (((local_80 & 1) != 0) && (local_70 != 0)) {
        lVar15 = tpidr_el0;
        plVar23 = *(long **)(lVar15 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar15 + 0x30) = DAT_04859430;
        }
        uVar13 = (**(code **)(*plVar23 + 0xf8))(plVar23);
        if (((uVar13 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
          (**(code **)(*plVar23 + 0x18))(plVar23,uVar12,0,8);
        }
        else {
          FUN_00c48fe8(plVar23,uVar12,0,8);
        }
      }
      uVar12 = local_88;
      if (((local_98 & 1) != 0) && (local_88 != 0)) {
        lVar15 = tpidr_el0;
        plVar23 = *(long **)(lVar15 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar15 + 0x30) = DAT_04859430;
        }
        uVar13 = (**(code **)(*plVar23 + 0xf8))(plVar23);
        if (((uVar13 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
          (**(code **)(*plVar23 + 0x18))(plVar23,uVar12,0,8);
        }
        else {
          FUN_00c48fe8(plVar23,uVar12,0,8);
        }
      }
      if (((local_c8[0x18] & 1U) != 0) && (local_a0 != 0.0)) {
        lVar15 = tpidr_el0;
        plVar23 = *(long **)(lVar15 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar15 + 0x30) = DAT_04859430;
        }
        uVar12 = (**(code **)(*plVar23 + 0xf8))(plVar23);
        if (((uVar12 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
          (**(code **)(*plVar23 + 0x18))(plVar23,local_a0,0,8);
        }
        else {
          FUN_00c48fe8(plVar23,local_a0,0,8);
        }
      }
      bVar24 = true;
      uVar22 = 1;
    }
    else {
      local_e0 = (double)CONCAT53(local_e0._3_5_,0x2d02);
      sVar3 = *(string *)(param_1 + 0x30);
      uVar13 = (ulong)((byte)sVar3 >> 1);
      uVar12 = uVar13;
      if (((byte)sVar3 & 1) != 0) {
        uVar12 = *(ulong *)(param_1 + 0x38);
      }
      if (uVar12 == 1) {
        if (((byte)sVar3 & 1) == 0) {
          if (*(char *)(param_1 + 0x31) == '-') {
            pcVar19 = (char *)(param_1 + 0x32);
            pcVar20 = (char *)((ulong)&local_e0 | 2);
            uVar21 = uVar13;
            do {
              uVar21 = uVar21 - 1;
              if (uVar21 == 0) goto LAB_00c3f2fc;
              cVar4 = *pcVar20;
              cVar5 = *pcVar19;
              pcVar19 = pcVar19 + 1;
              pcVar20 = pcVar20 + 1;
            } while (cVar5 == cVar4);
          }
          goto LAB_00c3f2f4;
        }
        if (**(char **)(param_1 + 0x40) != '-') goto LAB_00c3f2f4;
LAB_00c3f2fc:
        local_e0 = (double)CONCAT53(local_e0._3_5_,0x2d02);
        if (uVar12 == 1) {
          if (((byte)sVar3 & 1) == 0) {
            if (*(char *)(param_1 + 0x31) == '-') {
              pcVar19 = (char *)(param_1 + 0x32);
              pcVar20 = (char *)((ulong)&local_e0 | 2);
              do {
                uVar13 = uVar13 - 1;
                if (uVar13 == 0) goto LAB_00c3f3c4;
                cVar4 = *pcVar20;
                cVar5 = *pcVar19;
                pcVar19 = pcVar19 + 1;
                pcVar20 = pcVar20 + 1;
              } while (cVar5 == cVar4);
            }
            goto LAB_00c3f3d8;
          }
          if (**(char **)(param_1 + 0x40) != '-') goto LAB_00c3f3d8;
LAB_00c3f3c4:
          FUN_00c2f698(param_1 + 0x28);
          bVar24 = true;
          uVar22 = 0x80000000;
        }
        else {
LAB_00c3f3d8:
          bVar24 = false;
          uVar22 = 0x7fffffff;
        }
        uVar12 = FUN_00c408c0(param_1,&local_e0,uVar22);
        if ((uVar12 & 1) != 0) {
          dVar16 = (double)-(long)local_e0;
          if (!bVar24) {
            dVar16 = local_e0;
          }
          FUN_00c10150(&local_e0,dVar16);
          dVar7 = local_58;
          if ((((ulong)local_68 & 1) != 0) && (local_58 != 0.0)) {
            lVar14 = tpidr_el0;
            plVar23 = *(long **)(lVar14 + 0x30);
            if (plVar23 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar23 = DAT_04859430;
              *(long **)(lVar14 + 0x30) = DAT_04859430;
            }
            uVar12 = (**(code **)(*plVar23 + 0xf8))(plVar23);
            if (((uVar12 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
              (**(code **)(*plVar23 + 0x18))(plVar23,dVar7,0,8);
            }
            else {
              FUN_00c48fe8(plVar23,dVar7,0,8);
            }
          }
          local_68 = local_e0;
          local_60 = (double)local_d8;
          local_58 = local_d0;
          lVar15 = FUN_00b7ccec(lVar15,(ulong)dVar16 & 0xffffffff);
LAB_00c3f484:
          if (lVar15 == 0) goto LAB_00c3f4a0;
          if (*(int *)(param_4 + 8) == 3) {
            pcVar17 = *(code **)(*param_3 + 0x248);
          }
          else {
            pcVar17 = *(code **)(*param_3 + 0x128);
          }
          (*pcVar17)(param_3,param_2,param_4);
          bVar24 = false;
          uVar22 = 0;
          goto LAB_00c3f67c;
        }
      }
      else {
LAB_00c3f2f4:
        if (*(int *)(param_1 + 0x28) == 3) goto LAB_00c3f2fc;
        std::operator+("Expected integer or identifier, got: ",(string *)(param_1 + 0x30));
        FUN_00c340d8(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                     &local_e0);
        if ((((ulong)local_e0 & 1) == 0) || (dVar16 = local_d0, local_d0 == 0.0)) goto LAB_00c3f674;
LAB_00c3facc:
        lVar15 = tpidr_el0;
        plVar23 = *(long **)(lVar15 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar15 + 0x30) = DAT_04859430;
        }
        uVar12 = (**(code **)(*plVar23 + 0xf8))(plVar23);
        if (((uVar12 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
          (**(code **)(*plVar23 + 0x18))(plVar23,dVar16,0,8);
        }
        else {
          FUN_00c48fe8(plVar23,dVar16,0,8);
        }
      }
LAB_00c3f674:
      uVar22 = 0;
      bVar24 = true;
    }
LAB_00c3f67c:
    dVar16 = local_58;
    if ((((ulong)local_68 & 1) != 0) && (local_58 != 0.0)) {
      lVar15 = tpidr_el0;
      plVar23 = *(long **)(lVar15 + 0x30);
      if (plVar23 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar23 = DAT_04859430;
        *(long **)(lVar15 + 0x30) = DAT_04859430;
      }
      uVar12 = (**(code **)(*plVar23 + 0xf8))(plVar23);
      if (((uVar12 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
        (**(code **)(*plVar23 + 0x18))(plVar23,dVar16,0,8);
      }
      else {
        FUN_00c48fe8(plVar23,dVar16,0,8);
      }
    }
    if (bVar24) {
      return uVar22;
    }
    break;
  case 9:
    local_60 = 0.0;
    local_58 = 0.0;
    local_68 = 0.0;
    if (*(int *)(param_1 + 0x28) != 5) {
      std::operator+("Expected string, got: ",(string *)(param_1 + 0x30));
      FUN_00c340d8(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_e0
                  );
      dVar8 = local_d0;
      dVar16 = local_58;
      dVar7 = local_68;
      if ((((ulong)local_e0 & 1) != 0) && (local_d0 != 0.0)) {
        lVar15 = tpidr_el0;
        plVar23 = *(long **)(lVar15 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar15 + 0x30) = DAT_04859430;
        }
        uVar12 = (**(code **)(*plVar23 + 0xf8))(plVar23);
        if (((uVar12 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
          (**(code **)(*plVar23 + 0x18))(plVar23,dVar8,0,8);
          dVar16 = local_58;
          dVar7 = local_68;
        }
        else {
          FUN_00c48fe8(plVar23,dVar8,0,8);
          dVar16 = local_58;
          dVar7 = local_68;
        }
      }
      goto joined_r0x00c3f17c;
    }
    local_68 = 0.0;
    do {
      FUN_00c3070c(param_1 + 0x30,&local_68);
      FUN_00c2f698(param_1 + 0x28);
    } while (*(int *)(param_1 + 0x28) == 5);
    if (*(int *)(param_4 + 8) == 3) {
      pcVar17 = *(code **)(*param_3 + 0x240);
    }
    else {
      pcVar17 = *(code **)(*param_3 + 0x120);
    }
    (*pcVar17)(param_3,param_2,param_4,&local_68);
    param_2 = local_58;
    dVar16 = local_68;
joined_r0x00c3f2d4:
    if (((ulong)dVar16 & 1) == 0) {
      return 1;
    }
    if (param_2 == 0.0) {
      return 1;
    }
    lVar15 = tpidr_el0;
    param_3 = *(long **)(lVar15 + 0x30);
    if (param_3 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      param_3 = DAT_04859430;
      *(long **)(lVar15 + 0x30) = DAT_04859430;
    }
    uVar12 = (**(code **)(*param_3 + 0xf8))(param_3);
    if (((uVar12 & 1) != 0) && (lVar15 = FUN_00c4e600(), 0 < *(int *)(lVar15 + 0x12c8))) {
      FUN_00c48fe8(param_3,param_2,0,8);
      return 1;
    }
    param_4 = (undefined8 *)0x0;
    pcVar17 = *(code **)(*param_3 + 0x18);
    dVar16 = 3.95252516672997e-323;
LAB_00c3f28c:
    (*pcVar17)(param_3,param_2,param_4,dVar16);
    break;
  case 10:
    local_e0 = (double)CONCAT44(local_e0._4_4_,3);
    local_c8[0x10] = '\0';
    local_c8[0x11] = '\0';
    local_c8[0x12] = '\0';
    local_c8[0x13] = '\0';
    local_c8[0x14] = '\0';
    local_c8[0x15] = '\0';
    local_c8[0x16] = '\0';
    local_c8[0x17] = '\0';
    local_d0 = (double)CONCAT44(local_d0._4_4_,0x2ec);
    local_d8 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/text_format.cc"
    ;
    local_c8[0] = '\0';
    local_c8[1] = '\0';
    local_c8[2] = '\0';
    local_c8[3] = '\0';
    local_c8[4] = '\0';
    local_c8[5] = '\0';
    local_c8[6] = '\0';
    local_c8[7] = '\0';
    local_c8[8] = '\0';
    local_c8[9] = '\0';
    local_c8[10] = '\0';
    local_c8[0xb] = '\0';
    local_c8[0xc] = '\0';
    local_c8[0xd] = '\0';
    local_c8[0xe] = '\0';
    local_c8[0xf] = '\0';
    std::string::append(local_c8);
    FUN_00bb0e90(&local_e0);
    FUN_00bb0d74(&local_e0);
  }
  return 1;
}


