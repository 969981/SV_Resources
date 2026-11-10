/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0036bf20; name: FUN_0036bf20
 */


undefined8 FUN_0036bf20(undefined8 param_1,int param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  
  puVar2 = PTR___tls_init_047cc338;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
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
    *(undefined8 **)(lVar1 + 0x50) = &local_a8;
  }
  puVar3 = PTR___tls_init_047cc328;
  puVar2 = PTR_DAT_047cc320;
  local_bc = 0;
  local_c8 = 1;
  local_c0 = 0xffffffff;
  local_f0 = PTR_DAT_047cc320 + 0x10;
  uStack_e0 = 0;
  local_e8 = 0;
  local_b8 = 0;
  uStack_d0 = 0;
  local_d8 = 0;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
                    /* try { // try from 0036bfec to 0036bfef has its CatchHandler @ 0036c128 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  local_b0 = *(undefined8 *)(lVar1 + 0x48);
  if ((*puVar4 & 1) != 0) {
                    /* try { // try from 0036c108 to 0036c10b has its CatchHandler @ 0036c128 */
    FUN_0038e994();
  }
  if (puVar3 != (undefined *)0x0) {
                    /* try { // try from 0036c014 to 0036c017 has its CatchHandler @ 0036c128 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar1 + 0x48) = &local_f0;
  if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0036c124 to 0036c127 has its CatchHandler @ 0036c134 */
    abort();
  }
                    /* try { // try from 0036c034 to 0036c093 has its CatchHandler @ 0036c134 */
  FUN_00367770(auStack_70,param_3);
  uVar5 = FUN_00351340("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x2d6,auStack_70
                       ,0,0);
  FUN_00367770(auStack_90,param_3);
  uVar5 = FUN_00351fa0(uVar5,5,auStack_90);
  uVar5 = FUN_00351770(uVar5,3,(long)param_2);
  FUN_0036b750(param_1,uVar5);
  local_f0 = puVar2 + 0x10;
  local_c8 = local_c8 | 1;
                    /* try { // try from 0036c0a8 to 0036c0bb has its CatchHandler @ 0036c130 */
  FUN_003533a0(&local_f0);
  uVar5 = local_b0;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar1 + 0x48) = uVar5;
  if ((((byte)local_c8 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 0036c110 to 0036c113 has its CatchHandler @ 0036c130 */
    FUN_0038ea60();
  }
  FUN_002708dc(&local_a8);
  return 0;
}


