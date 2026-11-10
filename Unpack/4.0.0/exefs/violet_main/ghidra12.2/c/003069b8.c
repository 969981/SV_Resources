/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003069b8; name: FUN_003069b8
 */


void FUN_003069b8(undefined8 *param_1,ulong *param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  undefined1 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  void *__s;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  ulong uVar21;
  long lVar22;
  ulong unaff_x27;
  ulong unaff_x28;
  char *pcVar23;
  undefined1 auVar24 [12];
  uint local_ec;
  uint local_d4;
  undefined1 auStack_b8 [32];
  byte local_98 [16];
  undefined8 local_88;
  char *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *puStack_68;
  
  plVar18 = param_1 + 1;
  *plVar18 = 1;
  param_1[2] = param_3;
  uVar13 = FUN_00350f50(param_3);
  puVar19 = param_1 + 3;
  *puVar19 = uVar13;
  param_1[4] = param_5;
  uVar13 = FUN_00350660();
  *(undefined4 *)(param_1 + 7) = 0;
  bVar9 = (param_4 & 1) == 0;
  pcVar23 = "client_transport";
  if (bVar9) {
    pcVar23 = "server_transport";
  }
  param_1[0x51] = pcVar23;
  *(undefined4 *)(param_1 + 0x52) = 2;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = uVar13;
  param_1[6] = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[0x4e] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = param_1 + 0x54;
  *(undefined4 *)(param_1 + 0x1af) = 0xffff;
  *(undefined4 *)(param_1 + 0x1b2) = 8;
  uVar11 = 1;
  if (bVar9) {
    uVar11 = 2;
  }
  *(byte *)(param_1 + 0x189) = (byte)param_4 & 1;
  param_1[0x1b0] = 0;
  *(undefined4 *)(param_1 + 0x1b1) = 0;
  *(undefined2 *)((long)param_1 + 0xd8c) = 1;
  *(undefined4 *)((long)param_1 + 0xe04) = uVar11;
  *(undefined4 *)(param_1 + 0x1c1) = 0;
  param_1[0x1d5] = 0;
  param_1[0x1fa] = 0;
  *(undefined4 *)(param_1 + 0x1fb) = 0;
  param_1[0x1c8] = 0;
  param_1[0x1c7] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c3] = 0;
  param_1[0x1c2] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1db] = 0;
  param_1[0x1da] = 0;
  *(undefined8 *)((long)param_1 + 0xfdc) = 0x100000001000;
  *(undefined8 *)((long)param_1 + 0xfe4) = 0x8000000080;
  param_1[0x1fe] = 0;
                    /* try { // try from 00306ae4 to 00306aeb has its CatchHandler @ 00307574 */
  __s = (void *)FUN_0038c780(0x400);
  param_1[0x1fe] = __s;
  memset(__s,0,0x400);
  uVar11 = 0x18;
  if ((param_4 & 1) == 0) {
    uVar11 = 0;
  }
  *(undefined4 *)(param_1 + 0x226) = uVar11;
  param_1[0x225] = 0;
  *(undefined4 *)((long)param_1 + 0x1134) = 0x1000000;
  param_1[0x227] = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  param_1[0x22c] = 0;
  *(undefined2 *)(param_1 + 0x245) = 0;
  *(undefined2 *)(param_1 + 0x26a) = 0;
  param_1[0x22a] = 0;
  param_1[0x229] = 0;
  *(undefined2 *)(param_1 + 0x23c) = 0;
  param_1[0x239] = 0;
  param_1[0x26b] = 0;
  param_1[0x23b] = 0;
  param_1[0x23a] = 0;
  *(undefined1 *)(param_1 + 0x26e) = 0;
  *param_1 = &DAT_04494970;
  param_1[0x26d] = 0;
  param_1[0x26c] = 0;
                    /* try { // try from 00306b64 to 00306bb3 has its CatchHandler @ 00307588 */
  FUN_00319720(param_1 + 0x14,8);
  FUN_00368450(param_1 + 0x29);
  FUN_00368450(param_1 + 0x56);
  if ((param_4 & 1) != 0) {
    FUN_00367770(auStack_b8,"PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n");
    FUN_003686e0(param_1 + 0x56,auStack_b8);
  }
  FUN_003105e0();
  FUN_00368450(param_1 + 0x18a);
  puVar20 = PTR_PTR_047ccab0;
  uVar11 = *(undefined4 *)(PTR_PTR_047ccab0 + 8);
  *(undefined4 *)((long)param_1 + 0xd94) = uVar11;
  *(undefined4 *)(param_1 + 0x1b6) = uVar11;
  *(undefined4 *)((long)param_1 + 0xdcc) = uVar11;
  *(undefined4 *)(param_1 + 0x1bd) = uVar11;
  uVar11 = *(undefined4 *)(puVar20 + 0x28);
  *(undefined4 *)(param_1 + 0x1b3) = uVar11;
  *(undefined4 *)((long)param_1 + 0xdb4) = uVar11;
  *(undefined4 *)(param_1 + 0x1ba) = uVar11;
  *(undefined4 *)((long)param_1 + 0xdec) = uVar11;
  uVar11 = *(undefined4 *)(puVar20 + 0x48);
  *(undefined4 *)((long)param_1 + 0xd9c) = uVar11;
  *(undefined4 *)(param_1 + 0x1b7) = uVar11;
  *(undefined4 *)((long)param_1 + 0xdd4) = uVar11;
  *(undefined4 *)(param_1 + 0x1be) = uVar11;
  uVar11 = *(undefined4 *)(puVar20 + 0x68);
  *(undefined4 *)(param_1 + 0x1b4) = uVar11;
  *(undefined4 *)((long)param_1 + 0xdbc) = uVar11;
  *(undefined4 *)(param_1 + 0x1bb) = uVar11;
  *(undefined4 *)((long)param_1 + 0xdf4) = uVar11;
  uVar11 = *(undefined4 *)(puVar20 + 0x88);
  *(undefined4 *)((long)param_1 + 0xda4) = uVar11;
  *(undefined4 *)(param_1 + 0x1b8) = uVar11;
  *(undefined4 *)((long)param_1 + 0xddc) = uVar11;
  *(undefined4 *)(param_1 + 0x1bf) = uVar11;
  uVar11 = *(undefined4 *)(puVar20 + 0xa8);
  *(undefined4 *)(param_1 + 0x1b5) = uVar11;
  *(undefined4 *)((long)param_1 + 0xdc4) = uVar11;
  *(undefined4 *)(param_1 + 0x1bc) = uVar11;
  *(undefined4 *)((long)param_1 + 0xdfc) = uVar11;
  uVar11 = *(undefined4 *)(puVar20 + 200);
  *(undefined4 *)((long)param_1 + 0xdac) = uVar11;
  *(undefined4 *)(param_1 + 0x1b9) = uVar11;
  *(undefined4 *)((long)param_1 + 0xde4) = uVar11;
  *(undefined4 *)(param_1 + 0x1c0) = uVar11;
                    /* try { // try from 00306c4c to 00306c5b has its CatchHandler @ 00307580 */
  FUN_00312da0(param_1 + 0x1df);
  FUN_0030fc00(param_1 + 0x206);
  if ((param_4 & 1) != 0) {
    if (*(int *)(puVar20 + 0x2c) != *(int *)((long)param_1 + 0xdb4)) {
      *(int *)((long)param_1 + 0xdb4) = *(int *)(puVar20 + 0x2c);
      *(undefined1 *)((long)param_1 + 0xd8c) = 1;
    }
    if (*(int *)(puVar20 + 0x4c) != *(int *)(param_1 + 0x1b7)) {
      *(int *)(param_1 + 0x1b7) = *(int *)(puVar20 + 0x4c);
      *(undefined1 *)((long)param_1 + 0xd8c) = 1;
    }
  }
  uVar12 = *(uint *)(puVar20 + 0xb0);
  if (0x1fff < uVar12) {
    uVar12 = 0x2000;
  }
  uVar17 = *(uint *)(puVar20 + 0xac);
  if (*(uint *)(puVar20 + 0xac) < 0x2001) {
    uVar17 = uVar12;
  }
  if (uVar17 != *(uint *)((long)param_1 + 0xdc4)) {
    *(uint *)((long)param_1 + 0xdc4) = uVar17;
    *(undefined1 *)((long)param_1 + 0xd8c) = 1;
  }
  uVar12 = *(uint *)(puVar20 + 0xcc);
  if (uVar12 < 2) {
    uVar12 = (uint)(*(int *)(puVar20 + 0xd0) != 0);
  }
  if (uVar12 != *(uint *)(param_1 + 0x1b9)) {
    *(uint *)(param_1 + 0x1b9) = uVar12;
    *(undefined1 *)((long)param_1 + 0xd8c) = 1;
  }
  *(undefined4 *)(param_1 + 0x1c9) = DAT_04494a34;
  param_1[0x1ca] = (long)DAT_04494a38;
  *(undefined4 *)((long)param_1 + 0xe4c) = DAT_04494a30;
  param_1[0x1cb] = (long)DAT_04494a3c;
  bVar9 = *(char *)(param_1 + 0x189) != '\0';
  piVar14 = &DAT_04494a24;
  if (bVar9) {
    piVar14 = &DAT_04494a20;
  }
  piVar3 = &DAT_04494a2c;
  if (bVar9) {
    piVar3 = &DAT_04494a28;
  }
  iVar10 = *piVar3;
  puVar4 = &DAT_047ef3f4;
  if (bVar9) {
    puVar4 = &DAT_047ef3f0;
  }
  uVar7 = *puVar4;
  lVar22 = 0x7fffffffffffffff;
  if (*piVar14 != 0x7fffffff) {
    lVar22 = (long)*piVar14;
  }
  param_1[0x268] = lVar22;
  lVar22 = 0x7fffffffffffffff;
  if (iVar10 != 0x7fffffff) {
    lVar22 = (long)iVar10;
  }
  param_1[0x269] = lVar22;
  *(undefined1 *)(param_1 + 0x26a) = uVar7;
  if (param_2 == (ulong *)0x0) {
    local_d4 = 1;
    goto LAB_003072cc;
  }
  if (*param_2 == 0) {
    local_d4 = 1;
LAB_0030723c:
    local_80 = "chttp2";
    local_78 = PTR_LAB_047cc7b8;
    local_70 = *puVar19;
    puStack_68 = PTR_LAB_047cc7b8;
                    /* try { // try from 00307258 to 00307273 has its CatchHandler @ 00307584 */
    FUN_00391b20(local_98,"%s %s",5,&local_80,2);
                    /* try { // try from 00307274 to 00307287 has its CatchHandler @ 00307550 */
    uVar13 = FUN_0030b1e4(&DAT_03c886bc,puVar19,local_98);
    puVar19 = (undefined8 *)param_1[0x26c];
    if (puVar19 == (undefined8 *)0x0) {
LAB_003072ac:
      param_1[0x26c] = uVar13;
    }
    else {
      plVar1 = puVar19 + 1;
      do {
        lVar22 = *plVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = lVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (lVar22 + -1 != 0) goto LAB_003072ac;
      (**(code **)*puVar19)(puVar19);
      FUN_0049e790(PTR_LAB_047cba48,puVar19);
      param_1[0x26c] = uVar13;
    }
    if ((local_98[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_88);
    }
  }
  else {
    lVar22 = 0;
    uVar21 = 0;
    local_d4 = 1;
    local_ec = 1;
    do {
      lVar2 = param_2[1] + lVar22;
      pcVar23 = *(char **)(lVar2 + 8);
      iVar10 = strcmp(pcVar23,"grpc.http2.initial_sequence_number");
      if (iVar10 == 0) {
        unaff_x28 = unaff_x28 & 0xffffffff00000000 | 0x7fffffff;
        uVar12 = FUN_00343f80(lVar2,0xffffffff,unaff_x28);
        if ((-1 < (int)uVar12) && (((*(uint *)((long)param_1 + 0xe04) ^ uVar12) & 1) == 0)) {
          *(uint *)((long)param_1 + 0xe04) = uVar12;
        }
      }
      else {
        iVar10 = strcmp(pcVar23,"grpc.http2.hpack_table_size.encoder");
        if (iVar10 == 0) {
          puVar20 = (undefined *)((ulong)puVar20 & 0xffffffff00000000 | 0x7fffffff);
          iVar10 = FUN_00343f80(lVar2,0xffffffff,puVar20);
          if (-1 < iVar10) {
            FUN_003106e0(param_1 + 0x7b);
          }
        }
        else {
          iVar10 = strcmp(pcVar23,"grpc.http2.max_pings_without_data");
          if (iVar10 == 0) {
            unaff_x27 = unaff_x27 & 0xffffffff00000000 | 0x7fffffff;
            uVar11 = FUN_00343f80(lVar2,DAT_04494a34,unaff_x27);
            *(undefined4 *)(param_1 + 0x1c9) = uVar11;
          }
          else {
            iVar10 = strcmp(pcVar23,"grpc.http2.max_ping_strikes");
            if (iVar10 == 0) {
              uVar11 = FUN_00343f80(lVar2,DAT_04494a30);
              *(undefined4 *)((long)param_1 + 0xe4c) = uVar11;
            }
            else {
              iVar10 = strcmp(pcVar23,"grpc.http2.min_time_between_pings_ms");
              if (iVar10 == 0) {
                iVar10 = FUN_00343f80(lVar2,DAT_04494a38);
                param_1[0x1ca] = (long)iVar10;
              }
              else {
                iVar10 = strcmp(pcVar23,"grpc.http2.min_ping_interval_without_data_ms");
                if (iVar10 == 0) {
                  iVar10 = FUN_00343f80(lVar2,DAT_04494a3c);
                  param_1[0x1cb] = (long)iVar10;
                }
                else {
                  iVar10 = strcmp(pcVar23,"grpc.http2.write_buffer_size");
                  if (iVar10 == 0) {
                    uVar11 = FUN_00343f80(lVar2,0);
                    *(undefined4 *)(param_1 + 0x1af) = uVar11;
                  }
                  else {
                    iVar10 = strcmp(pcVar23,"grpc.http2.bdp_probe");
                    if (iVar10 == 0) {
                    /* try { // try from 00306dbc to 003071db has its CatchHandler @ 0030758c */
                      local_d4 = FUN_003440e0(lVar2,1);
                    }
                    else {
                      iVar10 = strcmp(pcVar23,"grpc.keepalive_time_ms");
                      if (iVar10 == 0) {
                        puVar5 = &DAT_04494a24;
                        if (*(char *)(param_1 + 0x189) != '\0') {
                          puVar5 = &DAT_04494a20;
                        }
                        iVar10 = FUN_00343f80(lVar2,(ulong)*puVar5 | 0x100000000);
                        lVar2 = 0x7fffffffffffffff;
                        if (iVar10 != 0x7fffffff) {
                          lVar2 = (long)iVar10;
                        }
                        param_1[0x268] = lVar2;
                      }
                      else {
                        iVar10 = strcmp(pcVar23,"grpc.keepalive_timeout_ms");
                        if (iVar10 == 0) {
                          puVar6 = &DAT_04494a2c;
                          if (*(char *)(param_1 + 0x189) != '\0') {
                            puVar6 = &DAT_04494a28;
                          }
                          iVar10 = FUN_00343f80(lVar2,*puVar6);
                          lVar2 = 0x7fffffffffffffff;
                          if (iVar10 != 0x7fffffff) {
                            lVar2 = (long)iVar10;
                          }
                          param_1[0x269] = lVar2;
                        }
                        else {
                          iVar10 = strcmp(pcVar23,"grpc.keepalive_permit_without_calls");
                          if (iVar10 == 0) {
                            iVar10 = FUN_00343f80(lVar2,0);
                            *(bool *)(param_1 + 0x26a) = iVar10 != 0;
                          }
                          else {
                            iVar10 = strcmp(pcVar23,"grpc.optimization_target");
                            if (iVar10 != 0) {
                              iVar10 = strcmp(pcVar23,"grpc.enable_channelz");
                              if (iVar10 == 0) {
                                local_ec = FUN_003440e0(lVar2,1);
                              }
                              else {
                                iVar10 = strcmp(pcVar23,"grpc.max_concurrent_streams");
                                if (iVar10 == 0) {
                                  lVar15 = 0;
                                }
                                else {
                                  iVar10 = strcmp(pcVar23,"grpc.http2.hpack_table_size.decoder");
                                  if (iVar10 == 0) {
                                    lVar15 = 1;
                                  }
                                  else {
                                    iVar10 = strcmp(pcVar23,"grpc.max_metadata_size");
                                    if (iVar10 == 0) {
                                      lVar15 = 2;
                                    }
                                    else {
                                      iVar10 = strcmp(pcVar23,"grpc.http2.max_frame_size");
                                      if (iVar10 == 0) {
                                        lVar15 = 3;
                                      }
                                      else {
                                        iVar10 = strcmp(pcVar23,"grpc.http2.true_binary");
                                        if (iVar10 == 0) {
                                          lVar15 = 4;
                                        }
                                        else {
                                          iVar10 = strcmp(pcVar23,"grpc.http2.lookahead_bytes");
                                          if (iVar10 != 0) goto LAB_00306dcc;
                                          lVar15 = 5;
                                        }
                                      }
                                    }
                                  }
                                }
                                if (((&DAT_044948c8)[lVar15 * 0x20 + (param_4 & 1)] != '\0') &&
                                   (uVar12 = FUN_00343f80(lVar2,(&DAT_044948bc)[lVar15 * 4]),
                                   -1 < (int)uVar12)) {
                                  uVar16 = (ulong)*(uint *)(lVar15 * 0x20 + 0x44948b8);
                                  uVar17 = *(uint *)(PTR_PTR_047ccab0 + uVar16 * 0x20 + 0xc);
                                  if ((uVar17 <= uVar12) &&
                                     (uVar17 = *(uint *)(PTR_PTR_047ccab0 + uVar16 * 0x20 + 0x10),
                                     uVar12 <= *(uint *)(PTR_PTR_047ccab0 + uVar16 * 0x20 + 0x10)))
                                  {
                                    uVar17 = uVar12;
                                  }
                                  if (uVar17 != *(uint *)((long)param_1 + uVar16 * 4 + 0xdb0)) {
                                    *(uint *)((long)param_1 + uVar16 * 4 + 0xdb0) = uVar17;
                                    *(undefined1 *)((long)param_1 + 0xd8c) = 1;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_00306dcc:
      uVar21 = uVar21 + 1;
      lVar22 = lVar22 + 0x20;
    } while (uVar21 < *param_2);
    if ((local_ec & 1) != 0) goto LAB_0030723c;
  }
  local_d4 = local_d4 & 1;
LAB_003072cc:
  plVar1 = param_1 + 0x20a;
  if (*PTR_DAT_047ccaa8 == '\0') {
                    /* try { // try from 003072f8 to 00307303 has its CatchHandler @ 0030754c */
    FUN_0030e2bc(plVar1,param_1);
    local_d4 = 0;
  }
  else {
                    /* try { // try from 003072e4 to 003072f3 has its CatchHandler @ 00307570 */
    FUN_0030e2f8(plVar1,param_1,local_d4);
  }
  param_1[0x1cc] = 0x8000000000000000;
  param_1[0x1dd] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x1cd) = 0;
  *(undefined1 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1de) = 0;
  if (param_1[0x268] == 0x7fffffffffffffff) {
    *(undefined4 *)((long)param_1 + 0x1354) = 3;
  }
  else {
    *(undefined4 *)((long)param_1 + 0x1354) = 0;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar9) {
        *plVar18 = *plVar18 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    param_1[0x24d] = &LAB_0030b430;
    param_1[0x24e] = param_1;
    param_1[0x24f] = 0;
    if (PTR___tls_init_047cc328 != (undefined *)0x0) {
                    /* try { // try from 00307370 to 00307373 has its CatchHandler @ 00307584 */
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar22 = tpidr_el0;
                    /* try { // try from 0030738c to 00307427 has its CatchHandler @ 00307584 */
    lVar22 = FUN_0035347c(*(undefined8 *)(lVar22 + 0x48));
    FUN_00360550(param_1 + 0x25c,param_1[0x268] + lVar22,param_1 + 0x24c);
  }
  if (local_d4 != 0) {
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar9) {
        *plVar18 = *plVar18 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    piVar14 = (int *)(**(code **)(*plVar1 + 0x48))(plVar1);
    if (*piVar14 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00307548 to 0030754b has its CatchHandler @ 00307584 */
      abort();
    }
    *piVar14 = 1;
    piVar14[2] = 0;
    piVar14[3] = 0;
    param_1[0x232] = &LAB_0030c260;
    param_1[0x233] = param_1;
    param_1[0x234] = 0;
    param_1[0x236] = &LAB_0030c2c0;
    param_1[0x237] = param_1;
    param_1[0x238] = 0;
    FUN_0030c180(param_1,param_1 + 0x231,param_1 + 0x235);
                    /* try { // try from 00307430 to 0030744f has its CatchHandler @ 0030757c */
    auVar24 = (**(code **)(*plVar1 + 0x28))(plVar1);
    local_80 = auVar24._0_8_;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,auVar24._8_4_);
    FUN_003075e0(&local_80,param_1,0);
  }
  if (*(int *)(param_1 + 7) == 1) {
    *(undefined4 *)(param_1 + 7) = 2;
    cVar8 = *(char *)(param_1 + 0x23c);
  }
  else {
    if (*(int *)(param_1 + 7) == 0) {
      *(undefined4 *)(param_1 + 7) = 1;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar9) {
          *plVar18 = *plVar18 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      param_1[0x1a] = &LAB_003080d0;
      param_1[0x1b] = param_1;
      param_1[0x1c] = 0;
                    /* try { // try from 00307490 to 003074f7 has its CatchHandler @ 00307584 */
      thunk_FUN_00350da0(param_1[5],param_1 + 0x19,0);
    }
    cVar8 = *(char *)(param_1 + 0x23c);
  }
  if (cVar8 == '\0') {
    *(undefined1 *)(param_1 + 0x23c) = 1;
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar9) {
        *plVar18 = *plVar18 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    param_1[0x23e] = &LAB_0030c630;
    param_1[0x23f] = param_1;
    param_1[0x240] = 0;
    uVar13 = FUN_00350f70(param_1[2]);
    FUN_00359df0(uVar13,0,param_1 + 0x23d);
  }
  return;
}


