/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036f5c0; name: FUN_0036f5c0
 */


undefined8
FUN_0036f5c0(int *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
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
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68;
  
  puVar2 = PTR___tls_init_047cc338;
  if (param_9 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  if (PTR___tls_init_047cc338 != (undefined *)0x0) {
    grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
  }
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x50) == 0) {
    if ((*PTR_DAT_047cc330 & 1) != 0) {
      FUN_0038e994();
    }
    if (puVar2 != (undefined *)0x0) {
      grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
    }
    *(undefined8 **)(lVar1 + 0x50) = &local_e0;
  }
  puVar2 = PTR___tls_init_047cc328;
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
                    /* try { // try from 0036f6a4 to 0036f6a7 has its CatchHandler @ 0036f850 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  local_e8 = *(undefined8 *)(lVar1 + 0x48);
  if ((*PTR_DAT_047cc330 & 1) != 0) {
                    /* try { // try from 0036f82c to 0036f82f has its CatchHandler @ 0036f850 */
    FUN_0038e994();
  }
  if (puVar2 != (undefined *)0x0) {
                    /* try { // try from 0036f6d4 to 0036f6d7 has its CatchHandler @ 0036f850 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar1 + 0x48) = &local_128;
  puVar3 = PTR_DAT_047cc628;
                    /* try { // try from 0036f6fc to 0036f79f has its CatchHandler @ 0036f85c */
  uVar4 = FUN_00376310(*(undefined8 *)PTR_DAT_047cc628,param_5,0);
  uVar5 = 0;
  if (param_6 != 0) {
    uVar5 = FUN_00376310(*(long *)puVar3 + 0x60,param_6,0);
  }
  uStack_78 = FUN_00353230(param_7,param_8);
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0036f84c to 0036f84f has its CatchHandler @ 0036f85c */
    abort();
  }
  if (uVar5 < 4) {
    local_80 = 1;
  }
  else {
    local_80 = 2;
    local_68 = uVar5;
  }
  puStack_88 = &local_70;
  uStack_b8 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_c0 = param_1;
  local_b0 = param_2;
  local_a8 = param_3;
  local_a0 = param_4;
  local_70 = uVar4;
  lVar6 = FUN_0036adb0(&local_c0,&local_c8);
  if (lVar6 != 0) {
    FUN_00352b40("call_create",lVar6,"external/com_google_grpc_base/src/core/lib/surface/channel.cc"
                 ,0x17c);
  }
  local_128 = PTR_DAT_047cc320 + 0x10;
  local_100 = local_100 | 1;
                    /* try { // try from 0036f7c0 to 0036f7d3 has its CatchHandler @ 0036f858 */
  FUN_003533a0(&local_128);
  uVar4 = local_e8;
  if (puVar2 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar1 + 0x48) = uVar4;
  if ((((byte)local_100 >> 2 & 1) == 0) && ((*PTR_DAT_047cc330 & 1) != 0)) {
                    /* try { // try from 0036f834 to 0036f837 has its CatchHandler @ 0036f858 */
    FUN_0038ea60();
  }
  FUN_002708dc(&local_e0);
  return local_c8;
}


