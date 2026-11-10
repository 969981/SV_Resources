/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00371280; name: FUN_00371280
 */


void FUN_00371280(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar2 = PTR___tls_init_047cc338;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
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
    *(undefined8 **)(lVar1 + 0x50) = &local_48;
  }
  puVar3 = PTR___tls_init_047cc328;
  puVar2 = PTR_DAT_047cc320;
  local_5c = 0;
  local_68 = 1;
  local_60 = 0xffffffff;
  local_90 = PTR_DAT_047cc320 + 0x10;
  uStack_80 = 0;
  local_88 = 0;
  local_58 = 0;
  uStack_70 = 0;
  local_78 = 0;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
                    /* try { // try from 00371338 to 0037133b has its CatchHandler @ 0037146c */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  local_50 = *(undefined8 *)(lVar1 + 0x48);
  if ((*puVar4 & 1) != 0) {
                    /* try { // try from 003713f4 to 003713f7 has its CatchHandler @ 0037146c */
    FUN_0038e994();
  }
  if (puVar3 != (undefined *)0x0) {
                    /* try { // try from 00371360 to 00371363 has its CatchHandler @ 0037146c */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar1 + 0x48) = &local_90;
                    /* try { // try from 00371384 to 0037138b has its CatchHandler @ 00371410 */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x18))(param_1);
  local_90 = puVar2 + 0x10;
  local_68 = local_68 | 1;
                    /* try { // try from 003713a0 to 003713b3 has its CatchHandler @ 00371480 */
  FUN_003533a0(&local_90);
  uVar5 = local_50;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar1 + 0x48) = uVar5;
  if ((((byte)local_68 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 003713fc to 003713ff has its CatchHandler @ 00371480 */
    FUN_0038ea60();
  }
  FUN_002708dc(&local_48);
  return;
}


