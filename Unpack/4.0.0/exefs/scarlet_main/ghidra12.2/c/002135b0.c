/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002135b0; name: FUN_002135b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002135b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  byte local_40;
  undefined7 uStack_3f;
  char cStack_38;
  undefined6 uStack_37;
  char cStack_31;
  char cStack_30;
  undefined6 uStack_2f;
  undefined1 uStack_29;
  
                    /* try { // try from 002135c0 to 002135c7 has its CatchHandler @ 002137f8 */
  FUN_0027329c(param_1);
  local_40 = 0x2c;
  uStack_37._0_1_ = s_grpc_keepalive_time_ms_03c88d7f[8];
  uStack_37._1_1_ = s_grpc_keepalive_time_ms_03c88d7f[9];
  uStack_37._2_1_ = s_grpc_keepalive_time_ms_03c88d7f[10];
  uStack_37._3_1_ = s_grpc_keepalive_time_ms_03c88d7f[0xb];
  uStack_37._4_1_ = s_grpc_keepalive_time_ms_03c88d7f[0xc];
  uStack_37._5_1_ = s_grpc_keepalive_time_ms_03c88d7f[0xd];
  uStack_3f = s_grpc_keepalive_time_ms_03c88d7f._0_7_;
  cStack_38 = s_grpc_keepalive_time_ms_03c88d7f[7];
  cStack_31 = s_grpc_keepalive_time_ms_03c88d7f[0xe];
  cStack_30 = s_grpc_keepalive_time_ms_03c88d7f[0xf];
  uStack_2f._0_1_ = s_grpc_keepalive_time_ms_03c88d7f[0x10];
  uStack_2f._1_1_ = s_grpc_keepalive_time_ms_03c88d7f[0x11];
  uStack_2f._2_1_ = s_grpc_keepalive_time_ms_03c88d7f[0x12];
  uStack_2f._3_1_ = s_grpc_keepalive_time_ms_03c88d7f[0x13];
  uStack_2f._4_1_ = s_grpc_keepalive_time_ms_03c88d7f[0x14];
  uStack_2f._5_1_ = s_grpc_keepalive_time_ms_03c88d7f[0x15];
  uStack_29 = 0;
                    /* try { // try from 002135ec to 002135fb has its CatchHandler @ 002137cc */
  FUN_00273d14(param_1,&local_40,10000);
  if ((local_40 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT17(uStack_29,CONCAT61(uStack_2f,cStack_30)));
  }
  pcVar5 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x20);
  uVar3 = s_grpc_keepalive_timeout_ms_03becdff._0_8_;
  uVar1 = CONCAT71(s_grpc_keepalive_timeout_ms_03becdff._9_7_,
                   s_grpc_keepalive_timeout_ms_03becdff[8]);
  cStack_30 = (char)pcVar5;
  uStack_2f = (undefined6)((ulong)pcVar5 >> 8);
  uStack_29 = (undefined1)((ulong)pcVar5 >> 0x38);
  cStack_38 = (char)_UNK_03caa7a8;
  uStack_37 = (undefined6)((ulong)_UNK_03caa7a8 >> 8);
  cStack_31 = (char)((ulong)_UNK_03caa7a8 >> 0x38);
  local_40 = (byte)_DAT_03caa7a0;
  uStack_3f = (undefined7)((ulong)_DAT_03caa7a0 >> 8);
  uVar2 = CONCAT17(s_grpc_keepalive_timeout_ms_03becdff[0x10],
                   s_grpc_keepalive_timeout_ms_03becdff._9_7_);
  *(undefined8 *)(pcVar5 + 0x11) = s_grpc_keepalive_timeout_ms_03becdff._17_8_;
  *(undefined8 *)(pcVar5 + 9) = uVar2;
  *(undefined8 *)(pcVar5 + 8) = uVar1;
  *(undefined8 *)pcVar5 = uVar3;
  pcVar5[0x19] = '\0';
                    /* try { // try from 00213650 to 0021365f has its CatchHandler @ 002137c8 */
  FUN_00273d14(param_1,&local_40,20000);
  if ((local_40 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT17(uStack_29,CONCAT61(uStack_2f,cStack_30)));
  }
  pcVar5 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x30);
  uVar4 = s_grpc_keepalive_permit_without_ca_03c825d9._24_8_;
  uVar3 = s_grpc_keepalive_permit_without_ca_03c825d9._16_8_;
  uVar2 = s_grpc_keepalive_permit_without_ca_03c825d9._8_8_;
  uVar1 = s_grpc_keepalive_permit_without_ca_03c825d9._0_8_;
  cStack_30 = (char)pcVar5;
  uStack_2f = (undefined6)((ulong)pcVar5 >> 8);
  uStack_29 = (undefined1)((ulong)pcVar5 >> 0x38);
  cStack_38 = (char)_UNK_03cab068;
  uStack_37 = (undefined6)((ulong)_UNK_03cab068 >> 8);
  cStack_31 = (char)((ulong)_UNK_03cab068 >> 0x38);
  local_40 = (byte)_DAT_03cab060;
  uStack_3f = (undefined7)((ulong)_DAT_03cab060 >> 8);
  pcVar5[0x23] = '\0';
  *(undefined8 *)(pcVar5 + 8) = uVar2;
  *(undefined8 *)pcVar5 = uVar1;
  *(undefined8 *)(pcVar5 + 0x18) = uVar4;
  *(undefined8 *)(pcVar5 + 0x10) = uVar3;
  pcVar5[0x1f] = 'a';
  pcVar5[0x20] = 'l';
  pcVar5[0x21] = 'l';
  pcVar5[0x22] = 's';
                    /* try { // try from 002136b8 to 002136c7 has its CatchHandler @ 002137c4 */
  FUN_00273d14(param_1,&local_40,1);
  if ((local_40 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT17(uStack_29,CONCAT61(uStack_2f,cStack_30)));
  }
  pcVar5 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x30);
  uVar4 = s_grpc_http2_max_pings_without_dat_03c2b6a3._24_8_;
  uVar3 = s_grpc_http2_max_pings_without_dat_03c2b6a3._16_8_;
  uVar2 = s_grpc_http2_max_pings_without_dat_03c2b6a3._8_8_;
  uVar1 = s_grpc_http2_max_pings_without_dat_03c2b6a3._0_8_;
  cStack_30 = (char)pcVar5;
  uStack_2f = (undefined6)((ulong)pcVar5 >> 8);
  uStack_29 = (undefined1)((ulong)pcVar5 >> 0x38);
  cStack_38 = (char)_UNK_03cab708;
  uStack_37 = (undefined6)((ulong)_UNK_03cab708 >> 8);
  cStack_31 = (char)((ulong)_UNK_03cab708 >> 0x38);
  local_40 = (byte)_DAT_03cab700;
  uStack_3f = (undefined7)((ulong)_DAT_03cab700 >> 8);
  pcVar5[0x20] = 'a';
  pcVar5[0x21] = '\0';
  *(undefined8 *)(pcVar5 + 8) = uVar2;
  *(undefined8 *)pcVar5 = uVar1;
  *(undefined8 *)(pcVar5 + 0x18) = uVar4;
  *(undefined8 *)(pcVar5 + 0x10) = uVar3;
                    /* try { // try from 0021371c to 0021372b has its CatchHandler @ 002137c0 */
  FUN_00273d14(param_1,&local_40,0);
  if ((local_40 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT17(uStack_29,CONCAT61(uStack_2f,cStack_30)));
  }
  pcVar5 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x30);
  uVar4 = s_grpc_http2_min_time_between_ping_03c88d96._24_8_;
  uVar3 = s_grpc_http2_min_time_between_ping_03c88d96._16_8_;
  uVar2 = s_grpc_http2_min_time_between_ping_03c88d96._8_8_;
  uVar1 = s_grpc_http2_min_time_between_ping_03c88d96._0_8_;
  cStack_38 = (char)_UNK_03cab078;
  uStack_37 = (undefined6)((ulong)_UNK_03cab078 >> 8);
  cStack_31 = (char)((ulong)_UNK_03cab078 >> 0x38);
  local_40 = (byte)_DAT_03cab070;
  uStack_3f = (undefined7)((ulong)_DAT_03cab070 >> 8);
  cStack_30 = (char)pcVar5;
  uStack_2f = (undefined6)((ulong)pcVar5 >> 8);
  uStack_29 = (undefined1)((ulong)pcVar5 >> 0x38);
  pcVar5[0x20] = 's';
  pcVar5[0x21] = '_';
  pcVar5[0x22] = 'm';
  pcVar5[0x23] = 's';
  pcVar5[0x24] = '\0';
  *(undefined8 *)(pcVar5 + 8) = uVar2;
  *(undefined8 *)pcVar5 = uVar1;
  *(undefined8 *)(pcVar5 + 0x18) = uVar4;
  *(undefined8 *)(pcVar5 + 0x10) = uVar3;
                    /* try { // try from 00213784 to 00213793 has its CatchHandler @ 002137bc */
  FUN_00273d14(param_1,&local_40,40000);
  if ((local_40 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,CONCAT17(uStack_29,CONCAT61(uStack_2f,cStack_30)));
  }
  return;
}


