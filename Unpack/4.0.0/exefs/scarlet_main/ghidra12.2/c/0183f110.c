/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0183f110; name: FUN_0183f110
 */


void FUN_0183f110(long param_1,undefined8 param_2,long param_3,long *param_4,undefined4 param_5,
                 undefined2 *param_6,int param_7,long *param_8,undefined1 *param_9)

{
  undefined2 uVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  int *piVar12;
  long *plVar13;
  ulong uVar14;
  uint *puVar15;
  long *plVar16;
  undefined1 uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  undefined1 *puVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  byte bVar25;
  undefined *local_88;
  undefined8 local_80;
  long local_78;
  undefined2 local_70;
  char local_6e;
  byte local_64 [4];
  
  *param_9 = 0;
  lVar24 = *(long *)(param_3 + 0x30);
  lVar23 = *(long *)(param_1 + 0x10);
  iVar7 = (**(code **)(*param_4 + 0x98))(param_4);
  lVar23 = *(long *)(lVar23 + 0x310);
  iVar10 = *(int *)(lVar23 + 0x18);
  if (((*(byte *)(*(long *)(*(long *)(lVar23 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) && (iVar10 == 0))
  {
    lVar20 = *(long *)(*(long *)(lVar23 + 0x10) + 0x30);
    if (*(char *)(lVar20 + 0x90) == '\0') {
      iVar10 = 0;
    }
    else {
      plVar16 = *(long **)(lVar20 + 0x60);
      iVar10 = 0;
      if (plVar16 != (long *)0x0) {
        iVar10 = (**(code **)(*plVar16 + 0x98))();
        *(int *)(lVar23 + 0x18) = iVar10;
      }
    }
  }
  if (iVar10 == iVar7) {
LAB_0183f23c:
    bVar3 = false;
  }
  else {
    uVar1 = *param_6;
    if (((*PTR_DAT_047d7940 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
    uVar11 = *(undefined8 *)PTR_DAT_047d7948;
    *(undefined8 *)PTR_DAT_047d7950 = uVar11;
    piVar12 = (int *)FUN_00cf60cc(uVar11,uVar1);
    puVar4 = PTR_DAT_047ddad8;
    if (((*(ushort *)((long)piVar12 - (long)*piVar12) < 0xf) ||
        (uVar19 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[7], uVar19 == 0)) ||
       (*(char *)((long)piVar12 + uVar19) == '\0')) {
LAB_0183f210:
      local_88 = puVar4 + 0x10;
      local_80 = CONCAT62(local_80._2_6_,*param_6);
      sVar6 = FUN_0189412c(&local_88);
      if (sVar6 == 0) goto LAB_0183f23c;
    }
    else {
      local_88 = PTR_DAT_047ddad8 + 0x10;
      local_80 = CONCAT62(local_80._2_6_,*param_6);
      uVar19 = FUN_021feae8(&local_88);
      if ((uVar19 & 1) != 0) goto LAB_0183f210;
    }
    bVar3 = true;
  }
  uVar8 = FUN_0183f034(param_1,param_2,param_6,param_4,param_5);
  uVar11 = *(undefined8 *)(param_3 + 0x290);
  uVar9 = (**(code **)(*param_4 + 0x98))(param_4);
  uVar9 = FUN_010e161c(uVar11,uVar9);
  local_78 = param_3;
  switch(*(undefined1 *)(param_6 + 5)) {
  case 0:
  case 3:
    FUN_01253868(*(undefined8 *)(*(long *)(lVar24 + 0x18) + 0x290),uVar8,&local_88,local_64);
    uVar19 = (ulong)local_88 & 0xff;
    if (((uVar19 != 5) && (local_64[0] < *(byte *)(lVar24 + uVar19 * 0x38 + 0x58))) &&
       (lVar23 = *(long *)(lVar24 + uVar19 * 0x38 + (ulong)local_64[0] * 8 + 0x28), lVar23 != 0)) {
      uVar19 = (ulong)*(byte *)((long)param_8 + 0xa6);
      if (uVar19 < 0xb) {
        if (*(byte *)((long)param_8 + 0xa6) != 0) {
          plVar16 = param_8;
          uVar14 = uVar19;
          do {
            if (*plVar16 == lVar23) goto LAB_0183fc74;
            uVar14 = uVar14 - 1;
            plVar16 = plVar16 + 1;
          } while (uVar14 != 0);
        }
        param_8[uVar19] = lVar23;
LAB_0183fc34:
        *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
        *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
        *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
        bVar25 = *(char *)((long)param_8 + 0xa6) + 1;
        *(byte *)((long)param_8 + 0xa6) = bVar25;
        if (*(byte *)((long)param_8 + 0xa7) < bVar25) {
          *(byte *)((long)param_8 + 0xa7) = bVar25;
        }
      }
    }
    goto LAB_0183fc74;
  case 1:
    plVar16 = (long *)FUN_010f6f54(lVar24,uVar8);
    if (plVar16 == (long *)0x0) {
LAB_0183f34c:
      plVar16 = param_4;
    }
    else {
      uVar19 = (**(code **)(*plVar16 + 0x200))();
      if ((uVar19 & 1) != 0) goto LAB_0183f34c;
    }
    if (bVar3) {
      iVar10 = (**(code **)(*plVar16 + 0x98))(plVar16);
      iVar7 = (**(code **)(*param_4 + 0x98))(param_4);
      if (iVar10 != iVar7) {
        plVar16 = param_4;
      }
    }
    uVar19 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (10 < uVar19) {
      return;
    }
    if (*(byte *)((long)param_8 + 0xa6) != 0) {
      plVar13 = param_8;
      uVar14 = uVar19;
      do {
        if ((long *)*plVar13 == plVar16) {
          return;
        }
        uVar14 = uVar14 - 1;
        plVar13 = plVar13 + 1;
      } while (uVar14 != 0);
    }
    goto LAB_0183f42c;
  case 2:
    if (*(char *)(param_3 + 0x370) == '\0') {
      return;
    }
    plVar16 = (long *)FUN_010f6f54(lVar24,uVar8);
    if (plVar16 == (long *)0x0) {
      return;
    }
    iVar10 = (**(code **)(*plVar16 + 0x98))();
    iVar7 = (**(code **)(*param_4 + 0x98))(param_4);
    if (iVar10 == iVar7) {
      return;
    }
    uVar19 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (10 < uVar19) {
      return;
    }
    if (*(byte *)((long)param_8 + 0xa6) != 0) {
      plVar13 = param_8;
      uVar14 = uVar19;
      do {
        if ((long *)*plVar13 == plVar16) {
          return;
        }
        uVar14 = uVar14 - 1;
        plVar13 = plVar13 + 1;
      } while (uVar14 != 0);
    }
LAB_0183f42c:
    param_8[uVar19] = (long)plVar16;
LAB_018407d8:
    *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
    *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
    *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
    bVar25 = *(char *)((long)param_8 + 0xa6) + 1;
    *(byte *)((long)param_8 + 0xa6) = bVar25;
    if (*(byte *)((long)param_8 + 0xa7) < bVar25) {
      *(byte *)((long)param_8 + 0xa7) = bVar25;
    }
    break;
  case 4:
    lVar23 = *(long *)(param_1 + 0x10);
    iVar7 = (**(code **)(*param_4 + 0x98))();
    lVar23 = *(long *)(lVar23 + 0x310);
    iVar10 = *(int *)(lVar23 + 0x18);
    if (((*(byte *)(*(long *)(*(long *)(lVar23 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
       (iVar10 == 0)) {
      lVar24 = *(long *)(*(long *)(lVar23 + 0x10) + 0x30);
      if (*(char *)(lVar24 + 0x90) == '\0') {
        iVar10 = 0;
      }
      else {
        plVar16 = *(long **)(lVar24 + 0x60);
        iVar10 = 0;
        if (plVar16 != (long *)0x0) {
          iVar10 = (**(code **)(*plVar16 + 0x98))();
          *(int *)(lVar23 + 0x18) = iVar10;
        }
      }
    }
    if (iVar10 != iVar7) {
      local_70 = 0;
      local_88 = PTR_DAT_047e2580 + 0x10;
      local_6e = '\x01';
      local_80 = param_2;
      FUN_01247774(&local_88);
      lVar23 = local_78;
      if (local_6e != '\0') {
        return;
      }
      uVar19 = (ulong)(byte)local_70;
      lVar24 = 0;
      if ((byte)local_70 < 5) {
        lVar24 = *(long *)(local_78 + 0x30) + uVar19 * 0x38 + 0x28;
      }
      if (local_70._1_1_ < *(byte *)(lVar24 + 0x30)) {
        plVar16 = *(long **)(lVar24 + (ulong)local_70._1_1_ * 8);
      }
      else {
        plVar16 = (long *)0x0;
      }
      bVar25 = local_70._1_1_ + 1;
      local_70 = CONCAT11(bVar25,(byte)local_70);
      if ((byte)local_70 < 5) {
        do {
          lVar24 = *(long *)(*(long *)(lVar23 + 0x290) + 8);
          bVar5 = FUN_010f9128(*(undefined4 *)(lVar24 + 0x36c),*(undefined1 *)(lVar24 + 0x370),
                               (uint)uVar19 & 0xff);
          if (bVar25 < bVar5) {
            do {
              if (((bVar25 < *(byte *)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 + 0x58)) &&
                  (plVar13 = *(long **)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 +
                                        (ulong)bVar25 * 8 + 0x28), plVar13 != (long *)0x0)) &&
                 (uVar14 = (**(code **)(*plVar13 + 0x200))(), (uVar14 & 1) == 0)) {
                bVar2 = false;
                local_70 = CONCAT11(bVar25,(char)uVar19);
                goto LAB_018405a4;
              }
              bVar25 = bVar25 + 1;
            } while (bVar25 < bVar5);
          }
          uVar18 = (uint)uVar19 + 1;
          uVar19 = (ulong)uVar18;
          bVar25 = 0;
        } while ((uVar18 & 0xff) < 5);
        bVar25 = 0;
        local_70 = (ushort)(byte)uVar18;
      }
      bVar2 = true;
      local_6e = '\x01';
LAB_018405a4:
      if (!bVar3) {
LAB_0184083c:
        do {
          iVar10 = (**(code **)(*plVar16 + 0x98))(plVar16);
          iVar7 = (**(code **)(*param_4 + 0x98))(param_4);
          if ((plVar16 != (long *)0x0) && (iVar10 != iVar7)) {
            uVar14 = (ulong)*(byte *)((long)param_8 + 0xa6);
            if (uVar14 < 0xb) {
              plVar13 = param_8;
              uVar22 = uVar14;
              if (*(byte *)((long)param_8 + 0xa6) != 0) {
                do {
                  if ((long *)*plVar13 == plVar16) goto LAB_018408e0;
                  uVar22 = uVar22 - 1;
                  plVar13 = plVar13 + 1;
                } while (uVar22 != 0);
              }
              param_8[uVar14] = (long)plVar16;
              *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
              *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0
              ;
              *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0
              ;
              bVar5 = *(char *)((long)param_8 + 0xa6) + 1;
              *(byte *)((long)param_8 + 0xa6) = bVar5;
              if (*(byte *)((long)param_8 + 0xa7) < bVar5) {
                *(byte *)((long)param_8 + 0xa7) = bVar5;
              }
            }
          }
LAB_018408e0:
          if (bVar2) {
            return;
          }
          uVar18 = (uint)uVar19 & 0xff;
          lVar24 = 0;
          if (uVar18 < 5) {
            lVar24 = *(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 + 0x28;
          }
          if (bVar25 < *(byte *)(lVar24 + 0x30)) {
            plVar16 = *(long **)(lVar24 + (ulong)bVar25 * 8);
          }
          else {
            plVar16 = (long *)0x0;
          }
          bVar25 = bVar25 + 1;
          local_70 = CONCAT11(bVar25,(byte)local_70);
          if (uVar18 < 5) {
            do {
              lVar24 = *(long *)(*(long *)(lVar23 + 0x290) + 8);
              bVar5 = FUN_010f9128(*(undefined4 *)(lVar24 + 0x36c),*(undefined1 *)(lVar24 + 0x370),
                                   (uint)uVar19 & 0xff);
              if (bVar25 < bVar5) {
                do {
                  if (((bVar25 < *(byte *)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 + 0x58)
                       ) && (plVar13 = *(long **)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38
                                                  + (ulong)bVar25 * 8 + 0x28),
                            plVar13 != (long *)0x0)) &&
                     (uVar14 = (**(code **)(*plVar13 + 0x200))(), (uVar14 & 1) == 0)) {
                    bVar2 = false;
                    local_70 = CONCAT11(bVar25,(char)uVar19);
                    goto LAB_0184083c;
                  }
                  bVar25 = bVar25 + 1;
                } while (bVar25 < bVar5);
              }
              uVar18 = (uint)uVar19 + 1;
              uVar19 = (ulong)uVar18;
              bVar25 = 0;
            } while ((uVar18 & 0xff) < 5);
            bVar25 = 0;
            local_70 = (ushort)(byte)uVar18;
          }
          bVar2 = true;
          local_6e = '\x01';
        } while( true );
      }
LAB_018405b0:
      do {
        uVar14 = FUN_018d5d98(param_1,param_4,plVar16);
        if ((uVar14 & 1) == 0) {
          iVar10 = (**(code **)(*plVar16 + 0x98))(plVar16);
          iVar7 = (**(code **)(*param_4 + 0x98))(param_4);
          if (iVar10 != iVar7) {
            uVar14 = (ulong)*(byte *)((long)param_8 + 0xa6);
            if (uVar14 < 0xb) {
              plVar13 = param_8;
              uVar22 = uVar14;
              if (*(byte *)((long)param_8 + 0xa6) != 0) {
                do {
                  if ((long *)*plVar13 == plVar16) goto LAB_01840664;
                  uVar22 = uVar22 - 1;
                  plVar13 = plVar13 + 1;
                } while (uVar22 != 0);
              }
              param_8[uVar14] = (long)plVar16;
              *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
              *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0
              ;
              *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0
              ;
              bVar5 = *(char *)((long)param_8 + 0xa6) + 1;
              *(byte *)((long)param_8 + 0xa6) = bVar5;
              if (*(byte *)((long)param_8 + 0xa7) < bVar5) {
                *(byte *)((long)param_8 + 0xa7) = bVar5;
              }
            }
          }
        }
LAB_01840664:
        if (bVar2) {
          return;
        }
        uVar18 = (uint)uVar19 & 0xff;
        lVar24 = 0;
        if (uVar18 < 5) {
          lVar24 = *(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 + 0x28;
        }
        if (bVar25 < *(byte *)(lVar24 + 0x30)) {
          plVar16 = *(long **)(lVar24 + (ulong)bVar25 * 8);
        }
        else {
          plVar16 = (long *)0x0;
        }
        bVar25 = bVar25 + 1;
        local_70 = CONCAT11(bVar25,(byte)local_70);
        if (uVar18 < 5) {
          do {
            lVar24 = *(long *)(*(long *)(lVar23 + 0x290) + 8);
            bVar5 = FUN_010f9128(*(undefined4 *)(lVar24 + 0x36c),*(undefined1 *)(lVar24 + 0x370),
                                 (uint)uVar19 & 0xff);
            if (bVar25 < bVar5) {
              do {
                if (((bVar25 < *(byte *)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 + 0x58))
                    && (plVar13 = *(long **)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 +
                                             (ulong)bVar25 * 8 + 0x28), plVar13 != (long *)0x0)) &&
                   (uVar14 = (**(code **)(*plVar13 + 0x200))(), (uVar14 & 1) == 0)) {
                  bVar2 = false;
                  local_70 = CONCAT11(bVar25,(char)uVar19);
                  goto LAB_018405b0;
                }
                bVar25 = bVar25 + 1;
              } while (bVar25 < bVar5);
            }
            uVar18 = (uint)uVar19 + 1;
            uVar19 = (ulong)uVar18;
            bVar25 = 0;
          } while ((uVar18 & 0xff) < 5);
          bVar25 = 0;
          local_70 = (ushort)(byte)uVar18;
        }
        bVar2 = true;
        local_6e = '\x01';
      } while( true );
    }
    if (*(char *)(param_6 + 10) != '\0') {
      local_70 = 0;
      local_88 = PTR_DAT_047e2580 + 0x10;
      local_6e = '\x01';
      local_80 = param_2;
      FUN_01247774(&local_88);
      lVar23 = local_78;
      if (local_6e != '\0') {
        return;
      }
      uVar19 = (ulong)(byte)local_70;
      lVar24 = 0;
      if ((byte)local_70 < 5) {
        lVar24 = *(long *)(local_78 + 0x30) + uVar19 * 0x38 + 0x28;
      }
      if (local_70._1_1_ < *(byte *)(lVar24 + 0x30)) {
        plVar16 = *(long **)(lVar24 + (ulong)local_70._1_1_ * 8);
      }
      else {
        plVar16 = (long *)0x0;
      }
      bVar25 = local_70._1_1_ + 1;
      local_70 = CONCAT11(bVar25,(byte)local_70);
      if ((byte)local_70 < 5) {
        do {
          lVar24 = *(long *)(*(long *)(lVar23 + 0x290) + 8);
          bVar5 = FUN_010f9128(*(undefined4 *)(lVar24 + 0x36c),*(undefined1 *)(lVar24 + 0x370),
                               (uint)uVar19 & 0xff);
          if (bVar25 < bVar5) {
            do {
              if (((bVar25 < *(byte *)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 + 0x58)) &&
                  (plVar13 = *(long **)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 +
                                        (ulong)bVar25 * 8 + 0x28), plVar13 != (long *)0x0)) &&
                 (uVar14 = (**(code **)(*plVar13 + 0x200))(), (uVar14 & 1) == 0)) {
                bVar3 = false;
                local_70 = CONCAT11(bVar25,(char)uVar19);
                goto LAB_018409e4;
              }
              bVar25 = bVar25 + 1;
            } while (bVar25 < bVar5);
          }
          uVar18 = (uint)uVar19 + 1;
          uVar19 = (ulong)uVar18;
          bVar25 = 0;
        } while ((uVar18 & 0xff) < 5);
        bVar25 = 0;
        local_70 = (ushort)(byte)uVar18;
      }
      bVar3 = true;
      local_6e = '\x01';
LAB_018409e4:
      do {
        iVar10 = (**(code **)(*plVar16 + 0x98))(plVar16);
        iVar7 = (**(code **)(*param_4 + 0x98))(param_4);
        if ((plVar16 != (long *)0x0) && (iVar10 != iVar7)) {
          uVar14 = (ulong)*(byte *)((long)param_8 + 0xa6);
          if (uVar14 < 0xb) {
            plVar13 = param_8;
            uVar22 = uVar14;
            if (*(byte *)((long)param_8 + 0xa6) != 0) {
              do {
                if ((long *)*plVar13 == plVar16) goto LAB_01840a88;
                uVar22 = uVar22 - 1;
                plVar13 = plVar13 + 1;
              } while (uVar22 != 0);
            }
            param_8[uVar14] = (long)plVar16;
            *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
            *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
            *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
            bVar5 = *(char *)((long)param_8 + 0xa6) + 1;
            *(byte *)((long)param_8 + 0xa6) = bVar5;
            if (*(byte *)((long)param_8 + 0xa7) < bVar5) {
              *(byte *)((long)param_8 + 0xa7) = bVar5;
            }
          }
        }
LAB_01840a88:
        if (bVar3) {
          return;
        }
        uVar18 = (uint)uVar19 & 0xff;
        lVar24 = 0;
        if (uVar18 < 5) {
          lVar24 = *(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 + 0x28;
        }
        if (bVar25 < *(byte *)(lVar24 + 0x30)) {
          plVar16 = *(long **)(lVar24 + (ulong)bVar25 * 8);
        }
        else {
          plVar16 = (long *)0x0;
        }
        bVar25 = bVar25 + 1;
        local_70 = CONCAT11(bVar25,(byte)local_70);
        if (uVar18 < 5) {
          do {
            lVar24 = *(long *)(*(long *)(lVar23 + 0x290) + 8);
            bVar5 = FUN_010f9128(*(undefined4 *)(lVar24 + 0x36c),*(undefined1 *)(lVar24 + 0x370),
                                 (uint)uVar19 & 0xff);
            if (bVar25 < bVar5) {
              do {
                if (((bVar25 < *(byte *)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 + 0x58))
                    && (plVar13 = *(long **)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 +
                                             (ulong)bVar25 * 8 + 0x28), plVar13 != (long *)0x0)) &&
                   (uVar14 = (**(code **)(*plVar13 + 0x200))(), (uVar14 & 1) == 0)) {
                  bVar3 = false;
                  local_70 = CONCAT11(bVar25,(char)uVar19);
                  goto LAB_018409e4;
                }
                bVar25 = bVar25 + 1;
              } while (bVar25 < bVar5);
            }
            uVar18 = (uint)uVar19 + 1;
            uVar19 = (ulong)uVar18;
            bVar25 = 0;
          } while ((uVar18 & 0xff) < 5);
          bVar25 = 0;
          local_70 = (ushort)(byte)uVar18;
        }
        bVar3 = true;
        local_6e = '\x01';
      } while( true );
    }
    lVar23 = FUN_02986d48(param_1);
    if (lVar23 == 0) {
      return;
    }
    uVar19 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (10 < uVar19) {
      return;
    }
    if (*(byte *)((long)param_8 + 0xa6) != 0) {
      plVar16 = param_8;
      uVar14 = uVar19;
      do {
        if (*plVar16 == lVar23) {
          return;
        }
        uVar14 = uVar14 - 1;
        plVar16 = plVar16 + 1;
      } while (uVar14 != 0);
    }
    goto LAB_018407d4;
  case 5:
    lVar23 = *(long *)(param_1 + 0x10);
    iVar7 = (**(code **)(*param_4 + 0x98))();
    lVar23 = *(long *)(lVar23 + 0x310);
    iVar10 = *(int *)(lVar23 + 0x18);
    if (((*(byte *)(*(long *)(*(long *)(lVar23 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
       (iVar10 == 0)) {
      lVar20 = *(long *)(*(long *)(lVar23 + 0x10) + 0x30);
      if (*(char *)(lVar20 + 0x90) == '\0') {
        iVar10 = 0;
      }
      else {
        plVar16 = *(long **)(lVar20 + 0x60);
        iVar10 = 0;
        if (plVar16 != (long *)0x0) {
          iVar10 = (**(code **)(*plVar16 + 0x98))();
          *(int *)(lVar23 + 0x18) = iVar10;
        }
      }
    }
    if (iVar10 != iVar7) {
      uVar8 = (**(code **)(*param_4 + 0x98))();
      puVar15 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                      (*(long *)(*(long *)(param_3 + 0x290) + 8) + 0x50),uVar8);
      if (puVar15 == (uint *)0x0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *puVar15 & 0xff;
        if (4 < (int)*puVar15) {
          uVar18 = 0;
        }
      }
      lVar20 = *(long *)(param_3 + 0x290);
      lVar23 = *(long *)(lVar20 + 8);
      uVar19 = FUN_01465b00(*(undefined4 *)(lVar23 + 0x36c),*(undefined1 *)(lVar23 + 0x370),uVar18,0
                           );
      lVar23 = *(long *)(lVar20 + 8);
      iVar10 = *(int *)(lVar23 + 0x36c);
      uVar18 = (uint)(uVar19 & 0xff);
      if (iVar10 == 2) {
        if (4 < uVar18) goto LAB_01840ef0;
        puVar21 = &DAT_03d6a45a;
      }
      else if (iVar10 == 1) {
        if (4 < uVar18) goto LAB_01840ef0;
        puVar21 = &DAT_03d6a455;
      }
      else {
        if ((iVar10 != 0) || (4 < uVar18)) {
LAB_01840ef0:
          uVar17 = 2;
          goto LAB_01840d40;
        }
        puVar21 = &DAT_03d6a450;
      }
      uVar17 = puVar21[uVar19 & 0xff];
LAB_01840d40:
      iVar10 = FUN_0123aa70(iVar10,*(undefined1 *)(lVar23 + 0x370),uVar17);
      if (iVar10 == 0) {
        return;
      }
      iVar7 = 0;
      do {
        lVar23 = FUN_0183da74(param_1,lVar24,uVar9,iVar7);
        if (lVar23 != 0) {
          uVar19 = (ulong)*(byte *)((long)param_8 + 0xa6);
          if (uVar19 < 0xb) {
            plVar16 = param_8;
            uVar14 = uVar19;
            if (*(byte *)((long)param_8 + 0xa6) != 0) {
              do {
                if (*plVar16 == lVar23) goto LAB_01840de0;
                uVar14 = uVar14 - 1;
                plVar16 = plVar16 + 1;
              } while (uVar14 != 0);
            }
            param_8[uVar19] = lVar23;
            *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
            *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
            *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
            bVar25 = *(char *)((long)param_8 + 0xa6) + 1;
            *(byte *)((long)param_8 + 0xa6) = bVar25;
            if (*(byte *)((long)param_8 + 0xa7) < bVar25) {
              *(byte *)((long)param_8 + 0xa7) = bVar25;
            }
          }
        }
LAB_01840de0:
        iVar7 = iVar7 + 1;
        if (iVar7 == iVar10) {
          return;
        }
      } while( true );
    }
    if (*(char *)(param_6 + 10) != '\0') {
      local_70 = 0;
      local_88 = PTR_DAT_047e2580 + 0x10;
      local_6e = '\x01';
      local_80 = param_2;
      FUN_01247774(&local_88);
      lVar23 = local_78;
      if (local_6e != '\0') {
        return;
      }
      uVar19 = (ulong)(byte)local_70;
      lVar24 = 0;
      if ((byte)local_70 < 5) {
        lVar24 = *(long *)(local_78 + 0x30) + uVar19 * 0x38 + 0x28;
      }
      if (local_70._1_1_ < *(byte *)(lVar24 + 0x30)) {
        plVar16 = *(long **)(lVar24 + (ulong)local_70._1_1_ * 8);
      }
      else {
        plVar16 = (long *)0x0;
      }
      bVar25 = local_70._1_1_ + 1;
      local_70 = CONCAT11(bVar25,(byte)local_70);
      if ((byte)local_70 < 5) {
        do {
          lVar24 = *(long *)(*(long *)(lVar23 + 0x290) + 8);
          bVar5 = FUN_010f9128(*(undefined4 *)(lVar24 + 0x36c),*(undefined1 *)(lVar24 + 0x370),
                               (uint)uVar19 & 0xff);
          if (bVar25 < bVar5) {
            do {
              if (((bVar25 < *(byte *)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 + 0x58)) &&
                  (plVar13 = *(long **)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 +
                                        (ulong)bVar25 * 8 + 0x28), plVar13 != (long *)0x0)) &&
                 (uVar14 = (**(code **)(*plVar13 + 0x200))(), (uVar14 & 1) == 0)) {
                bVar3 = false;
                local_70 = CONCAT11(bVar25,(char)uVar19);
                goto LAB_01840b8c;
              }
              bVar25 = bVar25 + 1;
            } while (bVar25 < bVar5);
          }
          uVar18 = (uint)uVar19 + 1;
          uVar19 = (ulong)uVar18;
          bVar25 = 0;
        } while ((uVar18 & 0xff) < 5);
        bVar25 = 0;
        local_70 = (ushort)(byte)uVar18;
      }
      bVar3 = true;
      local_6e = '\x01';
LAB_01840b8c:
      do {
        iVar10 = (**(code **)(*plVar16 + 0x98))(plVar16);
        iVar7 = (**(code **)(*param_4 + 0x98))(param_4);
        if ((plVar16 != (long *)0x0) && (iVar10 != iVar7)) {
          uVar14 = (ulong)*(byte *)((long)param_8 + 0xa6);
          if (uVar14 < 0xb) {
            plVar13 = param_8;
            uVar22 = uVar14;
            if (*(byte *)((long)param_8 + 0xa6) != 0) {
              do {
                if ((long *)*plVar13 == plVar16) goto LAB_01840c30;
                uVar22 = uVar22 - 1;
                plVar13 = plVar13 + 1;
              } while (uVar22 != 0);
            }
            param_8[uVar14] = (long)plVar16;
            *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
            *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
            *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
            bVar5 = *(char *)((long)param_8 + 0xa6) + 1;
            *(byte *)((long)param_8 + 0xa6) = bVar5;
            if (*(byte *)((long)param_8 + 0xa7) < bVar5) {
              *(byte *)((long)param_8 + 0xa7) = bVar5;
            }
          }
        }
LAB_01840c30:
        if (bVar3) {
          return;
        }
        uVar18 = (uint)uVar19 & 0xff;
        lVar24 = 0;
        if (uVar18 < 5) {
          lVar24 = *(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 + 0x28;
        }
        if (bVar25 < *(byte *)(lVar24 + 0x30)) {
          plVar16 = *(long **)(lVar24 + (ulong)bVar25 * 8);
        }
        else {
          plVar16 = (long *)0x0;
        }
        bVar25 = bVar25 + 1;
        local_70 = CONCAT11(bVar25,(byte)local_70);
        if (uVar18 < 5) {
          do {
            lVar24 = *(long *)(*(long *)(lVar23 + 0x290) + 8);
            bVar5 = FUN_010f9128(*(undefined4 *)(lVar24 + 0x36c),*(undefined1 *)(lVar24 + 0x370),
                                 (uint)uVar19 & 0xff);
            if (bVar25 < bVar5) {
              do {
                if (((bVar25 < *(byte *)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 + 0x58))
                    && (plVar13 = *(long **)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 +
                                             (ulong)bVar25 * 8 + 0x28), plVar13 != (long *)0x0)) &&
                   (uVar14 = (**(code **)(*plVar13 + 0x200))(), (uVar14 & 1) == 0)) {
                  bVar3 = false;
                  local_70 = CONCAT11(bVar25,(char)uVar19);
                  goto LAB_01840b8c;
                }
                bVar25 = bVar25 + 1;
              } while (bVar25 < bVar5);
            }
            uVar18 = (uint)uVar19 + 1;
            uVar19 = (ulong)uVar18;
            bVar25 = 0;
          } while ((uVar18 & 0xff) < 5);
          bVar25 = 0;
          local_70 = (ushort)(byte)uVar18;
        }
        bVar3 = true;
        local_6e = '\x01';
      } while( true );
    }
    lVar23 = FUN_02986d48(param_1);
    if (lVar23 == 0) {
      return;
    }
    uVar19 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (10 < uVar19) {
      return;
    }
    if (*(byte *)((long)param_8 + 0xa6) != 0) {
      plVar16 = param_8;
      uVar14 = uVar19;
      do {
        if (*plVar16 == lVar23) {
          return;
        }
        uVar14 = uVar14 - 1;
        plVar16 = plVar16 + 1;
      } while (uVar14 != 0);
    }
LAB_018407d4:
    param_8[uVar19] = lVar23;
    goto LAB_018407d8;
  case 6:
    local_70 = 0;
    local_88 = PTR_DAT_047e2580 + 0x10;
    local_6e = '\x01';
    local_80 = param_2;
    FUN_01247774(&local_88);
    lVar23 = local_78;
    if (local_6e == '\0') {
      uVar19 = (ulong)(byte)local_70;
      lVar24 = 0;
      if ((byte)local_70 < 5) {
        lVar24 = *(long *)(local_78 + 0x30) + uVar19 * 0x38 + 0x28;
      }
      if (local_70._1_1_ < *(byte *)(lVar24 + 0x30)) {
        plVar16 = *(long **)(lVar24 + (ulong)local_70._1_1_ * 8);
      }
      else {
        plVar16 = (long *)0x0;
      }
      bVar25 = local_70._1_1_ + 1;
      local_70 = CONCAT11(bVar25,(byte)local_70);
      if ((byte)local_70 < 5) {
        do {
          lVar24 = *(long *)(*(long *)(lVar23 + 0x290) + 8);
          bVar5 = FUN_010f9128(*(undefined4 *)(lVar24 + 0x36c),*(undefined1 *)(lVar24 + 0x370),
                               (uint)uVar19 & 0xff);
          if (bVar25 < bVar5) {
            do {
              if (((bVar25 < *(byte *)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 + 0x58)) &&
                  (plVar13 = *(long **)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 +
                                        (ulong)bVar25 * 8 + 0x28), plVar13 != (long *)0x0)) &&
                 (uVar14 = (**(code **)(*plVar13 + 0x200))(), (uVar14 & 1) == 0)) {
                bVar2 = false;
                local_70 = CONCAT11(bVar25,(char)uVar19);
                goto LAB_0183fc8c;
              }
              bVar25 = bVar25 + 1;
            } while (bVar25 < bVar5);
          }
          uVar18 = (uint)uVar19 + 1;
          uVar19 = (ulong)uVar18;
          bVar25 = 0;
        } while ((uVar18 & 0xff) < 5);
        bVar25 = 0;
        local_70 = (ushort)(byte)uVar18;
      }
      bVar2 = true;
      local_6e = '\x01';
LAB_0183fc8c:
      if (!bVar3) {
LAB_01840180:
        do {
          do {
            uVar14 = FUN_018d5d98(param_1,param_4,plVar16);
            if ((plVar16 != (long *)0x0) && ((uVar14 & 1) != 0)) {
              uVar14 = (ulong)*(byte *)((long)param_8 + 0xa6);
              if (uVar14 < 0xb) {
                plVar13 = param_8;
                uVar22 = uVar14;
                if (*(byte *)((long)param_8 + 0xa6) != 0) {
                  do {
                    if ((long *)*plVar13 == plVar16) goto LAB_01840210;
                    uVar22 = uVar22 - 1;
                    plVar13 = plVar13 + 1;
                  } while (uVar22 != 0);
                }
                param_8[uVar14] = (long)plVar16;
                *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
                *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) =
                     0;
                *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) =
                     0;
                bVar5 = *(char *)((long)param_8 + 0xa6) + 1;
                *(byte *)((long)param_8 + 0xa6) = bVar5;
                if (*(byte *)((long)param_8 + 0xa7) < bVar5) {
                  *(byte *)((long)param_8 + 0xa7) = bVar5;
                }
              }
            }
LAB_01840210:
            if (bVar2) {
              return;
            }
            uVar18 = (uint)uVar19 & 0xff;
            lVar24 = 0;
            if (uVar18 < 5) {
              lVar24 = *(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 + 0x28;
            }
            if (bVar25 < *(byte *)(lVar24 + 0x30)) {
              plVar16 = *(long **)(lVar24 + (ulong)bVar25 * 8);
            }
            else {
              plVar16 = (long *)0x0;
            }
            bVar25 = bVar25 + 1;
            bVar2 = true;
          } while (4 < uVar18);
          uVar19 = uVar19 & 0xff;
          do {
            lVar24 = *(long *)(*(long *)(lVar23 + 0x290) + 8);
            bVar5 = FUN_010f9128(*(undefined4 *)(lVar24 + 0x36c),*(undefined1 *)(lVar24 + 0x370),
                                 uVar19 & 0xffffffff);
            for (; bVar25 < bVar5; bVar25 = bVar25 + 1) {
              if (((bVar25 < *(byte *)(*(long *)(lVar23 + 0x30) + uVar19 * 0x38 + 0x58)) &&
                  (plVar13 = *(long **)(*(long *)(lVar23 + 0x30) + uVar19 * 0x38 + (ulong)bVar25 * 8
                                       + 0x28), plVar13 != (long *)0x0)) &&
                 (uVar14 = (**(code **)(*plVar13 + 0x200))(), (uVar14 & 1) == 0)) {
                bVar2 = false;
                goto LAB_01840180;
              }
            }
            uVar19 = uVar19 + 1;
            bVar25 = 0;
          } while (uVar19 != 5);
          bVar2 = true;
          uVar19 = 5;
        } while( true );
      }
LAB_0183fc98:
      uVar14 = FUN_018d5d98(param_1,param_4,plVar16);
      if ((uVar14 & 1) != 0) {
        iVar10 = (**(code **)(*plVar16 + 0x98))(plVar16);
        iVar7 = (**(code **)(*param_4 + 0x98))(param_4);
        if (iVar10 == iVar7) {
          uVar14 = (ulong)*(byte *)((long)param_8 + 0xa6);
          if (uVar14 < 0xb) {
            plVar13 = param_8;
            uVar22 = uVar14;
            if (*(byte *)((long)param_8 + 0xa6) != 0) {
              do {
                if ((long *)*plVar13 == plVar16) goto LAB_0183fd4c;
                uVar22 = uVar22 - 1;
                plVar13 = plVar13 + 1;
              } while (uVar22 != 0);
            }
            param_8[uVar14] = (long)plVar16;
            *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
            *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
            *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
            bVar5 = *(char *)((long)param_8 + 0xa6) + 1;
            *(byte *)((long)param_8 + 0xa6) = bVar5;
            if (*(byte *)((long)param_8 + 0xa7) < bVar5) {
              *(byte *)((long)param_8 + 0xa7) = bVar5;
            }
          }
        }
      }
LAB_0183fd4c:
      if (!bVar2) {
        uVar18 = (uint)uVar19 & 0xff;
        lVar24 = 0;
        if (uVar18 < 5) {
          lVar24 = *(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 + 0x28;
        }
        if (bVar25 < *(byte *)(lVar24 + 0x30)) {
          plVar16 = *(long **)(lVar24 + (ulong)bVar25 * 8);
        }
        else {
          plVar16 = (long *)0x0;
        }
        bVar25 = bVar25 + 1;
        local_70 = CONCAT11(bVar25,(byte)local_70);
        if (uVar18 < 5) {
          do {
            lVar24 = *(long *)(*(long *)(lVar23 + 0x290) + 8);
            bVar5 = FUN_010f9128(*(undefined4 *)(lVar24 + 0x36c),*(undefined1 *)(lVar24 + 0x370),
                                 (uint)uVar19 & 0xff);
            if (bVar25 < bVar5) {
              do {
                if (((bVar25 < *(byte *)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 + 0x58))
                    && (plVar13 = *(long **)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 +
                                             (ulong)bVar25 * 8 + 0x28), plVar13 != (long *)0x0)) &&
                   (uVar14 = (**(code **)(*plVar13 + 0x200))(), (uVar14 & 1) == 0)) {
                  bVar2 = false;
                  local_70 = CONCAT11(bVar25,(char)uVar19);
                  goto LAB_0183fc98;
                }
                bVar25 = bVar25 + 1;
              } while (bVar25 < bVar5);
            }
            uVar18 = (uint)uVar19 + 1;
            uVar19 = (ulong)uVar18;
            bVar25 = 0;
          } while ((uVar18 & 0xff) < 5);
          bVar25 = 0;
          local_70 = (ushort)(byte)uVar18;
        }
        bVar2 = true;
        local_6e = '\x01';
        goto LAB_0183fc98;
      }
    }
    break;
  case 7:
    if (param_7 == 0) {
      uVar19 = (ulong)*(byte *)((long)param_8 + 0xa6);
      if (10 < uVar19) {
        return;
      }
      if (*(byte *)((long)param_8 + 0xa6) != 0) {
        plVar16 = param_8;
        uVar14 = uVar19;
        do {
          if ((long *)*plVar16 == param_4) {
            return;
          }
          uVar14 = uVar14 - 1;
          plVar16 = plVar16 + 1;
        } while (uVar14 != 0);
      }
      param_8[uVar19] = (long)param_4;
    }
    else {
      lVar23 = FUN_01021c94(lVar24,param_7);
      if (lVar23 == 0) {
        return;
      }
      plVar16 = (long *)(*(code *)**(undefined8 **)(lVar23 + 0x28))((undefined8 *)(lVar23 + 0x28));
      if (((*PTR_DAT_047d3f00 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar10 != 0)) {
        uVar11 = FUN_01b07aa4();
        *(undefined8 *)PTR_DAT_047d3f08 = uVar11;
        __cxa_guard_release(PTR_DAT_047d3f00);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) {
          return;
        }
        if (plVar16 == (long *)PTR_DAT_047d3f08) break;
        plVar16 = (long *)*plVar16;
      }
      uVar19 = (ulong)*(byte *)((long)param_8 + 0xa6);
      if (10 < uVar19) {
        return;
      }
      if (*(byte *)((long)param_8 + 0xa6) != 0) {
        plVar16 = param_8;
        uVar14 = uVar19;
        do {
          if (*plVar16 == lVar23) {
            return;
          }
          uVar14 = uVar14 - 1;
          plVar16 = plVar16 + 1;
        } while (uVar14 != 0);
      }
      param_8[uVar19] = lVar23;
    }
    goto LAB_018407d8;
  case 8:
    local_70 = 0;
    local_88 = PTR_DAT_047e2580 + 0x10;
    local_6e = '\x01';
    local_80 = param_2;
    FUN_01247774(&local_88);
    lVar23 = local_78;
    if (local_6e == '\0') {
      uVar19 = (ulong)(byte)local_70;
      lVar24 = 0;
      if ((byte)local_70 < 5) {
        lVar24 = *(long *)(local_78 + 0x30) + uVar19 * 0x38 + 0x28;
      }
      if (local_70._1_1_ < *(byte *)(lVar24 + 0x30)) {
        plVar16 = *(long **)(lVar24 + (ulong)local_70._1_1_ * 8);
      }
      else {
        plVar16 = (long *)0x0;
      }
      bVar25 = local_70._1_1_ + 1;
      local_70 = CONCAT11(bVar25,(byte)local_70);
      if ((byte)local_70 < 5) {
        do {
          lVar24 = *(long *)(*(long *)(lVar23 + 0x290) + 8);
          bVar5 = FUN_010f9128(*(undefined4 *)(lVar24 + 0x36c),*(undefined1 *)(lVar24 + 0x370),
                               (uint)uVar19 & 0xff);
          if (bVar25 < bVar5) {
            do {
              if (((bVar25 < *(byte *)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 + 0x58)) &&
                  (plVar13 = *(long **)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 +
                                        (ulong)bVar25 * 8 + 0x28), plVar13 != (long *)0x0)) &&
                 (uVar14 = (**(code **)(*plVar13 + 0x200))(), (uVar14 & 1) == 0)) {
                bVar2 = false;
                local_70 = CONCAT11(bVar25,(char)uVar19);
                goto LAB_0183fe4c;
              }
              bVar25 = bVar25 + 1;
            } while (bVar25 < bVar5);
          }
          uVar18 = (uint)uVar19 + 1;
          uVar19 = (ulong)uVar18;
          bVar25 = 0;
        } while ((uVar18 & 0xff) < 5);
        bVar25 = 0;
        local_70 = (ushort)(byte)uVar18;
      }
      bVar2 = true;
      local_6e = '\x01';
LAB_0183fe4c:
      if (!bVar3) {
LAB_018402ec:
        do {
          do {
            lVar24 = *(long *)(param_1 + 0x10);
            iVar7 = (**(code **)(*param_4 + 0x98))();
            lVar24 = *(long *)(lVar24 + 0x310);
            iVar10 = *(int *)(lVar24 + 0x18);
            if (((*(byte *)(*(long *)(*(long *)(lVar24 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
               (iVar10 == 0)) {
              lVar20 = *(long *)(*(long *)(lVar24 + 0x10) + 0x30);
              if (*(char *)(lVar20 + 0x90) == '\0') {
                iVar10 = 0;
              }
              else {
                plVar13 = *(long **)(lVar20 + 0x60);
                iVar10 = 0;
                if (plVar13 != (long *)0x0) {
                  iVar10 = (**(code **)(*plVar13 + 0x98))();
                  *(int *)(lVar24 + 0x18) = iVar10;
                }
              }
            }
            if (iVar10 == iVar7) {
              lVar24 = FUN_02986d48(param_1);
              bVar5 = *(byte *)((long)param_8 + 0xa6);
              uVar14 = (ulong)bVar5;
              if (lVar24 == 0) {
LAB_018403b4:
                if (((uint)uVar14 & 0xff) < 0xb) {
                  uVar14 = uVar14 & 0xff;
                  plVar16 = param_8;
                  uVar22 = uVar14;
                  if ((int)uVar14 == 0) {
                    uVar14 = 0;
                  }
                  else {
                    do {
                      if ((long *)*plVar16 == param_4) goto LAB_01840470;
                      uVar22 = uVar22 - 1;
                      plVar16 = plVar16 + 1;
                    } while (uVar22 != 0);
                  }
                  param_8[uVar14] = (long)param_4;
                  goto LAB_01840430;
                }
              }
              else if (bVar5 < 0xb) {
                plVar16 = param_8;
                uVar22 = uVar14;
                if (bVar5 != 0) {
                  do {
                    if (*plVar16 == lVar24) goto LAB_018403b0;
                    uVar22 = uVar22 - 1;
                    plVar16 = plVar16 + 1;
                  } while (uVar22 != 0);
                }
                param_8[uVar14] = lVar24;
                *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
                *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) =
                     0;
                *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) =
                     0;
                uVar18 = *(byte *)((long)param_8 + 0xa6) + 1;
                uVar14 = (ulong)uVar18;
                *(char *)((long)param_8 + 0xa6) = (char)uVar18;
                if ((uint)*(byte *)((long)param_8 + 0xa7) < (uVar18 & 0xff)) {
                  *(char *)((long)param_8 + 0xa7) = (char)uVar18;
                }
LAB_018403b0:
                if (param_4 != (long *)0x0) goto LAB_018403b4;
              }
            }
            else if (plVar16 != (long *)0x0) {
              uVar14 = (ulong)*(byte *)((long)param_8 + 0xa6);
              if (uVar14 < 0xb) {
                plVar13 = param_8;
                uVar22 = uVar14;
                if (*(byte *)((long)param_8 + 0xa6) != 0) {
                  do {
                    if ((long *)*plVar13 == plVar16) goto LAB_01840470;
                    uVar22 = uVar22 - 1;
                    plVar13 = plVar13 + 1;
                  } while (uVar22 != 0);
                }
                param_8[uVar14] = (long)plVar16;
LAB_01840430:
                *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
                *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) =
                     0;
                *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) =
                     0;
                bVar5 = *(char *)((long)param_8 + 0xa6) + 1;
                *(byte *)((long)param_8 + 0xa6) = bVar5;
                if (*(byte *)((long)param_8 + 0xa7) < bVar5) {
                  *(byte *)((long)param_8 + 0xa7) = bVar5;
                }
              }
            }
LAB_01840470:
            if (bVar2) {
              return;
            }
            uVar18 = (uint)uVar19 & 0xff;
            lVar24 = 0;
            if (uVar18 < 5) {
              lVar24 = *(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 + 0x28;
            }
            if (bVar25 < *(byte *)(lVar24 + 0x30)) {
              plVar16 = *(long **)(lVar24 + (ulong)bVar25 * 8);
            }
            else {
              plVar16 = (long *)0x0;
            }
            bVar25 = bVar25 + 1;
            bVar2 = true;
          } while (4 < uVar18);
          uVar19 = uVar19 & 0xff;
          do {
            lVar24 = *(long *)(*(long *)(lVar23 + 0x290) + 8);
            bVar5 = FUN_010f9128(*(undefined4 *)(lVar24 + 0x36c),*(undefined1 *)(lVar24 + 0x370),
                                 uVar19 & 0xffffffff);
            for (; bVar25 < bVar5; bVar25 = bVar25 + 1) {
              if (((bVar25 < *(byte *)(*(long *)(lVar23 + 0x30) + uVar19 * 0x38 + 0x58)) &&
                  (plVar13 = *(long **)(*(long *)(lVar23 + 0x30) + uVar19 * 0x38 + (ulong)bVar25 * 8
                                       + 0x28), plVar13 != (long *)0x0)) &&
                 (uVar14 = (**(code **)(*plVar13 + 0x200))(), (uVar14 & 1) == 0)) {
                bVar2 = false;
                goto LAB_018402ec;
              }
            }
            uVar19 = uVar19 + 1;
            bVar25 = 0;
          } while (uVar19 != 5);
          bVar2 = true;
          uVar19 = 5;
        } while( true );
      }
LAB_0183fe58:
      lVar24 = *(long *)(param_1 + 0x10);
      iVar7 = (**(code **)(*param_4 + 0x98))();
      lVar24 = *(long *)(lVar24 + 0x310);
      iVar10 = *(int *)(lVar24 + 0x18);
      if (((*(byte *)(*(long *)(*(long *)(lVar24 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
         (iVar10 == 0)) {
        lVar20 = *(long *)(*(long *)(lVar24 + 0x10) + 0x30);
        if (*(char *)(lVar20 + 0x90) == '\0') {
          iVar10 = 0;
        }
        else {
          plVar13 = *(long **)(lVar20 + 0x60);
          iVar10 = 0;
          if (plVar13 != (long *)0x0) {
            iVar10 = (**(code **)(*plVar13 + 0x98))();
            *(int *)(lVar24 + 0x18) = iVar10;
          }
        }
      }
      if (iVar10 == iVar7) {
        lVar24 = FUN_02986d48(param_1);
        bVar5 = *(byte *)((long)param_8 + 0xa6);
        uVar14 = (ulong)bVar5;
        if (lVar24 == 0) {
LAB_0183ff1c:
          if (((uint)uVar14 & 0xff) < 0xb) {
            uVar14 = uVar14 & 0xff;
            plVar16 = param_8;
            uVar22 = uVar14;
            if ((int)uVar14 == 0) {
              uVar14 = 0;
            }
            else {
              do {
                if ((long *)*plVar16 == param_4) goto LAB_01840018;
                uVar22 = uVar22 - 1;
                plVar16 = plVar16 + 1;
              } while (uVar22 != 0);
            }
            param_8[uVar14] = (long)param_4;
            goto LAB_0183ffd8;
          }
        }
        else if (bVar5 < 0xb) {
          plVar16 = param_8;
          uVar22 = uVar14;
          if (bVar5 != 0) {
            do {
              if (*plVar16 == lVar24) goto LAB_0183ff18;
              uVar22 = uVar22 - 1;
              plVar16 = plVar16 + 1;
            } while (uVar22 != 0);
          }
          param_8[uVar14] = lVar24;
          *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
          *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
          *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
          uVar18 = *(byte *)((long)param_8 + 0xa6) + 1;
          uVar14 = (ulong)uVar18;
          *(char *)((long)param_8 + 0xa6) = (char)uVar18;
          if ((uint)*(byte *)((long)param_8 + 0xa7) < (uVar18 & 0xff)) {
            *(char *)((long)param_8 + 0xa7) = (char)uVar18;
          }
LAB_0183ff18:
          if (param_4 != (long *)0x0) goto LAB_0183ff1c;
        }
      }
      else {
        iVar10 = (**(code **)(*plVar16 + 0x98))(plVar16);
        iVar7 = (**(code **)(*param_4 + 0x98))(param_4);
        if ((iVar10 == iVar7) || (uVar14 = FUN_018d5d98(param_1,param_4,plVar16), (uVar14 & 1) == 0)
           ) {
          uVar14 = (ulong)*(byte *)((long)param_8 + 0xa6);
          if (uVar14 < 0xb) {
            plVar13 = param_8;
            uVar22 = uVar14;
            if (*(byte *)((long)param_8 + 0xa6) != 0) {
              do {
                if ((long *)*plVar13 == plVar16) goto LAB_01840018;
                uVar22 = uVar22 - 1;
                plVar13 = plVar13 + 1;
              } while (uVar22 != 0);
            }
            param_8[uVar14] = (long)plVar16;
LAB_0183ffd8:
            *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
            *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
            *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
            bVar5 = *(char *)((long)param_8 + 0xa6) + 1;
            *(byte *)((long)param_8 + 0xa6) = bVar5;
            if (*(byte *)((long)param_8 + 0xa7) < bVar5) {
              *(byte *)((long)param_8 + 0xa7) = bVar5;
            }
          }
        }
      }
LAB_01840018:
      if (!bVar2) {
        uVar18 = (uint)uVar19 & 0xff;
        lVar24 = 0;
        if (uVar18 < 5) {
          lVar24 = *(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 + 0x28;
        }
        if (bVar25 < *(byte *)(lVar24 + 0x30)) {
          plVar16 = *(long **)(lVar24 + (ulong)bVar25 * 8);
        }
        else {
          plVar16 = (long *)0x0;
        }
        bVar25 = bVar25 + 1;
        local_70 = CONCAT11(bVar25,(byte)local_70);
        if (uVar18 < 5) {
          do {
            lVar24 = *(long *)(*(long *)(lVar23 + 0x290) + 8);
            bVar5 = FUN_010f9128(*(undefined4 *)(lVar24 + 0x36c),*(undefined1 *)(lVar24 + 0x370),
                                 (uint)uVar19 & 0xff);
            if (bVar25 < bVar5) {
              do {
                if (((bVar25 < *(byte *)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 + 0x58))
                    && (plVar13 = *(long **)(*(long *)(lVar23 + 0x30) + (uVar19 & 0xff) * 0x38 +
                                             (ulong)bVar25 * 8 + 0x28), plVar13 != (long *)0x0)) &&
                   (uVar14 = (**(code **)(*plVar13 + 0x200))(), (uVar14 & 1) == 0)) {
                  bVar2 = false;
                  local_70 = CONCAT11(bVar25,(char)uVar19);
                  goto LAB_0183fe58;
                }
                bVar25 = bVar25 + 1;
              } while (bVar25 < bVar5);
            }
            uVar18 = (uint)uVar19 + 1;
            uVar19 = (ulong)uVar18;
            bVar25 = 0;
          } while ((uVar18 & 0xff) < 5);
          bVar25 = 0;
          local_70 = (ushort)(byte)uVar18;
        }
        bVar2 = true;
        local_6e = '\x01';
        goto LAB_0183fe58;
      }
    }
    break;
  case 9:
    lVar23 = *(long *)(param_1 + 0x10);
    iVar7 = (**(code **)(*param_4 + 0x98))(param_4);
    lVar23 = *(long *)(lVar23 + 0x310);
    iVar10 = *(int *)(lVar23 + 0x18);
    if (((*(byte *)(*(long *)(*(long *)(lVar23 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
       (iVar10 == 0)) {
      lVar24 = *(long *)(*(long *)(lVar23 + 0x10) + 0x30);
      if (*(char *)(lVar24 + 0x90) == '\0') {
        iVar10 = 0;
      }
      else {
        plVar16 = *(long **)(lVar24 + 0x60);
        iVar10 = 0;
        if (plVar16 != (long *)0x0) {
          iVar10 = (**(code **)(*plVar16 + 0x98))();
          *(int *)(lVar23 + 0x18) = iVar10;
        }
      }
    }
    if (iVar10 == iVar7) {
      lVar23 = FUN_02986d48(param_1);
      if (lVar23 != 0) {
        uVar19 = (ulong)*(byte *)((long)param_8 + 0xa6);
        if (uVar19 < 0xb) {
          if (*(byte *)((long)param_8 + 0xa6) != 0) {
            plVar16 = param_8;
            uVar14 = uVar19;
            do {
              if (*plVar16 == lVar23) goto LAB_0183fc74;
              uVar14 = uVar14 - 1;
              plVar16 = plVar16 + 1;
            } while (uVar14 != 0);
          }
          goto LAB_0183fc30;
        }
      }
    }
    else {
      lVar23 = FUN_0106fc68(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x310));
      if (lVar23 != 0) {
        uVar19 = (ulong)*(byte *)((long)param_8 + 0xa6);
        if (uVar19 < 0xb) {
          if (*(byte *)((long)param_8 + 0xa6) != 0) {
            plVar16 = param_8;
            uVar14 = uVar19;
            do {
              if (*plVar16 == lVar23) goto LAB_0183fc74;
              uVar14 = uVar14 - 1;
              plVar16 = plVar16 + 1;
            } while (uVar14 != 0);
          }
LAB_0183fc30:
          param_8[uVar19] = lVar23;
          goto LAB_0183fc34;
        }
      }
    }
    goto LAB_0183fc74;
  case 0xd:
    if (param_7 == 0) {
      return;
    }
    lVar23 = FUN_01021c94(lVar24,param_7);
    if (lVar23 != 0) {
      uVar19 = (ulong)*(byte *)((long)param_8 + 0xa6);
      if (uVar19 < 0xb) {
        if (*(byte *)((long)param_8 + 0xa6) != 0) {
          plVar16 = param_8;
          uVar14 = uVar19;
          do {
            if (*plVar16 == lVar23) goto LAB_0183fc74;
            uVar14 = uVar14 - 1;
            plVar16 = plVar16 + 1;
          } while (uVar14 != 0);
        }
        goto LAB_0183fc30;
      }
    }
LAB_0183fc74:
    *param_9 = 1;
  }
  return;
}


