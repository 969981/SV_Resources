/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036ff90; name: FUN_0036ff90
 */


undefined8
FUN_0036ff90(int *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,ulong *param_5,
            undefined8 param_6,undefined8 param_7,long param_8)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  int *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  ulong local_68;
  
  puVar6 = PTR___tls_init_047cc338;
  if (param_8 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  if (PTR___tls_init_047cc338 != (undefined *)0x0) {
    grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
  }
  lVar5 = tpidr_el0;
  if (*(long *)(lVar5 + 0x50) == 0) {
    if ((*PTR_DAT_047cc330 & 1) != 0) {
      FUN_0038e994();
    }
    if (puVar6 != (undefined *)0x0) {
      grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
    }
    *(undefined8 **)(lVar5 + 0x50) = &local_e0;
  }
  puVar7 = PTR___tls_init_047cc328;
  puVar6 = PTR_DAT_047cc320;
  local_f4 = 0;
  local_100 = 1;
  local_f8 = 0xffffffff;
  local_128 = PTR_DAT_047cc320 + 0x10;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  local_f0 = 0;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
                    /* try { // try from 0037006c to 0037006f has its CatchHandler @ 00370258 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  local_e8 = *(undefined8 *)(lVar5 + 0x48);
  if ((*PTR_DAT_047cc330 & 1) != 0) {
                    /* try { // try from 00370234 to 00370237 has its CatchHandler @ 00370258 */
    FUN_0038e994();
  }
  if (puVar7 != (undefined *)0x0) {
                    /* try { // try from 0037009c to 0037009f has its CatchHandler @ 00370258 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar5 + 0x48) = &local_128;
  uVar11 = *param_5;
  uVar2 = (uint)uVar11 & 3;
  if (1 < uVar2) {
    plVar1 = (long *)((uVar11 & 0xfffffffffffffffc) + 0x40);
    if (uVar2 == 2) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  uVar10 = param_5[1];
  uVar2 = (uint)uVar10 & 3;
  if (1 < uVar2) {
    plVar1 = (long *)((uVar10 & 0xfffffffffffffffc) + 0x40);
    if (uVar2 == 2) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
                    /* try { // try from 00370138 to 003701af has its CatchHandler @ 00370264 */
  uStack_78 = FUN_00353230(param_6,param_7);
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00370254 to 00370257 has its CatchHandler @ 00370264 */
    abort();
  }
  if (uVar10 < 4) {
    local_80 = 1;
  }
  else {
    local_80 = 2;
    local_68 = uVar10;
  }
  puStack_88 = &local_70;
  uStack_b8 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_c0 = param_1;
  local_b0 = param_2;
  local_a8 = param_3;
  local_a0 = param_4;
  local_70 = uVar11;
  lVar9 = FUN_0036adb0(&local_c0,&local_c8);
  if (lVar9 != 0) {
    FUN_00352b40("call_create",lVar9,"external/com_google_grpc_base/src/core/lib/surface/channel.cc"
                 ,0x17c);
  }
  local_128 = puVar6 + 0x10;
  local_100 = local_100 | 1;
                    /* try { // try from 003701c8 to 003701db has its CatchHandler @ 00370260 */
  FUN_003533a0(&local_128);
  uVar8 = local_e8;
  if (puVar7 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar5 + 0x48) = uVar8;
  if ((((byte)local_100 >> 2 & 1) == 0) && ((*PTR_DAT_047cc330 & 1) != 0)) {
                    /* try { // try from 0037023c to 0037023f has its CatchHandler @ 00370260 */
    FUN_0038ea60();
  }
  FUN_002708dc(&local_e0);
  return local_c8;
}


