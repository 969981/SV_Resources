/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00275664; name: FUN_00275664
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00275664(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  undefined8 *******pppppppuVar21;
  undefined8 *puVar22;
  undefined8 *****pppppuVar23;
  undefined8 *puVar24;
  undefined8 *******pppppppuVar25;
  undefined8 *******pppppppuVar26;
  long lVar27;
  undefined8 ******ppppppuVar28;
  undefined8 ******ppppppuVar29;
  undefined8 ******ppppppuVar30;
  long *local_f0;
  undefined8 ******local_e8;
  undefined8 ******ppppppuStack_e0;
  undefined8 ******local_d8;
  undefined8 ******ppppppuStack_d0;
  ulong local_c8;
  undefined8 *******local_c0;
  ulong local_b8;
  undefined8 ******local_b0 [10];
  
  uVar13 = *(undefined8 *)(param_1 + 0xd0);
  puVar7 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x1c0);
  if (puVar7 != (undefined8 *)0x0) {
    plVar14 = *(long **)(param_1 + 0x28);
    *puVar7 = &PTR_LAB_0448c950;
    puVar7[1] = 1;
    puVar4 = PTR_DAT_047cc558;
    puVar7[2] = param_1;
    puVar7[3] = puVar4;
    puVar7[4] = 0;
    *(undefined1 *)(puVar7 + 0x37) = 0;
    uVar15 = *(ulong *)(param_1 + 0x30);
    if (0x15 < uVar15) {
      uVar15 = uVar15 >> 1;
      if (uVar15 < 0x15) {
        uVar15 = 0x14;
      }
      uVar8 = FUN_0049e770(PTR_FUN_047cba38,uVar15 * 0x28);
      uVar16 = puVar7[4];
      if ((uVar16 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,puVar7[5]);
        uVar16 = puVar7[4];
      }
      puVar7[5] = uVar8;
      puVar7[6] = uVar15;
      puVar7[4] = uVar16 | 1;
      uVar15 = *(ulong *)(param_1 + 0x30);
    }
    if (1 < uVar15) {
      uVar16 = 0;
      lVar10 = param_1 + 0x38;
      do {
        local_c8 = 0;
        lVar27 = lVar10;
        if ((uVar15 & 1) != 0) {
          lVar27 = *(long *)(param_1 + 0x38);
        }
                    /* try { // try from 00275918 to 0027591f has its CatchHandler @ 00275fa4 */
        FUN_0033b344(&local_e8,lVar27 + uVar16 * 0x90);
        bVar5 = (local_c8 & 1) != 0;
        pppppppuVar26 = &local_c0;
        if (bVar5) {
          pppppppuVar26 = local_c0;
        }
        uVar15 = 3;
        if (bVar5) {
          uVar15 = local_b8;
        }
        if (local_c8 >> 1 == uVar15) {
          pppppppuVar11 = (undefined8 *******)FUN_0049e770(PTR_FUN_047cba38,uVar15 << 6);
          pppppppuVar21 = pppppppuVar11 + uVar15 * 4;
          pppppppuVar21[1] = ppppppuStack_e0;
          *pppppppuVar21 = local_e8;
          pppppppuVar21[3] = ppppppuStack_d0;
          pppppppuVar21[2] = local_d8;
          if (pppppppuVar11 != (undefined8 *******)0x0) {
            if (uVar15 != 0) {
              uVar17 = uVar15 & 3;
              if (uVar15 - 1 < 3) {
                uVar18 = 0;
              }
              else {
                uVar18 = 0;
                pppppppuVar21 = pppppppuVar11 + 8;
                pppppppuVar25 = pppppppuVar26;
                do {
                  pppppppuVar26 = pppppppuVar25 + 0x10;
                  ppppppuVar28 = *pppppppuVar25;
                  ppppppuVar30 = pppppppuVar25[3];
                  ppppppuVar29 = pppppppuVar25[2];
                  pppppppuVar21[-7] = pppppppuVar25[1];
                  pppppppuVar21[-8] = ppppppuVar28;
                  pppppppuVar21[-5] = ppppppuVar30;
                  pppppppuVar21[-6] = ppppppuVar29;
                  uVar18 = uVar18 + 4;
                  ppppppuVar28 = pppppppuVar25[4];
                  ppppppuVar30 = pppppppuVar25[7];
                  ppppppuVar29 = pppppppuVar25[6];
                  pppppppuVar21[-3] = pppppppuVar25[5];
                  pppppppuVar21[-4] = ppppppuVar28;
                  pppppppuVar21[-1] = ppppppuVar30;
                  pppppppuVar21[-2] = ppppppuVar29;
                  ppppppuVar28 = pppppppuVar25[8];
                  ppppppuVar30 = pppppppuVar25[0xb];
                  ppppppuVar29 = pppppppuVar25[10];
                  pppppppuVar21[1] = pppppppuVar25[9];
                  *pppppppuVar21 = ppppppuVar28;
                  pppppppuVar21[3] = ppppppuVar30;
                  pppppppuVar21[2] = ppppppuVar29;
                  ppppppuVar28 = pppppppuVar25[0xc];
                  ppppppuVar30 = pppppppuVar25[0xf];
                  ppppppuVar29 = pppppppuVar25[0xe];
                  pppppppuVar21[5] = pppppppuVar25[0xd];
                  pppppppuVar21[4] = ppppppuVar28;
                  pppppppuVar21[7] = ppppppuVar30;
                  pppppppuVar21[6] = ppppppuVar29;
                  pppppppuVar21 = pppppppuVar21 + 0x10;
                  pppppppuVar25 = pppppppuVar26;
                } while ((uVar15 & 0xfffffffffffffffc) != uVar18);
              }
              if (uVar17 != 0) {
                pppppppuVar21 = pppppppuVar11 + uVar18 * 4;
                do {
                  ppppppuVar28 = *pppppppuVar26;
                  ppppppuVar30 = pppppppuVar26[3];
                  ppppppuVar29 = pppppppuVar26[2];
                  uVar17 = uVar17 - 1;
                  pppppppuVar21[1] = pppppppuVar26[1];
                  *pppppppuVar21 = ppppppuVar28;
                  pppppppuVar21[3] = ppppppuVar30;
                  pppppppuVar21[2] = ppppppuVar29;
                  pppppppuVar21 = pppppppuVar21 + 4;
                  pppppppuVar26 = pppppppuVar26 + 4;
                } while (uVar17 != 0);
              }
            }
            if ((local_c8 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,local_c0);
            }
            local_c8 = local_c8 | 1;
            local_c0 = pppppppuVar11;
            local_b8 = uVar15 << 1;
          }
        }
        else {
          pppppppuVar26 = pppppppuVar26 + (local_c8 >> 1) * 4;
          pppppppuVar26[1] = ppppppuStack_e0;
          *pppppppuVar26 = local_e8;
          pppppppuVar26[3] = ppppppuStack_d0;
          pppppppuVar26[2] = local_d8;
        }
        local_c8 = local_c8 + 2;
        uVar15 = *(ulong *)(param_1 + 0x30);
        lVar27 = lVar10;
        if ((uVar15 & 1) != 0) {
          lVar27 = *(long *)(param_1 + 0x38);
        }
        if (*(long *)(lVar27 + uVar16 * 0x90 + 0x88) != 0) {
          uVar17 = 0;
          while( true ) {
            if ((uVar15 & 1) == 0) {
              puVar19 = *(ulong **)(lVar10 + uVar16 * 0x90 + 0x88);
              uVar15 = *puVar19;
            }
            else {
              puVar19 = *(ulong **)(*(long *)(param_1 + 0x38) + uVar16 * 0x90 + 0x88);
              uVar15 = *puVar19;
            }
            if (uVar15 <= uVar17) break;
            puVar9 = (undefined8 *)(puVar19[1] + uVar17 * 0x20);
            bVar5 = (local_c8 & 1) != 0;
            pppppppuVar26 = &local_c0;
            if (bVar5) {
              pppppppuVar26 = local_c0;
            }
            uVar15 = 3;
            if (bVar5) {
              uVar15 = local_b8;
            }
            if (local_c8 >> 1 == uVar15) {
              pppppppuVar11 = (undefined8 *******)FUN_0049e770(PTR_FUN_047cba38,uVar15 << 6);
              ppppppuVar30 = (undefined8 ******)*puVar9;
              ppppppuVar29 = (undefined8 ******)puVar9[3];
              ppppppuVar28 = (undefined8 ******)puVar9[2];
              pppppppuVar21 = pppppppuVar11 + uVar15 * 4;
              pppppppuVar21[1] = (undefined8 ******)puVar9[1];
              *pppppppuVar21 = ppppppuVar30;
              pppppppuVar21[3] = ppppppuVar29;
              pppppppuVar21[2] = ppppppuVar28;
              if (pppppppuVar11 != (undefined8 *******)0x0) {
                if (uVar15 != 0) {
                  uVar18 = uVar15 & 3;
                  if (uVar15 - 1 < 3) {
                    uVar20 = 0;
                  }
                  else {
                    uVar20 = 0;
                    pppppppuVar21 = pppppppuVar11 + 8;
                    pppppppuVar25 = pppppppuVar26;
                    do {
                      pppppppuVar26 = pppppppuVar25 + 0x10;
                      ppppppuVar28 = *pppppppuVar25;
                      ppppppuVar30 = pppppppuVar25[3];
                      ppppppuVar29 = pppppppuVar25[2];
                      pppppppuVar21[-7] = pppppppuVar25[1];
                      pppppppuVar21[-8] = ppppppuVar28;
                      pppppppuVar21[-5] = ppppppuVar30;
                      pppppppuVar21[-6] = ppppppuVar29;
                      uVar20 = uVar20 + 4;
                      ppppppuVar28 = pppppppuVar25[4];
                      ppppppuVar30 = pppppppuVar25[7];
                      ppppppuVar29 = pppppppuVar25[6];
                      pppppppuVar21[-3] = pppppppuVar25[5];
                      pppppppuVar21[-4] = ppppppuVar28;
                      pppppppuVar21[-1] = ppppppuVar30;
                      pppppppuVar21[-2] = ppppppuVar29;
                      ppppppuVar28 = pppppppuVar25[8];
                      ppppppuVar30 = pppppppuVar25[0xb];
                      ppppppuVar29 = pppppppuVar25[10];
                      pppppppuVar21[1] = pppppppuVar25[9];
                      *pppppppuVar21 = ppppppuVar28;
                      pppppppuVar21[3] = ppppppuVar30;
                      pppppppuVar21[2] = ppppppuVar29;
                      ppppppuVar28 = pppppppuVar25[0xc];
                      ppppppuVar30 = pppppppuVar25[0xf];
                      ppppppuVar29 = pppppppuVar25[0xe];
                      pppppppuVar21[5] = pppppppuVar25[0xd];
                      pppppppuVar21[4] = ppppppuVar28;
                      pppppppuVar21[7] = ppppppuVar30;
                      pppppppuVar21[6] = ppppppuVar29;
                      pppppppuVar21 = pppppppuVar21 + 0x10;
                      pppppppuVar25 = pppppppuVar26;
                    } while ((uVar15 & 0xfffffffffffffffc) != uVar20);
                  }
                  if (uVar18 != 0) {
                    pppppppuVar21 = pppppppuVar11 + uVar20 * 4;
                    do {
                      ppppppuVar28 = *pppppppuVar26;
                      ppppppuVar30 = pppppppuVar26[3];
                      ppppppuVar29 = pppppppuVar26[2];
                      uVar18 = uVar18 - 1;
                      pppppppuVar21[1] = pppppppuVar26[1];
                      *pppppppuVar21 = ppppppuVar28;
                      pppppppuVar21[3] = ppppppuVar30;
                      pppppppuVar21[2] = ppppppuVar29;
                      pppppppuVar21 = pppppppuVar21 + 4;
                      pppppppuVar26 = pppppppuVar26 + 4;
                    } while (uVar18 != 0);
                  }
                }
                if ((local_c8 & 1) != 0) {
                  FUN_0049e790(PTR_LAB_047cba48,local_c0);
                }
                local_c8 = local_c8 | 1;
                local_c0 = pppppppuVar11;
                local_b8 = uVar15 << 1;
              }
            }
            else {
              ppppppuVar28 = (undefined8 ******)*puVar9;
              ppppppuVar30 = (undefined8 ******)puVar9[3];
              ppppppuVar29 = (undefined8 ******)puVar9[2];
              pppppppuVar26 = pppppppuVar26 + (local_c8 >> 1) * 4;
              pppppppuVar26[1] = (undefined8 ******)puVar9[1];
              *pppppppuVar26 = ppppppuVar28;
              pppppppuVar26[3] = ppppppuVar30;
              pppppppuVar26[2] = ppppppuVar29;
            }
            local_c8 = local_c8 + 2;
            uVar15 = *(ulong *)(param_1 + 0x30);
            uVar17 = uVar17 + 1;
          }
        }
        pppppppuVar26 = &local_c0;
        if ((local_c8 & 1) != 0) {
          pppppppuVar26 = local_c0;
        }
                    /* try { // try from 00275bec to 00275c23 has its CatchHandler @ 00275ff4 */
        uVar8 = FUN_003435b0(uVar13,&PTR_s_grpc_subchannel_address_0448c968,2,pppppppuVar26,
                             local_c8 >> 1);
        pppppppuVar26 = local_b0;
        if ((local_c8 & 1) != 0) {
          pppppppuVar26 = local_c0 + 2;
        }
        free(*pppppppuVar26);
                    /* try { // try from 00275c30 to 00275c3b has its CatchHandler @ 00275fa8 */
        (**(code **)(*plVar14 + 0x10))(&local_e8,plVar14,uVar8);
                    /* try { // try from 00275c3c to 00275c43 has its CatchHandler @ 00275fac */
        FUN_00343d90(uVar8);
        if (local_e8 != (undefined8 ******)0x0) {
          if ((puVar7[4] & 1) == 0) {
            uVar15 = 10;
            puVar9 = puVar7 + 5;
          }
          else {
            puVar9 = (undefined8 *)puVar7[5];
            uVar15 = puVar7[6];
          }
          uVar17 = (ulong)puVar7[4] >> 1;
          if (uVar17 == uVar15) {
            lVar27 = uVar15 << 1;
            puVar12 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,uVar15 * 0x50);
            ppppppuVar28 = local_e8;
            puVar22 = puVar12;
          }
          else {
            puVar12 = (undefined8 *)0x0;
            lVar27 = 0;
            ppppppuVar28 = local_e8;
            puVar22 = puVar9;
          }
          puVar22 = puVar22 + uVar17 * 5;
          local_e8 = (undefined8 ******)0x0;
          *(undefined4 *)(puVar22 + 4) = 0;
          puVar22[2] = ppppppuVar28;
          puVar22[3] = 0;
          *puVar22 = &PTR_FUN_0448c988;
          puVar22[1] = puVar7;
          if (puVar12 == (undefined8 *)0x0) {
            uVar15 = puVar7[4];
          }
          else {
            if (uVar17 != 0) {
              uVar15 = 0;
              puVar22 = puVar9;
              do {
                puVar24 = puVar12 + uVar15 * 5;
                *puVar24 = &PTR_FUN_0448c9b0;
                puVar24[1] = puVar22[1];
                puVar24[2] = 0;
                uVar8 = 0;
                if (puVar22[2] != 0) {
                  plVar2 = (long *)(puVar22[2] + 8);
                  do {
                    cVar3 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar5) {
                      *plVar2 = *plVar2 + 1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  uVar8 = puVar22[2];
                }
                puVar24[2] = uVar8;
                uVar18 = uVar15 + 1;
                uVar8 = puVar22[3];
                puVar1 = puVar22 + 4;
                puVar22 = puVar22 + 5;
                *(undefined4 *)(puVar12 + uVar15 * 5 + 4) = *(undefined4 *)puVar1;
                puVar12[uVar15 * 5 + 3] = uVar8;
                *puVar24 = &PTR_FUN_0448c988;
                uVar15 = uVar18;
              } while (uVar18 != uVar17);
              if (puVar9 != (undefined8 *)0x0) {
                puVar9 = puVar9 + uVar17 * 5;
                do {
                  puVar9 = puVar9 + -5;
                  uVar17 = uVar17 - 1;
                  (**(code **)*puVar9)(puVar9);
                } while (uVar17 != 0);
              }
            }
            uVar15 = puVar7[4];
            if ((uVar15 & 1) != 0) {
              FUN_0049e790(PTR_LAB_047cba48,puVar7[5]);
              uVar15 = puVar7[4];
            }
            uVar15 = uVar15 | 1;
            puVar7[5] = puVar12;
            puVar7[6] = lVar27;
          }
          ppppppuVar28 = local_e8;
          puVar7[4] = uVar15 + 2;
          if (local_e8 != (undefined8 ******)0x0) {
            ppppppuVar29 = local_e8 + 1;
            do {
              pppppuVar23 = *ppppppuVar29;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppppppuVar29,0x10);
              if (bVar5) {
                *ppppppuVar29 = (undefined8 *****)((long)pppppuVar23 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((undefined8 *****)((long)pppppuVar23 + -1) == (undefined8 *****)0x0) {
              (*(code *)**local_e8)(local_e8);
              FUN_0049e790(PTR_LAB_047cba48,ppppppuVar28);
            }
          }
        }
        if ((local_c8 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_c0);
        }
        uVar15 = *(ulong *)(param_1 + 0x30);
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar15 >> 1);
    }
    *puVar7 = &PTR_LAB_0448c928;
    plVar14 = (long *)(param_1 + 8);
    *(undefined1 *)((long)puVar7 + 0x1b9) = 0;
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = *plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar15 = puVar7[4];
  if (uVar15 < 2) {
    puVar9 = *(undefined8 **)(param_1 + 0xd8);
    *(undefined8 **)(param_1 + 0xd8) = puVar7;
    if (puVar9 != (undefined8 *)0x0) {
                    /* try { // try from 00275780 to 00275783 has its CatchHandler @ 00275f34 */
      (**(code **)*puVar9)();
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
                    /* try { // try from 00275788 to 002757bf has its CatchHandler @ 00275f78 */
    FUN_003673f0(&local_c8,"Empty update");
    uVar13 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/pick_first/pick_first.cc"
                          ,200,&local_c8,0,0);
    lVar10 = FUN_00351770(uVar13,3,0xe);
    plVar14 = *(long **)(param_1 + 0x28);
    local_f0 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x10);
    if (local_f0 != (long *)0x0) {
      *local_f0 = (long)(PTR_DAT_047cc560 + 0x10);
      local_f0[1] = lVar10;
    }
                    /* try { // try from 002757f8 to 00275807 has its CatchHandler @ 00275f3c */
    (**(code **)(*plVar14 + 0x18))(plVar14,3,&local_f0);
    plVar14 = local_f0;
    local_f0 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)*plVar14)(plVar14);
      FUN_0049e790(PTR_LAB_047cba48,plVar14);
    }
  }
  else {
    lVar10 = 0;
    uVar16 = 0;
    do {
      puVar9 = puVar7 + 5;
      if ((uVar15 & 1) != 0) {
        puVar9 = (undefined8 *)puVar7[5];
      }
      lVar27 = (long)puVar9 + lVar10;
      if (*(long *)(lVar27 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00275f1c to 00275f1f has its CatchHandler @ 00275f20 */
        abort();
      }
                    /* try { // try from 00275868 to 0027586b has its CatchHandler @ 00275f80 */
      iVar6 = (**(code **)(**(long **)(lVar27 + 0x10) + 0x10))();
      *(int *)(lVar27 + 0x20) = iVar6;
      if (iVar6 == 2) {
        puVar9 = *(undefined8 **)(param_1 + 0xd8);
        *(undefined8 **)(param_1 + 0xd8) = puVar7;
        if (puVar9 != (undefined8 *)0x0) {
                    /* try { // try from 00275e3c to 00275e3f has its CatchHandler @ 00275f30 */
          (**(code **)*puVar9)();
        }
                    /* try { // try from 00275e40 to 00275e4f has its CatchHandler @ 00275f74 */
        FUN_00276098(lVar27);
        FUN_002761c8(lVar27);
        puVar7 = *(undefined8 **)(param_1 + 0xe0);
        *(undefined8 *)(param_1 + 0xe0) = 0;
        if (puVar7 == (undefined8 *)0x0) {
          return;
        }
                    /* try { // try from 00275e64 to 00275e67 has its CatchHandler @ 00275f2c */
        (**(code **)*puVar7)();
        return;
      }
      uVar15 = puVar7[4];
      uVar16 = uVar16 + 1;
      lVar10 = lVar10 + 0x28;
    } while (uVar16 < uVar15 >> 1);
    if (*(long *)(param_1 + 0xe8) == 0) {
      plVar14 = (long *)(param_1 + 0xd8);
      puVar9 = (undefined8 *)*plVar14;
      *plVar14 = (long)puVar7;
      if (puVar9 != (undefined8 *)0x0) {
                    /* try { // try from 00275e80 to 00275e83 has its CatchHandler @ 00275f24 */
        (**(code **)*puVar9)();
        puVar7 = (undefined8 *)*plVar14;
      }
      if ((*(byte *)(puVar7 + 4) & 1) == 0) {
        puVar7 = puVar7 + 5;
      }
      else {
        puVar7 = (undefined8 *)puVar7[5];
      }
      FUN_00276098(puVar7);
      lVar10 = *plVar14;
      if ((*(byte *)(lVar10 + 0x20) & 1) == 0) {
        lVar10 = lVar10 + 0x28;
      }
      else {
        lVar10 = *(long *)(lVar10 + 0x28);
      }
      (**(code **)(**(long **)(lVar10 + 0x10) + 0x28))();
    }
    else {
      plVar14 = (long *)(param_1 + 0xe0);
      puVar9 = (undefined8 *)*plVar14;
      *plVar14 = (long)puVar7;
      if (puVar9 != (undefined8 *)0x0) {
                    /* try { // try from 002758a8 to 002758ab has its CatchHandler @ 00275f28 */
        (**(code **)*puVar9)();
        puVar7 = (undefined8 *)*plVar14;
      }
      if ((*(byte *)(puVar7 + 4) & 1) == 0) {
        puVar7 = puVar7 + 5;
      }
      else {
        puVar7 = (undefined8 *)puVar7[5];
      }
                    /* try { // try from 00275e9c to 00275efb has its CatchHandler @ 00275f38 */
      FUN_00276098(puVar7);
      lVar10 = *plVar14;
      if ((*(byte *)(lVar10 + 0x20) & 1) == 0) {
        lVar10 = lVar10 + 0x28;
      }
      else {
        lVar10 = *(long *)(lVar10 + 0x28);
      }
      (**(code **)(**(long **)(lVar10 + 0x10) + 0x28))();
    }
  }
  return;
}


