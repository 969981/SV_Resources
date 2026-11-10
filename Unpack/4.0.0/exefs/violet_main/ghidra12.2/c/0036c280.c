/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036c280; name: FUN_0036c280
 */


undefined4
FUN_0036c280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  puVar2 = PTR___tls_init_047cc338;
  if (param_5 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    if (PTR___tls_init_047cc338 != (undefined *)0x0) {
      grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
    }
    puVar4 = PTR_DAT_047cc330;
    lVar1 = tpidr_el0;
    if (*(long *)(lVar1 + 0x50) == 0) {
      if ((*PTR_DAT_047cc330 & 1) != 0) {
        FUN_0038e994();
      }
      if (puVar2 != (undefined *)0x0) {
        grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
      }
      *(undefined8 **)(lVar1 + 0x50) = &local_68;
    }
    puVar3 = PTR___tls_init_047cc328;
    puVar2 = PTR_DAT_047cc320;
    local_7c = 0;
    local_88 = 1;
    local_80 = 0xffffffff;
    local_b0 = PTR_DAT_047cc320 + 0x10;
    uStack_a0 = 0;
    local_a8 = 0;
    local_78 = 0;
    uStack_90 = 0;
    local_98 = 0;
    if (PTR___tls_init_047cc328 != (undefined *)0x0) {
                    /* try { // try from 0036c358 to 0036c35b has its CatchHandler @ 0036c4a4 */
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    local_70 = *(undefined8 *)(lVar1 + 0x48);
    if ((*puVar4 & 1) != 0) {
                    /* try { // try from 0036c42c to 0036c42f has its CatchHandler @ 0036c4a4 */
      FUN_0038e994();
    }
    if (puVar3 != (undefined *)0x0) {
                    /* try { // try from 0036c380 to 0036c383 has its CatchHandler @ 0036c4a4 */
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    *(undefined ***)(lVar1 + 0x48) = &local_b0;
                    /* try { // try from 0036c39c to 0036c3b3 has its CatchHandler @ 0036c448 */
    uVar6 = FUN_0036c4c0(param_1,param_2,param_3,param_4,0);
    local_b0 = puVar2 + 0x10;
    local_88 = local_88 | 1;
                    /* try { // try from 0036c3cc to 0036c3df has its CatchHandler @ 0036c4b8 */
    FUN_003533a0(&local_b0);
    uVar5 = local_70;
    if (puVar3 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    *(undefined8 *)(lVar1 + 0x48) = uVar5;
    if ((((byte)local_88 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 0036c434 to 0036c437 has its CatchHandler @ 0036c4b8 */
      FUN_0038ea60();
    }
    FUN_002708dc(&local_68);
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}


