/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0056175c; name: FUN_0056175c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056175c(long *param_1,undefined8 param_2,undefined8 param_3,char *param_4,char *param_5,
                 long *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ostream oVar9;
  undefined6 uVar10;
  undefined1 uVar11;
  iostream *piVar12;
  long *plVar13;
  size_t sVar14;
  long lVar15;
  char *pcVar16;
  ostream *poVar17;
  long lVar18;
  code *pcVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  long *plVar27;
  void *pvVar28;
  ulong *puVar29;
  ulong uVar30;
  undefined8 *local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  undefined *local_1f0;
  long *local_1e8;
  undefined1 *local_1e0;
  undefined **local_1d0;
  ulong local_1b8;
  long *local_1b0;
  char *local_1a8;
  long *plStack_1a0;
  ulong local_198;
  long *local_190;
  void *local_188;
  iostream local_180;
  undefined7 uStack_17f;
  char cStack_178;
  undefined6 uStack_177;
  char cStack_171;
  ostream oStack_170;
  undefined6 uStack_16f;
  undefined1 uStack_169;
  long *local_168;
  iostream *local_160;
  long *local_158;
  undefined1 local_150;
  ulong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  long *plStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined *local_f8 [17];
  undefined8 local_70;
  undefined4 local_68;
  
  *param_1 = *param_6;
  lVar18 = param_6[1];
  param_1[1] = lVar18;
  if (lVar18 != 0) {
    plVar13 = (long *)(lVar18 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  plVar13 = (long *)FUN_01cf7e20();
  param_1[0xc] = (long)plVar13;
  sVar14 = strlen(param_4);
  if (0xffffffffffffffef < sVar14) {
                    /* try { // try from 005622b8 to 005622bf has its CatchHandler @ 0056240c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar14 < 0x17) {
    pvVar28 = (void *)((long)param_1 + 0x49);
    *(char *)(param_1 + 9) = (char)((int)sVar14 << 1);
    if (sVar14 != 0) goto LAB_00561838;
  }
  else {
    uVar30 = sVar14 + 0x10 & 0xfffffffffffffff0;
    pvVar28 = (void *)(**(code **)(*plVar13 + 0x10))(plVar13,uVar30,1);
    param_1[9] = uVar30 | 1;
    param_1[10] = sVar14;
    param_1[0xb] = (long)pvVar28;
LAB_00561838:
    memcpy(pvVar28,param_4,sVar14);
  }
  *(undefined1 *)((long)pvVar28 + sVar14) = 0;
  plVar13 = (long *)FUN_01cf7e20();
  param_1[0x10] = (long)plVar13;
  sVar14 = strlen(param_5);
  if (0xffffffffffffffef < sVar14) {
                    /* try { // try from 005622c0 to 005622c7 has its CatchHandler @ 005623e0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar14 < 0x17) {
    pvVar28 = (void *)((long)param_1 + 0x69);
    *(char *)(param_1 + 0xd) = (char)((int)sVar14 << 1);
    if (sVar14 != 0) goto LAB_005618bc;
  }
  else {
    uVar30 = sVar14 + 0x10 & 0xfffffffffffffff0;
    pvVar28 = (void *)(**(code **)(*plVar13 + 0x10))(plVar13,uVar30,1);
    param_1[0xd] = uVar30 | 1;
    param_1[0xe] = sVar14;
    param_1[0xf] = (long)pvVar28;
LAB_005618bc:
    memcpy(pvVar28,param_5,sVar14);
  }
  *(undefined1 *)((long)pvVar28 + sVar14) = 0;
  puVar29 = (ulong *)(param_1 + 0x11);
  *puVar29 = 0;
  param_1[0x12] = 0;
  local_160 = &local_180;
  local_1e8 = *(long **)(*param_1 + 0x238);
  oStack_170 = (ostream)0x30;
  uStack_16f = 0x5625;
  uStack_169 = 0;
  local_1d0 = &local_1f0;
  local_1e0 = &LAB_00562960;
  local_198 = 0;
  local_190 = (long *)0x0;
  local_1f0 = PTR_DAT_047cba30 + 0x10;
  local_180 = SUB81(PTR_DAT_047cdfe0 + 0x10,0);
  uStack_17f = (undefined7)((ulong)(PTR_DAT_047cdfe0 + 0x10) >> 8);
  cStack_178 = (char)local_1e8;
  uStack_177 = (undefined6)((ulong)local_1e8 >> 8);
  cStack_171 = (char)((ulong)local_1e8 >> 0x38);
  local_208 = (undefined8 *)0x2bf20;
  FUN_001fc328(&local_1b8,param_1,&DAT_03c886bc,param_3,&local_180,&local_1f0,&local_208,&local_198)
  ;
  plVar13 = local_1b0;
  uVar30 = local_1b8;
  local_1b8 = 0;
  local_1b0 = (long *)0x0;
  *puVar29 = uVar30;
  plVar27 = (long *)param_1[0x12];
  param_1[0x12] = (long)plVar13;
  if (plVar27 != (long *)0x0) {
    plVar13 = plVar27 + 1;
    do {
      lVar18 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1b0 != (long *)0x0) {
    plVar13 = local_1b0 + 1;
    do {
      lVar18 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*local_1b0 + 0x10))(local_1b0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_190 != (long *)0x0) {
    plVar13 = local_190 + 1;
    do {
      lVar18 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*local_190 + 0x10))(local_190);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1d0 != (undefined **)0x0) {
    if (local_1d0 == &local_1f0) {
      pcVar19 = *(code **)(*local_1d0 + 0x10);
    }
    else {
      pcVar19 = *(code **)(*local_1d0 + 0x18);
    }
    (*pcVar19)();
  }
  if (local_160 != (iostream *)0x0) {
    if (local_160 == &local_180) {
      pcVar19 = *(code **)(*(long *)local_160 + 0x10);
    }
    else {
      pcVar19 = *(code **)(*(long *)local_160 + 0x18);
    }
    (*pcVar19)();
  }
  local_208 = (undefined8 *)0x0;
  local_200 = (undefined8 *)0x0;
  local_1f8 = (undefined8 *)0x0;
  plVar13 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  puVar1 = PTR_DAT_047cdfe8;
  if (plVar13 == (long *)0x0) {
LAB_00561ad0:
    if (local_200 < local_1f8) goto LAB_00561adc;
LAB_00561b00:
    lVar18 = (long)local_200 - (long)local_208 >> 3;
    uVar30 = lVar18 + 1;
    if (uVar30 >> 0x3d != 0) {
                    /* try { // try from 005622d0 to 005622d7 has its CatchHandler @ 005622d8 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    uVar21 = (long)local_1f8 - (long)local_208 >> 2;
    if (uVar30 <= uVar21) {
      uVar30 = uVar21;
    }
    if (0xffffffffffffffe < (ulong)((long)local_1f8 - (long)local_208 >> 3)) {
      uVar30 = 0x1fffffffffffffff;
    }
    if (uVar30 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = FUN_0049e770(PTR_FUN_047cba38,uVar30 << 3);
    }
    puVar24 = local_208;
    puVar20 = (undefined8 *)(lVar15 + lVar18 * 8);
    local_1f8 = (undefined8 *)(lVar15 + uVar30 * 8);
    puVar22 = puVar20 + 1;
    *puVar20 = plVar13;
    puVar1 = PTR_LAB_047cba48;
    puVar26 = local_200;
    while (PTR_LAB_047cba48 = puVar1, puVar25 = local_200, puVar26 != local_208) {
      puVar26 = puVar26 + -1;
      uVar23 = *puVar26;
      *puVar26 = 0;
      puVar20 = puVar20 + -1;
      *puVar20 = uVar23;
      puVar1 = PTR_LAB_047cba48;
    }
    while (local_208 = puVar20, local_200 = puVar22, puVar25 != puVar24) {
      puVar25 = puVar25 + -1;
      puVar26 = (undefined8 *)*puVar25;
      *puVar25 = 0;
      puVar22 = local_200;
      puVar20 = local_208;
      if (puVar26 != (undefined8 *)0x0) {
        (**(code **)*puVar26)(puVar26);
        FUN_0049e790(puVar1,puVar26);
        puVar22 = local_200;
        puVar20 = local_208;
      }
    }
    if (puVar24 != (undefined8 *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48,puVar24);
    }
  }
  else {
    lVar18 = param_1[0x11];
    lVar15 = param_1[0x12];
    if (lVar15 != 0) {
      plVar27 = (long *)(lVar15 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar4) {
          *plVar27 = *plVar27 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      *plVar13 = (long)(puVar1 + 0x10);
      plVar13[1] = lVar18;
      plVar13[2] = lVar15;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar4) {
          *plVar27 = *plVar27 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      std::__shared_weak_count::__release_weak();
      goto LAB_00561ad0;
    }
    *plVar13 = (long)(PTR_DAT_047cdfe8 + 0x10);
    plVar13[1] = lVar18;
    plVar13[2] = 0;
    if (local_1f8 <= local_200) goto LAB_00561b00;
LAB_00561adc:
    *local_200 = plVar13;
    local_200 = local_200 + 1;
  }
                    /* try { // try from 00561bec to 00561bf3 has its CatchHandler @ 005624b0 */
  FUN_0027329c(&local_1f0);
  local_180 = (iostream)0x2c;
  uStack_177._0_1_ = s_grpc_keepalive_time_ms_03c88d7f[8];
  uStack_177._1_1_ = s_grpc_keepalive_time_ms_03c88d7f[9];
  uStack_177._2_1_ = s_grpc_keepalive_time_ms_03c88d7f[10];
  uStack_177._3_1_ = s_grpc_keepalive_time_ms_03c88d7f[0xb];
  uStack_177._4_1_ = s_grpc_keepalive_time_ms_03c88d7f[0xc];
  uStack_177._5_1_ = s_grpc_keepalive_time_ms_03c88d7f[0xd];
  uStack_17f = s_grpc_keepalive_time_ms_03c88d7f._0_7_;
  cStack_178 = s_grpc_keepalive_time_ms_03c88d7f[7];
  cStack_171 = s_grpc_keepalive_time_ms_03c88d7f[0xe];
  oStack_170 = s_grpc_keepalive_time_ms_03c88d7f[0xf];
  uStack_16f._0_1_ = s_grpc_keepalive_time_ms_03c88d7f[0x10];
  uStack_16f._1_1_ = s_grpc_keepalive_time_ms_03c88d7f[0x11];
  uStack_16f._2_1_ = s_grpc_keepalive_time_ms_03c88d7f[0x12];
  uStack_16f._3_1_ = s_grpc_keepalive_time_ms_03c88d7f[0x13];
  uStack_16f._4_1_ = s_grpc_keepalive_time_ms_03c88d7f[0x14];
  uStack_16f._5_1_ = s_grpc_keepalive_time_ms_03c88d7f[0x15];
  uStack_169 = 0;
                    /* try { // try from 00561c1c to 00561c2b has its CatchHandler @ 00562490 */
  FUN_00273d14(&local_1f0,&local_180,10000);
  if (((byte)local_180 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT17(uStack_169,CONCAT61(uStack_16f,oStack_170)));
  }
  pcVar16 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
  uVar6 = s_grpc_keepalive_timeout_ms_03becdff._0_8_;
  oStack_170 = SUB81(pcVar16,0);
  uStack_16f = (undefined6)((ulong)pcVar16 >> 8);
  uStack_169 = (undefined1)((ulong)pcVar16 >> 0x38);
  uVar23 = CONCAT71(s_grpc_keepalive_timeout_ms_03becdff._9_7_,
                    s_grpc_keepalive_timeout_ms_03becdff[8]);
  cStack_178 = (char)_UNK_03caa7a8;
  uStack_177 = (undefined6)((ulong)_UNK_03caa7a8 >> 8);
  cStack_171 = (char)((ulong)_UNK_03caa7a8 >> 0x38);
  local_180 = SUB81(_DAT_03caa7a0,0);
  uStack_17f = (undefined7)((ulong)_DAT_03caa7a0 >> 8);
  uVar5 = CONCAT17(s_grpc_keepalive_timeout_ms_03becdff[0x10],
                   s_grpc_keepalive_timeout_ms_03becdff._9_7_);
  *(undefined8 *)(pcVar16 + 0x11) = s_grpc_keepalive_timeout_ms_03becdff._17_8_;
  *(undefined8 *)(pcVar16 + 9) = uVar5;
  *(undefined8 *)(pcVar16 + 8) = uVar23;
  *(undefined8 *)pcVar16 = uVar6;
  pcVar16[0x19] = '\0';
                    /* try { // try from 00561c80 to 00561c8f has its CatchHandler @ 0056248c */
  FUN_00273d14(&local_1f0,&local_180,20000);
  if (((byte)local_180 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT17(uStack_169,CONCAT61(uStack_16f,oStack_170)));
  }
  pcVar16 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x30);
  uVar7 = s_grpc_keepalive_permit_without_ca_03c825d9._24_8_;
  uVar6 = s_grpc_keepalive_permit_without_ca_03c825d9._16_8_;
  uVar5 = s_grpc_keepalive_permit_without_ca_03c825d9._8_8_;
  uVar23 = s_grpc_keepalive_permit_without_ca_03c825d9._0_8_;
  oStack_170 = SUB81(pcVar16,0);
  uStack_16f = (undefined6)((ulong)pcVar16 >> 8);
  uStack_169 = (undefined1)((ulong)pcVar16 >> 0x38);
  cStack_178 = (char)_UNK_03cab068;
  uStack_177 = (undefined6)((ulong)_UNK_03cab068 >> 8);
  cStack_171 = (char)((ulong)_UNK_03cab068 >> 0x38);
  local_180 = SUB81(_DAT_03cab060,0);
  uStack_17f = (undefined7)((ulong)_DAT_03cab060 >> 8);
  pcVar16[0x23] = '\0';
  *(undefined8 *)(pcVar16 + 8) = uVar5;
  *(undefined8 *)pcVar16 = uVar23;
  *(undefined8 *)(pcVar16 + 0x18) = uVar7;
  *(undefined8 *)(pcVar16 + 0x10) = uVar6;
  pcVar16[0x1f] = 'a';
  pcVar16[0x20] = 'l';
  pcVar16[0x21] = 'l';
  pcVar16[0x22] = 's';
                    /* try { // try from 00561ce8 to 00561cf7 has its CatchHandler @ 00562488 */
  FUN_00273d14(&local_1f0,&local_180,1);
  if (((byte)local_180 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT17(uStack_169,CONCAT61(uStack_16f,oStack_170)));
  }
  pcVar16 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x30);
  uVar7 = s_grpc_http2_max_pings_without_dat_03c2b6a3._24_8_;
  uVar6 = s_grpc_http2_max_pings_without_dat_03c2b6a3._16_8_;
  uVar5 = s_grpc_http2_max_pings_without_dat_03c2b6a3._8_8_;
  uVar23 = s_grpc_http2_max_pings_without_dat_03c2b6a3._0_8_;
  oStack_170 = SUB81(pcVar16,0);
  uStack_16f = (undefined6)((ulong)pcVar16 >> 8);
  uStack_169 = (undefined1)((ulong)pcVar16 >> 0x38);
  cStack_178 = (char)_UNK_03cab708;
  uStack_177 = (undefined6)((ulong)_UNK_03cab708 >> 8);
  cStack_171 = (char)((ulong)_UNK_03cab708 >> 0x38);
  local_180 = SUB81(_DAT_03cab700,0);
  uStack_17f = (undefined7)((ulong)_DAT_03cab700 >> 8);
  pcVar16[0x20] = 'a';
  pcVar16[0x21] = '\0';
  *(undefined8 *)(pcVar16 + 8) = uVar5;
  *(undefined8 *)pcVar16 = uVar23;
  *(undefined8 *)(pcVar16 + 0x18) = uVar7;
  *(undefined8 *)(pcVar16 + 0x10) = uVar6;
                    /* try { // try from 00561d4c to 00561d5b has its CatchHandler @ 00562484 */
  FUN_00273d14(&local_1f0,&local_180,0);
  if (((byte)local_180 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT17(uStack_169,CONCAT61(uStack_16f,oStack_170)));
  }
  pcVar16 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x30);
  uVar7 = s_grpc_http2_min_time_between_ping_03c88d96._24_8_;
  uVar6 = s_grpc_http2_min_time_between_ping_03c88d96._16_8_;
  uVar5 = s_grpc_http2_min_time_between_ping_03c88d96._8_8_;
  uVar23 = s_grpc_http2_min_time_between_ping_03c88d96._0_8_;
  oStack_170 = SUB81(pcVar16,0);
  uStack_16f = (undefined6)((ulong)pcVar16 >> 8);
  uStack_169 = (undefined1)((ulong)pcVar16 >> 0x38);
  cStack_178 = (char)_UNK_03cab078;
  uStack_177 = (undefined6)((ulong)_UNK_03cab078 >> 8);
  cStack_171 = (char)((ulong)_UNK_03cab078 >> 0x38);
  local_180 = SUB81(_DAT_03cab070,0);
  uStack_17f = (undefined7)((ulong)_DAT_03cab070 >> 8);
  pcVar16[0x20] = 's';
  pcVar16[0x21] = '_';
  pcVar16[0x22] = 'm';
  pcVar16[0x23] = 's';
  pcVar16[0x24] = '\0';
  *(undefined8 *)(pcVar16 + 8) = uVar5;
  *(undefined8 *)pcVar16 = uVar23;
  *(undefined8 *)(pcVar16 + 0x18) = uVar7;
  *(undefined8 *)(pcVar16 + 0x10) = uVar6;
                    /* try { // try from 00561db4 to 00561dc3 has its CatchHandler @ 00562480 */
  FUN_00273d14(&local_1f0,&local_180,5000);
  if (((byte)local_180 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT17(uStack_169,CONCAT61(uStack_16f,oStack_170)));
  }
  puVar8 = PTR_DAT_047cbcc8;
  local_f8[0] = PTR_DAT_047cbcd0 + 0x40;
  puVar1 = PTR_DAT_047cbcc8 + 0x40;
  cStack_178 = 0;
  uStack_177 = 0;
  cStack_171 = 0;
  oStack_170 = SUB81(puVar1,0);
  oVar9 = oStack_170;
  uStack_16f = (undefined6)((ulong)puVar1 >> 8);
  uVar10 = uStack_16f;
  uStack_169 = (undefined1)((ulong)puVar1 >> 0x38);
  uVar11 = uStack_169;
  local_180 = SUB81(PTR_DAT_047cbcd0 + 0x18,0);
  uStack_17f = (undefined7)((ulong)(PTR_DAT_047cbcd0 + 0x18) >> 8);
                    /* try { // try from 00561e14 to 00561e1f has its CatchHandler @ 00562478 */
  std::ios_base::init((ios *)local_f8);
  local_70 = 0;
  local_68 = 0xffffffff;
  local_f8[0] = puVar8 + 0x68;
  local_180 = SUB81(puVar8 + 0x18,0);
  uStack_17f = (undefined7)((ulong)(puVar8 + 0x18) >> 8);
  oStack_170 = oVar9;
  uStack_16f = uVar10;
  uStack_169 = uVar11;
                    /* try { // try from 00561e44 to 00561e4b has its CatchHandler @ 00562470 */
  std::streambuf::streambuf((streambuf *)&local_168);
  puVar1 = PTR_DAT_047cbcd8;
  local_168 = (long *)(PTR_DAT_047cbcd8 + 0x10);
  plStack_110 = (long *)FUN_01cf7e20();
  local_118 = 0;
  local_108 = 0;
  local_100 = 0x18;
  local_128 = 0;
  uStack_120 = 0;
                    /* try { // try from 00561e7c to 00561eab has its CatchHandler @ 005624b4 */
  poVar17 = std::__put_character_sequence<char,std::char_traits<char>>
                      (&oStack_170,
                       "\n{\n  \"methodConfig\": [ {\n    \"name\": [\n      { \"service\": \"",0x3b
                      );
  poVar17 = std::__put_character_sequence<char,std::char_traits<char>>
                      (poVar17,"nn.npln.gamesync.v1.Gamesync",0x1c);
  std::__put_character_sequence<char,std::char_traits<char>>
            (poVar17,
             "\" }\n    ],\n    \"retryPolicy\": {\n      \"maxAttempts\": 5,\n      \"initialBackoff\": \"1s\",\n      \"maxBackoff\": \"120s\",\n      \"backoffMultiplier\": 1.6,\n      \"retryableStatusCodes\": [ \"UNAVAILABLE\" ]\n    }\n  } ]\n}\n"
             ,0xd0);
                    /* try { // try from 00561eac to 00561ebb has its CatchHandler @ 0056246c */
  FUN_00213290(&local_1b8,(streambuf *)&local_168);
  pcVar16 = (char *)((ulong)&local_1b8 | 1);
  if ((local_1b8 & 1) != 0) {
    pcVar16 = local_1a8;
  }
  plVar13 = (long *)strlen(pcVar16);
  if ((long *)0xffffffffffffffef < plVar13) {
                    /* try { // try from 005622c8 to 005622cf has its CatchHandler @ 005623d8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (plVar13 < (long *)0x17) {
    local_198 = CONCAT71(local_198._1_7_,(char)((int)plVar13 << 1));
    pvVar28 = (void *)((ulong)&local_198 | 1);
    if (plVar13 == (long *)0x0) goto LAB_00561f44;
  }
  else {
    pvVar28 = (void *)FUN_0049e770(PTR_FUN_047cba38,(ulong)(plVar13 + 2) & 0xfffffffffffffff0);
    local_198 = (ulong)(plVar13 + 2) & 0xfffffffffffffff0 | 1;
    local_190 = plVar13;
    local_188 = pvVar28;
  }
  memcpy(pvVar28,pcVar16,(size_t)plVar13);
LAB_00561f44:
  *(undefined1 *)((long)pvVar28 + (long)plVar13) = 0;
                    /* try { // try from 00561f48 to 00561f53 has its CatchHandler @ 00562428 */
  FUN_00273e64(&local_1f0,&local_198);
  if ((local_198 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_188);
  }
  if ((local_1b8 & 1) != 0) {
    (**(code **)(*plStack_1a0 + 0x18))(plStack_1a0,local_1a8,local_1b8 & 0xfffffffffffffffe,1);
  }
  local_f8[0] = puVar8 + 0x68;
  puVar2 = puVar8 + 0x40;
  local_180 = SUB81(puVar8 + 0x18,0);
  uStack_17f = (undefined7)((ulong)(puVar8 + 0x18) >> 8);
  local_168 = (long *)(puVar1 + 0x10);
  oStack_170 = SUB81(puVar2,0);
  uStack_16f = (undefined6)((ulong)puVar2 >> 8);
  uStack_169 = (undefined1)((ulong)puVar2 >> 0x38);
  if ((local_128 & 1) != 0) {
    (**(code **)(*plStack_110 + 0x18))(plStack_110,local_118,local_128 & 0xfffffffffffffffe,1);
  }
  std::streambuf::~streambuf((streambuf *)&local_168);
  std::iostream::~iostream(&local_180);
  std::ios::~ios((ios *)local_f8);
  FUN_00262630(&local_1b8,param_2,&local_208,&local_1f0);
  FUN_00273abc(&local_1f0);
  FUN_00256e08(&local_1f0,param_1);
  FUN_00256860(&local_180,&local_1f0,&local_1b8);
  lVar18 = CONCAT71(uStack_17f,local_180);
  lVar15 = CONCAT17(cStack_171,CONCAT61(uStack_177,cStack_178));
  local_180 = (iostream)0x0;
  uStack_17f = 0;
  cStack_178 = 0;
  uStack_177 = 0;
  cStack_171 = 0;
  plVar13 = (long *)param_1[3];
  param_1[2] = lVar18;
  param_1[3] = lVar15;
  if (plVar13 != (long *)0x0) {
    plVar27 = plVar13 + 1;
    do {
      lVar18 = *plVar27;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar4) {
        *plVar27 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar13 = local_168;
  lVar18 = CONCAT17(uStack_169,CONCAT61(uStack_16f,oStack_170));
  oStack_170 = (ostream)0x0;
  uStack_16f = 0;
  uStack_169 = 0;
  local_168 = (long *)0x0;
  plVar27 = (long *)param_1[5];
  param_1[4] = lVar18;
  param_1[5] = (long)plVar13;
  if (plVar27 != (long *)0x0) {
    plVar13 = plVar27 + 1;
    do {
      lVar18 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar13 = local_158;
  piVar12 = local_160;
  local_160 = (iostream *)0x0;
  local_158 = (long *)0x0;
  plVar27 = (long *)param_1[7];
  param_1[6] = (long)piVar12;
  param_1[7] = (long)plVar13;
  if (plVar27 != (long *)0x0) {
    plVar13 = plVar27 + 1;
    do {
      lVar18 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      std::__shared_weak_count::__release_weak();
    }
  }
  *(undefined1 *)(param_1 + 8) = local_150;
  if (local_158 != (long *)0x0) {
    plVar13 = local_158 + 1;
    do {
      lVar18 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*local_158 + 0x10))(local_158);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_168 != (long *)0x0) {
    plVar13 = local_168 + 1;
    do {
      lVar18 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*local_168 + 0x10))(local_168);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar13 = (long *)CONCAT17(cStack_171,CONCAT61(uStack_177,cStack_178));
  if (plVar13 != (long *)0x0) {
    plVar27 = plVar13 + 1;
    do {
      lVar18 = *plVar27;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar4) {
        *plVar27 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00203d34(*puVar29 + 0x20,param_1 + 2);
  if (local_1e8 != (long *)0x0) {
    plVar13 = local_1e8 + 1;
    do {
      lVar18 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*local_1e8 + 0x10))(local_1e8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_1b0 != (long *)0x0) {
    plVar13 = local_1b0 + 1;
    do {
      lVar18 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*local_1b0 + 0x10))(local_1b0);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar26 = local_208;
  puVar1 = PTR_LAB_047cba48;
  puVar20 = local_200;
  if (local_208 != (undefined8 *)0x0) {
    while (puVar20 != puVar26) {
      puVar20 = puVar20 + -1;
      puVar24 = (undefined8 *)*puVar20;
      *puVar20 = 0;
      if (puVar24 != (undefined8 *)0x0) {
        (**(code **)*puVar24)(puVar24);
        FUN_0049e790(puVar1,puVar24);
      }
    }
    local_200 = puVar26;
    FUN_0049e790(PTR_LAB_047cba48,local_208);
  }
  return;
}


