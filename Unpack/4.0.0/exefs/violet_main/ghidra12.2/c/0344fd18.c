/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0344fd18; name: FUN_0344fd18
 */


undefined8 FUN_0344fd18(ulong *param_1,byte param_2,undefined1 *param_3)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  ushort *puVar4;
  ulong *puVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  undefined8 uVar20;
  long lVar21;
  long *plVar22;
  undefined8 *puVar23;
  undefined4 *puVar24;
  long *plVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  uint uVar28;
  char *pcVar29;
  int *piVar30;
  ulong *puVar31;
  long lVar32;
  code *pcVar33;
  uint *puVar34;
  undefined2 uVar35;
  uint uVar36;
  ulong uVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  uint *puVar41;
  int *piVar42;
  undefined8 *puVar43;
  uint *puVar44;
  int *piVar45;
  uint uVar46;
  ushort uVar47;
  ushort *puVar48;
  long *plVar49;
  undefined **ppuVar50;
  ulong *puVar51;
  MutexType *pMVar52;
  ulong *puVar53;
  uint uVar54;
  undefined4 uVar55;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined1 uStack_2f0;
  undefined1 uStack_2ef;
  undefined1 uStack_2ee;
  undefined1 uStack_2ed;
  uint uStack_2ec;
  undefined8 uStack_2e8;
  undefined4 local_2dc;
  undefined4 local_2d8;
  byte local_2d4;
  undefined8 *local_2d0;
  undefined4 local_294;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined4 local_280;
  undefined1 local_278;
  undefined1 local_277;
  undefined1 auStack_268 [112];
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined8 uStack_1ec;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined2 local_1d4;
  undefined2 local_1d2;
  long local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined1 auStack_1a8 [256];
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 local_8b;
  undefined5 uStack_88;
  undefined1 local_80;
  long local_78;
  undefined1 local_70;
  
  plVar49 = (long *)CONCAT44(uStack_2f8._4_4_,(uint)uStack_2f8);
  uVar20 = CONCAT44(local_300._4_4_,(undefined4)local_300);
  *param_3 = 0;
  DataMemoryBarrier(2,3);
  uVar8 = (int)param_1[1] - (int)*param_1;
  if ((int)uVar8 < 0) {
    uVar8 = (int)param_1[4] + uVar8;
  }
  if (uVar8 == 0) {
    return 0;
  }
  if ((param_2 & 1) == 0) {
    if (*(int *)((long)param_1 + 0x7c) == 0) {
      return 0;
    }
  }
  else if (uVar8 <= (uint)param_1[4] >> 1) {
    return 0;
  }
  piVar3 = (int *)((long)param_1 + 0x7c);
  uVar54 = 0;
LAB_0344fdf8:
  uStack_2f8._4_4_ = (uint)((ulong)plVar49 >> 0x20);
  local_300._4_4_ = (undefined4)((ulong)uVar20 >> 0x20);
  local_300._0_4_ = (undefined4)uVar20;
  puVar48 = (ushort *)*param_1;
  uVar47 = *puVar48;
  if (param_1[3] < *param_1 + 4) {
    do {
      uVar37 = *param_1 + (ulong)((int)param_1[4] + 3U & 0xfffffffc);
      if (param_1[3] <= uVar37) {
        uVar37 = param_1[2];
      }
      *param_1 = uVar37;
      puVar48 = (ushort *)*param_1;
      uVar47 = *puVar48;
    } while (param_1[3] < *param_1 + 4);
  }
  puVar14 = PTR_DAT_047e7098;
  puVar13 = PTR_DAT_047e7070;
  puVar12 = PTR_DAT_047e6f80;
  puVar11 = PTR_DAT_047e2fd0;
  bVar16 = false;
  uVar46 = (uint)uVar47;
  uStack_2f8._1_3_ = (undefined3)((ulong)plVar49 >> 8);
  local_300 = (undefined8 *)uVar20;
  uStack_2f8 = plVar49;
  switch(puVar48[1]) {
  case 0:
    if (*piVar3 == 0) {
      return 1;
    }
    do {
      bVar16 = *piVar3 + -1 == 0;
      cVar7 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar17) {
        *piVar3 = *piVar3 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    goto switchD_0344fe7c_caseD_4;
  case 1:
    uVar18 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
    if (uVar18 != 0) {
      uVar6 = 0;
      uVar28 = (uint)*(long *)(puVar48 + 2);
      if (uVar18 != 0) {
        uVar6 = uVar28 / uVar18;
      }
      for (plVar49 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                               (ulong)(uVar28 - uVar6 * uVar18) * 8); plVar49 != (long *)0x0;
          plVar49 = (long *)*plVar49) {
        if (plVar49[1] == *(long *)(puVar48 + 2)) {
          uVar20 = plVar49[2];
          goto LAB_0344fee8;
        }
      }
    }
    uVar20 = 0;
LAB_0344fee8:
    FUN_03452768(*(undefined8 *)(puVar48 + 0x14),uVar20);
    plVar49 = *(long **)PTR_DAT_047e6f38;
    uVar18 = *(uint *)(puVar48 + 6);
    nn::os::LockMutex((MutexType *)(plVar49 + 3));
    uVar6 = *(uint *)(plVar49 + 1);
    if (uVar6 != 0) {
      uVar28 = 0;
      if (uVar6 != 0) {
        uVar28 = uVar18 / uVar6;
      }
      for (lVar32 = *(long *)(*plVar49 + (ulong)(uVar18 - uVar28 * uVar6) * 8); lVar32 != 0;
          lVar32 = *(long *)(lVar32 + 0x70)) {
        if (*(uint *)(lVar32 + 0x54) == uVar18) {
          *(int *)(lVar32 + 0x30) = *(int *)(lVar32 + 0x30) + -1;
          FUN_034b3448(plVar49,uVar18);
          goto LAB_0344ff54;
        }
      }
    }
    nn::os::UnlockMutex((MutexType *)(plVar49 + 3));
LAB_0344ff54:
    (**(code **)(**(long **)(puVar48 + 0x14) + 0x18))();
    piVar30 = *(int **)(puVar48 + 10);
    plVar49 = uStack_2f8;
    uVar20 = local_300;
    if ((piVar30 == (int *)0x0) || (iVar19 = *piVar30, *piVar30 = iVar19 + -1, iVar19 + -1 != 0))
    break;
    uVar18 = piVar30[1];
    if (uVar18 != 0) {
      uVar37 = 0;
      plVar49 = (long *)(piVar30 + 4);
      do {
        if (*plVar49 != 0) {
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
          uVar18 = piVar30[1];
        }
        uVar37 = uVar37 + 1;
        plVar49 = plVar49 + 4;
      } while (uVar37 < uVar18);
    }
LAB_0344ffbc:
    pcVar33 = *(code **)(PTR_DAT_047e2fd0 + 0x30);
    goto LAB_034514bc;
  case 2:
    local_78 = 0x400000000;
    local_70 = 0;
    lVar32 = *(long *)(puVar48 + 2);
    if (lVar32 == -1) {
      uVar26 = *(undefined4 *)(puVar48 + 6);
      uVar55 = *(undefined4 *)(puVar48 + 8);
      local_310 = (undefined **)0x0;
      local_308 = (ulong)local_308._4_4_ << 0x20;
      uVar20 = *(undefined8 *)PTR_DAT_047e6fd8;
LAB_03450fbc:
      puVar48 = (ushort *)&local_78;
LAB_03451000:
      uStack_2f8._0_4_ = CONCAT31(uStack_2f8._1_3_,0xff);
      uStack_2e8 = 0;
      uStack_2f0 = 0xff;
      local_300._0_4_ = 0;
      FUN_034b6d0c(uVar55,uVar20,uVar26,&local_310,puVar48,1,0);
      plVar49 = (long *)CONCAT44(uStack_2f8._4_4_,(uint)uStack_2f8);
      uVar20 = CONCAT44(local_300._4_4_,(undefined4)local_300);
    }
    else {
      uVar18 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
      if (uVar18 != 0) {
        uVar6 = 0;
        if (uVar18 != 0) {
          uVar6 = (uint)lVar32 / uVar18;
        }
        plVar22 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                            (ulong)((uint)lVar32 - uVar6 * uVar18) * 8);
        while( true ) {
          if (plVar22 == (long *)0x0) break;
          if (plVar22[1] == lVar32) {
            if ((undefined **)plVar22[2] != (undefined **)0x0) {
              uVar26 = *(undefined4 *)(puVar48 + 6);
              uVar55 = *(undefined4 *)(puVar48 + 8);
              uVar20 = *(undefined8 *)PTR_DAT_047e6fd8;
              local_308 = CONCAT44(local_308._4_4_,*(undefined4 *)(puVar48 + 10));
              local_310 = (undefined **)plVar22[2];
              goto LAB_03450fbc;
            }
            break;
          }
          plVar22 = (long *)*plVar22;
        }
      }
    }
    break;
  case 3:
    lVar32 = *(long *)(puVar48 + 2);
    if (lVar32 == -1) {
      uVar55 = *(undefined4 *)(puVar48 + 8);
      uVar26 = *(undefined4 *)(puVar48 + 6);
      local_310 = (undefined **)0x0;
      local_308 = (ulong)local_308._4_4_ << 0x20;
      uVar20 = *(undefined8 *)PTR_DAT_047e6fd8;
LAB_03450ffc:
      puVar48 = puVar48 + 0xc;
      goto LAB_03451000;
    }
    uVar18 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
    if (uVar18 != 0) {
      uVar6 = 0;
      if (uVar18 != 0) {
        uVar6 = (uint)lVar32 / uVar18;
      }
      plVar22 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                          (ulong)((uint)lVar32 - uVar6 * uVar18) * 8);
      if (plVar22 != (long *)0x0) {
        do {
          if (plVar22[1] == lVar32) {
            bVar16 = false;
            if ((undefined **)plVar22[2] != (undefined **)0x0) {
              uVar26 = *(undefined4 *)(puVar48 + 6);
              uVar55 = *(undefined4 *)(puVar48 + 8);
              uVar20 = *(undefined8 *)PTR_DAT_047e6fd8;
              local_308 = CONCAT44(local_308._4_4_,*(undefined4 *)(puVar48 + 10));
              local_310 = (undefined **)plVar22[2];
              goto LAB_03450ffc;
            }
            break;
          }
          plVar22 = (long *)*plVar22;
          bVar16 = false;
        } while (plVar22 != (long *)0x0);
        goto switchD_0344fe7c_caseD_4;
      }
    }
    break;
  default:
    goto switchD_0344fe7c_caseD_4;
  case 5:
    lVar32 = *(long *)(puVar48 + 2);
    if (lVar32 == -1) {
      uVar26 = *(undefined4 *)(puVar48 + 6);
      uVar20 = *(undefined8 *)PTR_DAT_047e6fd8;
      local_310 = (undefined **)0x0;
      local_308 = (ulong)local_308._4_4_ << 0x20;
LAB_03451048:
      local_70 = 0;
      local_78 = 0x400000000;
      puVar48 = (ushort *)&local_78;
LAB_03451088:
      uStack_2f8._0_4_ = CONCAT31(uStack_2f8._1_3_,0xff);
      uStack_2e8 = 0;
      uStack_2f0 = 0xff;
      local_300._0_4_ = 0;
      FUN_034b9054(uVar20,uVar26,&local_310,puVar48);
      plVar49 = (long *)CONCAT44(uStack_2f8._4_4_,(uint)uStack_2f8);
      uVar20 = CONCAT44(local_300._4_4_,(undefined4)local_300);
    }
    else {
      uVar18 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
      if (uVar18 != 0) {
        uVar6 = 0;
        if (uVar18 != 0) {
          uVar6 = (uint)lVar32 / uVar18;
        }
        plVar22 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                            (ulong)((uint)lVar32 - uVar6 * uVar18) * 8);
        if (plVar22 != (long *)0x0) {
          do {
            if (plVar22[1] == lVar32) {
              bVar16 = false;
              if ((undefined **)plVar22[2] != (undefined **)0x0) {
                uVar26 = *(undefined4 *)(puVar48 + 6);
                uVar20 = *(undefined8 *)PTR_DAT_047e6fd8;
                local_308 = CONCAT44(local_308._4_4_,*(undefined4 *)(puVar48 + 8));
                local_310 = (undefined **)plVar22[2];
                goto LAB_03451048;
              }
              break;
            }
            plVar22 = (long *)*plVar22;
            bVar16 = false;
          } while (plVar22 != (long *)0x0);
          goto switchD_0344fe7c_caseD_4;
        }
      }
    }
    break;
  case 6:
    lVar32 = *(long *)(puVar48 + 2);
    if (lVar32 == -1) {
      uVar26 = *(undefined4 *)(puVar48 + 6);
      uVar20 = *(undefined8 *)PTR_DAT_047e6fd8;
      local_310 = (undefined **)0x0;
      local_308 = (ulong)local_308._4_4_ << 0x20;
LAB_03451084:
      puVar48 = puVar48 + 10;
      goto LAB_03451088;
    }
    uVar18 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
    if (uVar18 != 0) {
      uVar6 = 0;
      if (uVar18 != 0) {
        uVar6 = (uint)lVar32 / uVar18;
      }
      plVar22 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                          (ulong)((uint)lVar32 - uVar6 * uVar18) * 8);
      if (plVar22 != (long *)0x0) {
        do {
          if (plVar22[1] == lVar32) {
            bVar16 = false;
            if ((undefined **)plVar22[2] != (undefined **)0x0) {
              uVar26 = *(undefined4 *)(puVar48 + 6);
              uVar20 = *(undefined8 *)PTR_DAT_047e6fd8;
              local_308 = CONCAT44(local_308._4_4_,*(undefined4 *)(puVar48 + 8));
              local_310 = (undefined **)plVar22[2];
              goto LAB_03451084;
            }
            break;
          }
          plVar22 = (long *)*plVar22;
          bVar16 = false;
        } while (plVar22 != (long *)0x0);
        goto switchD_0344fe7c_caseD_4;
      }
    }
    break;
  case 7:
    FUN_034dc6fc(*(undefined8 *)PTR_DAT_047e7050,*(undefined4 *)(puVar48 + 2),
                 *(undefined4 *)(puVar48 + 4),puVar48[6] != 0,puVar48[7] != 0);
    plVar49 = uStack_2f8;
    uVar20 = local_300;
    break;
  case 8:
    uVar18 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
    if (uVar18 != 0) {
      uVar6 = 0;
      uVar28 = (uint)*(long *)(puVar48 + 2);
      if (uVar18 != 0) {
        uVar6 = uVar28 / uVar18;
      }
      plVar22 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                          (ulong)(uVar28 - uVar6 * uVar18) * 8);
      if (plVar22 != (long *)0x0) {
LAB_03450178:
        if (plVar22[1] != *(long *)(puVar48 + 2)) goto code_r0x03450184;
        ppuVar50 = (undefined **)plVar22[2];
        if (ppuVar50 != (undefined **)0x0) {
          lVar32 = *(long *)PTR_DAT_047e7098;
          uVar26 = *(undefined4 *)(puVar48 + 6);
          uVar55 = *(undefined4 *)(puVar48 + 8);
          *(int *)(lVar32 + 0x1c0) = *(int *)(lVar32 + 0x1c0) + 1;
          lVar32 = FUN_034e4978(lVar32,uVar26);
          uVar20 = local_300;
          plVar49 = uStack_2f8;
          if (lVar32 != 0) {
            local_308 = local_308 & 0xffffffff00000000;
            local_300._0_4_ = 0;
            uStack_2f8._0_4_ = CONCAT31(uStack_2f8._1_3_,0xff);
            uStack_2f0 = 0xff;
            uStack_2e8 = 0;
            local_310 = ppuVar50;
            puVar24 = (undefined4 *)FUN_034b7674(lVar32 + 0x38,&local_310);
            if (puVar24 != (undefined4 *)0x0) {
              *puVar24 = uVar55;
            }
            uVar20 = CONCAT44(local_300._4_4_,(undefined4)local_300);
            plVar49 = (long *)CONCAT44(uStack_2f8._4_4_,(uint)uStack_2f8);
            if (*(int *)(lVar32 + 0x20) == 0) {
              uVar18 = *(uint *)(lVar32 + 0x30);
              uVar20 = CONCAT44(local_300._4_4_,(undefined4)local_300);
              plVar49 = (long *)CONCAT44(uStack_2f8._4_4_,(uint)uStack_2f8);
              if (uVar18 != 0) {
                puVar39 = *(undefined8 **)(lVar32 + 0x28);
                puVar23 = puVar39;
                do {
                  if ((*(char *)((long)*puVar23 + 0x14) != '\0') &&
                     (plVar49 = *(long **)*puVar23, plVar49 != (long *)0x0)) {
                    local_308 = local_308 & 0xffffffff00000000;
                    local_300._0_4_ = 0;
                    uStack_2f8._0_4_ = CONCAT31(uStack_2f8._1_3_,0xff);
                    uStack_2f0 = 0xff;
                    uStack_2e8 = 0;
                    local_310 = ppuVar50;
                    (**(code **)(*plVar49 + 0x10))(plVar49,uVar55,&local_310,0);
                    puVar39 = *(undefined8 **)(lVar32 + 0x28);
                    uVar18 = *(uint *)(lVar32 + 0x30);
                  }
                  plVar49 = (long *)CONCAT44(uStack_2f8._4_4_,(uint)uStack_2f8);
                  uVar20 = CONCAT44(local_300._4_4_,(undefined4)local_300);
                  puVar23 = puVar23 + 1;
                } while (puVar23 != puVar39 + uVar18);
              }
            }
          }
          lVar32 = *(long *)puVar14;
          iVar19 = *(int *)(lVar32 + 0x1c0) + -1;
          *(int *)(lVar32 + 0x1c0) = iVar19;
          if (iVar19 != 0) {
            goto LAB_0345141c;
          }
          if (*(int *)(lVar32 + 0x1b8) != 0) {
            piVar30 = *(int **)(lVar32 + 0x1b0);
            do {
              local_300 = (undefined8 *)uVar20;
              uStack_2f8 = plVar49;
              if (*piVar30 == 1) {
                FUN_034e4b94(lVar32,*(undefined8 *)(piVar30 + 2));
                uVar20 = local_300;
                plVar49 = uStack_2f8;
              }
              else if (*piVar30 == 0) {
                FUN_034e4294(lVar32,*(undefined8 *)(piVar30 + 2),piVar30[4]);
                uVar20 = local_300;
                plVar49 = uStack_2f8;
              }
              piVar30 = piVar30 + 6;
            } while (piVar30 !=
                     (int *)(*(long *)(lVar32 + 0x1b0) + (ulong)*(uint *)(lVar32 + 0x1b8) * 0x18));
          }
          bVar16 = false;
          *(undefined4 *)(lVar32 + 0x1b8) = 0;
          goto switchD_0344fe7c_caseD_4;
        }
        break;
      }
    }
    break;
  case 10:
    lVar32 = *(long *)(puVar48 + 2);
    if (lVar32 == -1) {
      plVar22 = *(long **)(*(long *)PTR_DAT_047e7050 + 0x40);
      if (plVar22 != (long *)0x0) {
        iVar19 = *(int *)(puVar48 + 6);
        do {
          if ((int)plVar22[2] == 0 || (int)plVar22[2] == iVar19) {
            local_300 = (undefined8 *)uVar20;
            uStack_2f8 = plVar49;
            (*(code *)**(undefined8 **)plVar22[1])((undefined8 *)plVar22[1],iVar19);
            uVar20 = local_300;
            plVar49 = uStack_2f8;
          }
          plVar22 = (long *)*plVar22;
          bVar16 = false;
        } while (plVar22 != (long *)0x0);
        goto switchD_0344fe7c_caseD_4;
      }
    }
    else {
      uVar18 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
      if (uVar18 != 0) {
        uVar6 = 0;
        if (uVar18 != 0) {
          uVar6 = (uint)lVar32 / uVar18;
        }
        plVar22 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                            (ulong)((uint)lVar32 - uVar6 * uVar18) * 8);
        if (plVar22 != (long *)0x0) {
LAB_034501c8:
          if (plVar22[1] != lVar32) goto code_r0x034501d4;
          lVar32 = plVar22[2];
          if (lVar32 != 0) {
            plVar22 = *(long **)(*(long *)PTR_DAT_047e7050 + 0x40);
            if (plVar22 != (long *)0x0) {
              iVar19 = *(int *)(puVar48 + 6);
              do {
                if ((int)plVar22[2] == 0 || (int)plVar22[2] == iVar19) {
                  if (plVar22[3] == lVar32) {
                    local_300 = (undefined8 *)uVar20;
                    uStack_2f8 = plVar49;
                    (*(code *)**(undefined8 **)plVar22[1])((undefined8 *)plVar22[1],iVar19);
                    uVar20 = local_300;
                    plVar49 = uStack_2f8;
                  }
                }
                plVar22 = (long *)*plVar22;
                bVar16 = false;
              } while (plVar22 != (long *)0x0);
              goto switchD_0344fe7c_caseD_4;
            }
          }
          break;
        }
      }
    }
    break;
  case 0xb:
    FUN_034c584c(*(undefined8 *)PTR_DAT_047e6cc0,*(undefined8 *)(puVar48 + 2),puVar48 + 6);
    plVar49 = uStack_2f8;
    uVar20 = local_300;
    break;
  case 0xc:
    if (*(long *)(puVar48 + 2) == -1) {
      FUN_034c54b4(*(undefined8 *)PTR_DAT_047e6cc0,0);
      plVar49 = uStack_2f8;
      uVar20 = local_300;
    }
    else {
      FUN_034c570c();
      plVar49 = uStack_2f8;
      uVar20 = local_300;
    }
    break;
  case 0xd:
    memcpy(&local_310,puVar48 + 6,0x24);
    uStack_2ec = 0x3ff3f;
    uVar27 = *(undefined8 *)(puVar48 + 2);
    puVar48 = (ushort *)&local_310;
    uVar26 = 1;
    uVar55 = 0;
    uVar20 = *(undefined8 *)PTR_DAT_047e6cc0;
    goto LAB_034508f0;
  case 0xe:
    local_300 = (undefined8 *)0x0;
    uStack_2f8 = (long *)0x0;
    uStack_2f8._0_4_ = 0;
    uVar18 = *(uint *)(puVar48 + 8);
    if (uVar18 != 0) {
      if (uVar18 == 1) {
        puVar23 = &local_310;
LAB_034512a8:
        uStack_2f8 = (long *)CONCAT44(uVar18,(uint)uStack_2f8);
      }
      else {
        puVar23 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(4,(ulong)uVar18 << 3,0x10);
        if (puVar23 != (undefined8 *)0x0) goto LAB_034512a8;
      }
      local_300 = puVar23;
      if (*(int *)(puVar48 + 8) != 0) {
        uVar47 = 0;
        do {
          FUN_03411c9c(&local_310,*(undefined8 *)(puVar48 + (ulong)uVar47 * 4 + 10),&local_78);
          uVar47 = uVar47 + 1;
        } while ((uint)uVar47 < *(uint *)(puVar48 + 8));
      }
    }
    FUN_034c66e4(*(undefined8 *)PTR_DAT_047e6cc0,*(undefined8 *)(puVar48 + 2),&local_310,
                 *(undefined4 *)(puVar48 + 6));
    plVar49 = uStack_2f8;
    goto LAB_034513e8;
  case 0x10:
    local_300 = (undefined8 *)0x0;
    uStack_2f8 = (long *)0x0;
    uStack_2f8._0_4_ = 0;
    uVar18 = *(uint *)(puVar48 + 4);
    if (uVar18 != 0) {
      if (uVar18 == 1) {
        puVar23 = &local_310;
LAB_03451328:
        uStack_2f8 = (long *)CONCAT44(uVar18,(uint)uStack_2f8);
      }
      else {
        puVar23 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(4,(ulong)uVar18 << 3,0x10);
        if (puVar23 != (undefined8 *)0x0) goto LAB_03451328;
      }
      local_300 = puVar23;
      if (*(int *)(puVar48 + 4) != 0) {
        uVar47 = 0;
        do {
          FUN_03411c9c(&local_310,*(undefined8 *)(puVar48 + 2 + (ulong)uVar47 * 4 + 4),&local_78);
          uVar47 = uVar47 + 1;
        } while ((uint)uVar47 < *(uint *)(puVar48 + 4));
      }
    }
    FUN_034c6aa8(*(undefined8 *)PTR_DAT_047e6cc0,&local_310,*(undefined4 *)(puVar48 + 2));
    plVar49 = uStack_2f8;
    goto LAB_034513e8;
  case 0x11:
    FUN_034c6ca0(*(undefined8 *)PTR_DAT_047e6cc0,*(undefined8 *)(puVar48 + 2));
    plVar49 = uStack_2f8;
    uVar20 = local_300;
    break;
  case 0x12:
    if (puVar48[0xd] == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(undefined8 *)(puVar48 + 6);
    }
    FUN_0344512c(*(undefined8 *)(puVar48 + 2),puVar48[0xc] != 0,*(undefined4 *)(puVar48 + 10),uVar20
                );
    plVar49 = uStack_2f8;
    uVar20 = local_300;
    if (*(long *)(puVar48 + 6) == 0) break;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    bVar16 = false;
    puVar48[6] = 0;
    puVar48[7] = 0;
    puVar48[8] = 0;
    puVar48[9] = 0;
    uVar20 = local_300;
    plVar49 = uStack_2f8;
    goto switchD_0344fe7c_caseD_4;
  case 0x13:
    lVar32 = *(long *)PTR_DAT_047e6cc0;
    uVar18 = *(uint *)(lVar32 + 0x38);
    bVar16 = false;
    if (uVar18 != 0) {
      uVar6 = 0;
      uVar28 = (uint)*(long *)(puVar48 + 2);
      if (uVar18 != 0) {
        uVar6 = uVar28 / uVar18;
      }
      plVar22 = *(long **)(*(long *)(lVar32 + 0x30) + (ulong)(uVar28 - uVar6 * uVar18) * 8);
      if (plVar22 == (long *)0x0) break;
      do {
        if (plVar22[1] == *(long *)(puVar48 + 2)) {
          FUN_034c6e50(lVar32,plVar22[2],puVar48 + 8,*(undefined4 *)(puVar48 + 6),1);
          plVar49 = uStack_2f8;
          uVar20 = local_300;
          goto LAB_03451a7c;
        }
        plVar22 = (long *)*plVar22;
        bVar16 = false;
      } while (plVar22 != (long *)0x0);
    }
    goto switchD_0344fe7c_caseD_4;
  case 0x14:
    FUN_034c7240(*(undefined4 *)(puVar48 + 10),*(undefined8 *)PTR_DAT_047e6cc0,
                 *(undefined8 *)(puVar48 + 2),*(undefined8 *)(puVar48 + 6));
    plVar49 = uStack_2f8;
    uVar20 = local_300;
    break;
  case 0x15:
    lVar32 = *(long *)PTR_DAT_047e6cc0;
    uVar18 = *(uint *)(lVar32 + 0x38);
    bVar16 = false;
    if (uVar18 != 0) {
      uVar6 = 0;
      uVar28 = (uint)*(long *)(puVar48 + 2);
      if (uVar18 != 0) {
        uVar6 = uVar28 / uVar18;
      }
      plVar22 = *(long **)(*(long *)(lVar32 + 0x30) + (ulong)(uVar28 - uVar6 * uVar18) * 8);
      if (plVar22 == (long *)0x0) break;
      do {
        if (plVar22[1] == *(long *)(puVar48 + 2)) {
          FUN_034c7448(*(undefined4 *)(puVar48 + 10),*(undefined4 *)(puVar48 + 0xc),lVar32,
                       plVar22[2],*(undefined8 *)(puVar48 + 6));
          plVar49 = uStack_2f8;
          uVar20 = local_300;
          goto LAB_03451a7c;
        }
        plVar22 = (long *)*plVar22;
        bVar16 = false;
      } while (plVar22 != (long *)0x0);
    }
    goto switchD_0344fe7c_caseD_4;
  case 0x16:
    lVar32 = *(long *)PTR_DAT_047e6cc0;
    uVar18 = *(uint *)(lVar32 + 0x38);
    bVar16 = false;
    if (uVar18 != 0) {
      uVar6 = 0;
      uVar28 = (uint)*(long *)(puVar48 + 2);
      if (uVar18 != 0) {
        uVar6 = uVar28 / uVar18;
      }
      plVar22 = *(long **)(*(long *)(lVar32 + 0x30) + (ulong)(uVar28 - uVar6 * uVar18) * 8);
      if (plVar22 == (long *)0x0) break;
      do {
        if (plVar22[1] == *(long *)(puVar48 + 2)) {
          FUN_034c75b0(lVar32,plVar22[2],*(undefined8 *)(puVar48 + 6),puVar48 + 0xc,
                       *(undefined4 *)(puVar48 + 10));
          plVar49 = uStack_2f8;
          uVar20 = local_300;
          goto LAB_03451a7c;
        }
        plVar22 = (long *)*plVar22;
        bVar16 = false;
      } while (plVar22 != (long *)0x0);
    }
    goto switchD_0344fe7c_caseD_4;
  case 0x17:
    lVar32 = *(long *)(puVar48 + 2);
    if (lVar32 != 0) {
      local_78 = CONCAT44(local_78._4_4_,(int)lVar32);
      iVar19 = (int)((ulong)lVar32 >> 0x20);
      local_310 = (undefined **)CONCAT44(local_310._4_4_,iVar19);
      if ((int)lVar32 == 0) {
LAB_0345040c:
        FUN_0349dde0(&local_78,&local_310);
        lVar32 = CONCAT44((undefined4)local_310,(undefined4)local_78);
        uVar20 = local_300;
        plVar49 = uStack_2f8;
      }
      else if (iVar19 == 0) goto LAB_0345040c;
      lVar21 = *(long *)(PTR_DAT_047e6f80 + 0x10);
      while( true ) {
        if (lVar21 == 0) break;
        if (*(long *)(lVar21 + 0x28) == lVar32) goto LAB_03451474;
        lVar21 = *(long *)(lVar21 + 0x20);
      }
      break;
    }
    lVar21 = *(long *)(PTR_DAT_047e6f80 + 0x10);
    if (lVar21 == 0) break;
    do {
      if (*(char *)(lVar21 + 0x46d) != '\0') goto LAB_03451474;
      lVar21 = *(long *)(lVar21 + 0x20);
    } while (lVar21 != 0);
    bVar16 = false;
    goto switchD_0344fe7c_caseD_4;
  case 0x18:
    uVar18 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
    bVar16 = false;
    if (uVar18 != 0) {
      uVar6 = 0;
      uVar28 = (uint)*(long *)(puVar48 + 2);
      if (uVar18 != 0) {
        uVar6 = uVar28 / uVar18;
      }
      plVar22 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                          (ulong)(uVar28 - uVar6 * uVar18) * 8);
      if (plVar22 == (long *)0x0) break;
      do {
        if (plVar22[1] == *(long *)(puVar48 + 2)) {
          lVar32 = plVar22[2];
          if (lVar32 == 0) goto LAB_03451a7c;
          *(long *)(*(long *)(puVar48 + 0x14) + 0x50) = lVar32;
          uVar18 = *(uint *)(lVar32 + 0x80);
          if (uVar18 < 2) {
            bVar16 = false;
            *(uint *)(lVar32 + 0x80) = uVar18 + 1;
            if (uVar18 != 0) {
              if (*(char *)(lVar32 + 0x84) != '\0') {
                FUN_034c60b0();
                plVar49 = uStack_2f8;
                uVar20 = local_300;
                goto LAB_03451a7c;
              }
            }
          }
          else {
            bVar16 = false;
            *(uint *)(lVar32 + 0x80) = uVar18 + 1;
          }
          break;
        }
        plVar22 = (long *)*plVar22;
        bVar16 = false;
      } while (plVar22 != (long *)0x0);
    }
    goto switchD_0344fe7c_caseD_4;
  case 0x19:
    puVar4 = puVar48 + 2;
    switch(*(undefined4 *)(puVar48 + 6)) {
    case 0:
      lVar32 = *(long *)(puVar48 + 2);
      uVar26 = *(undefined4 *)(puVar48 + 8);
      uVar55 = *(undefined4 *)(puVar48 + 10);
LAB_03451a68:
      FUN_03479e70(lVar32,uVar26,uVar55);
      plVar49 = uStack_2f8;
      break;
    case 1:
      FUN_0347a780(*(undefined8 *)(puVar48 + 2),*(undefined4 *)(puVar48 + 8),
                   *(undefined4 *)(puVar48 + 10));
      plVar49 = uStack_2f8;
      break;
    case 2:
      FUN_0347a974(*(undefined8 *)(puVar48 + 2),*(undefined4 *)(puVar48 + 8),
                   *(undefined4 *)(puVar48 + 10));
      plVar49 = uStack_2f8;
      break;
    case 3:
      *(undefined1 *)(*(long *)puVar4 + 0x70) = 1;
      plVar49 = *(long **)PTR_DAT_047e6f38;
      uVar18 = *(uint *)(*(long *)puVar4 + 0x6c);
      nn::os::LockMutex((MutexType *)(plVar49 + 3));
      uVar6 = *(uint *)(plVar49 + 1);
      if (uVar6 != 0) {
        uVar28 = 0;
        if (uVar6 != 0) {
          uVar28 = uVar18 / uVar6;
        }
        for (lVar32 = *(long *)(*plVar49 + (ulong)(uVar18 - uVar28 * uVar6) * 8); lVar32 != 0;
            lVar32 = *(long *)(lVar32 + 0x70)) {
          if (*(uint *)(lVar32 + 0x54) == uVar18) {
            *(int *)(lVar32 + 0x30) = *(int *)(lVar32 + 0x30) + -1;
            FUN_034b3448(plVar49,uVar18);
            goto LAB_03451a10;
          }
        }
      }
      nn::os::UnlockMutex((MutexType *)(plVar49 + 3));
LAB_03451a10:
      (**(code **)(**(long **)puVar4 + 0x18))();
      plVar49 = uStack_2f8;
      break;
    case 4:
      lVar32 = *(long *)(puVar48 + 2);
      uVar26 = *(undefined4 *)(puVar48 + 8);
      uVar55 = *(undefined4 *)(puVar48 + 10);
      *(undefined4 *)(lVar32 + 0xb4) = 0;
      FUN_0347a480(lVar32,0,uVar26,uVar55);
      plVar49 = uStack_2f8;
      break;
    case 5:
      FUN_0347a698(*(undefined8 *)puVar4);
      plVar49 = uStack_2f8;
      break;
    case 6:
      lVar32 = *(long *)puVar4;
      if ((*(int *)(lVar32 + 0x48) == 2) && (*(int *)(lVar32 + 0x20) != 0)) {
        uVar26 = 0;
        uVar55 = 4;
        goto LAB_03451a68;
      }
    }
    plVar22 = *(long **)puVar4;
    goto LAB_03451a70;
  case 0x1a:
    uVar20 = *(undefined8 *)(puVar48 + 2);
    if (*(code **)PTR_DAT_047e7058 != (code *)0x0) {
      (**(code **)PTR_DAT_047e7058)(uVar20);
    }
    FUN_034e8ad8(uVar20);
    FUN_0346034c(uVar20,0);
    plVar49 = uStack_2f8;
    uVar20 = local_300;
    break;
  case 0x1b:
    lVar32 = *(long *)(puVar48 + 2);
    plVar22 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(1,0x50);
    plVar49 = uStack_2f8;
    uVar20 = local_300;
    if (plVar22 == (long *)0x0) break;
    *(undefined4 *)(plVar22 + 6) = 0;
    uVar35 = 0x104;
    if (lVar32 != -1) {
      uVar35 = 0x105;
    }
    *(undefined2 *)((long)plVar22 + 0x34) = uVar35;
    plVar22[2] = 0x100000000;
    plVar22[3] = 0;
    *(undefined1 *)((long)plVar22 + 0x36) = 4;
    plVar22[4] = 0;
    plVar22[5] = 0;
    *plVar22 = (long)(PTR_DAT_047e7060 + 0x10);
    plVar22[7] = 0;
    plVar22[8] = 0;
    *(byte *)(plVar22 + 9) = *(byte *)(plVar22 + 9) & 0xfc;
    if (lVar32 == -1) {
      local_310 = &PTR_LAB_047c0688;
      uStack_2ec = 0;
      uStack_2e8 = (ulong)uStack_2e8._4_4_ << 0x20;
      uStack_2f8._4_4_ = 0;
      uStack_2f0 = 0;
      uStack_2ef = 0;
      uStack_2ee = 0;
      uStack_2ed = 0;
      local_2d8 = 0;
      local_2d0 = (undefined8 *)0x0;
      (**(code **)(*plVar22 + 0x40))(plVar22,&local_310);
      puVar23 = local_2d0;
      local_310 = &PTR_LAB_047c0688;
      if (local_2d0 != (undefined8 *)0x0) {
        iVar19 = *(int *)(local_2d0 + 0x10);
        uVar18 = iVar19 - 1;
        *(uint *)(local_2d0 + 0x10) = uVar18;
        if (iVar19 == 0 || uVar18 == 0) {
          if (uVar18 == 0) {
LAB_03451c90:
            lVar32 = local_2d0[5];
            if (lVar32 != 0) {
              uVar18 = ((uint)lVar32 ^ (uint)lVar32 >> 0x10) * -0x7a143595;
              uVar18 = (uVar18 ^ uVar18 >> 0xd) * -0x3d4d51cb;
              local_78 = lVar32;
              FUN_034c6294(&DAT_048b02b8,&local_78,uVar18 ^ uVar18 >> 0x10);
              uVar18 = *(uint *)(puVar23 + 0x10);
            }
            goto LAB_03451cd4;
          }
        }
        else if (uVar18 < 2) {
          if (*(char *)((long)local_2d0 + 0x84) != '\0') goto LAB_03451c90;
LAB_03451cd4:
          if (uVar18 == 0) {
            (**(code **)*puVar23)(puVar23);
            (**(code **)(puVar11 + 0x30))(4,puVar23);
          }
        }
      }
      piVar30 = (int *)CONCAT17(uStack_2ed,
                                CONCAT16(uStack_2ee,
                                         CONCAT15(uStack_2ef,CONCAT14(uStack_2f0,uStack_2f8._4_4_)))
                               );
      plVar49 = (long *)CONCAT44(uStack_2f8._4_4_,(uint)uStack_2f8);
      if (piVar30 != (int *)0x0) {
        iVar19 = *piVar30;
        *piVar30 = iVar19 + -1;
        plVar49 = (long *)CONCAT44(uStack_2f8._4_4_,(uint)uStack_2f8);
        if (iVar19 + -1 == 0) {
          uVar18 = piVar30[1];
          if (uVar18 != 0) {
            uVar37 = 0;
            plVar49 = (long *)(piVar30 + 4);
            do {
              if (*plVar49 != 0) {
                (**(code **)(puVar11 + 0x30))(0);
                uVar18 = piVar30[1];
              }
              uVar37 = uVar37 + 1;
              plVar49 = plVar49 + 4;
            } while (uVar37 < uVar18);
          }
LAB_03451d50:
          (**(code **)(puVar11 + 0x30))(0,piVar30);
          plVar49 = (long *)CONCAT44(uStack_2f8._4_4_,(uint)uStack_2f8);
        }
      }
    }
    else {
      uVar18 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
      if (uVar18 != 0) {
        uVar6 = 0;
        if (uVar18 != 0) {
          uVar6 = (uint)lVar32 / uVar18;
        }
        for (plVar25 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                                 (ulong)((uint)lVar32 - uVar6 * uVar18) * 8); plVar25 != (long *)0x0
            ; plVar25 = (long *)*plVar25) {
          if (plVar25[1] == lVar32) {
            puVar23 = (undefined8 *)plVar25[2];
            if (puVar23 != (undefined8 *)0x0) {
              local_310 = &PTR_LAB_047c0688;
              uStack_2ec = 0;
              uStack_2e8 = (ulong)uStack_2e8._4_4_ << 0x20;
              uStack_2f8._4_4_ = 0;
              uStack_2f0 = 0;
              uStack_2ef = 0;
              uStack_2ee = 0;
              uStack_2ed = 0;
              local_2d8 = 0;
              uVar18 = *(uint *)(puVar23 + 0x10);
              local_2d0 = puVar23;
              if (uVar18 < 2) {
                *(uint *)(puVar23 + 0x10) = uVar18 + 1;
                if ((uVar18 != 0) && (*(char *)((long)puVar23 + 0x84) != '\0')) {
                  FUN_034c60b0();
                }
              }
              else {
                *(uint *)(puVar23 + 0x10) = uVar18 + 1;
              }
              (**(code **)(*plVar22 + 0x40))(plVar22,&local_310);
              puVar23 = local_2d0;
              local_310 = &PTR_LAB_047c0688;
              if (local_2d0 != (undefined8 *)0x0) {
                iVar19 = *(int *)(local_2d0 + 0x10);
                uVar18 = iVar19 - 1;
                *(uint *)(local_2d0 + 0x10) = uVar18;
                if (iVar19 == 0 || uVar18 == 0) {
                  if (uVar18 == 0) {
LAB_03451fec:
                    lVar32 = local_2d0[5];
                    if (lVar32 != 0) {
                      uVar18 = ((uint)lVar32 ^ (uint)lVar32 >> 0x10) * -0x7a143595;
                      uVar18 = (uVar18 ^ uVar18 >> 0xd) * -0x3d4d51cb;
                      local_78 = lVar32;
                      FUN_034c6294(&DAT_048b02b8,&local_78,uVar18 ^ uVar18 >> 0x10);
                      uVar18 = *(uint *)(puVar23 + 0x10);
                    }
                    goto LAB_03452030;
                  }
                }
                else if (uVar18 < 2) {
                  if (*(char *)((long)local_2d0 + 0x84) != '\0') goto LAB_03451fec;
LAB_03452030:
                  if (uVar18 == 0) {
                    (**(code **)*puVar23)(puVar23);
                    (**(code **)(puVar11 + 0x30))(4,puVar23);
                  }
                }
              }
              piVar30 = (int *)CONCAT17(uStack_2ed,
                                        CONCAT16(uStack_2ee,
                                                 CONCAT15(uStack_2ef,
                                                          CONCAT14(uStack_2f0,uStack_2f8._4_4_))));
              plVar49 = (long *)CONCAT44(uStack_2f8._4_4_,(uint)uStack_2f8);
              if (piVar30 != (int *)0x0) {
                iVar19 = *piVar30;
                *piVar30 = iVar19 + -1;
                plVar49 = (long *)CONCAT44(uStack_2f8._4_4_,(uint)uStack_2f8);
                if (iVar19 + -1 == 0) {
                  uVar18 = piVar30[1];
                  if (uVar18 != 0) {
                    uVar37 = 0;
                    plVar49 = (long *)(piVar30 + 4);
                    do {
                      if (*plVar49 != 0) {
                        (**(code **)(puVar11 + 0x30))(0);
                        uVar18 = piVar30[1];
                      }
                      uVar37 = uVar37 + 1;
                      plVar49 = plVar49 + 4;
                    } while (uVar37 < uVar18);
                  }
                  goto LAB_03451d50;
                }
              }
            }
            break;
          }
        }
      }
    }
    lVar32 = *plVar22;
    goto LAB_03451a74;
  case 0x1c:
    local_300 = (undefined8 *)0x0;
    uStack_2f8 = (long *)0x0;
    uStack_2f8._0_4_ = 0;
    uVar18 = *(uint *)(puVar48 + 0xc);
    if (uVar18 != 0) {
      if (uVar18 == 1) {
        puVar23 = &local_310;
LAB_034513a0:
        uStack_2f8 = (long *)CONCAT44(uVar18,(uint)uStack_2f8);
      }
      else {
        puVar23 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(4,(ulong)uVar18 << 3,0x10);
        if (puVar23 != (undefined8 *)0x0) goto LAB_034513a0;
      }
      local_300 = puVar23;
      if (*(int *)(puVar48 + 0xc) != 0) {
        uVar47 = 0;
        do {
          FUN_03411c9c(&local_310,*(undefined8 *)(puVar48 + (ulong)uVar47 * 4 + 0xe),&local_78);
          uVar47 = uVar47 + 1;
        } while ((uint)uVar47 < *(uint *)(puVar48 + 0xc));
      }
    }
    FUN_0349fa78(puVar48 + 2,&local_310);
    plVar49 = uStack_2f8;
LAB_034513e8:
    uStack_2f8._4_4_ = (uint)((ulong)plVar49 >> 0x20);
    uVar20 = 0;
    if (local_300 != (undefined8 *)0x0) {
      uStack_2f8._0_4_ = 0;
      if (&local_310 != local_300) {
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4);
      }
      uVar20 = 0;
      plVar49 = (long *)(ulong)(uint)uStack_2f8;
    }
LAB_0345141c:
    bVar16 = false;
    goto switchD_0344fe7c_caseD_4;
  case 0x1d:
    FUN_0349f898(*(undefined8 *)(puVar48 + 2),1);
    plVar49 = uStack_2f8;
    uVar20 = local_300;
    break;
  case 0x1e:
    iVar19 = FUN_0349fbcc(puVar48 + 2,*(undefined8 *)(puVar48 + 10));
    goto LAB_03450d88;
  case 0x1f:
    lVar32 = *(long *)PTR_DAT_047e6f28;
    uVar18 = *(uint *)(puVar48 + 2);
    pMVar52 = (MutexType *)(lVar32 + 0x38);
    nn::os::LockMutex(pMVar52);
    uVar6 = *(uint *)(lVar32 + 0x60);
    if (uVar6 != 0) {
      uVar28 = 0;
      if (uVar6 != 0) {
        uVar28 = uVar18 / uVar6;
      }
      for (lVar32 = *(long *)(*(long *)(lVar32 + 0x58) + (ulong)(uVar18 - uVar28 * uVar6) * 8);
          lVar32 != 0; lVar32 = *(long *)(lVar32 + 8)) {
        if (*(uint *)(lVar32 + 0x10) == uVar18) {
          *(int *)(lVar32 + 0x14) = *(int *)(lVar32 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar52);
          FUN_03475440(lVar32 + -8,*(undefined4 *)(puVar48 + 4));
          (**(code **)(*(long *)(lVar32 + -8) + 0x30))(lVar32 + -8);
          uVar20 = local_300;
          plVar49 = uStack_2f8;
          goto LAB_0345141c;
        }
      }
    }
    goto LAB_03450d28;
  case 0x20:
    FUN_03453e68(param_1,*(undefined4 *)(puVar48 + 2));
    uStack_2f8._4_4_ = uStack_2f8._4_4_ & 0xffffff00;
    uStack_2e8 = 0;
    uStack_2ec = uStack_2ec & 0xffffff00;
    uStack_2f0 = 0;
    uStack_2ee = 0;
    uStack_2f8._0_4_ = *(uint *)(puVar48 + 6);
    local_310 = (undefined **)((ulong)local_310 & 0xffffffff00000000);
    local_308 = 0;
    local_300._0_4_ = *(undefined4 *)(puVar48 + 2);
    local_300._4_4_ = *(undefined4 *)(puVar48 + 4);
    uStack_2ef = 0;
    FUN_0347120c(&local_310);
    lVar32 = *(long *)PTR_DAT_047e6f60;
    plVar49 = (long *)CONCAT44(uStack_2f8._4_4_,(uint)uStack_2f8);
    uVar20 = CONCAT44(local_300._4_4_,(undefined4)local_300);
    if (lVar32 == 0) break;
    uVar26 = *(undefined4 *)(puVar48 + 2);
    uVar37 = 0;
    goto LAB_03451984;
  case 0x21:
    lVar32 = *(long *)(puVar48 + 2);
    uVar18 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
    if (uVar18 != 0) {
      uVar6 = 0;
      if (uVar18 != 0) {
        uVar6 = (uint)lVar32 / uVar18;
      }
      for (plVar22 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                               (ulong)((uint)lVar32 - uVar6 * uVar18) * 8); plVar22 != (long *)0x0;
          plVar22 = (long *)*plVar22) {
        if (plVar22[1] == lVar32) {
          lVar21 = plVar22[2];
          if ((lVar21 == 0) || (*(long *)(lVar21 + 0x28) == 0)) goto LAB_03450704;
          goto LAB_0345070c;
        }
      }
    }
    lVar21 = 0;
LAB_03450704:
    if (lVar32 == -1) {
LAB_0345070c:
      FUN_03452d40(*(undefined8 *)(puVar48 + 6),puVar48 + 2,lVar21);
      plVar49 = uStack_2f8;
    }
    goto LAB_03451860;
  case 0x22:
    lVar32 = *(long *)(puVar48 + 2);
    uVar18 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
    if (uVar18 != 0) {
      uVar6 = 0;
      if (uVar18 != 0) {
        uVar6 = (uint)lVar32 / uVar18;
      }
      for (plVar49 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                               (ulong)((uint)lVar32 - uVar6 * uVar18) * 8); plVar49 != (long *)0x0;
          plVar49 = (long *)*plVar49) {
        if (plVar49[1] == lVar32) {
          lVar21 = plVar49[2];
          if ((lVar21 == 0) || (*(long *)(lVar21 + 0x28) == 0)) goto LAB_03450760;
          goto LAB_03450768;
        }
      }
    }
    lVar21 = 0;
LAB_03450760:
    if (lVar32 == -1) {
LAB_03450768:
      FUN_03453908(param_1,*(undefined8 *)(puVar48 + 6),puVar48 + 2,lVar21,1);
    }
    plVar49 = *(long **)PTR_DAT_047e6f38;
    uVar18 = *(uint *)(puVar48 + 0xc);
    nn::os::LockMutex((MutexType *)(plVar49 + 3));
    uVar6 = *(uint *)(plVar49 + 1);
    if (uVar6 != 0) {
      uVar28 = 0;
      if (uVar6 != 0) {
        uVar28 = uVar18 / uVar6;
      }
      for (lVar32 = *(long *)(*plVar49 + (ulong)(uVar18 - uVar28 * uVar6) * 8); lVar32 != 0;
          lVar32 = *(long *)(lVar32 + 0x70)) {
        if (*(uint *)(lVar32 + 0x54) == uVar18) {
          *(int *)(lVar32 + 0x30) = *(int *)(lVar32 + 0x30) + -1;
          FUN_034b3448(plVar49,uVar18);
          plVar49 = uStack_2f8;
          goto LAB_03451860;
        }
      }
    }
    nn::os::UnlockMutex((MutexType *)(plVar49 + 3));
    plVar49 = uStack_2f8;
LAB_03451860:
    plVar22 = *(long **)(puVar48 + 6);
    goto LAB_03451a70;
  case 0x23:
    lVar32 = *(long *)(puVar48 + 2);
    uVar18 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
    if (uVar18 != 0) {
      uVar6 = 0;
      if (uVar18 != 0) {
        uVar6 = (uint)lVar32 / uVar18;
      }
      for (plVar22 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                               (ulong)((uint)lVar32 - uVar6 * uVar18) * 8); plVar22 != (long *)0x0;
          plVar22 = (long *)*plVar22) {
        if (plVar22[1] == lVar32) {
          lVar21 = plVar22[2];
          if ((lVar21 == 0) || (*(long *)(lVar21 + 0x28) == 0)) goto LAB_03450818;
          goto LAB_03450820;
        }
      }
    }
    lVar21 = 0;
LAB_03450818:
    if (lVar32 == -1) {
LAB_03450820:
      FUN_03453ba4(param_1,*(undefined8 *)(puVar48 + 6),puVar48 + 2,lVar21,1);
      plVar49 = uStack_2f8;
    }
    plVar22 = *(long **)(puVar48 + 6);
    uVar20 = local_300;
    if (plVar22 != (long *)0x0) goto LAB_03451a70;
    break;
  case 0x24:
    lVar32 = *(long *)(puVar48 + 2);
    if (lVar32 == -1) {
      lVar32 = 0;
LAB_03451148:
      if (puVar48[0xd] == 0) {
        FUN_034ddde0(*(undefined8 *)(puVar48 + 6),lVar32);
        plVar49 = uStack_2f8;
      }
      else {
        FUN_034dd290(*(undefined8 *)(puVar48 + 6),lVar32,(char)puVar48[0xc],
                     *(undefined1 *)((long)puVar48 + 0x19));
        plVar49 = uStack_2f8;
      }
      goto LAB_03451860;
    }
    uVar18 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
    if (uVar18 != 0) {
      uVar6 = 0;
      if (uVar18 != 0) {
        uVar6 = (uint)lVar32 / uVar18;
      }
      plVar22 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                          (ulong)((uint)lVar32 - uVar6 * uVar18) * 8);
      if (plVar22 != (long *)0x0) {
        do {
          if (plVar22[1] == lVar32) {
            lVar32 = plVar22[2];
            if (lVar32 != 0) goto LAB_03451148;
            goto LAB_03451a7c;
          }
          plVar22 = (long *)*plVar22;
          bVar16 = false;
        } while (plVar22 != (long *)0x0);
        goto switchD_0344fe7c_caseD_4;
      }
    }
    break;
  case 0x25:
    uVar18 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
    if (uVar18 != 0) {
      uVar6 = 0;
      uVar28 = (uint)*(long *)(puVar48 + 2);
      if (uVar18 != 0) {
        uVar6 = uVar28 / uVar18;
      }
      plVar22 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                          (ulong)(uVar28 - uVar6 * uVar18) * 8);
      if (plVar22 != (long *)0x0) {
        uVar26 = *(undefined4 *)(puVar48 + 6);
        do {
          if (plVar22[1] == *(long *)(puVar48 + 2)) {
            lVar32 = plVar22[2];
            lVar21 = *(long *)(lVar32 + 0x28);
            if (lVar21 != 0) {
              *(undefined4 *)(lVar21 + 0x50) = uVar26;
              *(byte *)(lVar21 + 0x54) = *(byte *)(lVar21 + 0x54) | 1;
              lVar32 = plVar22[2];
            }
            lVar32 = *(long *)(lVar32 + 0x40);
            bVar16 = false;
            if (lVar32 != 0) {
              *(undefined4 *)(lVar32 + 0x84) = uVar26;
              FUN_03411c9c(PTR_DAT_047e6d80,*(undefined8 *)(*(long *)(lVar32 + 8) + 0x78),&local_310
                          );
              plVar49 = uStack_2f8;
              uVar20 = local_300;
              goto LAB_03451a7c;
            }
            break;
          }
          plVar22 = (long *)*plVar22;
          bVar16 = false;
        } while (plVar22 != (long *)0x0);
        goto switchD_0344fe7c_caseD_4;
      }
    }
    break;
  case 0x26:
    uVar20 = *(undefined8 *)PTR_DAT_047e6cc0;
    uVar27 = *(undefined8 *)(puVar48 + 2);
    uVar26 = *(undefined4 *)(puVar48 + 6);
    uVar55 = *(undefined4 *)(puVar48 + 8);
    puVar48 = puVar48 + 10;
LAB_034508f0:
    FUN_034c64e8(uVar20,uVar27,puVar48,uVar26,uVar55);
    plVar49 = uStack_2f8;
    uVar20 = local_300;
    break;
  case 0x27:
    lVar32 = *(long *)(puVar48 + 2);
    uVar18 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
    if (uVar18 != 0) {
      uVar6 = 0;
      if (uVar18 != 0) {
        uVar6 = (uint)lVar32 / uVar18;
      }
      for (plVar22 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                               (ulong)((uint)lVar32 - uVar6 * uVar18) * 8); plVar22 != (long *)0x0;
          plVar22 = (long *)*plVar22) {
        if (plVar22[1] == lVar32) {
          uVar37 = plVar22[2];
          if ((uVar37 == 0) || (*(long *)(uVar37 + 0x28) == 0)) goto LAB_03450940;
          goto LAB_03450948;
        }
      }
    }
    uVar37 = 0;
LAB_03450940:
    if (lVar32 == -1) {
LAB_03450948:
      for (lVar32 = *(long *)(*(long *)(puVar48 + 6) + 0x18); lVar32 != 0;
          lVar32 = *(long *)(lVar32 + 0x18)) {
        if (*(short *)(lVar32 + 0x34) == 0x403) {
          pMVar52 = *(MutexType **)PTR_DAT_047e6f28;
          uVar18 = *(uint *)(lVar32 + 0x30);
          local_300 = (undefined8 *)uVar20;
          uStack_2f8 = plVar49;
          nn::os::LockMutex(pMVar52);
          uVar6 = *(uint *)(pMVar52 + 0x28);
          if (uVar6 != 0) {
            uVar28 = 0;
            if (uVar6 != 0) {
              uVar28 = uVar18 / uVar6;
            }
            for (lVar21 = *(long *)(*(long *)(pMVar52 + 0x20) + (ulong)(uVar18 - uVar28 * uVar6) * 8
                                   ); lVar21 != 0; lVar21 = *(long *)(lVar21 + 8)) {
              if (*(uint *)(lVar21 + 0x10) == uVar18) {
                *(int *)(lVar21 + 0x14) = *(int *)(lVar21 + 0x14) + 1;
                nn::os::UnlockMutex(pMVar52);
                uStack_2f8._4_4_ = uStack_2f8._4_4_ & 0xffffff00;
                uStack_2e8 = 0;
                local_2dc = 0;
                uStack_2ec = uStack_2ec & 0xffffff00;
                uStack_2f0 = 0;
                uStack_2ee = 0;
                local_300._4_4_ = 0;
                uStack_2f8._0_4_ = 4;
                local_300._0_4_ = *(undefined4 *)(puVar48 + 0xe);
                uStack_2ef = 0;
                local_2d4 = ((byte)puVar48[0x11] & 1) << 1 |
                            local_2d4 & 0xfc | (byte)puVar48[0x10] & 1;
                local_2d8 = *(undefined4 *)(puVar48 + 0xc);
                local_310 = (undefined **)CONCAT44(local_310._4_4_,4);
                plVar49 = (long *)(lVar21 + -8);
                local_308 = uVar37;
                (**(code **)(*plVar49 + 0x98))(plVar49,&local_310);
                (**(code **)(*plVar49 + 0x30))(plVar49);
                plVar49 = (long *)CONCAT44(uStack_2f8._4_4_,(uint)uStack_2f8);
                uVar20 = CONCAT44(local_300._4_4_,(undefined4)local_300);
                goto LAB_03450f6c;
              }
            }
          }
          nn::os::UnlockMutex(pMVar52);
          uVar20 = local_300;
          plVar49 = uStack_2f8;
        }
LAB_03450f6c:
      }
    }
    local_300 = (undefined8 *)uVar20;
    uStack_2f8 = plVar49;
    (**(code **)(**(long **)(puVar48 + 6) + 0x18))();
    plVar49 = uStack_2f8;
    uVar20 = local_300;
    break;
  case 0x28:
    uVar18 = (*(int *)(puVar48 + 0x16) << 4 | 2U) + *(int *)(puVar48 + 0x14) * 0x10000;
    uVar6 = uVar18 | 0x80000000;
    if (*(int *)(puVar48 + 0x18) != 1) {
      if (*(int *)(puVar48 + 0x18) == 0) {
        uVar28 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
        if (uVar28 != 0) {
          uVar9 = 0;
          uVar36 = (uint)*(long *)(puVar48 + 2);
          if (uVar28 != 0) {
            uVar9 = uVar36 / uVar28;
          }
          plVar22 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                              (ulong)(uVar36 - uVar9 * uVar28) * 8);
          if (plVar22 != (long *)0x0) {
            uVar26 = *(undefined4 *)(puVar48 + 6);
            do {
              if (plVar22[1] == *(long *)(puVar48 + 2)) {
                lVar32 = plVar22[2];
                bVar16 = false;
                if (lVar32 != 0) {
                  lVar21 = *(long *)PTR_DAT_047e6f28;
                  pMVar52 = (MutexType *)(lVar21 + 0x268);
                  nn::os::LockMutex(pMVar52);
                  uVar28 = *(uint *)(lVar21 + 0x290);
                  if (uVar28 == 0) goto LAB_03451dc0;
                  uVar9 = 0;
                  if (uVar28 != 0) {
                    uVar9 = uVar6 / uVar28;
                  }
                  plVar49 = *(long **)(*(long *)(lVar21 + 0x288) +
                                      (ulong)(uVar6 - uVar9 * uVar28) * 8);
                  goto joined_r0x03451da8;
                }
                break;
              }
              plVar22 = (long *)*plVar22;
              bVar16 = false;
            } while (plVar22 != (long *)0x0);
            goto switchD_0344fe7c_caseD_4;
          }
        }
      }
      break;
    }
    pMVar52 = *(MutexType **)PTR_DAT_047e6f28;
    nn::os::LockMutex(pMVar52);
    uVar18 = *(uint *)(pMVar52 + 0x28);
    if (uVar18 != 0) {
      uVar28 = 0;
      if (uVar18 != 0) {
        uVar28 = uVar6 / uVar18;
      }
      for (lVar32 = *(long *)(*(long *)(pMVar52 + 0x20) + (ulong)(uVar6 - uVar28 * uVar18) * 8);
          lVar32 != 0; lVar32 = *(long *)(lVar32 + 8)) {
        if (*(uint *)(lVar32 + 0x10) == uVar6) {
          *(int *)(lVar32 + 0x14) = *(int *)(lVar32 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar52);
          uStack_2f8._4_4_ = uStack_2f8._4_4_ & 0xffffff00;
          uStack_2e8 = 0;
          uStack_2ec = uStack_2ec & 0xffffff00;
          uStack_2f0 = 0;
          uStack_2ee = 0;
          uStack_2f8._0_4_ = 4;
          local_308 = 0;
          local_300._0_4_ = *(undefined4 *)(puVar48 + 6);
          local_300._4_4_ = 0;
          uStack_2ef = 0;
          local_310 = (undefined **)((ulong)local_310 & 0xffffffff00000000);
          plVar22 = (long *)(lVar32 + -8);
          (**(code **)(*plVar22 + 0x98))(plVar22,&local_310);
          plVar49 = (long *)CONCAT44(uStack_2f8._4_4_,(uint)uStack_2f8);
          lVar32 = *plVar22;
          goto LAB_03450b9c;
        }
      }
    }
    goto LAB_0345146c;
  case 0x29:
    if (*(long *)(puVar48 + 2) != 0) {
      FUN_034a0210();
      goto LAB_034514a8;
    }
    plVar22 = (long *)PTR_DAT_047e7088;
    for (lVar32 = *(long *)(PTR_DAT_047e6f80 + 0x10); PTR_DAT_047e7088 = (undefined *)plVar22,
        lVar32 != 0; lVar32 = *(long *)(lVar32 + 0x20)) {
      puVar23 = *(undefined8 **)(lVar32 + 0xa0);
      if (puVar23 != (undefined8 *)0x0) {
        puVar38 = *(undefined8 **)(lVar32 + 0xb0);
        puVar39 = (undefined8 *)0x0;
        puVar15 = puVar38;
        do {
          puVar43 = puVar15;
          puVar40 = puVar39;
          if (puVar43 == (undefined8 *)0x0) goto LAB_034511ec;
          puVar39 = puVar43;
          puVar15 = (undefined8 *)puVar43[1];
        } while (puVar23 != puVar43);
        puVar39 = (undefined8 *)(lVar32 + 0xb0);
        if (puVar23 != puVar38) {
          puVar39 = puVar40 + 1;
        }
        *puVar39 = (undefined8 *)puVar43[1];
        if (*(undefined8 **)(lVar32 + 0xa8) == puVar23) {
          *(undefined8 **)(lVar32 + 0xa8) = puVar40;
        }
        (**(code **)*puVar43)();
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar43);
LAB_034511ec:
        *(undefined8 *)(lVar32 + 0xa0) = 0;
      }
      plVar22 = (long *)PTR_DAT_047e7088;
    }
    uVar20 = local_300;
    plVar49 = uStack_2f8;
    if (*plVar22 != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
      *plVar22 = 0;
      uVar20 = local_300;
      plVar49 = uStack_2f8;
    }
    goto LAB_0345141c;
  case 0x2a:
    FUN_034a0384(*(undefined8 *)(puVar48 + 2));
    goto LAB_034514a8;
  case 0x2b:
    plVar22 = (long *)FUN_0344ec90(*(undefined8 *)PTR_DAT_047e6f28,*(undefined4 *)(puVar48 + 2),
                                   *(undefined4 *)(puVar48 + 8));
    plVar49 = uStack_2f8;
    uVar20 = local_300;
    if (plVar22 == (long *)0x0) break;
    uVar18 = (**(code **)(*plVar22 + 0x88))();
    if ((uVar18 < 0xb) && (uVar18 = *(uint *)(puVar48 + 4), uVar18 < 4)) {
      iVar19 = *(int *)(puVar48 + 6);
      piVar30 = (int *)plVar22[0x1a];
      if (piVar30 == (int *)0x0) {
        piVar30 = (int *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x28);
        if (piVar30 == (int *)0x0) {
          plVar22[0x1a] = 0;
          goto LAB_03450b94;
        }
        *(undefined1 *)(piVar30 + 9) = 0;
        piVar30[0] = 0;
        piVar30[1] = 0;
        *(undefined2 *)(piVar30 + 2) = 0;
        piVar30[3] = 0;
        *(undefined2 *)(piVar30 + 4) = 0;
        piVar30[5] = 0;
        *(undefined2 *)(piVar30 + 6) = 0;
        piVar30[7] = 0;
        *(undefined2 *)(piVar30 + 8) = 0;
        plVar22[0x1a] = (long)piVar30;
      }
      if (*piVar30 < 3) {
        *piVar30 = 2;
        lVar32 = plVar22[0x1a] + (ulong)uVar18 * 8;
        pcVar29 = (char *)(lVar32 + 9);
        piVar30 = (int *)(lVar32 + 4);
        if ((*pcVar29 != '\x01') || (*piVar30 != iVar19)) {
          *pcVar29 = '\x01';
          *piVar30 = iVar19;
          (**(code **)(*(long *)plVar22[0x19] + 0x18))();
          (**(code **)(*(long *)plVar22[0x19] + 0x10))((long *)plVar22[0x19],(ulong)uVar18);
        }
      }
    }
LAB_03450b94:
    lVar32 = *plVar22;
    plVar49 = uStack_2f8;
LAB_03450b9c:
    pcVar33 = *(code **)(lVar32 + 0x30);
    goto LAB_03451a78;
  case 0x2c:
    lVar32 = *(long *)(puVar48 + 2);
    if (lVar32 != 0) {
      local_78 = CONCAT44(local_78._4_4_,(int)lVar32);
      iVar19 = (int)((ulong)lVar32 >> 0x20);
      local_310 = (undefined **)CONCAT44(local_310._4_4_,iVar19);
      if ((int)lVar32 == 0) {
LAB_03450b00:
        FUN_0349dde0(&local_78,&local_310);
        lVar32 = CONCAT44((undefined4)local_310,(undefined4)local_78);
        uVar20 = local_300;
        plVar49 = uStack_2f8;
      }
      else if (iVar19 == 0) goto LAB_03450b00;
      lVar21 = *(long *)(PTR_DAT_047e6f80 + 0x10);
      while( true ) {
        if (lVar21 == 0) break;
        if (*(long *)(lVar21 + 0x28) == lVar32) goto LAB_03451484;
        lVar21 = *(long *)(lVar21 + 0x20);
      }
      break;
    }
    lVar21 = *(long *)(PTR_DAT_047e6f80 + 0x10);
    if (lVar21 == 0) break;
    do {
      if (*(char *)(lVar21 + 0x46d) != '\0') goto LAB_03451484;
      lVar21 = *(long *)(lVar21 + 0x20);
    } while (lVar21 != 0);
    bVar16 = false;
    goto switchD_0344fe7c_caseD_4;
  case 0x2d:
    plVar22 = (long *)FUN_0344ec90(*(undefined8 *)PTR_DAT_047e6f28,*(undefined4 *)(puVar48 + 2),
                                   *(undefined4 *)(puVar48 + 8));
    plVar49 = uStack_2f8;
    uVar20 = local_300;
    if (plVar22 != (long *)0x0) {
      iVar19 = (**(code **)(*plVar22 + 0x88))();
      if (iVar19 == 10 || iVar19 == 0) {
        (**(code **)(*plVar22 + 0x1b8))(plVar22,*(undefined4 *)(puVar48 + 6),1,2);
      }
      goto LAB_03450b94;
    }
    break;
  case 0x2e:
    lVar32 = *(long *)PTR_DAT_047e6f28;
    uVar18 = *(uint *)(puVar48 + 2);
    pMVar52 = (MutexType *)(lVar32 + 0x38);
    nn::os::LockMutex(pMVar52);
    uVar6 = *(uint *)(lVar32 + 0x60);
    if (uVar6 != 0) {
      uVar28 = 0;
      if (uVar6 != 0) {
        uVar28 = uVar18 / uVar6;
      }
      for (lVar32 = *(long *)(*(long *)(lVar32 + 0x58) + (ulong)(uVar18 - uVar28 * uVar6) * 8);
          lVar32 != 0; lVar32 = *(long *)(lVar32 + 8)) {
        if (*(uint *)(lVar32 + 0x10) == uVar18) {
          plVar22 = (long *)(lVar32 + -8);
          *(int *)(lVar32 + 0x14) = *(int *)(lVar32 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar52);
          if (*(long *)(lVar32 + 0x98) != 0) {
            uVar18 = *(uint *)(puVar48 + 4);
            uVar6 = *(uint *)(lVar32 + 0x114);
            if ((uVar18 & 0xf00) == 0x100) {
              uVar28 = uVar18 >> 0xc & 0x3ff3f;
              uVar18 = uVar28 - (uVar28 >> 1 & 0x55555555);
              uVar18 = (uVar18 & 0x33333333) + (uVar18 >> 2 & 0x33333333);
              uVar18 = uVar28 << 0xc | (uVar18 + (uVar18 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 |
                       0x100;
            }
            *(uint *)(lVar32 + 0x114) = uVar18;
            if ((uVar18 != uVar6) && (*(int *)PTR_DAT_047e7008 != 2)) {
              *(undefined4 *)PTR_DAT_047e7008 = 2;
            }
          }
          goto LAB_03450b94;
        }
      }
    }
LAB_03450d28:
    nn::os::UnlockMutex(pMVar52);
    uVar20 = local_300;
    plVar49 = uStack_2f8;
    goto LAB_0345141c;
  case 0x2f:
    FUN_0348405c(*(undefined8 *)(puVar48 + 2),*(undefined4 *)(puVar48 + 6));
    plVar49 = uStack_2f8;
    uVar20 = local_300;
    break;
  case 0x30:
    lVar32 = *(long *)(puVar48 + 10);
    if (lVar32 == 0) {
      for (lVar21 = *(long *)(PTR_DAT_047e6f80 + 0x10); lVar21 != 0;
          lVar21 = *(long *)(lVar21 + 0x20)) {
        if (*(char *)(lVar21 + 0x46d) != '\0') goto LAB_03451498;
      }
    }
    else {
      local_78 = CONCAT44(local_78._4_4_,(int)lVar32);
      iVar19 = (int)((ulong)lVar32 >> 0x20);
      local_310 = (undefined **)CONCAT44(local_310._4_4_,iVar19);
      if ((int)lVar32 == 0) {
LAB_03450c2c:
        FUN_0349dde0(&local_78,&local_310);
        lVar32 = CONCAT44((undefined4)local_310,(undefined4)local_78);
        uVar20 = local_300;
        plVar49 = uStack_2f8;
      }
      else if (iVar19 == 0) goto LAB_03450c2c;
      lVar21 = *(long *)(puVar12 + 0x10);
      while( true ) {
        local_300 = (undefined8 *)uVar20;
        uStack_2f8 = plVar49;
        if (lVar21 == 0) break;
        if (*(long *)(lVar21 + 0x28) == lVar32) goto LAB_03451498;
        lVar21 = *(long *)(lVar21 + 0x20);
      }
    }
    goto LAB_034514a8;
  case 0x33:
    uVar37 = (ulong)*(uint *)(puVar48 + 2);
    if (*(uint *)(puVar48 + 2) == 0) {
      uVar37 = time((time_t *)0x0);
    }
    bVar16 = false;
    *(ulong *)PTR_DAT_047e7068 = uVar37;
    uVar20 = local_300;
    plVar49 = uStack_2f8;
    goto switchD_0344fe7c_caseD_4;
  case 0x34:
    if (puVar48[2] == 0) {
      FUN_03475318();
      plVar49 = uStack_2f8;
      uVar20 = local_300;
    }
    else if (*PTR_DAT_047e7070 == '\0') {
      *PTR_DAT_047e7070 = 1;
      nn::os::LockMutex((MutexType *)PTR_DAT_047e7078);
      puVar11 = PTR_DAT_047e7080;
      if (*(int *)(PTR_DAT_047e7080 + 8) != 0) {
        uVar37 = 0;
        do {
          local_310 = *(undefined ***)(*(long *)puVar11 + uVar37 * 8);
          local_308 = CONCAT71(local_308._1_7_,0x61);
          (**(code **)(*local_310 + 0xd0))(0,local_310,&local_310,1);
          uVar37 = uVar37 + 1;
        } while (uVar37 < *(uint *)(puVar11 + 8));
      }
      if (*(code **)(PTR_DAT_047e6ce8 + 0x38) != (code *)0x0) {
        (**(code **)(PTR_DAT_047e6ce8 + 0x38))(*puVar13,*(undefined8 *)(PTR_DAT_047e6ce8 + 0x40));
      }
      pMVar52 = (MutexType *)PTR_DAT_047e7078;
      goto LAB_03450d28;
    }
    break;
  case 0x35:
    FUN_034785cc(*(undefined4 *)(puVar48 + 2),*(undefined8 *)(puVar48 + 4),
                 *(undefined4 *)(puVar48 + 8),*(undefined4 *)(puVar48 + 10),
                 *(undefined4 *)(puVar48 + 0xc),*(undefined8 *)(puVar48 + 0xe),
                 *(undefined4 *)(puVar48 + 0x12),1);
    plVar49 = uStack_2f8;
    uVar20 = local_300;
    break;
  case 0x36:
    iVar19 = FUN_034a03f8(puVar48[4] != 0,puVar48[5] != 0,*(undefined4 *)(puVar48 + 2));
    bVar17 = iVar19 == 1;
    goto LAB_03450d9c;
  case 0x37:
    iVar19 = FUN_0349f750(puVar48 + 2);
LAB_03450d88:
    if (iVar19 == 1) {
      uVar37 = nn::os::GetSystemTick();
      param_1[0x11] = uVar37;
    }
    bVar17 = true;
LAB_03450d9c:
    bVar16 = false;
    *param_3 = bVar17;
    uVar20 = local_300;
    plVar49 = uStack_2f8;
    goto switchD_0344fe7c_caseD_4;
  case 0x38:
    piVar30 = (int *)param_1[0x15];
    uVar18 = (uint)param_1[0x16];
    if ((uVar18 == 0) || (*piVar30 == *(int *)(puVar48 + 2))) {
      piVar42 = piVar30;
    }
    else {
      lVar32 = (ulong)uVar18 * 0x20;
      piVar45 = piVar30;
      do {
        lVar32 = lVar32 + -0x20;
        if (lVar32 == 0) goto LAB_03451a7c;
        piVar42 = piVar45 + 8;
        piVar1 = piVar45 + 8;
        piVar45 = piVar42;
      } while (*piVar1 != *(int *)(puVar48 + 2));
    }
    if (piVar42 != piVar30 + (ulong)uVar18 * 8) {
      (**(code **)(piVar42 + 2))(puVar48 + 4,uVar46 - 4);
      plVar49 = uStack_2f8;
      uVar20 = local_300;
    }
    break;
  case 0x39:
    local_300._4_4_ = 0;
    uStack_2f8._0_4_ = 4;
    local_308 = 0;
    uStack_2f8._4_4_ = uStack_2f8._4_4_ & 0xffffff00;
    uStack_2e8 = 0;
    uStack_2ec = uStack_2ec & 0xffffff00;
    uStack_2f0 = 0;
    uStack_2ef = 0;
    uStack_2ee = 0;
    switch(*(undefined4 *)(puVar48 + 2)) {
    case 0:
      local_310 = (undefined **)((ulong)local_310._4_4_ << 0x20);
      goto LAB_03451924;
    case 1:
      local_310 = (undefined **)CONCAT44(local_310._4_4_,1);
      FUN_03454134(param_1,*(undefined4 *)(puVar48 + 4));
      break;
    case 2:
      local_310 = (undefined **)CONCAT44(local_310._4_4_,2);
      puVar51 = (ulong *)param_1[10];
      if (puVar51 != (ulong *)0x0) {
        iVar19 = *(int *)(puVar48 + 4);
        puVar53 = (ulong *)0x0;
        do {
          uVar37 = puVar51[2];
          if (*(int *)(uVar37 + 0x30) == iVar19) {
            if (*(int *)(uVar37 + 0x34) != 0) {
              *(int *)(uVar37 + 0x34) = *(int *)(uVar37 + 0x34) + -1;
              goto LAB_034518bc;
            }
            FUN_03455744(param_1);
            puVar31 = (ulong *)*puVar51;
            puVar5 = param_1 + 10;
            if ((ulong *)param_1[10] != puVar51) {
              puVar5 = puVar53;
            }
            *puVar5 = (ulong)puVar31;
            if ((ulong *)param_1[0xb] == puVar51) {
              param_1[0xb] = (ulong)puVar53;
            }
            *puVar51 = param_1[0xc];
            param_1[0xc] = (ulong)puVar51;
            *(int *)((long)param_1 + 0x74) = *(int *)((long)param_1 + 0x74) + -1;
          }
          else {
LAB_034518bc:
            puVar31 = (ulong *)*puVar51;
            puVar53 = puVar51;
          }
          puVar51 = puVar31;
        } while (puVar31 != (ulong *)0x0);
      }
      break;
    case 3:
      local_310 = (undefined **)CONCAT44(local_310._4_4_,3);
LAB_03451924:
      FUN_03453e68(param_1,*(undefined4 *)(puVar48 + 4));
      break;
    case 4:
      local_310 = (undefined **)CONCAT44(local_310._4_4_,5);
    }
    uStack_2f0 = 0;
    uStack_2ee = 0;
    uStack_2f8._0_4_ = *(uint *)(puVar48 + 8);
    local_308 = 0;
    local_300._0_4_ = *(undefined4 *)(puVar48 + 4);
    local_300._4_4_ = *(undefined4 *)(puVar48 + 6);
    uStack_2ef = 0;
    FUN_0347120c(&local_310);
    lVar32 = *(long *)PTR_DAT_047e6f60;
    plVar49 = (long *)CONCAT44(uStack_2f8._4_4_,(uint)uStack_2f8);
    uVar20 = CONCAT44(local_300._4_4_,(undefined4)local_300);
    if (lVar32 != 0) {
      uVar37 = (ulong)local_310 & 0xffffffff;
      uVar26 = (undefined4)local_300;
LAB_03451984:
      FUN_0344ae80(lVar32,uVar37,uVar26);
      plVar49 = (long *)CONCAT44(uStack_2f8._4_4_,(uint)uStack_2f8);
      uVar20 = CONCAT44(local_300._4_4_,(undefined4)local_300);
    }
    break;
  case 0x3a:
    puVar48 = puVar48 + 2;
    FUN_0347ac34(*(undefined8 *)puVar48,puVar48);
    plVar22 = *(long **)puVar48;
    plVar49 = uStack_2f8;
LAB_03451a70:
    lVar32 = *plVar22;
LAB_03451a74:
    pcVar33 = *(code **)(lVar32 + 0x18);
LAB_03451a78:
    uStack_2f8 = plVar49;
    (*pcVar33)(plVar22);
    plVar49 = uStack_2f8;
    uVar20 = local_300;
    break;
  case 0x3b:
    if (puVar48[2] == 0) {
      *(undefined4 *)PTR_DAT_047e7090 = *(undefined4 *)(puVar48 + 4);
      bVar16 = false;
    }
    else {
      bVar16 = false;
      *PTR_DAT_047e6980 = puVar48[3] != 0;
    }
    goto switchD_0344fe7c_caseD_4;
  }
  goto LAB_03451a7c;
LAB_03451498:
  local_300 = (undefined8 *)uVar20;
  uStack_2f8 = plVar49;
  FUN_0349c568(*(undefined4 *)(puVar48 + 8),lVar21,*(undefined8 *)(puVar48 + 2),
               *(undefined4 *)(puVar48 + 6));
LAB_034514a8:
  piVar30 = *(int **)(puVar48 + 2);
  pcVar33 = *(code **)(PTR_DAT_047e2fd0 + 0x30);
LAB_034514bc:
  (*pcVar33)(0,piVar30);
  plVar49 = uStack_2f8;
  uVar20 = local_300;
LAB_03451a7c:
  bVar16 = false;
switchD_0344fe7c_caseD_4:
  uVar37 = *param_1 + (ulong)(uVar46 + 3 & 0x1fffc);
  if (param_1[3] <= uVar37) {
    uVar37 = param_1[2];
  }
  *param_1 = uVar37;
  uVar46 = uVar54 + uVar46;
  uVar18 = uVar46;
  if ((param_2 & 1) == 0) {
    uVar18 = uVar54;
  }
  *(int *)PTR_DAT_047e6fe0 = *(int *)PTR_DAT_047e6fe0 + 1;
  uVar54 = uVar18;
  if ((uVar8 >> 1 <= uVar46 & param_2) != 0 || bVar16) {
    return 1;
  }
  goto LAB_0344fdf8;
LAB_03451484:
  *(undefined4 *)(lVar21 + (ulong)*(uint *)(puVar48 + 6) * 4 + 0x10) = *(undefined4 *)(puVar48 + 8);
  local_300 = (undefined8 *)uVar20;
  uStack_2f8 = plVar49;
  FUN_0349d698();
  plVar49 = uStack_2f8;
  uVar20 = local_300;
  goto LAB_03451a7c;
joined_r0x03451da8:
  if (plVar49 == (long *)0x0) goto LAB_03451dc0;
  if (*(uint *)(plVar49 + 2) == uVar6) {
    *(int *)((long)plVar49 + 0x14) = *(int *)((long)plVar49 + 0x14) + 1;
    nn::os::UnlockMutex(pMVar52);
    (**(code **)(*plVar49 + 0x18))(plVar49);
    goto LAB_03452114;
  }
  plVar49 = (long *)plVar49[1];
  goto joined_r0x03451da8;
LAB_03451dc0:
  nn::os::UnlockMutex(pMVar52);
  plVar49 = (long *)FUN_0347fca8(uVar6);
  if (plVar49 != (long *)0x0) {
    puVar34 = *(uint **)PTR_DAT_047e6f70;
    uVar28 = *(uint *)(PTR_DAT_047e6f70 + 8);
    if ((uVar28 == 0) || (*puVar34 == uVar18)) {
      puVar41 = puVar34;
    }
    else {
      lVar21 = (ulong)uVar28 * 0x20;
      puVar44 = puVar34;
      do {
        lVar21 = lVar21 + -0x20;
        if (lVar21 == 0) goto LAB_03452110;
        puVar41 = puVar44 + 8;
        puVar2 = puVar44 + 8;
        puVar44 = puVar41;
      } while (*puVar2 != uVar18);
    }
    if ((puVar41 != puVar34 + (ulong)uVar28 * 8) && (*(code **)(puVar41 + 4) != (code *)0x0)) {
      plVar22 = (long *)(**(code **)(puVar41 + 4))(PTR_PTR_047e6fa8);
      if (plVar22 != (long *)0x0) {
        iVar19 = (**(code **)(*plVar22 + 0x20))(plVar22,PTR_PTR_047e6fa8,0,0);
        if (iVar19 == 1) {
          plVar25 = (long *)plVar49[7];
          if (plVar25 != (long *)0x0) {
            (**(code **)(*plVar25 + 0x28))(plVar25,PTR_PTR_047e6fa8);
            plVar49[7] = 0;
          }
          *(uint *)(plVar49 + 6) = uVar18;
          plVar49[7] = (long)plVar22;
        }
        else {
          (**(code **)(*plVar22 + 0x28))(plVar22,PTR_PTR_047e6fa8);
        }
        goto LAB_03452114;
      }
    }
LAB_03452110:
    *(uint *)(plVar49 + 6) = uVar18;
  }
LAB_03452114:
  pMVar52 = *(MutexType **)PTR_DAT_047e6f28;
  nn::os::LockMutex(pMVar52);
  uVar18 = *(uint *)(pMVar52 + 0x28);
  if (uVar18 != 0) {
    uVar28 = 0;
    if (uVar18 != 0) {
      uVar28 = uVar6 / uVar18;
    }
    for (lVar21 = *(long *)(*(long *)(pMVar52 + 0x20) + (ulong)(uVar6 - uVar28 * uVar18) * 8);
        lVar21 != 0; lVar21 = *(long *)(lVar21 + 8)) {
      if (*(uint *)(lVar21 + 0x10) == uVar6) {
        plVar22 = (long *)(lVar21 + -8);
        *(int *)(lVar21 + 0x14) = *(int *)(lVar21 + 0x14) + 1;
        goto LAB_0345215c;
      }
    }
  }
  plVar22 = (long *)0x0;
LAB_0345215c:
  nn::os::UnlockMutex(pMVar52);
  if ((plVar49 == (long *)0x0) || (plVar22 != (long *)0x0)) {
    (**(code **)(*plVar22 + 0x30))(plVar22);
  }
  else {
    lVar21 = FUN_034c9dc8(uVar6);
    if (lVar21 != 0) {
      uVar47 = *(ushort *)(lVar21 + 0x104);
      lVar10 = plVar49[2];
      if (((uVar47 & 0x7c) == 4) && (*(long *)(lVar21 + 0x108) != 0)) {
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
        uVar47 = *(ushort *)(lVar21 + 0x104);
        *(undefined8 *)(lVar21 + 0x108) = 0;
      }
      *(undefined8 *)(lVar21 + 0x108) = 0;
      *(undefined4 *)(lVar21 + 0x110) = 0xffffffff;
      *(int *)(lVar21 + 0xf8) = (int)lVar10;
      *(undefined8 *)(lVar21 + 0xfc) = 0xffffffff;
      *(ushort *)(lVar21 + 0x104) = uVar47 & 0xf800 | 8;
    }
  }
  pMVar52 = *(MutexType **)PTR_DAT_047e6f28;
  nn::os::LockMutex(pMVar52);
  uVar18 = *(uint *)(pMVar52 + 0x28);
  if (uVar18 != 0) {
    uVar28 = 0;
    if (uVar18 != 0) {
      uVar28 = uVar6 / uVar18;
    }
    for (uVar37 = *(ulong *)(*(long *)(pMVar52 + 0x20) + (ulong)(uVar6 - uVar28 * uVar18) * 8);
        uVar37 != 0; uVar37 = *(ulong *)(uVar37 + 8)) {
      if (*(uint *)(uVar37 + 0x10) == uVar6) {
        plVar49 = (long *)(uVar37 - 8);
        *(int *)(uVar37 + 0x14) = *(int *)(uVar37 + 0x14) + 1;
        nn::os::UnlockMutex(pMVar52);
        local_78 = 0x400000000;
        local_294 = 0;
        local_278 = 0;
        local_280 = 0;
        local_277 = 0xff;
        local_a8 = (undefined1 *)0x0;
        local_a0 = 0;
        local_9c = 0;
        local_70 = 0;
        local_1d0 = 0;
        local_1c8 = 0;
        local_1c4 = 0;
        memset(auStack_268,0,0x70);
        local_1f4 = 0;
        uStack_1ec = 0;
        local_1e4 = 0;
        uStack_1dc = 0;
        local_1d4 = 0;
        local_1c8 = 0;
        local_1f8 = 0x3f800000;
        local_1d2 = 0;
        local_1b0 = 0;
        local_1c0 = 0;
        uStack_1b8 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_8b = 0;
        uStack_88 = 0;
        local_2d8 = 0;
        local_310 = (undefined **)((ulong)local_310 & 0xffffffff00000000);
        local_290 = 0;
        uStack_288 = 0;
        uStack_2f0 = 0;
        uStack_2ef = 0;
        uStack_2ee = 0;
        uStack_2ed = 0;
        uStack_2ec = 0;
        uStack_2e8 = 0;
        local_80 = 3;
        uStack_2f8 = &local_78;
        local_300._0_4_ = (undefined4)lVar32;
        local_300._4_4_ = (undefined4)((ulong)lVar32 >> 0x20);
        local_280 = 0;
        local_308 = uVar37;
        local_2dc = uVar26;
        iVar19 = FUN_034a9828(plVar49,&local_310);
        if (iVar19 == 1) {
          (**(code **)(*plVar49 + 0x240))(plVar49,&local_310);
        }
        (**(code **)(*plVar49 + 0x30))(plVar49);
        if (local_1d0 != 0) {
          local_1c8 = 0;
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
          local_1d0 = 0;
          local_1c4 = 0;
        }
        if (local_a8 != (undefined1 *)0x0) {
          local_a0 = 0;
          if (auStack_1a8 != local_a8) {
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
          }
          local_a8 = (undefined1 *)0x0;
          local_9c = 0;
        }
        piVar30 = (int *)CONCAT44(uStack_2ec,
                                  CONCAT13(uStack_2ed,
                                           CONCAT12(uStack_2ee,CONCAT11(uStack_2ef,uStack_2f0))));
        plVar49 = uStack_2f8;
        uVar20 = CONCAT44(local_300._4_4_,(undefined4)local_300);
        if (piVar30 == (int *)0x0) goto LAB_03451a7c;
        iVar19 = *piVar30;
        *piVar30 = iVar19 + -1;
        uVar20 = local_300;
        if (iVar19 + -1 != 0) goto LAB_03451a7c;
        uVar18 = piVar30[1];
        if (uVar18 != 0) {
          uVar37 = 0;
          plVar49 = (long *)(piVar30 + 4);
          do {
            if (*plVar49 != 0) {
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
              uVar18 = piVar30[1];
            }
            uVar37 = uVar37 + 1;
            plVar49 = plVar49 + 4;
          } while (uVar37 < uVar18);
        }
        goto LAB_0344ffbc;
      }
    }
  }
LAB_0345146c:
  nn::os::UnlockMutex(pMVar52);
  plVar49 = uStack_2f8;
  uVar20 = local_300;
  goto LAB_03451a7c;
LAB_03451474:
  bVar16 = false;
  *(undefined4 *)(lVar21 + 0x3fc) = *(undefined4 *)(puVar48 + 6);
  goto switchD_0344fe7c_caseD_4;
code_r0x034501d4:
  plVar22 = (long *)*plVar22;
  bVar16 = false;
  if (plVar22 == (long *)0x0) goto switchD_0344fe7c_caseD_4;
  goto LAB_034501c8;
code_r0x03450184:
  plVar22 = (long *)*plVar22;
  bVar16 = false;
  if (plVar22 == (long *)0x0) goto switchD_0344fe7c_caseD_4;
  goto LAB_03450178;
}


