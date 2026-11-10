/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002708dc; name: FUN_002708dc
 */


void FUN_002708dc(byte *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar2 = PTR___tls_init_047cc338;
  if (PTR___tls_init_047cc338 != (undefined *)0x0) {
    grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
  }
  lVar1 = tpidr_el0;
  if (*(byte **)(lVar1 + 0x50) == param_1) {
    while (puVar3 = *(undefined8 **)(param_1 + 8), puVar3 != (undefined8 *)0x0) {
      lVar4 = puVar3[2];
      *(long *)(param_1 + 8) = lVar4;
      if (lVar4 == 0) {
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
      }
                    /* try { // try from 00270924 to 00270927 has its CatchHandler @ 00270990 */
      (*(code *)*puVar3)(puVar3,*(undefined4 *)((long)puVar3 + 0xc));
    }
    if (puVar2 != (undefined *)0x0) {
      grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
    }
    *(undefined8 *)(lVar1 + 0x50) = 0;
    if (((*param_1 & 1) == 0) && ((*PTR_DAT_047cc330 & 1) != 0)) {
                    /* try { // try from 00270984 to 00270987 has its CatchHandler @ 0027098c */
      FUN_0038ea60();
    }
  }
  return;
}


