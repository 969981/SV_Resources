/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00370390; name: FUN_00370390
 */


void FUN_00370390(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 auStack_60 [32];
  
  puVar5 = PTR___tls_init_047cc338;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  if (PTR___tls_init_047cc338 != (undefined *)0x0) {
    grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
  }
  puVar7 = PTR_DAT_047cc330;
  lVar4 = tpidr_el0;
  if (*(long *)(lVar4 + 0x50) == 0) {
    if ((*PTR_DAT_047cc330 & 1) != 0) {
      FUN_0038e994();
    }
    if (puVar5 != (undefined *)0x0) {
      grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
    }
    *(undefined8 **)(lVar4 + 0x50) = &local_78;
  }
  puVar6 = PTR___tls_init_047cc328;
  puVar5 = PTR_DAT_047cc320;
  local_8c = 0;
  local_98 = 1;
  local_90 = 0xffffffff;
  local_c0 = PTR_DAT_047cc320 + 0x10;
  uStack_b0 = 0;
  local_b8 = 0;
  local_88 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
                    /* try { // try from 0037044c to 0037044f has its CatchHandler @ 00370594 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  local_80 = *(undefined8 *)(lVar4 + 0x48);
  if ((*puVar7 & 1) != 0) {
                    /* try { // try from 0037056c to 0037056f has its CatchHandler @ 00370594 */
    FUN_0038e994();
  }
  if (puVar6 != (undefined *)0x0) {
                    /* try { // try from 00370474 to 00370477 has its CatchHandler @ 00370594 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar4 + 0x48) = &local_c0;
                    /* try { // try from 00370490 to 003704eb has its CatchHandler @ 003705a0 */
  lVar8 = FUN_0037b7c0(0);
  FUN_003673f0(auStack_60,"Channel Destroyed");
  uVar9 = FUN_00351340("external/com_google_grpc_base/src/core/lib/surface/channel.cc",0x215,
                       auStack_60,0,0);
  plVar1 = (long *)(param_1 + 0x78);
  *(undefined8 *)(lVar8 + 0x20) = uVar9;
  plVar10 = (long *)FUN_00344390(plVar1,0);
  (**(code **)(*plVar10 + 8))(plVar10,lVar8);
  do {
    lVar8 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 + -1 == 0) {
                    /* try { // try from 00370574 to 0037057b has its CatchHandler @ 003705a0 */
    FUN_0037af30(plVar1);
  }
  local_c0 = puVar5 + 0x10;
  local_98 = local_98 | 1;
                    /* try { // try from 00370514 to 00370527 has its CatchHandler @ 0037059c */
  FUN_003533a0(&local_c0);
  uVar9 = local_80;
  if (puVar6 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar4 + 0x48) = uVar9;
  if ((((byte)local_98 >> 2 & 1) == 0) && ((*puVar7 & 1) != 0)) {
                    /* try { // try from 00370580 to 00370583 has its CatchHandler @ 0037059c */
    FUN_0038ea60();
  }
  FUN_002708dc(&local_78);
  return;
}


