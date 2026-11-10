/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029fff3c; name: FUN_029fff3c
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_029fff3c(long param_1,double *param_2)

{
  string sVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  bool bVar7;
  byte *pbVar8;
  int iVar9;
  ulong *puVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  char *pcVar14;
  byte *pbVar15;
  char *pcVar16;
  long *plVar17;
  long lVar18;
  string *psVar19;
  double dVar20;
  byte local_80 [16];
  byte *local_70;
  ulong local_68;
  ulong local_60;
  byte *local_58;
  
  local_68 = CONCAT53(local_68._3_5_,0x2d02);
  psVar19 = (string *)(param_1 + 0x30);
  sVar1 = *psVar19;
  uVar13 = (ulong)((byte)sVar1 >> 1);
  uVar11 = uVar13;
  if (((byte)sVar1 & 1) != 0) {
    uVar11 = *(ulong *)(param_1 + 0x38);
  }
  bVar7 = false;
  lVar18 = param_1 + 0x28;
  if (uVar11 == 1) {
    if (((byte)sVar1 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == '-') {
        pcVar14 = (char *)(param_1 + 0x32);
        pcVar16 = (char *)((ulong)&local_68 | 2);
        do {
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_029fffe0;
          cVar2 = *pcVar16;
          cVar3 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar16 = pcVar16 + 1;
        } while (cVar3 == cVar2);
      }
    }
    else if (**(char **)(param_1 + 0x40) == '-') {
LAB_029fffe0:
      FUN_00c2f698(lVar18);
      bVar7 = true;
      goto LAB_029ffff4;
    }
    bVar7 = false;
  }
LAB_029ffff4:
  iVar9 = *(int *)(param_1 + 0x28);
  if (iVar9 == 2) {
    std::string::string((string *)&local_68,psVar19);
    pbVar8 = (byte *)((ulong)&local_68 | 1);
    pbVar15 = (byte *)((ulong)&local_68 | 1) + ((byte)local_68._0_1_ >> 1);
    if ((local_68 & 1) != 0) {
      pbVar8 = local_58;
      pbVar15 = local_58 + local_60;
    }
    for (; pbVar8 != pbVar15; pbVar8 = pbVar8 + 1) {
      if (*pbVar8 - 0x41 < 0x1a) {
        *pbVar8 = *pbVar8 + 0x20;
      }
    }
    uVar13 = (ulong)((byte)local_68._0_1_ >> 1);
    uVar11 = uVar13;
    if ((local_68 & 1) != 0) {
      uVar11 = local_60;
    }
    if (uVar11 == 3) {
      iVar9 = std::string::compare((ulong)&local_68,0,(char *)0xffffffffffffffff,0x3be063e);
      if (iVar9 != 0) {
        uVar13 = (ulong)((byte)local_68._0_1_ >> 1);
        goto LAB_02a001d8;
      }
LAB_02a00288:
      dVar20 = INFINITY;
    }
    else {
LAB_02a001d8:
      uVar11 = uVar13;
      if (((byte)local_68._0_1_ & 1) != 0) {
        uVar11 = local_60;
      }
      sVar1 = local_68._0_1_;
      if (uVar11 == 8) {
        iVar9 = std::string::compare((ulong)&local_68,0,(char *)0xffffffffffffffff,0x3c8bb31);
        if (iVar9 == 0) goto LAB_02a00288;
        uVar13 = (ulong)((byte)local_68._0_1_ >> 1);
        sVar1 = local_68._0_1_;
      }
      if (((byte)sVar1 & 1) != 0) {
        uVar13 = local_60;
      }
      if ((uVar13 != 3) ||
         (iVar9 = std::string::compare((ulong)&local_68,0,(char *)0xffffffffffffffff,0x3c475d9),
         iVar9 != 0)) {
        std::operator+("Expected double, got: ",(string *)&local_68);
        FUN_00c340d8(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                     local_80);
        if (((local_80[0] & 1) != 0) && (local_70 != (byte *)0x0)) {
          lVar18 = tpidr_el0;
          plVar17 = *(long **)(lVar18 + 0x30);
          if (plVar17 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar17 = DAT_04859430;
            *(long **)(lVar18 + 0x30) = DAT_04859430;
          }
          uVar11 = (**(code **)(*plVar17 + 0xf8))(plVar17);
          if (((uVar11 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
            (**(code **)(*plVar17 + 0x18))(plVar17,local_70,0,8);
          }
          else {
            FUN_00c48fe8(plVar17,local_70,0,8);
          }
        }
        goto LAB_02a00274;
      }
      dVar20 = NAN;
    }
    *param_2 = dVar20;
    FUN_00c2f698(lVar18);
    if (((local_68 & 1) != 0) && (local_58 != (byte *)0x0)) {
      lVar18 = tpidr_el0;
      plVar17 = *(long **)(lVar18 + 0x30);
      if (plVar17 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar17 = DAT_04859430;
        *(long **)(lVar18 + 0x30) = DAT_04859430;
      }
      uVar11 = (**(code **)(*plVar17 + 0xf8))(plVar17);
      if (((uVar11 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
        (**(code **)(*plVar17 + 0x18))(plVar17,local_58,0,8);
      }
      else {
        FUN_00c48fe8(plVar17,local_58,0,8);
      }
    }
joined_r0x02a005f0:
    if (bVar7) {
      *param_2 = -*param_2;
    }
    return 1;
  }
  if (iVar9 == 4) {
    dVar20 = (double)FUN_00c304a8(psVar19);
    *param_2 = dVar20;
    FUN_00c2f698(lVar18);
    goto joined_r0x02a005f0;
  }
  if (iVar9 == 3) {
    sVar1 = *psVar19;
    if (((byte)sVar1 & 1) != 0) {
      if ((1 < *(ulong *)(param_1 + 0x38)) && (**(char **)(param_1 + 0x40) == '0')) {
        bVar4 = (*(char **)(param_1 + 0x40))[1];
        goto joined_r0x02a00168;
      }
LAB_02a00318:
      pbVar15 = *(byte **)(param_1 + 0x40);
      if (((byte)sVar1 & 1) == 0) {
        pbVar15 = (byte *)(param_1 + 0x31);
      }
      bVar4 = *pbVar15;
      uVar12 = (uint)bVar4;
      if (bVar4 == 0x30) {
        if ((pbVar15[1] | 0x20) == 0x78) {
          pbVar15 = pbVar15 + 2;
          uVar12 = (uint)*pbVar15;
          uVar11 = 0x10;
          if (*pbVar15 == 0) goto LAB_02a00358;
        }
        else {
          uVar12 = 0x30;
          uVar11 = 8;
        }
LAB_02a00368:
        uVar13 = 0;
        do {
          pbVar15 = pbVar15 + 1;
          uVar5 = uVar12 - 0x37;
          if (0x19 < uVar12 - 0x41) {
            uVar5 = 0xffffffff;
          }
          if (uVar12 - 0x61 < 0x1a) {
            uVar5 = uVar12 - 0x57;
          }
          if ((uVar12 - 0x30 & 0xff) < 10) {
            uVar5 = uVar12 - 0x30;
          }
          if ((uint)uVar11 <= uVar5) {
LAB_02a003f8:
            std::operator+("Integer out of range (",psVar19);
            puVar10 = (ulong *)std::string::append((char *)local_80);
            local_60 = puVar10[1];
            local_58 = (byte *)puVar10[2];
            local_68 = *puVar10;
            puVar10[1] = 0;
            puVar10[2] = 0;
            *puVar10 = 0;
            FUN_00c340d8(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                         &local_68);
            pbVar15 = local_58;
            if (((local_68 & 1) != 0) && (local_58 != (byte *)0x0)) {
              lVar18 = tpidr_el0;
              plVar17 = *(long **)(lVar18 + 0x30);
              if (plVar17 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar17 = DAT_04859430;
                *(long **)(lVar18 + 0x30) = DAT_04859430;
              }
              uVar11 = (**(code **)(*plVar17 + 0xf8))(plVar17);
              if (((uVar11 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
                (**(code **)(*plVar17 + 0x18))(plVar17,pbVar15,0,8);
              }
              else {
                FUN_00c48fe8(plVar17,pbVar15,0,8);
              }
            }
            pbVar15 = local_70;
            if ((local_80[0] & 1) == 0) {
              return 0;
            }
            goto joined_r0x02a00528;
          }
          uVar6 = 0;
          if (uVar11 != 0) {
            uVar6 = ~(ulong)uVar5 / uVar11;
          }
          if (uVar6 < uVar13) goto LAB_02a003f8;
          uVar13 = (ulong)uVar5 + uVar13 * uVar11;
          uVar12 = (uint)*pbVar15;
        } while (uVar12 != 0);
        dVar20 = (double)uVar13;
      }
      else {
        uVar11 = 10;
        if (bVar4 != 0) goto LAB_02a00368;
LAB_02a00358:
        dVar20 = 0.0;
      }
      FUN_00c2f698(lVar18);
      *param_2 = dVar20;
      goto joined_r0x02a005f0;
    }
    if (((byte)sVar1 < 4) || (*(char *)(param_1 + 0x31) != '0')) goto LAB_02a00318;
    bVar4 = *(byte *)(param_1 + 0x32);
joined_r0x02a00168:
    if (((bVar4 | 0x20) != 0x78) && ((bVar4 < 0x30 || (0x37 < bVar4)))) goto LAB_02a00318;
    std::operator+("Expect a decimal number, got: ",psVar19);
    FUN_00c340d8(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_68);
LAB_02a00274:
    pbVar15 = local_58;
    if ((local_68 & 1) == 0) {
      return 0;
    }
joined_r0x02a00528:
    if (pbVar15 == (byte *)0x0) {
      return 0;
    }
    lVar18 = tpidr_el0;
    plVar17 = *(long **)(lVar18 + 0x30);
    if (plVar17 != (long *)0x0) goto LAB_02a00548;
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
  }
  else {
    std::operator+("Expected double, got: ",psVar19);
    FUN_00c340d8(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_68);
    pbVar15 = local_58;
    if ((local_68 & 1) == 0) {
      return 0;
    }
    if (local_58 == (byte *)0x0) {
      return 0;
    }
    lVar18 = tpidr_el0;
    plVar17 = *(long **)(lVar18 + 0x30);
    if (plVar17 != (long *)0x0) goto LAB_02a00548;
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
  }
  plVar17 = DAT_04859430;
  *(long **)(lVar18 + 0x30) = DAT_04859430;
LAB_02a00548:
  uVar11 = (**(code **)(*plVar17 + 0xf8))(plVar17);
  if (((uVar11 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
    (**(code **)(*plVar17 + 0x18))(plVar17,pbVar15,0,8);
  }
  else {
    FUN_00c48fe8(plVar17,pbVar15,0,8);
  }
  return 0;
}


