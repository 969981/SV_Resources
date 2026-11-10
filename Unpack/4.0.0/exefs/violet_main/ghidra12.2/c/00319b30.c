/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00319b30; name: FUN_00319b30
 */


ulong FUN_00319b30(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  byte bVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  uint uVar25;
  long *local_d8;
  long local_d0;
  long *local_c8;
  char local_c0;
  long local_b8 [4];
  undefined8 local_98;
  undefined7 local_90;
  undefined1 local_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined8 local_80;
  ulong local_78;
  long *local_70;
  
  local_98 = 0;
  local_90 = 0;
  local_89 = 0;
  uStack_88 = 0;
  uStack_87 = 0;
  uStack_86 = 0;
  local_b8[3] = param_1;
  if ((*(char *)(param_1 + 0xd8c) != '\0') && (*(char *)(param_1 + 0xd8d) == '\0')) {
    FUN_003186a0(&local_d8,param_1 + 0xdcc,param_1 + 0xdb0,*(undefined4 *)(param_1 + 0xd90),7);
    FUN_003686e0(param_1 + 0x2b0,&local_d8);
    *(undefined4 *)(local_b8[3] + 0xd90) = 0;
    *(undefined2 *)(local_b8[3] + 0xd8c) = 0x100;
  }
  if (*(long *)(local_b8[3] + 0xed0) != 0) {
    uVar23 = 0;
    do {
      lVar14 = local_b8[3] + 0x2b0;
      FUN_00318330(&local_d8,1,*(undefined8 *)(*(long *)(local_b8[3] + 0xee0) + uVar23 * 8));
      FUN_003686e0(lVar14,&local_d8);
      uVar23 = uVar23 + 1;
    } while (uVar23 < *(ulong *)(local_b8[3] + 0xed0));
  }
  *(undefined8 *)(local_b8[3] + 0xed0) = 0;
  FUN_00368a60(local_b8[3] + 0xc50,local_b8[3] + 0x2b0);
  *(undefined4 *)(local_b8[3] + 0x136c) = 0;
  if (*(long *)(local_b8[3] + 0xc60) != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_00310700(local_b8[3] + 0x3d8,*(undefined4 *)(local_b8[3] + 0xd94));
  if (0 < *(long *)(param_1 + 0x1058)) {
LAB_00319c28:
    uVar23 = FUN_00319510(local_b8[3],&local_d8);
    if ((uVar23 & 1) != 0) {
      if ((*(long *)(local_b8[3] + 0x40) == 0) &&
         (uVar23 = FUN_003191f0(local_b8[3],local_d8), (uVar23 & 1) != 0)) {
        plVar17 = (long *)local_d8[2];
        lVar14 = *plVar17;
        while (lVar14 != 0) {
          lVar20 = *plVar17;
          if (lVar20 == lVar14) {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar8) {
              *plVar17 = lVar14 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_00319c28;
          }
          else {
            ClearExclusiveLocal();
          }
          lVar14 = lVar20;
        }
        FUN_003192a0(local_b8[3],local_d8);
      }
      goto LAB_00319c28;
    }
  }
  if (*(undefined **)(local_b8[3] + 0x2d0) < &DAT_00100001) {
    do {
      plVar24 = local_b8 + 3;
      uVar23 = FUN_00319250(local_b8[3],&local_d8);
      plVar17 = local_d8;
      if ((local_d8 == (long *)0x0) || ((uVar23 & 1) == 0)) goto LAB_0031a468;
      local_d0 = local_b8[3];
      local_c8 = local_d8;
      local_c0 = '\0';
      local_b8[2] = 0;
      uVar23 = *(ulong *)(param_1 + 0x2d0);
      if ((char)local_d8[0x127] == '\0') {
        plVar16 = (long *)local_d8[0x15];
        if (plVar16 != (long *)0x0) {
          if ((((((*(char *)(local_b8[3] + 0xc48) == '\0') && (local_d8[0x1a] == 0)) &&
                (local_d8[0x132] == 0)) && (((int)local_d8[0x157] == 0 || (local_d8[0x161] == 0))))
              && (local_d8[0x17] != 0)) && (plVar16[1] == *plVar16)) {
            bVar8 = plVar16[6] != 0;
            if (bVar8) {
              local_b8[0] = plVar16[6];
            }
            local_b8[2] = (long)bVar8;
            if (plVar16[0x12] != 0) {
              local_b8[2] = (ulong)bVar8 + 1;
              local_b8[bVar8] = plVar16[0x12];
            }
            plVar16 = local_b8 + 3;
            local_d8 = plVar24;
          }
          else {
            local_80 = CONCAT26(local_80._6_2_,
                                CONCAT15(*(int *)(local_b8[3] + 0xdac) != 0,
                                         (uint5)*(uint *)(local_d8 + 0x14)));
            local_78 = (ulong)*(uint *)(local_b8[3] + 0xda4);
            local_70 = local_d8 + 0x33;
            local_d8 = plVar24;
            FUN_003108f0(local_b8[3] + 0x3d8,0,0,plVar16,&local_80,local_b8[3] + 0x2b0);
            FUN_00308a50(local_d0);
            plVar16 = local_d8;
            *(int *)((long)local_d8 + 0xc) = *(int *)((long)local_d8 + 0xc) + 1;
          }
          local_c8[0x15] = 0;
          *(undefined1 *)(local_c8 + 0x127) = 1;
          *(undefined1 *)((long)plVar16 + 0x1a) = 1;
          FUN_00308360(local_d0,local_c8,local_c8 + 0x16,0,"send_initial_metadata_finished");
          plVar24 = local_d8;
        }
      }
      local_d8 = plVar24;
      iVar12 = (**(code **)(local_c8[0x128] + 0x30))(local_c8 + 0x128);
      if (iVar12 != 0) {
        lVar14 = local_d0 + 0x2b0;
        FUN_00318e30(&local_80,(int)local_c8[0x14],iVar12,local_c8 + 0x33);
        FUN_003686e0(lVar14,&local_80);
        FUN_00308a50(local_d0);
        *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      }
      plVar16 = local_c8;
      lVar14 = local_d0;
      plVar24 = local_d8;
      if (((char)local_c8[0x127] != '\0') &&
         ((uVar18 = local_c8[0x132], uVar18 != 0 ||
          (((int)local_c8[0x157] != 0 && (local_c8[0x161] != 0)))))) {
        uVar21 = (ulong)*(uint *)(local_d0 + 0xda4);
        lVar20 = local_c8[0x129] + (ulong)*(uint *)(local_d0 + 0xda0);
        uVar11 = *(uint *)(local_d0 + 0xda0) + (int)local_c8[0x129];
        uVar22 = *(ulong *)(local_d0 + 0x1058);
        uVar19 = 0;
        if (-1 < lVar20) {
          uVar19 = (ulong)uVar11;
        }
        uVar6 = uVar21;
        if (uVar19 <= uVar21) {
          uVar6 = uVar19;
        }
        if ((long)uVar22 <= (long)uVar21) {
          uVar21 = uVar22;
        }
        if ((long)uVar22 <= (long)uVar19) {
          uVar6 = uVar21;
        }
        if ((int)uVar6 == 0) {
          if ((long)uVar22 < 1) {
            FUN_00319490(local_d0,local_c8);
          }
          else if ((lVar20 < 0) || (uVar11 == 0)) {
            FUN_003195c0(local_d0,local_c8);
          }
        }
        else {
          lVar20 = local_c8[0x156];
          if ((int)local_c8[0x157] == 0) {
            if (uVar18 != 0) {
              plVar1 = local_c8 + 0x12e;
              plVar2 = local_c8 + 0x33;
              lVar4 = local_d0 + 0x2b0;
              plVar3 = local_c8 + 0x128;
              uVar19 = uVar6 & 0xffffffff;
              if (uVar18 <= (uVar6 & 0xffffffff)) goto LAB_0031a064;
              do {
                uVar11 = 0;
                while( true ) {
                  uVar25 = uVar11 & 1;
                  FUN_0030f350((int)plVar16[0x14],plVar1,uVar19 & 0xffffffff,uVar25,plVar2,lVar4);
                  (**(code **)(plVar16[0x128] + 0x20))(plVar3,uVar19);
                  plVar16[0x156] = plVar16[0x156] + uVar19;
                  if (local_c8[0x132] == 0) goto LAB_0031a144;
                  uVar21 = (ulong)*(uint *)(lVar14 + 0xda4);
                  uVar22 = *(ulong *)(lVar14 + 0x1058);
                  uVar18 = 0;
                  if (-1 < (long)(plVar16[0x129] + (ulong)*(uint *)(lVar14 + 0xda0))) {
                    uVar18 = (ulong)(*(uint *)(lVar14 + 0xda0) + (int)plVar16[0x129]);
                  }
                  uVar19 = uVar21;
                  if (uVar18 <= uVar21) {
                    uVar19 = uVar18;
                  }
                  if ((long)uVar22 <= (long)uVar21) {
                    uVar21 = uVar22;
                  }
                  if ((long)uVar22 <= (long)uVar18) {
                    uVar19 = uVar21;
                  }
                  if ((int)uVar19 == 0) {
                    uVar25 = uVar11 & 1;
                    goto LAB_0031a144;
                  }
                  uVar18 = plVar16[0x132];
                  uVar19 = uVar19 & 0xffffffff;
                  if (uVar19 < uVar18) break;
LAB_0031a064:
                  uVar19 = uVar18;
                  if ((plVar16[0x1a] != 0) || (plVar16[0x17] == 0)) break;
                  uVar11 = FUN_003778c0();
                }
              } while( true );
            }
            FUN_00308a50(local_d0);
          }
          else {
            uVar25 = 0;
            plVar1 = local_c8 + 0x12e;
            plVar2 = local_c8 + 0x15d;
            plVar3 = local_c8 + 0x33;
            lVar4 = local_d0 + 0x2b0;
            plVar5 = local_c8 + 0x128;
            while ((uVar18 != 0 || (local_c8[0x161] != 0))) {
              uVar19 = (ulong)*(uint *)(lVar14 + 0xda4);
              uVar21 = *(ulong *)(lVar14 + 0x1058);
              uVar18 = 0;
              if (-1 < (long)(plVar16[0x129] + (ulong)*(uint *)(lVar14 + 0xda0))) {
                uVar18 = (ulong)(*(uint *)(lVar14 + 0xda0) + (int)plVar16[0x129]);
              }
              uVar22 = uVar19;
              if (uVar18 <= uVar19) {
                uVar22 = uVar18;
              }
              if ((long)uVar21 <= (long)uVar19) {
                uVar19 = uVar21;
              }
              if ((long)uVar21 <= (long)uVar18) {
                uVar22 = uVar19;
              }
              if ((int)uVar22 == 0) break;
              if (local_c8[0x161] == 0) {
                lVar13 = plVar16[0x15c];
                if (lVar13 == 0) {
                  lVar13 = FUN_0034d600((int)plVar16[0x157]);
                  plVar16[0x15c] = lVar13;
                }
                plVar16[0x15b] = plVar16[0x132];
                FUN_0034d5e0(lVar13,plVar1,plVar2,0,0xffffffffffffffff,1);
              }
              else {
                uVar18 = plVar16[0x161];
                uVar19 = uVar22 & 0xffffffff;
                if ((((uVar22 & 0xffffffff) < uVar18) || (uVar19 = uVar18, plVar16[0x132] != 0)) ||
                   (plVar16[0x1a] != 0)) {
                  uVar18 = uVar19;
                  uVar11 = 0;
                }
                else {
                  uVar11 = 0;
                  if (plVar16[0x17] != 0) {
                    if (plVar16[0x15c] != 0) {
                      FUN_0034d5e0(plVar16[0x15c],plVar1,plVar2,0,0xffffffffffffffff,2);
                      FUN_0034d640(plVar16[0x15c]);
                      plVar16[0x15c] = 0;
                      goto LAB_00319ee4;
                    }
                    uVar11 = FUN_003778c0();
                  }
                }
                uVar25 = uVar11 & 1;
                FUN_0030f350((int)plVar16[0x14],plVar2,uVar18 & 0xffffffff,uVar25,plVar3,lVar4);
                (**(code **)(plVar16[0x128] + 0x20))(plVar5,uVar18);
                if (plVar16[0x161] == 0) {
                  plVar16[0x156] = plVar16[0x156] + plVar16[0x15b];
                }
              }
LAB_00319ee4:
              uVar18 = local_c8[0x132];
            }
LAB_0031a144:
            FUN_00308a50(local_d0);
            if (uVar25 != 0) {
              local_c8[0x17] = 0;
              if ((undefined1 *)local_c8[0x18] != (undefined1 *)0x0) {
                *(undefined1 *)local_c8[0x18] = 1;
                local_c8[0x18] = 0;
              }
              *(undefined1 *)((long)local_c8 + 0x939) = 1;
              *(undefined1 *)((long)local_c8 + 0x1b6) = 1;
              if (*(char *)(local_d0 + 0xc48) == '\0') {
                if (*(char *)((long)local_c8 + 0x1b1) == '\0') {
                  lVar4 = local_d0 + 0x2b0;
                  FUN_00310120(&local_80,(int)local_c8[0x14],0,local_c8 + 0x33);
                  FUN_003686e0(lVar4,&local_80);
                  bVar15 = *(byte *)(local_d0 + 0xc48) ^ 1;
                }
                else {
                  bVar15 = 1;
                }
              }
              else {
                bVar15 = 0;
              }
              FUN_00309ae0(local_d0,local_c8,bVar15,1,0);
            }
          }
          uVar18 = FUN_0031a7a0(lVar14,plVar16,plVar16[0x156] - lVar20,plVar16 + 0x153,
                                plVar16 + 0x22,0);
          if ((uVar18 & 1) != 0) {
            *(undefined1 *)((long)plVar24 + 0x1a) = 1;
          }
          local_c0 = '\x01';
          if ((local_c8[0x132] != 0) || (((int)local_c8[0x157] != 0 && (local_c8[0x161] != 0)))) {
            FUN_003078d0();
            FUN_003191f0(local_d0,local_c8);
          }
          *(int *)((long)local_d8 + 0x14) = *(int *)((long)local_d8 + 0x14) + 1;
        }
      }
      if (((((char)local_c8[0x127] != '\0') && (local_c8[0x17] != 0)) &&
          ((local_c8[0x1a] == 0 && (local_c8[0x132] == 0)))) &&
         (((int)local_c8[0x157] == 0 || (local_c8[0x161] == 0)))) {
        uVar18 = FUN_003778c0();
        uVar10 = local_80;
        if ((uVar18 & 1) == 0) {
          local_70 = local_c8 + 0x33;
          local_80._6_2_ = SUB82(uVar10,6);
          local_80._0_6_ = CONCAT15(*(int *)(local_d0 + 0xdac) != 0,CONCAT14(1,(int)local_c8[0x14]))
          ;
          local_78 = (ulong)*(uint *)(local_d0 + 0xda4);
          FUN_003108f0(local_d0 + 0x3d8,local_b8,local_b8[2],local_c8[0x17],&local_80,
                       local_d0 + 0x2b0);
        }
        else {
          FUN_0030f350((int)local_c8[0x14],local_c8 + 0x12e,0,1,local_c8 + 0x33,local_d0 + 0x2b0);
        }
        *(int *)(local_d8 + 2) = (int)local_d8[2] + 1;
        FUN_00308a50(local_d0);
        local_c8[0x17] = 0;
        if ((undefined1 *)local_c8[0x18] != (undefined1 *)0x0) {
          *(undefined1 *)local_c8[0x18] = 1;
          local_c8[0x18] = 0;
        }
        *(undefined1 *)((long)local_c8 + 0x939) = 1;
        *(undefined1 *)((long)local_c8 + 0x1b6) = 1;
        if (*(char *)(local_d0 + 0xc48) == '\0') {
          if (*(char *)((long)local_c8 + 0x1b1) == '\0') {
            lVar14 = local_d0 + 0x2b0;
            FUN_00310120(&local_80,(int)local_c8[0x14],0,local_c8 + 0x33);
            FUN_003686e0(lVar14,&local_80);
            bVar15 = *(byte *)(local_d0 + 0xc48) ^ 1;
          }
          else {
            bVar15 = 1;
          }
        }
        else {
          bVar15 = 0;
        }
        FUN_00309ae0(local_d0,local_c8,bVar15,1,0);
        *(undefined1 *)((long)local_d8 + 0x1a) = 1;
        FUN_00308360(local_d0,local_c8,local_c8 + 0x19,0,"send_trailing_metadata_finished");
      }
      lVar14 = *(ulong *)(param_1 + 0x2d0) - uVar23;
      if (((uVar23 <= *(ulong *)(param_1 + 0x2d0) && lVar14 != 0) &&
          (plVar17[0x15a] = lVar14 + plVar17[0x15a], *(char *)((long)plVar17 + 0xac1) != '\0')) &&
         (uVar23 = FUN_00350f80(*(undefined8 *)(param_1 + 0x10)), (uVar23 & 1) != 0)) {
        FUN_0030ded8(param_1 + 0x1358,plVar17);
      }
      if ((local_c0 == '\0') || (uVar23 = FUN_00319310(param_1,plVar17), (uVar23 & 1) == 0)) {
        FUN_003078f0(plVar17);
      }
    } while (*(undefined **)(local_b8[3] + 0x2d0) < &DAT_00100001);
  }
  uStack_87 = 1;
LAB_0031a468:
  iVar12 = (**(code **)(*(long *)(local_b8[3] + 0x1050) + 0x18))
                     (local_b8[3] + 0x1050,*(long *)(local_b8[3] + 0x2c0) != 0);
  if (iVar12 != 0) {
    local_80 = 0;
    local_78 = 0;
    local_70 = (long *)0x0;
    lVar14 = local_b8[3] + 0x2b0;
    FUN_00318e30(&local_d8,0,iVar12,&local_80);
    FUN_003686e0(lVar14,&local_d8);
    FUN_00308a50(local_b8[3]);
  }
  if (((*(long *)(param_1 + 0xe20) != 0) && (*(long *)(param_1 + 0xe30) == 0)) &&
     ((*(int *)(param_1 + 0xe68) != 0 || (*(int *)(param_1 + 0xe48) == 0)))) {
    if (PTR___tls_init_047cc328 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar14 = tpidr_el0;
    lVar14 = FUN_0035347c(*(undefined8 *)(lVar14 + 0x48));
    if ((*(char *)(param_1 + 0x1350) == '\0') &&
       (lVar20 = FUN_00319950(param_1 + 0xa0), lVar20 == 0)) {
      lVar20 = *(long *)(param_1 + 0xe60) + 7200000;
    }
    else {
      lVar20 = *(long *)(param_1 + 0xe60) + *(long *)(param_1 + 0xe50) + 1000;
    }
    if (lVar14 < lVar20) {
      if (*(char *)(param_1 + 0xea0) == '\0') {
        *(undefined1 *)(param_1 + 0xea0) = 1;
        plVar17 = (long *)(param_1 + 8);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar8) {
            *plVar17 = *plVar17 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          puVar9 = PTR_FUN_047ccb70;
        } while (cVar7 != '\0');
        *(undefined8 *)(param_1 + 0xec8) = 0;
        *(undefined **)(param_1 + 0xeb8) = puVar9;
        *(long *)(param_1 + 0xec0) = param_1;
        FUN_00360550(param_1 + 0xe70,lVar20,param_1 + 0xeb0);
      }
    }
    else {
      *(long *)(param_1 + 0xe40) = *(long *)(param_1 + 0xea8);
      *(long *)(param_1 + 0xea8) = *(long *)(param_1 + 0xea8) + 1;
      FUN_0035357c(&local_d8,param_1 + 0xe10);
      if (*(long *)(param_1 + 0xe20) != 0) {
        if (*(long *)(param_1 + 0xe30) == 0) {
          *(undefined8 *)(param_1 + 0xe38) = *(undefined8 *)(param_1 + 0xe28);
          *(long *)(param_1 + 0xe30) = *(long *)(param_1 + 0xe20);
        }
        else {
          **(long **)(param_1 + 0xe38) = *(long *)(param_1 + 0xe20);
          *(undefined8 *)(param_1 + 0xe38) = *(undefined8 *)(param_1 + 0xe28);
        }
        *(long *)(param_1 + 0xe20) = 0;
        *(undefined8 *)(param_1 + 0xe28) = 0;
      }
      FUN_00318330(&local_d8,0,*(undefined8 *)(param_1 + 0xe40));
      FUN_003686e0(param_1 + 0x2b0,&local_d8);
      *(long *)(param_1 + 0xe60) = lVar14;
      *(uint *)(param_1 + 0xe68) =
           *(int *)(param_1 + 0xe68) - (uint)(*(int *)(param_1 + 0xe68) != 0);
    }
  }
  return (ulong)CONCAT12(uStack_86,CONCAT11(uStack_87,*(long *)(local_b8[3] + 0x2c0) != 0));
}


