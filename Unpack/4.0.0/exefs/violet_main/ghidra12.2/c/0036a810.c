/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036a810; name: FUN_0036a810
 */


void FUN_0036a810(void *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar3 = PTR___tls_init_047cc328;
  puVar2 = PTR_DAT_047cc320;
  if (param_1 != (void *)0x0) {
    local_44 = 0;
    local_50 = 1;
    local_48 = 0xffffffff;
    local_78 = PTR_DAT_047cc320 + 0x10;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    local_40 = 0;
    if (PTR___tls_init_047cc328 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    puVar4 = PTR_DAT_047cc330;
    lVar1 = tpidr_el0;
    local_38 = *(undefined8 *)(lVar1 + 0x48);
    if ((*PTR_DAT_047cc330 & 1) != 0) {
      FUN_0038e994();
    }
    if (puVar3 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    *(undefined ***)(lVar1 + 0x48) = &local_78;
    if (*(int *)((long)param_1 + 8) == 0) {
                    /* try { // try from 0036a8c0 to 0036a8cb has its CatchHandler @ 0036a940 */
      FUN_00368470((long)param_1 + 0x18);
    }
    free(param_1);
    local_78 = puVar2 + 0x10;
    local_50 = local_50 | 1;
                    /* try { // try from 0036a8e0 to 0036a8f3 has its CatchHandler @ 0036a9a0 */
    FUN_003533a0(&local_78);
    uVar5 = local_38;
    if (puVar3 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    *(undefined8 *)(lVar1 + 0x48) = uVar5;
    if ((((byte)local_50 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 0036a938 to 0036a93b has its CatchHandler @ 0036a9a0 */
      FUN_0038ea60();
    }
  }
  return;
}


