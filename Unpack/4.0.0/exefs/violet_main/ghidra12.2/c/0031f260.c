/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0031f260; name: FUN_0031f260
 */


undefined4 FUN_0031f260(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar7 = (undefined8 *)FUN_003443a0(param_1 + 0x78);
  puVar2 = PTR___tls_init_047cc338;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
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
    *(undefined8 **)(lVar1 + 0x50) = &local_58;
  }
  puVar3 = PTR___tls_init_047cc328;
  puVar2 = PTR_DAT_047cc320;
  local_6c = 0;
  local_78 = 1;
  local_70 = 0xffffffff;
  local_a0 = PTR_DAT_047cc320 + 0x10;
  uStack_90 = 0;
  local_98 = 0;
  local_68 = 0;
  uStack_80 = 0;
  local_88 = 0;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
                    /* try { // try from 0031f328 to 0031f32b has its CatchHandler @ 0031f480 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  local_60 = *(undefined8 *)(lVar1 + 0x48);
  if ((*puVar4 & 1) != 0) {
                    /* try { // try from 0031f400 to 0031f403 has its CatchHandler @ 0031f480 */
    FUN_0038e994();
  }
  if (puVar3 != (undefined *)0x0) {
                    /* try { // try from 0031f350 to 0031f353 has its CatchHandler @ 0031f480 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar1 + 0x48) = &local_a0;
  if ((undefined *)*puVar7 == PTR_PTR_047cc608) {
                    /* try { // try from 0031f380 to 0031f38b has its CatchHandler @ 0031f424 */
    uVar6 = FUN_00321090(puVar7,param_2);
  }
  else {
    uVar6 = 4;
  }
  local_a0 = puVar2 + 0x10;
  local_78 = local_78 | 1;
                    /* try { // try from 0031f3a4 to 0031f3b7 has its CatchHandler @ 0031f494 */
  FUN_003533a0(&local_a0);
  uVar5 = local_60;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar1 + 0x48) = uVar5;
  if ((((byte)local_78 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 0031f410 to 0031f413 has its CatchHandler @ 0031f494 */
    FUN_0038ea60();
  }
  FUN_002708dc(&local_58);
  return uVar6;
}


