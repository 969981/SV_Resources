/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036f390; name: FUN_0036f390
 */


void FUN_0036f390(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
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
                    /* try { // try from 0036f44c to 0036f44f has its CatchHandler @ 0036f54c */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  local_60 = *(undefined8 *)(lVar1 + 0x48);
  if ((*puVar4 & 1) != 0) {
                    /* try { // try from 0036f52c to 0036f52f has its CatchHandler @ 0036f54c */
    FUN_0038e994();
  }
  if (puVar3 != (undefined *)0x0) {
                    /* try { // try from 0036f474 to 0036f477 has its CatchHandler @ 0036f54c */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar1 + 0x48) = &local_a0;
                    /* try { // try from 0036f490 to 0036f497 has its CatchHandler @ 0036f548 */
  lVar6 = FUN_0037b7c0(0);
  *(undefined1 *)(lVar6 + 0x68) = 1;
                    /* try { // try from 0036f4a8 to 0036f4bf has its CatchHandler @ 0036f558 */
  plVar7 = (long *)FUN_00344390(param_1 + 0x78,0);
  (**(code **)(*plVar7 + 8))(plVar7,lVar6);
  local_a0 = puVar2 + 0x10;
  local_78 = local_78 | 1;
                    /* try { // try from 0036f4d4 to 0036f4e7 has its CatchHandler @ 0036f554 */
  FUN_003533a0(&local_a0);
  uVar5 = local_60;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar1 + 0x48) = uVar5;
  if ((((byte)local_78 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 0036f534 to 0036f537 has its CatchHandler @ 0036f554 */
    FUN_0038ea60();
  }
  FUN_002708dc(&local_58);
  return;
}


