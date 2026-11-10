/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0346123c; name: FUN_0346123c
 */


int FUN_0346123c(long param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  ulong *puVar11;
  undefined4 uVar12;
  ulong uVar13;
  code *pcVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  undefined4 *puVar21;
  ulong uVar22;
  uint uVar23;
  undefined4 *puVar24;
  undefined8 uVar25;
  ulong uVar26;
  char cVar27;
  undefined4 *puVar28;
  ulong uVar29;
  ulong uVar30;
  undefined1 auStack_158 [72];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [72];
  long local_b8;
  undefined4 local_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98;
  ulong uStack_90;
  uint local_88;
  uint uStack_84;
  ulong local_80;
  uint local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  uint local_6c;
  
  iVar7 = 1;
  switch(*param_2) {
  case 0:
    local_b8 = 0;
    memcpy(&local_b0,param_2,0x48);
    iVar9 = FUN_034627ac(param_1,&local_b0,&local_b8,0,0,0);
    lVar19 = local_b8;
    puVar4 = PTR_DAT_047e6d30;
    if (iVar9 == 0x45) {
LAB_034612fc:
      iVar7 = 1;
    }
    else {
      if (iVar9 == 1) {
        *(byte *)(local_b8 + 0x68) = *(byte *)(local_b8 + 0x68) | 1;
        uVar25 = *(undefined8 *)(param_2 + 0xc);
        if (param_2[10] != 2) {
          uVar25 = 0;
        }
        FUN_03469b20(param_1 + 0xa8,param_2[1],uVar25);
        goto LAB_034612fc;
      }
      iVar7 = iVar9;
      if (local_b8 != 0) {
        puVar16 = *(undefined8 **)(local_b8 + 0x50);
        puVar17 = puVar16;
        if (*(int *)(local_b8 + 0x58) != 0) {
          do {
            nn::os::LockMutex((MutexType *)puVar4);
            if (puVar17 !=
                (undefined8 *)(*(long *)(lVar19 + 0x50) + (ulong)*(uint *)(lVar19 + 0x58) * 8)) {
              cVar27 = '\x01';
              puVar16 = puVar17;
              do {
                puVar17 = puVar16 + 1;
                (**(code **)(*(long *)*puVar16 + 0x18))();
                cVar27 = cVar27 + '\x01';
                if (cVar27 == '\0') break;
                puVar16 = puVar17;
              } while (puVar17 !=
                       (undefined8 *)
                       (*(long *)(lVar19 + 0x50) + (ulong)*(uint *)(lVar19 + 0x58) * 8));
            }
            nn::os::UnlockMutex((MutexType *)puVar4);
            puVar16 = *(undefined8 **)(lVar19 + 0x50);
          } while (puVar17 != puVar16 + *(uint *)(lVar19 + 0x58));
        }
        if (puVar16 != (undefined8 *)0x0) {
          *(undefined4 *)(lVar19 + 0x58) = 0;
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar16);
          *(undefined8 *)(lVar19 + 0x50) = 0;
          *(undefined4 *)(lVar19 + 0x5c) = 0;
        }
        FUN_0346034c(lVar19,1);
      }
    }
    uVar1 = *param_2;
    uVar8 = 0;
    if (uVar1 < 8) {
      uVar3 = 1 << (ulong)(uVar1 & 0x1f);
      if ((uVar3 & 3) == 0) {
        if ((uVar3 & 0xc) == 0) {
          if ((1 << (ulong)(uVar1 & 0x1f) & 0xc0U) != 0) goto LAB_03461848;
        }
        else {
          uVar8 = param_2[0xe];
          if (param_2[0xc] != 1) {
            uVar8 = 0;
          }
        }
      }
      else {
LAB_03461848:
        uVar8 = param_2[1];
      }
    }
    uVar1 = param_2[10];
    uVar25 = *(undefined8 *)(param_2 + 0xc);
    pcVar14 = *(code **)(param_2 + 6);
    uVar29 = *(ulong *)(param_2 + 8);
    *(int *)(param_1 + 0xf4) = iVar9;
    if (uVar1 != 2) {
      uVar25 = 0;
    }
    if (pcVar14 != (code *)0x0) {
      for (puVar11 = *(ulong **)(param_1 + 0xf8); puVar11 != (ulong *)0x0;
          puVar11 = (ulong *)(*puVar11 & 0x3fffffffffffffff)) {
        if ((*puVar11 >> 0x3e == 0) && (puVar11[1] == uVar29)) {
          (*pcVar14)(uVar8,uVar25,iVar9,uVar29);
          puVar11 = *(ulong **)(param_1 + 0xf8);
          do {
            if (puVar11 == (ulong *)0x0) {
              return iVar7;
            }
            while ((uVar13 = *puVar11, uVar13 >> 0x3e == 0 && (puVar11[1] == uVar29))) {
              while (*puVar11 == uVar13) {
                cVar27 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(puVar11,0x10);
                if (bVar2) {
                  *puVar11 = uVar13 | 0x4000000000000000;
                  cVar27 = ExclusiveMonitorsStatus();
                }
                if (cVar27 == '\0') {
                  return iVar7;
                }
              }
              ClearExclusiveLocal();
            }
            puVar11 = (ulong *)(*puVar11 & 0x3fffffffffffffff);
          } while( true );
        }
      }
    }
    break;
  case 1:
    memcpy(auStack_100,param_2,0x48);
    iVar7 = FUN_034620e8(param_1,auStack_100);
    break;
  case 2:
    local_110 = *(undefined8 *)(param_2 + 2);
    uStack_108 = *(undefined8 *)(param_2 + 4);
    uVar3 = param_2[1];
    pcVar14 = *(code **)(param_2 + 6);
    uVar13 = *(ulong *)(param_2 + 8);
    uVar8 = param_2[10];
    uVar1 = param_2[0xb];
    uVar29 = *(ulong *)(param_2 + 0xc);
    puVar24 = *(undefined4 **)(param_2 + 0xe);
    uVar25 = *(undefined8 *)(param_2 + 0x10);
    *(undefined1 *)(param_1 + 0xf0) = 1;
    iVar7 = (int)uVar29;
    if (iVar7 != 0) {
      uStack_70 = (undefined4)uVar25;
      uVar5 = uStack_70;
      local_6c = (uint)((ulong)uVar25 >> 0x20);
      uVar6 = local_6c;
      local_78 = (uint)puVar24;
      uVar23 = local_78;
      local_74 = (undefined4)((ulong)puVar24 >> 0x20);
      uVar12 = local_74;
      if (iVar7 == 1) {
        local_b0 = 2;
        uStack_ac = uVar3;
        local_a8 = local_110;
        uStack_a0 = uStack_108;
        local_98 = pcVar14;
        uStack_90 = uVar13;
        local_88 = uVar8;
        uStack_84 = uVar1;
        local_80 = uVar29;
        iVar9 = FUN_03467aec(param_1,&local_b0,(ulong)puVar24 & 0xffffffff);
        if ((iVar9 == 1) && (*(int *)(param_1 + 0xe8) != 0)) {
          puVar28 = *(undefined4 **)(param_1 + 0xe0);
          do {
            iVar9 = FUN_03469170(param_1,puVar28);
            if (iVar9 != 1) {
              for (puVar21 = *(undefined4 **)(param_1 + 0xe0); puVar21 != puVar28;
                  puVar21 = puVar21 + 8) {
                FUN_03468c14(param_1,*puVar21);
              }
              FUN_03467be4(param_1,(ulong)puVar24 & 0xffffffff);
              goto LAB_03461b94;
            }
            puVar28 = puVar28 + 8;
          } while (puVar28 !=
                   (undefined4 *)
                   (*(long *)(param_1 + 0xe0) + (ulong)*(uint *)(param_1 + 0xe8) * 0x20));
          iVar9 = 1;
        }
        goto LAB_03461b94;
      }
      uVar26 = uVar29 & 0xffffffff;
      uVar22 = 0;
      if (uVar26 < 2) {
        uVar26 = 1;
      }
      do {
        local_b0 = 2;
        local_a8 = local_110;
        uStack_a0 = uStack_108;
        uStack_ac = uVar3;
        local_98 = pcVar14;
        uStack_90 = uVar13;
        local_88 = uVar8;
        uStack_84 = uVar1;
        local_80 = uVar29;
        local_78 = uVar23;
        local_74 = uVar12;
        uStack_70 = uVar5;
        local_6c = uVar6;
        iVar9 = FUN_03467aec(param_1,&local_b0,puVar24[uVar22]);
        if (iVar9 != 1) {
          if ((int)uVar22 != 0) {
            lVar19 = 0;
            do {
              FUN_03467be4(param_1,puVar24[(uVar22 - 1 & 0xffffffff) + lVar19]);
              iVar18 = (int)lVar19;
              lVar19 = lVar19 + -1;
            } while ((int)uVar22 + iVar18 != 1);
          }
          goto LAB_03461b78;
        }
        uVar22 = uVar22 + 1;
      } while (uVar26 != uVar22);
    }
    if (*(int *)(param_1 + 0xe8) != 0) {
      puVar28 = *(undefined4 **)(param_1 + 0xe0);
LAB_034618c8:
      iVar9 = FUN_03469170(param_1,puVar28);
      if (iVar9 == 1) goto code_r0x034618dc;
      for (puVar21 = *(undefined4 **)(param_1 + 0xe0); puVar21 != puVar28; puVar21 = puVar21 + 8) {
        FUN_03468c14(param_1,*puVar21);
      }
      if (iVar7 != 0) {
        uVar22 = uVar29 & 0xffffffff;
        puVar28 = puVar24;
        do {
          FUN_03467be4(param_1,*puVar28);
          uVar22 = uVar22 - 1;
          puVar28 = puVar28 + 1;
        } while (uVar22 != 0);
      }
      goto LAB_03461b78;
    }
LAB_034618f4:
    iVar9 = 1;
LAB_03461b78:
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar24);
    puVar24 = (undefined4 *)0x0;
LAB_03461b94:
    uVar12 = SUB84(puVar24,0);
    if (iVar7 != 1) {
      uVar12 = 0;
    }
    if (uVar8 != 2) {
      uVar29 = 0;
    }
    *(undefined1 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(int *)(param_1 + 0xf4) = iVar9;
    if (pcVar14 == (code *)0x0) {
      return iVar9;
    }
    puVar11 = *(ulong **)(param_1 + 0xf8);
    while( true ) {
      if (puVar11 == (ulong *)0x0) {
        return iVar9;
      }
      if ((*puVar11 >> 0x3e == 0) && (puVar11[1] == uVar13)) break;
      puVar11 = (ulong *)(*puVar11 & 0x3fffffffffffffff);
    }
    (*pcVar14)(uVar12,uVar29,iVar9,uVar13);
    puVar11 = *(ulong **)(param_1 + 0xf8);
    do {
      if (puVar11 == (ulong *)0x0) {
        return iVar9;
      }
      while ((uVar29 = *puVar11, uVar29 >> 0x3e == 0 && (puVar11[1] == uVar13))) {
        while (*puVar11 == uVar29) {
          cVar27 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar11,0x10);
          if (bVar2) {
            *puVar11 = uVar29 | 0x4000000000000000;
            cVar27 = ExclusiveMonitorsStatus();
          }
          if (cVar27 == '\0') {
            return iVar9;
          }
        }
        ClearExclusiveLocal();
      }
      puVar11 = (ulong *)(*puVar11 & 0x3fffffffffffffff);
    } while( true );
  case 3:
    pcVar14 = *(code **)(param_2 + 6);
    uVar13 = *(ulong *)(param_2 + 8);
    uVar8 = param_2[10];
    uVar29 = *(ulong *)(param_2 + 0xc);
    uVar22 = *(ulong *)(param_2 + 0xe);
    if ((int)uVar29 == 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,uVar22);
      uVar22 = 0;
      iVar7 = 1;
    }
    else if ((int)uVar29 == 1) {
      iVar7 = FUN_03467be4(param_1,uVar22 & 0xffffffff);
    }
    else {
      uVar26 = 0;
      do {
        iVar7 = FUN_03467be4(param_1,*(undefined4 *)(uVar22 + uVar26 * 4));
        uVar26 = uVar26 + 1;
        if ((uVar29 & 0xffffffff) <= uVar26) break;
      } while (iVar7 == 1);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,uVar22);
      uVar22 = 0;
    }
    if (uVar8 != 2) {
      uVar29 = 0;
    }
    *(int *)(param_1 + 0xf4) = iVar7;
    if (pcVar14 != (code *)0x0) {
      for (puVar11 = *(ulong **)(param_1 + 0xf8); puVar11 != (ulong *)0x0;
          puVar11 = (ulong *)(*puVar11 & 0x3fffffffffffffff)) {
        if ((*puVar11 >> 0x3e == 0) && (puVar11[1] == uVar13)) {
          (*pcVar14)(uVar22 & 0xffffffff,uVar29,iVar7,uVar13);
          puVar11 = *(ulong **)(param_1 + 0xf8);
          do {
            if (puVar11 == (ulong *)0x0) {
              return iVar7;
            }
            while ((uVar29 = *puVar11, uVar29 >> 0x3e == 0 && (puVar11[1] == uVar13))) {
              while (*puVar11 == uVar29) {
                cVar27 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(puVar11,0x10);
                if (bVar2) {
                  *puVar11 = uVar29 | 0x4000000000000000;
                  cVar27 = ExclusiveMonitorsStatus();
                }
                if (cVar27 == '\0') {
                  return iVar7;
                }
              }
              ClearExclusiveLocal();
            }
            puVar11 = (ulong *)(*puVar11 & 0x3fffffffffffffff);
          } while( true );
        }
      }
    }
    break;
  case 4:
    uVar8 = param_2[0xe];
    uVar1 = param_2[0xf];
    uVar13 = (ulong)uVar1;
    pcVar14 = *(code **)(param_2 + 6);
    uVar22 = *(ulong *)(param_2 + 8);
    uVar3 = param_2[10];
    uVar29 = *(ulong *)(param_2 + 0xc);
    puVar24 = *(undefined4 **)(param_2 + 0x10);
    if ((uVar8 & 0xff) != 0) {
      *(undefined1 *)(param_1 + 0xf0) = 1;
    }
    puVar4 = PTR_DAT_047e7050;
    if (uVar1 != 0) {
      uVar26 = uVar29 >> 0x20;
      if (uVar1 != 1) {
        uVar30 = 0;
        uVar20 = uVar13;
        if (uVar13 < 2) {
          uVar20 = 1;
        }
LAB_034619c4:
        iVar7 = FUN_034dd030(*(undefined8 *)puVar4,uVar29 & 0xffffffff,uVar26,puVar24[uVar30],
                             (uVar8 & 0xff) != 0);
        if (iVar7 == 1) goto code_r0x034619e8;
        if ((int)uVar30 != 0) {
          uVar20 = 0;
          do {
            FUN_034dd030(*(undefined8 *)puVar4,uVar29 & 0xffffffff,uVar26,puVar24[uVar20],0);
            uVar20 = uVar20 + 1;
          } while (uVar30 != uVar20);
          goto LAB_03461ae0;
        }
        goto LAB_03461f78;
      }
      iVar7 = FUN_034dd030(*(undefined8 *)PTR_DAT_047e7050,uVar29 & 0xffffffff,uVar26,
                           (ulong)puVar24 & 0xffffffff,(uVar8 & 0xff) != 0);
      if (((uVar8 & 0xff) != 0) && (iVar7 == 1)) {
        if (*(int *)(param_1 + 0xe8) != 0) {
          puVar28 = *(undefined4 **)(param_1 + 0xe0);
          do {
            iVar7 = FUN_03469170(param_1,puVar28);
            if (iVar7 != 1) {
              for (puVar21 = *(undefined4 **)(param_1 + 0xe0); puVar21 != puVar28;
                  puVar21 = puVar21 + 8) {
                FUN_03468c14(param_1,*puVar21);
              }
              FUN_034dd030(*(undefined8 *)puVar4,uVar29 & 0xffffffff,uVar26,
                           (ulong)puVar24 & 0xffffffff,0);
              goto LAB_03461f90;
            }
            puVar28 = puVar28 + 8;
          } while (puVar28 !=
                   (undefined4 *)
                   (*(long *)(param_1 + 0xe0) + (ulong)*(uint *)(param_1 + 0xe8) * 0x20));
        }
        iVar7 = 1;
      }
      goto LAB_03461f90;
    }
    iVar7 = 1;
    goto LAB_03461ae0;
  case 5:
    pcVar14 = *(code **)(param_2 + 6);
    uVar29 = *(ulong *)(param_2 + 8);
    uVar8 = param_2[10];
    uVar25 = *(undefined8 *)(param_2 + 0xc);
    FUN_03468598(param_1);
    *(undefined4 *)(param_1 + 0xf4) = 1;
    if (uVar8 != 2) {
      uVar25 = 0;
    }
    if (pcVar14 == (code *)0x0) {
      return 1;
    }
    puVar11 = *(ulong **)(param_1 + 0xf8);
    if (puVar11 != (ulong *)0x0) {
      while ((*puVar11 >> 0x3e != 0 || (puVar11[1] != uVar29))) {
        puVar11 = (ulong *)(*puVar11 & 0x3fffffffffffffff);
        if (puVar11 == (ulong *)0x0) {
          return 1;
        }
      }
      (*pcVar14)(0,uVar25,1,uVar29);
      puVar11 = *(ulong **)(param_1 + 0xf8);
      do {
        if (puVar11 == (ulong *)0x0) {
          return 1;
        }
        while ((uVar13 = *puVar11, uVar13 >> 0x3e == 0 && (puVar11[1] == uVar29))) {
          while (*puVar11 == uVar13) {
            cVar27 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(puVar11,0x10);
            if (bVar2) {
              *puVar11 = uVar13 | 0x4000000000000000;
              cVar27 = ExclusiveMonitorsStatus();
            }
            if (cVar27 == '\0') {
              return 1;
            }
          }
          ClearExclusiveLocal();
        }
        puVar11 = (ulong *)(*puVar11 & 0x3fffffffffffffff);
      } while( true );
    }
    goto LAB_034616a8;
  case 6:
    uVar1 = param_2[1];
    pcVar14 = *(code **)(param_2 + 6);
    uVar13 = *(ulong *)(param_2 + 8);
    uVar8 = param_2[10];
    uStack_84 = param_2[0xb];
    uVar29 = *(ulong *)(param_2 + 0xc);
    local_78 = param_2[0xe];
    local_b0 = 6;
    local_a8 = *(undefined8 *)(param_2 + 2);
    uStack_a0 = *(undefined8 *)(param_2 + 4);
    uVar12 = 1;
    if ((int)uVar29 != 1) {
      uVar12 = 2;
    }
    local_6c = param_2[0x11];
    local_74 = (undefined4)*(undefined8 *)(param_2 + 0xf);
    uStack_70 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0xf) >> 0x20);
    uStack_ac = uVar1;
    local_98 = pcVar14;
    uStack_90 = uVar13;
    local_88 = uVar8;
    local_80 = uVar29;
    iVar7 = FUN_03468198(param_1,&local_b0,uVar12,1,(uVar29 & 0xff00000000) != 0);
    *(int *)(param_1 + 0xf4) = iVar7;
    if (uVar8 != 2) {
      uVar29 = 0;
    }
    if (pcVar14 != (code *)0x0) {
      for (puVar11 = *(ulong **)(param_1 + 0xf8); puVar11 != (ulong *)0x0;
          puVar11 = (ulong *)(*puVar11 & 0x3fffffffffffffff)) {
        if ((*puVar11 >> 0x3e == 0) && (puVar11[1] == uVar13)) {
          (*pcVar14)(uVar1,uVar29,iVar7,uVar13);
          puVar11 = *(ulong **)(param_1 + 0xf8);
          do {
            if (puVar11 == (ulong *)0x0) {
              return iVar7;
            }
            while ((uVar29 = *puVar11, uVar29 >> 0x3e == 0 && (puVar11[1] == uVar13))) {
              while (*puVar11 == uVar29) {
                cVar27 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(puVar11,0x10);
                if (bVar2) {
                  *puVar11 = uVar29 | 0x4000000000000000;
                  cVar27 = ExclusiveMonitorsStatus();
                }
                if (cVar27 == '\0') {
                  return iVar7;
                }
              }
              ClearExclusiveLocal();
            }
            puVar11 = (ulong *)(*puVar11 & 0x3fffffffffffffff);
          } while( true );
        }
      }
    }
    break;
  case 7:
    uVar8 = param_2[1];
    uVar1 = param_2[10];
    pcVar14 = *(code **)(param_2 + 6);
    uVar29 = *(ulong *)(param_2 + 8);
    uVar25 = *(undefined8 *)(param_2 + 0xc);
    nn::os::LockMutex((MutexType *)PTR_DAT_047e70e0);
    uVar3 = *(uint *)(param_1 + 0xb0);
    if (uVar3 != 0) {
      uVar23 = 0;
      if (uVar3 != 0) {
        uVar23 = uVar8 / uVar3;
      }
      for (puVar15 = *(uint **)(*(long *)(param_1 + 0xa8) + (ulong)(uVar8 - uVar23 * uVar3) * 8);
          puVar15 != (uint *)0x0; puVar15 = *(uint **)(puVar15 + 4)) {
        if ((*puVar15 == uVar8) && (*(long *)(puVar15 + 2) == 0)) {
          nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
          if (puVar15[0x1c] != 0) {
            puVar15[0x1c] = puVar15[0x1c] - 1;
          }
          FUN_034607d0(puVar15,0);
          goto LAB_03461640;
        }
      }
    }
    nn::os::UnlockMutex((MutexType *)PTR_DAT_047e70e0);
LAB_03461640:
    if (uVar1 != 2) {
      uVar25 = 0;
    }
    *(undefined4 *)(param_1 + 0xf4) = 1;
    if (pcVar14 == (code *)0x0) {
      return 1;
    }
    puVar11 = *(ulong **)(param_1 + 0xf8);
    if (puVar11 != (ulong *)0x0) {
      while ((*puVar11 >> 0x3e != 0 || (puVar11[1] != uVar29))) {
        puVar11 = (ulong *)(*puVar11 & 0x3fffffffffffffff);
        if (puVar11 == (ulong *)0x0) {
          return 1;
        }
      }
      (*pcVar14)(uVar8,uVar25,1,uVar29);
      puVar11 = *(ulong **)(param_1 + 0xf8);
      do {
        if (puVar11 == (ulong *)0x0) {
          return 1;
        }
        while ((uVar13 = *puVar11, uVar13 >> 0x3e == 0 && (puVar11[1] == uVar29))) {
          while (*puVar11 == uVar13) {
            cVar27 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(puVar11,0x10);
            if (bVar2) {
              *puVar11 = uVar13 | 0x4000000000000000;
              cVar27 = ExclusiveMonitorsStatus();
            }
            if (cVar27 == '\0') {
              return 1;
            }
          }
          ClearExclusiveLocal();
        }
        puVar11 = (ulong *)(*puVar11 & 0x3fffffffffffffff);
      } while( true );
    }
    goto LAB_034616a8;
  case 8:
    memcpy(auStack_158,param_2,0x48);
    FUN_034624e8(param_1,auStack_158);
LAB_034616a8:
    iVar7 = 1;
    break;
  case 10:
    pcVar14 = *(code **)(param_2 + 6);
    uVar29 = *(ulong *)(param_2 + 8);
    uVar8 = param_2[10];
    uVar25 = *(undefined8 *)(param_2 + 0xc);
    nn::os::LockMutex((MutexType *)(param_1 + 0x68));
    uVar1 = *(uint *)(param_1 + 0x98);
    if (uVar1 != 0) {
      uVar3 = 0;
      uVar23 = (uint)uVar25;
      if (uVar1 != 0) {
        uVar3 = uVar23 / uVar1;
      }
      for (plVar10 = *(long **)(*(long *)(param_1 + 0x90) + (ulong)(uVar23 - uVar3 * uVar1) * 8);
          plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        if (*(uint *)(plVar10 + 1) == uVar23) {
          iVar9 = FUN_034686fc(param_1,plVar10 + 2);
          iVar7 = 1;
          if (iVar9 != 0) {
            iVar7 = 2;
          }
          goto LAB_034616fc;
        }
      }
    }
    iVar7 = 1;
LAB_034616fc:
    if (uVar8 != 2) {
      uVar25 = 0;
    }
    *(int *)(param_1 + 0xf4) = iVar7;
    if (pcVar14 != (code *)0x0) {
      puVar11 = *(ulong **)(param_1 + 0xf8);
joined_r0x03461714:
      if (puVar11 != (ulong *)0x0) {
        if ((*puVar11 >> 0x3e != 0) || (puVar11[1] != uVar29)) goto LAB_03461730;
        (*pcVar14)(0,uVar25,iVar7,uVar29);
        for (puVar11 = *(ulong **)(param_1 + 0xf8); puVar11 != (ulong *)0x0;
            puVar11 = (ulong *)(*puVar11 & 0x3fffffffffffffff)) {
          while ((uVar13 = *puVar11, uVar13 >> 0x3e == 0 && (puVar11[1] == uVar29))) {
            while (*puVar11 == uVar13) {
              cVar27 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(puVar11,0x10);
              if (bVar2) {
                *puVar11 = uVar13 | 0x4000000000000000;
                cVar27 = ExclusiveMonitorsStatus();
              }
              if (cVar27 == '\0') goto LAB_0346173c;
            }
            ClearExclusiveLocal();
          }
        }
      }
    }
LAB_0346173c:
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  }
  return iVar7;
LAB_03461730:
  puVar11 = (ulong *)(*puVar11 & 0x3fffffffffffffff);
  goto joined_r0x03461714;
code_r0x034619e8:
  uVar30 = uVar30 + 1;
  if (uVar20 == uVar30) goto code_r0x034619f4;
  goto LAB_034619c4;
code_r0x034619f4:
  iVar7 = 1;
LAB_03461ae0:
  if (((uVar8 & 0xff) != 0) && (iVar7 == 1)) {
    if (*(int *)(param_1 + 0xe8) != 0) {
      puVar28 = *(undefined4 **)(param_1 + 0xe0);
LAB_03461afc:
      iVar7 = FUN_03469170(param_1,puVar28);
      if (iVar7 == 1) goto code_r0x03461b10;
      puVar17 = (undefined8 *)PTR_DAT_047e7050;
      for (puVar21 = *(undefined4 **)(param_1 + 0xe0); PTR_DAT_047e7050 = (undefined *)puVar17,
          puVar21 != puVar28; puVar21 = puVar21 + 8) {
        FUN_03468c14(param_1,*puVar21);
        puVar17 = (undefined8 *)PTR_DAT_047e7050;
      }
      if (uVar1 != 0) {
        puVar28 = puVar24;
        do {
          FUN_034dd030(*puVar17,uVar29 & 0xffffffff,uVar29 >> 0x20,*puVar28,0);
          uVar13 = uVar13 - 1;
          puVar28 = puVar28 + 1;
        } while (uVar13 != 0);
      }
      goto LAB_03461f78;
    }
LAB_03461b28:
    iVar7 = 1;
  }
LAB_03461f78:
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar24);
LAB_03461f90:
  if ((uVar8 & 0xff) != 0) {
    *(undefined1 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  if (uVar3 != 2) {
    uVar29 = 0;
  }
  *(int *)(param_1 + 0xf4) = iVar7;
  if (pcVar14 == (code *)0x0) {
    return iVar7;
  }
  puVar11 = *(ulong **)(param_1 + 0xf8);
  while( true ) {
    if (puVar11 == (ulong *)0x0) {
      return iVar7;
    }
    if ((*puVar11 >> 0x3e == 0) && (puVar11[1] == uVar22)) break;
    puVar11 = (ulong *)(*puVar11 & 0x3fffffffffffffff);
  }
  (*pcVar14)(0,uVar29,iVar7,uVar22);
  puVar11 = *(ulong **)(param_1 + 0xf8);
  do {
    if (puVar11 == (ulong *)0x0) {
      return iVar7;
    }
    while ((uVar29 = *puVar11, uVar29 >> 0x3e == 0 && (puVar11[1] == uVar22))) {
      while (*puVar11 == uVar29) {
        cVar27 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar11,0x10);
        if (bVar2) {
          *puVar11 = uVar29 | 0x4000000000000000;
          cVar27 = ExclusiveMonitorsStatus();
        }
        if (cVar27 == '\0') {
          return iVar7;
        }
      }
      ClearExclusiveLocal();
    }
    puVar11 = (ulong *)(*puVar11 & 0x3fffffffffffffff);
  } while( true );
code_r0x03461b10:
  puVar28 = puVar28 + 8;
  if (puVar28 == (undefined4 *)(*(long *)(param_1 + 0xe0) + (ulong)*(uint *)(param_1 + 0xe8) * 0x20)
     ) goto LAB_03461b28;
  goto LAB_03461afc;
code_r0x034618dc:
  puVar28 = puVar28 + 8;
  if (puVar28 == (undefined4 *)(*(long *)(param_1 + 0xe0) + (ulong)*(uint *)(param_1 + 0xe8) * 0x20)
     ) goto LAB_034618f4;
  goto LAB_034618c8;
}


