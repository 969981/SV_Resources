/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002bf1c0; name: FUN_002bf1c0
 */


void FUN_002bf1c0(ulong *param_1,long param_2,undefined8 param_3,undefined8 param_4,void *param_5,
                 ulong param_6,void *param_7,ulong param_8,undefined8 param_9)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined7 uVar4;
  byte bVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  void *pvVar13;
  byte bVar14;
  byte local_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  void *pvStack_150;
  long *local_148;
  long lStack_140;
  long local_138;
  long *plStack_130;
  long local_128;
  long lStack_120;
  undefined8 local_118;
  byte local_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  void *local_100;
  byte local_f8;
  undefined7 local_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  void *local_e8;
  long *local_e0;
  long local_d8;
  long local_d0;
  long *local_c8;
  long local_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined7 local_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = param_3;
  uStack_68 = param_4;
  if (param_5 == (void *)0x0) {
    local_110 = 0;
    uStack_10f = 0;
    uStack_108 = 0;
    uStack_107 = 0;
    local_100 = (void *)0x0;
  }
  else {
    if (0xffffffffffffffef < param_6) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (param_6 < 0x17) {
      local_110 = (byte)((int)param_6 << 1);
      pvVar13 = (void *)((ulong)&local_110 | 1);
      if (param_6 != 0) goto LAB_002bf26c;
    }
    else {
      uVar8 = param_6 + 0x10 & 0xfffffffffffffff0;
      pvVar13 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar8);
      local_110 = (byte)uVar8 | 1;
      uStack_10f = (undefined7)(uVar8 >> 8);
      uStack_108 = (undefined1)param_6;
      uStack_107 = (undefined7)(param_6 >> 8);
      local_100 = pvVar13;
LAB_002bf26c:
      memcpy(pvVar13,param_5,param_6);
    }
    *(undefined1 *)((long)pvVar13 + param_6) = 0;
  }
  if (param_7 == (void *)0x0) {
    pvVar13 = (void *)0x0;
    bVar14 = 0;
    uStack_15f = 0;
    uStack_158 = 0;
    uStack_157 = 0;
    goto LAB_002bf2f0;
  }
  if (0xffffffffffffffef < param_8) {
                    /* try { // try from 002bf680 to 002bf687 has its CatchHandler @ 002bf688 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (param_8 < 0x17) {
    local_160 = (byte)((int)param_8 << 1);
    pvVar13 = (void *)((ulong)&local_160 | 1);
    if (param_8 != 0) goto LAB_002bf2d4;
  }
  else {
    uVar8 = param_8 + 0x10 & 0xfffffffffffffff0;
    pvVar13 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar8);
    local_160 = (byte)uVar8 | 1;
    uStack_15f = (undefined7)(uVar8 >> 8);
    uStack_158 = (undefined1)param_8;
    uStack_157 = (undefined7)(param_8 >> 8);
    pvStack_150 = pvVar13;
LAB_002bf2d4:
    memcpy(pvVar13,param_7,param_8);
  }
  *(undefined1 *)((long)pvVar13 + param_8) = 0;
  pvVar13 = pvStack_150;
  bVar14 = local_160;
LAB_002bf2f0:
  pvVar6 = local_100;
  bVar5 = local_110;
  local_80 = uStack_10f;
  uStack_79 = uStack_108;
  uStack_78 = uStack_107;
  local_90 = uStack_15f;
  uStack_89 = uStack_158;
  uStack_88 = uStack_157;
  lStack_120 = 0;
  local_118 = 0;
  lStack_140 = 0;
  local_160 = (byte)&uStack_158;
  bVar3 = local_160;
  uStack_15f = (undefined7)((ulong)&uStack_158 >> 8);
  uVar4 = uStack_15f;
  local_128 = 0;
  local_138 = 0;
  pvStack_150 = (void *)0x0;
  uStack_158 = 0;
  uStack_157 = 0;
  local_148 = &lStack_140;
  plStack_130 = &local_128;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
                    /* try { // try from 002bf364 to 002bf367 has its CatchHandler @ 002bf760 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar7 = tpidr_el0;
                    /* try { // try from 002bf380 to 002bf383 has its CatchHandler @ 002bf760 */
  local_118 = FUN_0035347c(*(undefined8 *)(lVar7 + 0x48));
  uStack_ef = uStack_88;
  uStack_f0 = uStack_89;
  uStack_10f = local_80;
  uStack_108 = uStack_79;
  uStack_107 = uStack_78;
  local_80 = 0;
  uStack_79 = 0;
  uStack_78 = 0;
  local_d0 = (long)pvStack_150;
  local_f7 = local_90;
  local_90 = 0;
  uStack_89 = 0;
  uStack_88 = 0;
  plVar11 = (long *)CONCAT71(uStack_15f,local_160);
  local_d8 = CONCAT71(uStack_157,uStack_158);
  local_e0 = &local_d8;
  if (pvStack_150 != (void *)0x0) {
    *(long **)(local_d8 + 0x10) = local_e0;
    uStack_158 = 0;
    uStack_157 = 0;
    pvStack_150 = (void *)0x0;
    local_160 = bVar3;
    uStack_15f = uVar4;
    local_e0 = plVar11;
  }
  local_c8 = local_148;
  local_c0 = lStack_140;
  local_b8 = local_138;
  if (local_138 == 0) {
    local_c8 = &local_c0;
  }
  else {
    *(long **)(lStack_140 + 0x10) = &local_c0;
    lStack_140 = 0;
    local_138 = 0;
    local_148 = &lStack_140;
  }
  local_b0 = plStack_130;
  local_a8 = local_128;
  local_a0 = lStack_120;
  if (lStack_120 == 0) {
    local_b0 = &local_a8;
  }
  else {
    *(long **)(local_128 + 0x10) = &local_a8;
    local_128 = 0;
    lStack_120 = 0;
    plStack_130 = &local_128;
  }
                    /* try { // try from 002bf45c to 002bf46b has its CatchHandler @ 002bf6d4 */
  local_110 = bVar5;
  local_100 = pvVar6;
  local_f8 = bVar14;
  local_e8 = pvVar13;
  local_98 = local_118;
  lVar7 = FUN_002c64e8(param_2 + 0x138,&local_110,&local_110);
  FUN_002c1bf4(&local_b0,local_a8);
  FUN_002c648c(&local_c8,local_c0);
  FUN_002c1d18(&local_e0,local_d8);
  if ((local_f8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_e8);
  }
  if ((local_110 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_100);
  }
  FUN_002c1bf4(&plStack_130,local_128);
  FUN_002c648c(&local_148,lStack_140);
  FUN_002c1d18(&local_160,CONCAT71(uStack_157,uStack_158));
  plVar11 = (long *)(param_2 + 8);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = *plVar11 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_110 = (byte)param_2;
  uStack_10f = (undefined7)((ulong)param_2 >> 8);
                    /* try { // try from 002bf514 to 002bf527 has its CatchHandler @ 002bf6a4 */
  uVar8 = FUN_002c6ba8(&local_110,&local_70,lVar7 + 0x20,lVar7 + 0x38,param_9);
  plVar11 = (long *)CONCAT71(uStack_10f,local_110);
  *param_1 = uVar8;
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 1;
    do {
      lVar10 = *plVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *plVar12 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar11 + 8))(plVar11);
      FUN_0049e790(PTR_LAB_047cba48,plVar11);
    }
  }
  local_110 = (byte)param_9;
  uStack_10f = (undefined7)((ulong)param_9 >> 8);
                    /* try { // try from 002bf554 to 002bf633 has its CatchHandler @ 002bf7b0 */
  lVar7 = FUN_002c6d9c(lVar7 + 0x80,param_9,&DAT_03cc9966,&local_110,&local_160);
  uVar8 = *param_1;
  plVar11 = (long *)(lVar7 + 0x30);
  if ((long *)*plVar11 == (long *)0x0) {
    plVar12 = plVar11;
  }
  else {
    plVar11 = (long *)*plVar11;
    plVar12 = (long *)(lVar7 + 0x30);
    while( true ) {
      while( true ) {
        if ((ulong)plVar11[4] <= uVar8) break;
        plVar12 = plVar11;
        if ((long *)*plVar11 == (long *)0x0) {
          lVar10 = *plVar11;
          goto joined_r0x002bf5c8;
        }
        plVar11 = (long *)*plVar11;
      }
      if (uVar8 <= (ulong)plVar11[4]) break;
      plVar12 = plVar11 + 1;
      if ((long *)*plVar12 == (long *)0x0) break;
      plVar11 = (long *)*plVar12;
    }
  }
  lVar10 = *plVar12;
joined_r0x002bf5c8:
  if (lVar10 == 0) {
    puVar9 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    puVar9[4] = uVar8;
    puVar9[2] = plVar11;
    *puVar9 = 0;
    puVar9[1] = 0;
    *plVar12 = (long)puVar9;
    if (**(long **)(lVar7 + 0x28) != 0) {
      *(long *)(lVar7 + 0x28) = **(long **)(lVar7 + 0x28);
      puVar9 = (undefined8 *)*plVar12;
    }
    FUN_010108e0(*(undefined8 *)(lVar7 + 0x30),puVar9);
    *(long *)(lVar7 + 0x38) = *(long *)(lVar7 + 0x38) + 1;
  }
  FUN_002b3db0(*(undefined8 *)(param_2 + 0xa0));
  return;
}


