/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00353920; name: FUN_00353920
 */


long FUN_00353920(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar4 = PTR___tls_init_047cc338;
  local_48 = 0;
  local_58 = 1;
  uStack_50 = 0;
  if (PTR___tls_init_047cc338 != (undefined *)0x0) {
    grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
  }
  lVar3 = tpidr_el0;
  if (*(long *)(lVar3 + 0x50) == 0) {
    if (puVar4 != (undefined *)0x0) {
      grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
    }
    *(undefined8 **)(lVar3 + 0x50) = &local_58;
  }
  puVar4 = PTR___tls_init_047cc328;
  lVar5 = 0;
  while (param_2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*param_2;
    uVar2 = param_2[3];
    (*(code *)param_2[1])(param_2[2],uVar2);
    if (4 < uVar2) {
      FUN_00350fd0(uVar2);
    }
    if (puVar4 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar5 = lVar5 + 1;
                    /* try { // try from 003539b4 to 003539e7 has its CatchHandler @ 00353a10 */
    FUN_003533a0(*(undefined8 *)(lVar3 + 0x48));
    param_2 = puVar1;
  }
  FUN_002708dc(&local_58);
  return lVar5;
}


