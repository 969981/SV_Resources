/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c93c0; name: FUN_002c93c0
 */


undefined8 FUN_002c93c0(ulong *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  size_t sVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  undefined1 *local_110;
  long lStack_108;
  undefined1 auStack_100 [32];
  byte local_e0;
  undefined5 uStack_df;
  undefined2 uStack_da;
  char cStack_d8;
  undefined2 uStack_d7;
  char cStack_d5;
  undefined2 uStack_d4;
  undefined1 local_d2;
  undefined1 uStack_d1;
  undefined8 local_d0;
  byte local_b0 [16];
  ulong local_a0;
  undefined1 auStack_98 [32];
  long *local_78;
  long *local_70;
  long *local_68;
  
  local_68 = (long *)0x0;
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
                    /* try { // try from 002c93ec to 002c93ef has its CatchHandler @ 002c98d0 */
  FUN_002caa98();
  uVar10 = *param_1;
  if ((uVar10 & 1) == 0) {
    puVar12 = param_1 + 1;
  }
  else {
    puVar12 = (ulong *)param_1[1];
  }
  local_e0 = 0x14;
  uStack_d7 = 0x6972;
  cStack_d5 = 0;
  uStack_df = s_server_uri_03c6166b._0_5_;
  uStack_da = s_server_uri_03c6166b._5_2_;
  cStack_d8 = s_server_uri_03c6166b[7];
                    /* try { // try from 002c942c to 002c9437 has its CatchHandler @ 002c98bc */
  lVar4 = FUN_002ca988(param_2 + 0x20,&local_e0);
  lVar13 = (uVar10 >> 1) - 1;
  puVar11 = puVar12 + lVar13 * 0x11;
  if ((local_e0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_d0);
  }
  if (param_2 + 0x28 == lVar4) {
                    /* try { // try from 002c94b8 to 002c9513 has its CatchHandler @ 002c98b4 */
    FUN_003673f0(&local_e0,"\"server_uri\" field not present");
    lVar4 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                         ,0xac,&local_e0,0,0);
    if (local_70 < local_68) goto LAB_002c9550;
    lVar13 = (long)local_70 - (long)local_78 >> 3;
    uVar10 = lVar13 + 1;
    if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
LAB_002c9574:
    uVar8 = (long)local_68 - (long)local_78 >> 2;
    if (uVar10 <= uVar8) {
      uVar10 = uVar8;
    }
    if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar10 << 3);
    }
    plVar1 = (long *)(lVar5 + lVar13 * 8);
    plVar2 = (long *)(lVar5 + uVar10 * 8);
    *plVar1 = lVar4;
    sVar7 = (long)local_70 - (long)local_78;
    plVar9 = (long *)((long)plVar1 - sVar7);
    if (0 < (long)sVar7) {
      memcpy(plVar9,local_78,sVar7);
    }
    bVar3 = local_78 != (long *)0x0;
    local_78 = plVar9;
    local_70 = plVar1 + 1;
    local_68 = plVar2;
    if (bVar3) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
  }
  else if (*(int *)(lVar4 + 0x38) == 4) {
    if ((*puVar11 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,puVar12[lVar13 * 0x11 + 2]);
    }
    uVar8 = *(ulong *)(lVar4 + 0x48);
    uVar10 = *(ulong *)(lVar4 + 0x40);
    puVar11[2] = *(ulong *)(lVar4 + 0x50);
    puVar11[1] = uVar8;
    *puVar11 = uVar10;
    *(undefined2 *)(lVar4 + 0x40) = 0;
  }
  else {
                    /* try { // try from 002c9514 to 002c953f has its CatchHandler @ 002c98b0 */
    FUN_003673f0(&local_e0,"\"server_uri\" field is not a string");
    lVar4 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                         ,0xaf,&local_e0,0,0);
    if (local_68 <= local_70) {
      lVar13 = (long)local_70 - (long)local_78 >> 3;
      uVar10 = lVar13 + 1;
      if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 002c9898 to 002c989f has its CatchHandler @ 002c98b0 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      goto LAB_002c9574;
    }
LAB_002c9550:
    *local_70 = lVar4;
    local_70 = local_70 + 1;
  }
  local_e0 = 0x1a;
  uStack_df._0_1_ = s_channel_creds_03c4db1c[0];
  uStack_df._1_1_ = s_channel_creds_03c4db1c[1];
  uStack_df._2_1_ = s_channel_creds_03c4db1c[2];
  uStack_df._3_1_ = s_channel_creds_03c4db1c[3];
  uStack_df._4_1_ = s_channel_creds_03c4db1c[4];
  uStack_da = s_channel_creds_03c4db1c._5_2_;
  cStack_d8 = s_channel_creds_03c4db1c[7];
  uStack_d7 = s_channel_creds_03c4db1c._8_2_;
  cStack_d5 = s_channel_creds_03c4db1c[10];
  uStack_d4 = s_channel_creds_03c4db1c._11_2_;
  local_d2 = 0;
                    /* try { // try from 002c961c to 002c9627 has its CatchHandler @ 002c98b8 */
  lVar4 = FUN_002ca988(param_2 + 0x20,&local_e0);
  if ((local_e0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_d0);
  }
  if (param_2 + 0x28 == lVar4) goto LAB_002c9780;
  if (*(int *)(lVar4 + 0x38) == 6) {
                    /* try { // try from 002c9658 to 002c969b has its CatchHandler @ 002c98a8 */
    lVar4 = FUN_002c991c(param_1,(int *)(lVar4 + 0x38),puVar11);
    if (lVar4 == 0) goto LAB_002c9780;
    if (local_70 != local_68) goto LAB_002c96d8;
    lVar13 = (long)local_70 - (long)local_78 >> 3;
    uVar10 = lVar13 + 1;
    if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
  }
  else {
                    /* try { // try from 002c969c to 002c96c7 has its CatchHandler @ 002c98ac */
    FUN_003673f0(&local_e0,"\"channel_creds\" field is not an array");
    lVar4 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                         ,0xb7,&local_e0,0,0);
    if (local_70 < local_68) {
LAB_002c96d8:
      *local_70 = lVar4;
      local_70 = local_70 + 1;
      goto LAB_002c9780;
    }
    lVar13 = (long)local_70 - (long)local_78 >> 3;
    uVar10 = lVar13 + 1;
    if (uVar10 >> 0x3d != 0) {
                    /* try { // try from 002c98a0 to 002c98a7 has its CatchHandler @ 002c98ac */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
  }
  uVar8 = (long)local_68 - (long)local_78 >> 2;
  if (uVar10 <= uVar8) {
    uVar10 = uVar8;
  }
  if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
    uVar10 = 0x1fffffffffffffff;
  }
  if (uVar10 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar10 << 3);
  }
  plVar1 = (long *)(lVar5 + lVar13 * 8);
  plVar2 = (long *)(lVar5 + uVar10 * 8);
  *plVar1 = lVar4;
  sVar7 = (long)local_70 - (long)local_78;
  plVar9 = (long *)((long)plVar1 - sVar7);
  if (0 < (long)sVar7) {
    memcpy(plVar9,local_78,sVar7);
  }
  bVar3 = local_78 != (long *)0x0;
  local_78 = plVar9;
  local_70 = plVar1 + 1;
  local_68 = plVar2;
  if (bVar3) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
LAB_002c9780:
  if (local_78 == local_70) {
    uVar6 = 0;
  }
  else {
    local_e0 = 3;
    uStack_df._0_1_ = 'S';
    uStack_df._1_1_ = -0x39;
    uStack_df._2_1_ = '\x03';
    uStack_df._3_1_ = '\0';
    uStack_df._4_1_ = '\0';
    uStack_da = 0;
    cStack_d8 = '\x15';
    uStack_d7 = 0;
    cStack_d5 = '\0';
    uStack_d4 = 0;
    local_d2 = 0;
    uStack_d1 = 0;
                    /* try { // try from 002c97a4 to 002c97cb has its CatchHandler @ 002c98f4 */
    lStack_108 = FUN_00394c40(param_3,auStack_100);
    lStack_108 = lStack_108 - (long)auStack_100;
    local_110 = auStack_100;
    FUN_003959c0(local_b0,&local_e0,&local_110);
    uVar10 = (ulong)local_b0 | 1;
    if ((local_b0[0] & 1) != 0) {
      uVar10 = local_a0;
    }
                    /* try { // try from 002c97e0 to 002c9803 has its CatchHandler @ 002c98d4 */
    FUN_00367770(auStack_98,uVar10);
    uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_bootstrap.cc"
                         ,0xc1,auStack_98,0,0);
    if ((local_b0[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_a0);
    }
    if (local_70 != local_78) {
      uVar10 = 0;
      do {
                    /* try { // try from 002c9834 to 002c983b has its CatchHandler @ 002c98f8 */
        uVar6 = FUN_00352130(uVar6,local_78[uVar10]);
        uVar10 = uVar10 + 1;
      } while (uVar10 < (ulong)((long)local_70 - (long)local_78 >> 3));
    }
  }
  if (local_78 != (long *)0x0) {
    local_70 = local_78;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return uVar6;
}


