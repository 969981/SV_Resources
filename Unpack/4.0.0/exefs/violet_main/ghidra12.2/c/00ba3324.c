/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ba3324; name: FUN_00ba3324
 */


void FUN_00ba3324(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined8 *****pppppuVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *******pppppppuVar12;
  long *plVar13;
  long lVar14;
  undefined8 *******pppppppuVar15;
  byte *pbVar16;
  undefined8 uVar17;
  byte local_110 [16];
  long local_100;
  ulong local_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  undefined8 ******local_b0;
  undefined8 ******ppppppuStack_a8;
  long local_a0;
  undefined8 ****local_98;
  undefined8 ******local_90;
  undefined8 *****local_88;
  undefined8 *******local_80;
  undefined8 *******local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  if (0 < *(int *)(param_2 + 0x48)) {
    lVar10 = 0;
    lVar14 = 0;
    do {
      FUN_00ba3324(param_1,*(long *)(param_2 + 0x50) + lVar10,
                   *(undefined8 *)(*(long *)(param_3 + 0x60) + lVar14 * 8 + 8));
      lVar14 = lVar14 + 1;
      lVar10 = lVar10 + 0xa8;
    } while (lVar14 < *(int *)(param_2 + 0x48));
  }
  iVar3 = *(int *)(param_2 + 0x58);
  if (0 < iVar3) {
    lVar10 = 0;
    lVar14 = 0;
    do {
      lVar5 = *(long *)(param_2 + 0x60) + lVar10;
      if ((0 < *(int *)(lVar5 + 0x2c)) && (*(int *)(*(long *)(lVar5 + 0x30) + 0x10) != 0)) {
        FUN_00b8a120(param_1,*(undefined8 *)(lVar5 + 8),
                     *(undefined8 *)(*(long *)(param_3 + 0x78) + lVar14 * 8 + 8),9,
                     "The first enum value must be zero in proto3.");
        iVar3 = *(int *)(param_2 + 0x58);
      }
      lVar14 = lVar14 + 1;
      lVar10 = lVar10 + 0x38;
    } while (lVar14 < iVar3);
  }
  if (0 < *(int *)(param_2 + 0x2c)) {
    lVar10 = 0;
    lVar14 = 0;
    do {
      FUN_00ba2c70(param_1,*(long *)(param_2 + 0x30) + lVar10,
                   *(undefined8 *)(*(long *)(param_3 + 0x30) + lVar14 * 8 + 8));
      lVar14 = lVar14 + 1;
      lVar10 = lVar10 + 0x90;
    } while (lVar14 < *(int *)(param_2 + 0x2c));
  }
  if (0 < *(int *)(param_2 + 0x78)) {
    lVar10 = 0;
    lVar14 = 0;
    do {
      FUN_00ba2c70(param_1,*(long *)(param_2 + 0x80) + lVar10,
                   *(undefined8 *)(*(long *)(param_3 + 0x48) + lVar14 * 8 + 8));
      lVar14 = lVar14 + 1;
      lVar10 = lVar10 + 0x90;
    } while (lVar14 < *(int *)(param_2 + 0x78));
  }
  if (0 < *(int *)(param_2 + 0x68)) {
    FUN_00b8a120(param_1,*(undefined8 *)(param_2 + 8),param_3,9,
                 "Extension ranges are not allowed in proto3.");
  }
  if (*(char *)(*(long *)(param_2 + 0x20) + 0x50) != '\0') {
    FUN_00b8a120(param_1,*(undefined8 *)(param_2 + 8),param_3,9,
                 "MessageSet is not supported in proto3.");
  }
  local_78 = (undefined8 *******)0x0;
  uStack_70 = 0;
  local_80 = &local_78;
  if (*(int *)(param_2 + 0x2c) < 1) {
LAB_00ba3cec:
    FUN_00baee9c(local_78);
    return;
  }
  lVar14 = 0;
  lVar10 = tpidr_el0;
LAB_00ba3514:
  uVar11 = 0;
  pbVar16 = *(byte **)(*(long *)(param_2 + 0x30) + lVar14 * 0x90);
  local_98 = (undefined8 ****)0x0;
  local_90 = (undefined8 ******)0x0;
  local_88 = (undefined8 *****)0x0;
  do {
    if ((*pbVar16 & 1) == 0) {
      if (*pbVar16 >> 1 <= uVar11) break;
      bVar1 = pbVar16[uVar11 + 1];
    }
    else {
      if (*(ulong *)(pbVar16 + 8) <= uVar11) break;
      bVar1 = *(byte *)(*(long *)(pbVar16 + 0x10) + uVar11);
    }
    if (bVar1 != 0x5f) {
      std::string::push_back((char)auStack_68 + -0x30);
    }
    uVar11 = uVar11 + 1;
  } while( true );
  if (local_78 != (undefined8 *******)0x0) {
    pppppppuVar12 = &local_78;
    pppppppuVar15 = local_78;
    do {
      ppppppuStack_a8 = (undefined8 ******)((ulong)local_98 >> 1 & 0x7f);
      local_b0 = (undefined8 ******)((ulong)&local_98 | 1);
      if (((ulong)local_98 & 1) != 0) {
        ppppppuStack_a8 = local_90;
        local_b0 = (undefined8 ******)local_88;
      }
      iVar3 = FUN_028a8144(pppppppuVar15 + 4,&local_b0);
      if (iVar3 >= 0) {
        pppppppuVar12 = pppppppuVar15;
      }
      pppppppuVar15 = (undefined8 *******)pppppppuVar15[iVar3 < 0];
    } while (pppppppuVar15 != (undefined8 *******)0x0);
    if ((undefined8 ********)pppppppuVar12 != &local_78) {
      ppppppuStack_a8 = (undefined8 ******)(ulong)(*(byte *)(pppppppuVar12 + 4) >> 1);
      local_b0 = (undefined8 ******)((long)pppppppuVar12 + 0x21);
      if ((*(byte *)(pppppppuVar12 + 4) & 1) != 0) {
        ppppppuStack_a8 = pppppppuVar12[5];
        local_b0 = pppppppuVar12[6];
      }
      iVar3 = FUN_028a8144(&local_98,&local_b0);
      if (-1 < iVar3) {
        uVar17 = *(undefined8 *)(param_2 + 8);
        std::operator+("The JSON camel-case name of field \"",
                       *(string **)(*(long *)(param_2 + 0x30) + lVar14 * 0x90));
        puVar4 = (ulong *)std::string::append((char *)local_110);
        uStack_f0 = puVar4[1];
        local_e8 = puVar4[2];
        local_f8 = *puVar4;
        puVar4[1] = 0;
        puVar4[2] = 0;
        local_b0 = (undefined8 ******)&local_98;
        *puVar4 = 0;
        lVar5 = FUN_00baf09c(&local_80,&local_98,&local_b0);
        pbVar9 = (byte *)**(undefined8 **)(lVar5 + 0x38);
        pbVar16 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar16 = pbVar9 + 1;
        }
        puVar4 = (ulong *)std::string::append((char *)&local_f8,(ulong)pbVar16);
        uStack_d8 = puVar4[1];
        local_d0 = puVar4[2];
        local_e0 = *puVar4;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4 = (ulong *)std::string::append((char *)&local_e0);
        uStack_c0 = puVar4[1];
        local_b8 = puVar4[2];
        local_c8 = *puVar4;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar6 = (undefined8 *)std::string::append((char *)&local_c8);
        ppppppuStack_a8 = (undefined8 ******)puVar6[1];
        local_a0 = puVar6[2];
        local_b0 = (undefined8 ******)*puVar6;
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        FUN_00b89f94(param_1,uVar17,param_3,9,&local_b0);
        lVar5 = local_a0;
        if ((((ulong)local_b0 & 1) != 0) && (local_a0 != 0)) {
          plVar13 = *(long **)(lVar10 + 0x30);
          if (plVar13 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar13 = DAT_04859430;
            *(long **)(lVar10 + 0x30) = DAT_04859430;
          }
          uVar11 = (**(code **)(*plVar13 + 0xf8))(plVar13);
          if (((uVar11 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
            (**(code **)(*plVar13 + 0x18))(plVar13,lVar5,0,8);
          }
          else {
            FUN_00c48fe8(plVar13,lVar5,0,8);
          }
        }
        uVar11 = local_b8;
        if (((local_c8 & 1) != 0) && (local_b8 != 0)) {
          plVar13 = *(long **)(lVar10 + 0x30);
          if (plVar13 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar13 = DAT_04859430;
            *(long **)(lVar10 + 0x30) = DAT_04859430;
          }
          uVar7 = (**(code **)(*plVar13 + 0xf8))(plVar13);
          if (((uVar7 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
            (**(code **)(*plVar13 + 0x18))(plVar13,uVar11,0,8);
          }
          else {
            FUN_00c48fe8(plVar13,uVar11,0,8);
          }
        }
        uVar11 = local_d0;
        if (((local_e0 & 1) != 0) && (local_d0 != 0)) {
          plVar13 = *(long **)(lVar10 + 0x30);
          if (plVar13 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar13 = DAT_04859430;
            *(long **)(lVar10 + 0x30) = DAT_04859430;
          }
          uVar7 = (**(code **)(*plVar13 + 0xf8))(plVar13);
          if (((uVar7 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
            (**(code **)(*plVar13 + 0x18))(plVar13,uVar11,0,8);
          }
          else {
            FUN_00c48fe8(plVar13,uVar11,0,8);
          }
        }
        uVar11 = local_e8;
        if (((local_f8 & 1) != 0) && (local_e8 != 0)) {
          plVar13 = *(long **)(lVar10 + 0x30);
          if (plVar13 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar13 = DAT_04859430;
            *(long **)(lVar10 + 0x30) = DAT_04859430;
          }
          uVar7 = (**(code **)(*plVar13 + 0xf8))(plVar13);
          if (((uVar7 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
            (**(code **)(*plVar13 + 0x18))(plVar13,uVar11,0,8);
          }
          else {
            FUN_00c48fe8(plVar13,uVar11,0,8);
          }
        }
        lVar5 = local_100;
        if (((local_110[0] & 1) != 0) && (local_100 != 0)) {
          plVar13 = *(long **)(lVar10 + 0x30);
          if (plVar13 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar13 = DAT_04859430;
            *(long **)(lVar10 + 0x30) = DAT_04859430;
          }
          uVar11 = (**(code **)(*plVar13 + 0xf8))(plVar13);
          if (((uVar11 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
            (**(code **)(*plVar13 + 0x18))(plVar13,lVar5,0,8);
          }
          else {
            FUN_00c48fe8(plVar13,lVar5,0,8);
          }
        }
        goto LAB_00ba37c4;
      }
    }
  }
  lVar8 = *(long *)(param_2 + 0x30);
  local_b0 = (undefined8 ******)&local_98;
  lVar5 = FUN_00baf09c(&local_80,&local_98,&local_b0);
  *(long *)(lVar5 + 0x38) = lVar8 + lVar14 * 0x90;
LAB_00ba37c4:
  pppppuVar2 = local_88;
  if ((((ulong)local_98 & 1) != 0) && (local_88 != (undefined8 *****)0x0)) {
    plVar13 = *(long **)(lVar10 + 0x30);
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar10 + 0x30) = DAT_04859430;
    }
    uVar11 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar11 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,pppppuVar2,0,8);
    }
    else {
      FUN_00c48fe8(plVar13,pppppuVar2,0,8);
    }
  }
  lVar14 = lVar14 + 1;
  if (*(int *)(param_2 + 0x2c) <= lVar14) goto LAB_00ba3cec;
  goto LAB_00ba3514;
}


