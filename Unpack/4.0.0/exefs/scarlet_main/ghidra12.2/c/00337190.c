/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00337190; name: FUN_00337190
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00337190(long param_1,long param_2)

{
  ulong *puVar1;
  bool bVar2;
  undefined8 *******pppppppuVar3;
  char cVar4;
  uint6 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  size_t sVar13;
  ulong *puVar14;
  long *plVar15;
  ulong *puVar16;
  undefined8 ******ppppppuVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  bool bVar22;
  long lVar23;
  long lVar24;
  undefined1 auStack_f0 [32];
  byte local_d0 [8];
  long local_c8;
  ulong local_c0;
  long local_b8;
  byte local_b0;
  undefined4 uStack_af;
  undefined1 uStack_ab;
  undefined2 uStack_aa;
  undefined8 *******local_a8;
  undefined8 local_a0;
  long local_88;
  ulong *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  local_80 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  if (local_80 != (ulong *)0x0) {
    *local_80 = 0;
  }
  local_88 = 0;
                    /* try { // try from 003371d8 to 003371e7 has its CatchHandler @ 00337bd8 */
  FUN_003396b0(&local_b0,param_2,&local_88);
                    /* try { // try from 003371ec to 003371f7 has its CatchHandler @ 00337b64 */
  FUN_0033690c(local_80,&local_b0);
  puVar6 = PTR_LAB_047cba48;
  uVar5 = CONCAT15(uStack_ab,CONCAT41(uStack_af,local_b0));
  uVar20 = (ulong)uVar5 & 1;
  pppppppuVar3 = &local_a8;
  if ((local_b0 & 1) != 0) {
    pppppppuVar3 = local_a8;
  }
  uVar19 = CONCAT26(uStack_aa,uVar5) >> 1;
  if ((uVar19 != 0) && (pppppppuVar3 != (undefined8 *******)0x0)) {
    do {
      uVar20 = uVar19 - 1;
      ppppppuVar17 = pppppppuVar3[uVar19 - 1];
      pppppppuVar3[uVar19 - 1] = (undefined8 ******)0x0;
      if (ppppppuVar17 != (undefined8 ******)0x0) {
        (*(code *)**ppppppuVar17)(ppppppuVar17);
        FUN_0049e790(puVar6,ppppppuVar17);
      }
      uVar19 = uVar20;
    } while (uVar20 != 0);
    uVar20 = (ulong)local_b0 & 1;
  }
  if (uVar20 != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_a8);
  }
  if (local_88 != 0) {
    if (local_70 == local_68) {
      lVar7 = (long)local_70 - (long)local_78 >> 3;
      uVar20 = lVar7 + 1;
      if (uVar20 >> 0x3d != 0) {
                    /* try { // try from 00337b24 to 00337b2b has its CatchHandler @ 00337b60 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      uVar19 = (long)local_68 - (long)local_78 >> 2;
      if (uVar20 <= uVar19) {
        uVar20 = uVar19;
      }
      if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
        uVar20 = 0x1fffffffffffffff;
      }
      if (uVar20 == 0) {
        lVar23 = 0;
      }
      else {
        lVar23 = FUN_0049e770(PTR_FUN_047cba38,uVar20 << 3);
      }
      plVar9 = (long *)(lVar23 + lVar7 * 8);
      plVar15 = (long *)(lVar23 + uVar20 * 8);
      *plVar9 = local_88;
      sVar13 = (long)local_70 - (long)local_78;
      plVar21 = (long *)((long)plVar9 - sVar13);
      if (0 < (long)sVar13) {
        memcpy(plVar21,local_78,sVar13);
      }
      bVar22 = local_78 != (long *)0x0;
      local_78 = plVar21;
      local_70 = plVar9 + 1;
      local_68 = plVar15;
      if (bVar22) {
        FUN_0049e790(PTR_LAB_047cba48);
      }
    }
    else {
      *local_70 = local_88;
      local_70 = local_70 + 1;
    }
  }
  puVar1 = (ulong *)(param_1 + 0xd0);
                    /* try { // try from 0033733c to 00337347 has its CatchHandler @ 00337b60 */
  FUN_003387c0(puVar1,&local_80);
  uVar20 = *puVar1 >> 1;
  if (uVar20 == 0) {
                    /* try { // try from 00337b08 to 00337b13 has its CatchHandler @ 00337b3c */
                    /* WARNING: Subroutine does not return */
    FUN_00395f20("`InlinedVector::at(size_type)` failed bounds check");
  }
  if ((*puVar1 & 1) == 0) {
    lVar7 = param_1 + 0xd8;
  }
  else {
    lVar7 = *(long *)(param_1 + 0xd8);
  }
  lVar23 = *(long *)(lVar7 + uVar20 * 8 + -8);
  local_b0 = 8;
  uStack_ab = 0;
  uStack_af = 0x656d616e;
                    /* try { // try from 00337388 to 0033738f has its CatchHandler @ 00337b4c */
  lVar7 = FUN_0027bd44(param_2 + 0x20,&local_b0);
  if ((local_b0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_a0);
  }
  puVar6 = PTR_LAB_047cba48;
  if (param_2 + 0x28 == lVar7) goto LAB_00337778;
  if (*(int *)(lVar7 + 0x38) == 6) {
    lVar12 = *(long *)(lVar7 + 0x70);
    lVar7 = *(long *)(lVar7 + 0x78);
    if (lVar12 == lVar7) {
LAB_00337778:
      uVar20 = *puVar1;
      if ((uVar20 & 1) == 0) {
        param_1 = param_1 + 0xd8;
      }
      else {
        param_1 = *(long *)(param_1 + 0xd8);
      }
      param_1 = (uVar20 & 0x3ffffffffffffffe) * 4 + param_1;
      puVar16 = *(ulong **)(param_1 + -8);
      *(undefined8 *)(param_1 + -8) = 0;
      puVar6 = PTR_LAB_047cba48;
      if (puVar16 != (ulong *)0x0) {
        uVar20 = *puVar16;
        uVar19 = uVar20 & 1;
        if ((uVar20 & 1) == 0) {
          puVar14 = puVar16 + 1;
        }
        else {
          puVar14 = (ulong *)puVar16[1];
        }
        if ((uVar20 >> 1 != 0) && (uVar20 = uVar20 >> 1, puVar14 != (ulong *)0x0)) {
          do {
            uVar19 = uVar20 - 1;
            puVar18 = (undefined8 *)puVar14[uVar20 - 1];
            puVar14[uVar20 - 1] = 0;
            if (puVar18 != (undefined8 *)0x0) {
              (**(code **)*puVar18)(puVar18);
              FUN_0049e790(puVar6,puVar18);
            }
            uVar20 = uVar19;
          } while (uVar19 != 0);
          uVar19 = *puVar16 & 1;
        }
        if (uVar19 != 0) {
          FUN_0049e790(PTR_LAB_047cba48,puVar16[1]);
        }
        FUN_0049e790(PTR_LAB_047cba48,puVar16);
        uVar20 = *puVar1;
      }
      *puVar1 = uVar20 - 2;
    }
    else {
      bVar22 = false;
      do {
        local_b8 = 0;
                    /* try { // try from 00337400 to 0033740f has its CatchHandler @ 00337c10 */
        FUN_00337ce0(local_d0,lVar12,&local_b8);
        lVar10 = local_b8;
        if (local_b8 == 0) {
          if ((local_d0[0] & 1) == 0) {
            if (local_d0[0] < 2) goto LAB_00337508;
            uVar20 = (ulong)local_d0 | 1;
LAB_003374a4:
                    /* try { // try from 003374a4 to 003374ab has its CatchHandler @ 00337be4 */
            FUN_00367770(&local_b0,uVar20);
                    /* try { // try from 003374ac to 003374b7 has its CatchHandler @ 00337be8 */
            plVar9 = (long *)FUN_00338040(param_1 + 0xa0,&local_b0);
            if (*plVar9 == 0) {
              *plVar9 = lVar23;
            }
            else {
                    /* try { // try from 003374c0 to 003374eb has its CatchHandler @ 00337bec */
              FUN_003673f0(auStack_f0,"field:name error:multiple method configs with same name");
              lVar10 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                                    ,0x72,auStack_f0,0,0);
              if (local_70 < local_68) {
                *local_70 = lVar10;
                local_70 = local_70 + 1;
              }
              else {
                lVar24 = (long)local_70 - (long)local_78 >> 3;
                uVar20 = lVar24 + 1;
                if (uVar20 >> 0x3d != 0) {
                    /* try { // try from 00337b14 to 00337b1b has its CatchHandler @ 00337b38 */
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                uVar19 = (long)local_68 - (long)local_78 >> 2;
                if (uVar20 <= uVar19) {
                  uVar20 = uVar19;
                }
                if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
                  uVar20 = 0x1fffffffffffffff;
                }
                if (uVar20 == 0) {
                  lVar8 = 0;
                }
                else {
                  lVar8 = FUN_0049e770(PTR_FUN_047cba38,uVar20 << 3);
                }
                plVar9 = (long *)(lVar8 + lVar24 * 8);
                plVar15 = (long *)(lVar8 + uVar20 * 8);
                *plVar9 = lVar10;
                sVar13 = (long)local_70 - (long)local_78;
                plVar21 = (long *)((long)plVar9 - sVar13);
                if (0 < (long)sVar13) {
                  memcpy(plVar21,local_78,sVar13);
                }
                bVar22 = local_78 != (long *)0x0;
                local_78 = plVar21;
                local_70 = plVar9 + 1;
                local_68 = plVar15;
                if (bVar22) {
                  FUN_0049e790(puVar6);
                }
              }
              puVar18 = (undefined8 *)
                        CONCAT26(uStack_aa,CONCAT15(uStack_ab,CONCAT41(uStack_af,local_b0)));
              if ((puVar18 != (undefined8 *)0x0) &&
                 (plVar9 = (long *)*puVar18, plVar9 != (long *)0x0)) {
                do {
                  lVar10 = *plVar9;
                  cVar4 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                  if (bVar22) {
                    *plVar9 = lVar10 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar10 + -1 == 0) {
                    /* try { // try from 003376bc to 003376bf has its CatchHandler @ 00337be8 */
                  (*(code *)puVar18[3])(puVar18[4]);
                }
              }
            }
          }
          else {
            if (local_c8 != 0) {
              uVar20 = local_c0;
              goto LAB_003374a4;
            }
LAB_00337508:
            if (*(long *)(param_1 + 200) != 0) {
                    /* try { // try from 00337510 to 0033753b has its CatchHandler @ 00337be0 */
              FUN_003673f0(&local_b0,"field:name error:multiple default method configs");
              lVar10 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                                    ,0x68,&local_b0,0,0);
              if (local_70 < local_68) {
                *local_70 = lVar10;
                local_70 = local_70 + 1;
              }
              else {
                lVar24 = (long)local_70 - (long)local_78 >> 3;
                uVar20 = lVar24 + 1;
                if (uVar20 >> 0x3d != 0) {
                    /* try { // try from 00337b1c to 00337b23 has its CatchHandler @ 00337b34 */
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                uVar19 = (long)local_68 - (long)local_78 >> 2;
                if (uVar20 <= uVar19) {
                  uVar20 = uVar19;
                }
                if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
                  uVar20 = 0x1fffffffffffffff;
                }
                if (uVar20 == 0) {
                  lVar8 = 0;
                }
                else {
                  lVar8 = FUN_0049e770(PTR_FUN_047cba38,uVar20 << 3);
                }
                plVar9 = (long *)(lVar8 + lVar24 * 8);
                plVar15 = (long *)(lVar8 + uVar20 * 8);
                *plVar9 = lVar10;
                sVar13 = (long)local_70 - (long)local_78;
                plVar21 = (long *)((long)plVar9 - sVar13);
                if (0 < (long)sVar13) {
                  memcpy(plVar21,local_78,sVar13);
                }
                bVar22 = local_78 != (long *)0x0;
                local_78 = plVar21;
                local_70 = plVar9 + 1;
                local_68 = plVar15;
                if (bVar22) {
                  FUN_0049e790(puVar6);
                }
              }
            }
            *(long *)(param_1 + 200) = lVar23;
          }
          bVar22 = true;
        }
        else if (local_70 == local_68) {
          lVar24 = (long)local_70 - (long)local_78 >> 3;
          uVar20 = lVar24 + 1;
          if (uVar20 >> 0x3d != 0) {
                    /* try { // try from 00337b00 to 00337b07 has its CatchHandler @ 00337b40 */
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          uVar19 = (long)local_68 - (long)local_78 >> 2;
          if (uVar20 <= uVar19) {
            uVar20 = uVar19;
          }
          if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
            uVar20 = 0x1fffffffffffffff;
          }
          if (uVar20 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = FUN_0049e770(PTR_FUN_047cba38,uVar20 << 3);
          }
          plVar9 = (long *)(lVar8 + lVar24 * 8);
          plVar15 = (long *)(lVar8 + uVar20 * 8);
          *plVar9 = lVar10;
          sVar13 = (long)local_70 - (long)local_78;
          plVar21 = (long *)((long)plVar9 - sVar13);
          if (0 < (long)sVar13) {
            memcpy(plVar21,local_78,sVar13);
          }
          bVar2 = local_78 != (long *)0x0;
          local_78 = plVar21;
          local_70 = plVar9 + 1;
          local_68 = plVar15;
          if (bVar2) {
            FUN_0049e790(puVar6);
          }
        }
        else {
          *local_70 = local_b8;
          local_70 = local_70 + 1;
        }
        if ((local_d0[0] & 1) != 0) {
          FUN_0049e790(puVar6,local_c0);
        }
        lVar12 = lVar12 + 0x50;
      } while (lVar12 != lVar7);
      if (!bVar22) goto LAB_00337778;
    }
    if (local_70 != local_78) {
                    /* try { // try from 0033785c to 0033788b has its CatchHandler @ 00337b48 */
      FUN_003673f0(&local_b0,"methodConfig");
      uVar11 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                            ,0x80,&local_b0,local_78,(long)local_70 - (long)local_78 >> 3);
      puVar6 = PTR_LAB_047cba48;
      puVar1 = local_80;
      plVar9 = local_78;
      plVar15 = local_70;
      if (local_70 != local_78) {
        uVar20 = 0;
        plVar21 = local_70;
        plVar15 = local_78;
        do {
          if (4 < (ulong)plVar15[uVar20]) {
                    /* try { // try from 003378cc to 003378cf has its CatchHandler @ 00337c0c */
            FUN_00350fd0();
            plVar9 = local_78;
            plVar21 = local_70;
            plVar15 = local_78;
          }
          uVar20 = uVar20 + 1;
          puVar6 = PTR_LAB_047cba48;
          puVar1 = local_80;
        } while (uVar20 < (ulong)((long)plVar21 - (long)plVar15 >> 3));
      }
      goto joined_r0x0033798c;
    }
  }
  else {
                    /* try { // try from 0033772c to 00337757 has its CatchHandler @ 00337b44 */
    FUN_003673f0(&local_b0,"field:name error:not of type Array");
    lVar7 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                         ,0x5a,&local_b0,0,0);
    if (local_70 < local_68) {
      *local_70 = lVar7;
      local_70 = local_70 + 1;
    }
    else {
      lVar23 = (long)local_70 - (long)local_78 >> 3;
      uVar20 = lVar23 + 1;
      if (uVar20 >> 0x3d != 0) {
                    /* try { // try from 00337b2c to 00337b33 has its CatchHandler @ 00337b44 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      uVar19 = (long)local_68 - (long)local_78 >> 2;
      if (uVar20 <= uVar19) {
        uVar20 = uVar19;
      }
      if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
        uVar20 = 0x1fffffffffffffff;
      }
      if (uVar20 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = FUN_0049e770(PTR_FUN_047cba38,uVar20 << 3);
      }
      plVar9 = (long *)(lVar12 + lVar23 * 8);
      plVar15 = (long *)(lVar12 + uVar20 * 8);
      *plVar9 = lVar7;
      sVar13 = (long)local_70 - (long)local_78;
      plVar21 = (long *)((long)plVar9 - sVar13);
      if (0 < (long)sVar13) {
        memcpy(plVar21,local_78,sVar13);
      }
      bVar22 = local_78 != (long *)0x0;
      local_78 = plVar21;
      local_70 = plVar9 + 1;
      local_68 = plVar15;
      if (bVar22) {
        FUN_0049e790(PTR_LAB_047cba48);
      }
    }
    if (local_70 != local_78) {
                    /* try { // try from 00337994 to 003379c3 has its CatchHandler @ 00337b48 */
      FUN_003673f0(&local_b0,"methodConfig");
      uVar11 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/service_config.cc"
                            ,0x5b,&local_b0,local_78,(long)local_70 - (long)local_78 >> 3);
      puVar6 = PTR_LAB_047cba48;
      puVar1 = local_80;
      plVar9 = local_78;
      plVar15 = local_70;
      if (local_70 != local_78) {
        uVar20 = 0;
        plVar21 = local_70;
        plVar15 = local_78;
        do {
          if (4 < (ulong)plVar15[uVar20]) {
                    /* try { // try from 00337af8 to 00337afb has its CatchHandler @ 00337bdc */
            FUN_00350fd0();
            plVar9 = local_78;
            plVar21 = local_70;
            plVar15 = local_78;
          }
          uVar20 = uVar20 + 1;
          puVar6 = PTR_LAB_047cba48;
          puVar1 = local_80;
        } while (uVar20 < (ulong)((long)plVar21 - (long)plVar15 >> 3));
      }
      goto joined_r0x0033798c;
    }
  }
  uVar11 = 0;
  puVar6 = PTR_LAB_047cba48;
  puVar1 = local_80;
  plVar9 = local_78;
  plVar15 = local_70;
joined_r0x0033798c:
  local_80 = (ulong *)0x0;
  local_70 = plVar9;
  PTR_LAB_047cba48 = puVar6;
  if (puVar1 != (ulong *)0x0) {
    local_80 = (ulong *)0x0;
    uVar20 = *puVar1;
    uVar19 = uVar20 & 1;
    if ((uVar20 & 1) == 0) {
      puVar16 = puVar1 + 1;
    }
    else {
      puVar16 = (ulong *)puVar1[1];
    }
    local_70 = plVar15;
    if ((uVar20 >> 1 != 0) && (uVar20 = uVar20 >> 1, puVar16 != (ulong *)0x0)) {
      do {
        uVar19 = uVar20 - 1;
        puVar18 = (undefined8 *)puVar16[uVar20 - 1];
        puVar16[uVar20 - 1] = 0;
        if (puVar18 != (undefined8 *)0x0) {
          (**(code **)*puVar18)(puVar18);
          FUN_0049e790(puVar6,puVar18);
        }
        uVar20 = uVar19;
      } while (uVar19 != 0);
      uVar19 = *puVar1 & 1;
    }
    if (uVar19 != 0) {
      FUN_0049e790(PTR_LAB_047cba48,puVar1[1]);
    }
    FUN_0049e790(PTR_LAB_047cba48,puVar1);
    local_70 = local_78;
  }
  if (local_70 != (long *)0x0) {
    FUN_0049e790(PTR_LAB_047cba48,local_70);
  }
  return uVar11;
}


