/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01840f7c; name: FUN_01840f7c
 */


void FUN_01840f7c(long param_1,undefined8 param_2,long param_3,long *param_4,undefined8 param_5,
                 long param_6,int param_7,long *param_8,undefined1 *param_9)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  uint *puVar11;
  undefined *puVar12;
  undefined1 uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined *local_c0 [2];
  long local_b0;
  undefined2 local_a8;
  char local_a6;
  byte local_64 [4];
  
  *param_9 = 0;
  lVar20 = *(long *)(param_3 + 0x30);
  uVar4 = FUN_0183f034(param_1,param_2,param_6);
  uVar21 = *(undefined8 *)(param_3 + 0x290);
  uVar5 = (**(code **)(*param_4 + 0x98))(param_4);
  uVar5 = FUN_010e161c(uVar21,uVar5);
  local_c0[1] = (undefined *)param_2;
  local_b0 = param_3;
  switch(*(undefined1 *)(param_6 + 10)) {
  case 0:
  case 3:
    FUN_01253868(*(undefined8 *)(*(long *)(lVar20 + 0x18) + 0x290),uVar4,local_c0,local_64);
    uVar16 = (ulong)local_c0[0] & 0xff;
    if (((uVar16 == 5) || (*(byte *)(lVar20 + uVar16 * 0x38 + 0x58) <= local_64[0])) ||
       (puVar12 = *(undefined **)(lVar20 + uVar16 * 0x38 + (ulong)local_64[0] * 8 + 0x28),
       puVar12 == (undefined *)0x0)) goto LAB_01841e14;
    uVar16 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (10 < uVar16) goto LAB_01841e14;
    if (*(byte *)((long)param_8 + 0xa6) != 0) {
      plVar9 = param_8;
      uVar10 = uVar16;
      do {
        if ((undefined *)*plVar9 == puVar12) goto LAB_01841e14;
        uVar10 = uVar10 - 1;
        plVar9 = plVar9 + 1;
      } while (uVar10 != 0);
    }
    break;
  case 1:
    if (param_7 != 0) {
      lVar20 = FUN_01021c94(lVar20,param_7);
      if (lVar20 == 0) {
        return;
      }
      plVar9 = (long *)(*(code *)**(undefined8 **)(lVar20 + 0x28))((undefined8 *)(lVar20 + 0x28));
      if (((*PTR_DAT_047d3f00 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar7 != 0)) {
        uVar21 = FUN_01b07aa4();
        *(undefined8 *)PTR_DAT_047d3f08 = uVar21;
        __cxa_guard_release(PTR_DAT_047d3f00);
      }
      while( true ) {
        if (plVar9 == (long *)0x0) {
          return;
        }
        if (plVar9 == (long *)PTR_DAT_047d3f08) break;
        plVar9 = (long *)*plVar9;
      }
      uVar16 = (ulong)*(byte *)((long)param_8 + 0xa6);
      if (10 < uVar16) {
        return;
      }
      if (*(byte *)((long)param_8 + 0xa6) != 0) {
        plVar9 = param_8;
        uVar10 = uVar16;
        do {
          if (*plVar9 == lVar20) {
            return;
          }
          uVar10 = uVar10 - 1;
          plVar9 = plVar9 + 1;
        } while (uVar10 != 0);
      }
LAB_018416cc:
      param_8[uVar16] = lVar20;
      goto LAB_01841be8;
    }
    uVar16 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (10 < uVar16) {
      return;
    }
    if (*(byte *)((long)param_8 + 0xa6) != 0) {
      plVar9 = param_8;
      uVar10 = uVar16;
      do {
        if ((long *)*plVar9 == param_4) {
          return;
        }
        uVar10 = uVar10 - 1;
        plVar9 = plVar9 + 1;
      } while (uVar10 != 0);
    }
    goto LAB_01841be4;
  case 2:
    if (*(char *)(param_3 + 0x370) == '\0') {
      return;
    }
    lVar20 = FUN_010f6f54(lVar20,uVar4);
    if (lVar20 == 0) {
      return;
    }
    uVar16 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (10 < uVar16) {
      return;
    }
    if (*(byte *)((long)param_8 + 0xa6) != 0) {
      plVar9 = param_8;
      uVar10 = uVar16;
      do {
        if (*plVar9 == lVar20) {
          return;
        }
        uVar10 = uVar10 - 1;
        plVar9 = plVar9 + 1;
      } while (uVar10 != 0);
    }
    param_8[uVar16] = lVar20;
    goto LAB_01841be8;
  case 4:
    local_a8 = 0;
    local_c0[0] = PTR_DAT_047e2580 + 0x10;
    local_a6 = '\x01';
    FUN_01247774(local_c0);
    lVar20 = local_b0;
    if (local_a6 != '\0') {
      return;
    }
    uVar16 = (ulong)(byte)local_a8;
    lVar15 = 0;
    if ((byte)local_a8 < 5) {
      lVar15 = *(long *)(local_b0 + 0x30) + uVar16 * 0x38 + 0x28;
    }
    if (local_a8._1_1_ < *(byte *)(lVar15 + 0x30)) {
      plVar9 = *(long **)(lVar15 + (ulong)local_a8._1_1_ * 8);
    }
    else {
      plVar9 = (long *)0x0;
    }
    bVar3 = local_a8._1_1_ + 1;
    local_a8 = CONCAT11(bVar3,(byte)local_a8);
    if ((byte)local_a8 < 5) {
      do {
        lVar15 = *(long *)(*(long *)(lVar20 + 0x290) + 8);
        bVar2 = FUN_010f9128(*(undefined4 *)(lVar15 + 0x36c),*(undefined1 *)(lVar15 + 0x370),
                             (uint)uVar16 & 0xff);
        if (bVar3 < bVar2) {
          do {
            if (((bVar3 < *(byte *)(*(long *)(lVar20 + 0x30) + (uVar16 & 0xff) * 0x38 + 0x58)) &&
                (plVar8 = *(long **)(*(long *)(lVar20 + 0x30) + (uVar16 & 0xff) * 0x38 +
                                     (ulong)bVar3 * 8 + 0x28), plVar8 != (long *)0x0)) &&
               (uVar10 = (**(code **)(*plVar8 + 0x200))(), (uVar10 & 1) == 0)) {
              bVar1 = false;
              local_a8 = CONCAT11(bVar3,(char)uVar16);
              goto LAB_018416e4;
            }
            bVar3 = bVar3 + 1;
          } while (bVar3 < bVar2);
        }
        uVar14 = (uint)uVar16 + 1;
        uVar16 = (ulong)uVar14;
        bVar3 = 0;
      } while ((uVar14 & 0xff) < 5);
      bVar3 = 0;
      local_a8 = (ushort)(byte)uVar14;
    }
    bVar1 = true;
    local_a6 = '\x01';
LAB_018416e4:
    do {
      iVar7 = (**(code **)(*plVar9 + 0x98))(plVar9);
      iVar6 = (**(code **)(*param_4 + 0x98))(param_4);
      if ((plVar9 != (long *)0x0) && (iVar7 != iVar6)) {
        uVar10 = (ulong)*(byte *)((long)param_8 + 0xa6);
        if (uVar10 < 0xb) {
          plVar8 = param_8;
          uVar18 = uVar10;
          if (*(byte *)((long)param_8 + 0xa6) != 0) {
            do {
              if ((long *)*plVar8 == plVar9) goto LAB_01841788;
              uVar18 = uVar18 - 1;
              plVar8 = plVar8 + 1;
            } while (uVar18 != 0);
          }
          param_8[uVar10] = (long)plVar9;
          *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
          *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
          *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
          bVar2 = *(char *)((long)param_8 + 0xa6) + 1;
          *(byte *)((long)param_8 + 0xa6) = bVar2;
          if (*(byte *)((long)param_8 + 0xa7) < bVar2) {
            *(byte *)((long)param_8 + 0xa7) = bVar2;
          }
        }
      }
LAB_01841788:
      if (bVar1) {
        return;
      }
      uVar14 = (uint)uVar16 & 0xff;
      lVar15 = 0;
      if (uVar14 < 5) {
        lVar15 = *(long *)(lVar20 + 0x30) + (uVar16 & 0xff) * 0x38 + 0x28;
      }
      if (bVar3 < *(byte *)(lVar15 + 0x30)) {
        plVar9 = *(long **)(lVar15 + (ulong)bVar3 * 8);
      }
      else {
        plVar9 = (long *)0x0;
      }
      bVar3 = bVar3 + 1;
      local_a8 = CONCAT11(bVar3,(byte)local_a8);
      if (uVar14 < 5) {
        do {
          lVar15 = *(long *)(*(long *)(lVar20 + 0x290) + 8);
          bVar2 = FUN_010f9128(*(undefined4 *)(lVar15 + 0x36c),*(undefined1 *)(lVar15 + 0x370),
                               (uint)uVar16 & 0xff);
          if (bVar3 < bVar2) {
            do {
              if (((bVar3 < *(byte *)(*(long *)(lVar20 + 0x30) + (uVar16 & 0xff) * 0x38 + 0x58)) &&
                  (plVar8 = *(long **)(*(long *)(lVar20 + 0x30) + (uVar16 & 0xff) * 0x38 +
                                       (ulong)bVar3 * 8 + 0x28), plVar8 != (long *)0x0)) &&
                 (uVar10 = (**(code **)(*plVar8 + 0x200))(), (uVar10 & 1) == 0)) {
                bVar1 = false;
                local_a8 = CONCAT11(bVar3,(char)uVar16);
                goto LAB_018416e4;
              }
              bVar3 = bVar3 + 1;
            } while (bVar3 < bVar2);
          }
          uVar14 = (uint)uVar16 + 1;
          uVar16 = (ulong)uVar14;
          bVar3 = 0;
        } while ((uVar14 & 0xff) < 5);
        bVar3 = 0;
        local_a8 = (ushort)(byte)uVar14;
      }
      bVar1 = true;
      local_a6 = '\x01';
    } while( true );
  case 5:
    uVar4 = (**(code **)(*param_4 + 0x98))(param_4);
    puVar11 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x290) + 8) + 0x50)
                                   ,uVar4);
    if (puVar11 == (uint *)0x0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *puVar11 & 0xff;
      if (4 < (int)*puVar11) {
        uVar14 = 0;
      }
    }
    lVar19 = *(long *)(param_3 + 0x290);
    lVar15 = *(long *)(lVar19 + 8);
    uVar16 = FUN_01465b00(*(undefined4 *)(lVar15 + 0x36c),*(undefined1 *)(lVar15 + 0x370),uVar14,0);
    lVar15 = *(long *)(lVar19 + 8);
    iVar7 = *(int *)(lVar15 + 0x36c);
    uVar14 = (uint)(uVar16 & 0xff);
    if (iVar7 == 2) {
      if (4 < uVar14) goto LAB_01841e9c;
      puVar17 = &DAT_03d6a45a;
    }
    else if (iVar7 == 1) {
      if (4 < uVar14) {
LAB_01841e9c:
        uVar13 = 2;
        goto LAB_01841c48;
      }
      puVar17 = &DAT_03d6a455;
    }
    else {
      if ((iVar7 != 0) || (4 < uVar14)) goto LAB_01841e9c;
      puVar17 = &DAT_03d6a450;
    }
    uVar13 = puVar17[uVar16 & 0xff];
LAB_01841c48:
    iVar7 = FUN_0123aa70(iVar7,*(undefined1 *)(lVar15 + 0x370),uVar13);
    if (iVar7 == 0) {
      return;
    }
    iVar6 = 0;
    do {
      lVar15 = FUN_0183da74(param_1,lVar20,uVar5,iVar6);
      if (lVar15 != 0) {
        uVar16 = (ulong)*(byte *)((long)param_8 + 0xa6);
        if (uVar16 < 0xb) {
          plVar9 = param_8;
          uVar10 = uVar16;
          if (*(byte *)((long)param_8 + 0xa6) != 0) {
            do {
              if (*plVar9 == lVar15) goto LAB_01841ce8;
              uVar10 = uVar10 - 1;
              plVar9 = plVar9 + 1;
            } while (uVar10 != 0);
          }
          param_8[uVar16] = lVar15;
          *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
          *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
          *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
          bVar3 = *(char *)((long)param_8 + 0xa6) + 1;
          *(byte *)((long)param_8 + 0xa6) = bVar3;
          if (*(byte *)((long)param_8 + 0xa7) < bVar3) {
            *(byte *)((long)param_8 + 0xa7) = bVar3;
          }
        }
      }
LAB_01841ce8:
      iVar6 = iVar6 + 1;
      if (iVar6 == iVar7) {
        return;
      }
    } while( true );
  case 6:
    local_a8 = 0;
    local_c0[0] = PTR_DAT_047e2580 + 0x10;
    local_a6 = '\x01';
    FUN_01247774(local_c0);
    lVar20 = local_b0;
    if (local_a6 != '\0') {
      return;
    }
    uVar16 = (ulong)(byte)local_a8;
    lVar15 = 0;
    if ((byte)local_a8 < 5) {
      lVar15 = *(long *)(local_b0 + 0x30) + uVar16 * 0x38 + 0x28;
    }
    if (local_a8._1_1_ < *(byte *)(lVar15 + 0x30)) {
      lVar15 = *(long *)(lVar15 + (ulong)local_a8._1_1_ * 8);
    }
    else {
      lVar15 = 0;
    }
    bVar3 = local_a8._1_1_ + 1;
    local_a8 = CONCAT11(bVar3,(byte)local_a8);
    if ((byte)local_a8 < 5) {
      do {
        lVar19 = *(long *)(*(long *)(lVar20 + 0x290) + 8);
        bVar2 = FUN_010f9128(*(undefined4 *)(lVar19 + 0x36c),*(undefined1 *)(lVar19 + 0x370),
                             (uint)uVar16 & 0xff);
        if (bVar3 < bVar2) {
          do {
            if (((bVar3 < *(byte *)(*(long *)(lVar20 + 0x30) + (uVar16 & 0xff) * 0x38 + 0x58)) &&
                (plVar9 = *(long **)(*(long *)(lVar20 + 0x30) + (uVar16 & 0xff) * 0x38 +
                                     (ulong)bVar3 * 8 + 0x28), plVar9 != (long *)0x0)) &&
               (uVar10 = (**(code **)(*plVar9 + 0x200))(), (uVar10 & 1) == 0)) {
              bVar1 = false;
              local_a8 = CONCAT11(bVar3,(char)uVar16);
              goto LAB_0184188c;
            }
            bVar3 = bVar3 + 1;
          } while (bVar3 < bVar2);
        }
        uVar14 = (uint)uVar16 + 1;
        uVar16 = (ulong)uVar14;
        bVar3 = 0;
      } while ((uVar14 & 0xff) < 5);
      bVar3 = 0;
      local_a8 = (ushort)(byte)uVar14;
    }
    bVar1 = true;
    local_a6 = '\x01';
LAB_0184188c:
    do {
      do {
        uVar10 = FUN_018d5d98(param_1,param_4,lVar15);
        if ((lVar15 != 0) && ((uVar10 & 1) != 0)) {
          uVar10 = (ulong)*(byte *)((long)param_8 + 0xa6);
          if (uVar10 < 0xb) {
            plVar9 = param_8;
            uVar18 = uVar10;
            if (*(byte *)((long)param_8 + 0xa6) != 0) {
              do {
                if (*plVar9 == lVar15) goto LAB_0184191c;
                uVar18 = uVar18 - 1;
                plVar9 = plVar9 + 1;
              } while (uVar18 != 0);
            }
            param_8[uVar10] = lVar15;
            *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
            *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
            *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
            bVar2 = *(char *)((long)param_8 + 0xa6) + 1;
            *(byte *)((long)param_8 + 0xa6) = bVar2;
            if (*(byte *)((long)param_8 + 0xa7) < bVar2) {
              *(byte *)((long)param_8 + 0xa7) = bVar2;
            }
          }
        }
LAB_0184191c:
        if (bVar1) {
          return;
        }
        uVar14 = (uint)uVar16 & 0xff;
        lVar15 = 0;
        if (uVar14 < 5) {
          lVar15 = *(long *)(lVar20 + 0x30) + (uVar16 & 0xff) * 0x38 + 0x28;
        }
        if (bVar3 < *(byte *)(lVar15 + 0x30)) {
          lVar15 = *(long *)(lVar15 + (ulong)bVar3 * 8);
        }
        else {
          lVar15 = 0;
        }
        bVar3 = bVar3 + 1;
        bVar1 = true;
      } while (4 < uVar14);
      uVar16 = uVar16 & 0xff;
      do {
        lVar19 = *(long *)(*(long *)(lVar20 + 0x290) + 8);
        bVar2 = FUN_010f9128(*(undefined4 *)(lVar19 + 0x36c),*(undefined1 *)(lVar19 + 0x370),
                             uVar16 & 0xffffffff);
        for (; bVar3 < bVar2; bVar3 = bVar3 + 1) {
          if (((bVar3 < *(byte *)(*(long *)(lVar20 + 0x30) + uVar16 * 0x38 + 0x58)) &&
              (plVar9 = *(long **)(*(long *)(lVar20 + 0x30) + uVar16 * 0x38 + (ulong)bVar3 * 8 +
                                  0x28), plVar9 != (long *)0x0)) &&
             (uVar10 = (**(code **)(*plVar9 + 0x200))(), (uVar10 & 1) == 0)) {
            bVar1 = false;
            goto LAB_0184188c;
          }
        }
        uVar16 = uVar16 + 1;
        bVar3 = 0;
      } while (uVar16 != 5);
      bVar1 = true;
      uVar16 = 5;
    } while( true );
  case 7:
    if (param_7 != 0) {
      lVar20 = FUN_01021c94(lVar20,param_7);
      if (lVar20 == 0) {
        return;
      }
      plVar9 = (long *)(*(code *)**(undefined8 **)(lVar20 + 0x28))((undefined8 *)(lVar20 + 0x28));
      if (((*PTR_DAT_047d3f00 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar7 != 0)) {
        uVar21 = FUN_01b07aa4();
        *(undefined8 *)PTR_DAT_047d3f08 = uVar21;
        __cxa_guard_release(PTR_DAT_047d3f00);
      }
      while( true ) {
        if (plVar9 == (long *)0x0) {
          return;
        }
        if (plVar9 == (long *)PTR_DAT_047d3f08) break;
        plVar9 = (long *)*plVar9;
      }
      uVar16 = (ulong)*(byte *)((long)param_8 + 0xa6);
      if (10 < uVar16) {
        return;
      }
      if (*(byte *)((long)param_8 + 0xa6) != 0) {
        plVar9 = param_8;
        uVar10 = uVar16;
        do {
          if (*plVar9 == lVar20) {
            return;
          }
          uVar10 = uVar10 - 1;
          plVar9 = plVar9 + 1;
        } while (uVar10 != 0);
      }
      goto LAB_018416cc;
    }
    uVar16 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (10 < uVar16) {
      return;
    }
    if (*(byte *)((long)param_8 + 0xa6) != 0) {
      plVar9 = param_8;
      uVar10 = uVar16;
      do {
        if ((long *)*plVar9 == param_4) {
          return;
        }
        uVar10 = uVar10 - 1;
        plVar9 = plVar9 + 1;
      } while (uVar10 != 0);
    }
LAB_01841be4:
    param_8[uVar16] = (long)param_4;
LAB_01841be8:
    *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
    *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
    *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
    bVar3 = *(char *)((long)param_8 + 0xa6) + 1;
    *(byte *)((long)param_8 + 0xa6) = bVar3;
    if (*(byte *)((long)param_8 + 0xa7) < bVar3) {
      *(byte *)((long)param_8 + 0xa7) = bVar3;
    }
    return;
  case 8:
    local_a8 = 0;
    local_c0[0] = PTR_DAT_047e2580 + 0x10;
    local_a6 = '\x01';
    FUN_01247774(local_c0);
    lVar20 = local_b0;
    if (local_a6 != '\0') {
      return;
    }
    uVar16 = (ulong)(byte)local_a8;
    lVar15 = 0;
    if ((byte)local_a8 < 5) {
      lVar15 = *(long *)(local_b0 + 0x30) + uVar16 * 0x38 + 0x28;
    }
    if (local_a8._1_1_ < *(byte *)(lVar15 + 0x30)) {
      lVar15 = *(long *)(lVar15 + (ulong)local_a8._1_1_ * 8);
    }
    else {
      lVar15 = 0;
    }
    bVar3 = local_a8._1_1_ + 1;
    local_a8 = CONCAT11(bVar3,(byte)local_a8);
    if ((byte)local_a8 < 5) {
      do {
        lVar19 = *(long *)(*(long *)(lVar20 + 0x290) + 8);
        bVar2 = FUN_010f9128(*(undefined4 *)(lVar19 + 0x36c),*(undefined1 *)(lVar19 + 0x370),
                             (uint)uVar16 & 0xff);
        if (bVar3 < bVar2) {
          do {
            if (((bVar3 < *(byte *)(*(long *)(lVar20 + 0x30) + (uVar16 & 0xff) * 0x38 + 0x58)) &&
                (plVar9 = *(long **)(*(long *)(lVar20 + 0x30) + (uVar16 & 0xff) * 0x38 +
                                     (ulong)bVar3 * 8 + 0x28), plVar9 != (long *)0x0)) &&
               (uVar10 = (**(code **)(*plVar9 + 0x200))(), (uVar10 & 1) == 0)) {
              bVar1 = false;
              local_a8 = CONCAT11(bVar3,(char)uVar16);
              goto LAB_01841a1c;
            }
            bVar3 = bVar3 + 1;
          } while (bVar3 < bVar2);
        }
        uVar14 = (uint)uVar16 + 1;
        uVar16 = (ulong)uVar14;
        bVar3 = 0;
      } while ((uVar14 & 0xff) < 5);
      bVar3 = 0;
      local_a8 = (ushort)(byte)uVar14;
    }
    bVar1 = true;
    local_a6 = '\x01';
LAB_01841a1c:
    do {
      do {
        if (lVar15 != 0) {
          uVar10 = (ulong)*(byte *)((long)param_8 + 0xa6);
          if (uVar10 < 0xb) {
            plVar9 = param_8;
            uVar18 = uVar10;
            if (*(byte *)((long)param_8 + 0xa6) != 0) {
              do {
                if (*plVar9 == lVar15) goto LAB_01841a98;
                uVar18 = uVar18 - 1;
                plVar9 = plVar9 + 1;
              } while (uVar18 != 0);
            }
            param_8[uVar10] = lVar15;
            *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
            *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
            *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
            bVar2 = *(char *)((long)param_8 + 0xa6) + 1;
            *(byte *)((long)param_8 + 0xa6) = bVar2;
            if (*(byte *)((long)param_8 + 0xa7) < bVar2) {
              *(byte *)((long)param_8 + 0xa7) = bVar2;
            }
          }
        }
LAB_01841a98:
        if (bVar1) {
          return;
        }
        uVar14 = (uint)uVar16 & 0xff;
        lVar15 = 0;
        if (uVar14 < 5) {
          lVar15 = *(long *)(lVar20 + 0x30) + (uVar16 & 0xff) * 0x38 + 0x28;
        }
        if (bVar3 < *(byte *)(lVar15 + 0x30)) {
          lVar15 = *(long *)(lVar15 + (ulong)bVar3 * 8);
        }
        else {
          lVar15 = 0;
        }
        bVar3 = bVar3 + 1;
        bVar1 = true;
      } while (4 < uVar14);
      uVar16 = uVar16 & 0xff;
      do {
        lVar19 = *(long *)(*(long *)(lVar20 + 0x290) + 8);
        bVar2 = FUN_010f9128(*(undefined4 *)(lVar19 + 0x36c),*(undefined1 *)(lVar19 + 0x370),
                             uVar16 & 0xffffffff);
        for (; bVar3 < bVar2; bVar3 = bVar3 + 1) {
          if (((bVar3 < *(byte *)(*(long *)(lVar20 + 0x30) + uVar16 * 0x38 + 0x58)) &&
              (plVar9 = *(long **)(*(long *)(lVar20 + 0x30) + uVar16 * 0x38 + (ulong)bVar3 * 8 +
                                  0x28), plVar9 != (long *)0x0)) &&
             (uVar10 = (**(code **)(*plVar9 + 0x200))(), (uVar10 & 1) == 0)) {
            bVar1 = false;
            goto LAB_01841a1c;
          }
        }
        uVar16 = uVar16 + 1;
        bVar3 = 0;
      } while (uVar16 != 5);
      bVar1 = true;
      uVar16 = 5;
    } while( true );
  case 9:
    uVar4 = (**(code **)(*param_4 + 0x98))(param_4);
    puVar11 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x290) + 8) + 0x50)
                                   ,uVar4);
    if (puVar11 == (uint *)0x0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *puVar11 & 0xff;
      if (4 < (int)*puVar11) {
        uVar14 = 0;
      }
    }
    lVar19 = *(long *)(param_3 + 0x290);
    lVar15 = *(long *)(lVar19 + 8);
    uVar16 = FUN_01465b00(*(undefined4 *)(lVar15 + 0x36c),*(undefined1 *)(lVar15 + 0x370),uVar14,0);
    lVar15 = *(long *)(lVar19 + 8);
    iVar7 = *(int *)(lVar15 + 0x36c);
    uVar14 = (uint)(uVar16 & 0xff);
    if (iVar7 == 2) {
      if (4 < uVar14) goto LAB_01841ea4;
      puVar17 = &DAT_03d6a45a;
LAB_01841d10:
      uVar13 = puVar17[uVar16 & 0xff];
    }
    else {
      if (iVar7 != 1) {
        if ((iVar7 != 0) || (4 < uVar14)) goto LAB_01841ea4;
        puVar17 = &DAT_03d6a450;
        goto LAB_01841d10;
      }
      if (uVar14 < 5) {
        puVar17 = &DAT_03d6a455;
        goto LAB_01841d10;
      }
LAB_01841ea4:
      uVar13 = 2;
    }
    bVar3 = FUN_0123aa70(iVar7,*(undefined1 *)(lVar15 + 0x370),uVar13);
    memset(local_c0,0,0x58);
    if (bVar3 == 0) {
LAB_01841d90:
      uVar16 = 0;
    }
    else {
      iVar7 = 0;
      uVar14 = 0;
      do {
        puVar12 = (undefined *)FUN_0183da74(param_1,lVar20,uVar5,uVar14);
        if (puVar12 != (undefined *)0x0) {
          local_c0[iVar7] = puVar12;
          iVar7 = iVar7 + 1;
        }
        uVar14 = uVar14 + 1;
      } while (bVar3 != uVar14);
      if (iVar7 < 2) goto LAB_01841d90;
      uVar21 = FUN_012440e8(*(undefined8 *)(param_1 + 0x10));
      uVar16 = FUN_012440f0(uVar21,iVar7);
      uVar16 = uVar16 & 0xff;
    }
    puVar12 = local_c0[uVar16];
    if (puVar12 == (undefined *)0x0) goto LAB_01841e14;
    uVar16 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (10 < uVar16) goto LAB_01841e14;
    if (*(byte *)((long)param_8 + 0xa6) != 0) {
      plVar9 = param_8;
      uVar10 = uVar16;
      do {
        if ((undefined *)*plVar9 == puVar12) goto LAB_01841e14;
        uVar10 = uVar10 - 1;
        plVar9 = plVar9 + 1;
      } while (uVar10 != 0);
    }
    break;
  default:
    return;
  case 0xd:
    if (param_7 == 0) {
      return;
    }
    lVar20 = FUN_01021c94(lVar20,param_7);
    if (lVar20 != 0) {
      uVar16 = (ulong)*(byte *)((long)param_8 + 0xa6);
      if (uVar16 < 0xb) {
        if (*(byte *)((long)param_8 + 0xa6) != 0) {
          plVar9 = param_8;
          uVar10 = uVar16;
          do {
            if (*plVar9 == lVar20) goto LAB_01841654;
            uVar10 = uVar10 - 1;
            plVar9 = plVar9 + 1;
          } while (uVar10 != 0);
        }
        param_8[uVar16] = lVar20;
        *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
        *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
        *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
        bVar3 = *(char *)((long)param_8 + 0xa6) + 1;
        *(byte *)((long)param_8 + 0xa6) = bVar3;
        if (*(byte *)((long)param_8 + 0xa7) < bVar3) {
          *(byte *)((long)param_8 + 0xa7) = bVar3;
        }
      }
    }
LAB_01841654:
    *param_9 = 1;
    return;
  }
  param_8[uVar16] = (long)puVar12;
  *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
  *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
  *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
  bVar3 = *(char *)((long)param_8 + 0xa6) + 1;
  *(byte *)((long)param_8 + 0xa6) = bVar3;
  if (*(byte *)((long)param_8 + 0xa7) < bVar3) {
    *(byte *)((long)param_8 + 0xa7) = bVar3;
  }
LAB_01841e14:
  *param_9 = 1;
  return;
}


