/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036bc40; name: FUN_0036bc40
 */


undefined8 FUN_0036bc40(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
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
  
  puVar4 = PTR___tls_init_047cc338;
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (PTR___tls_init_047cc338 != (undefined *)0x0) {
    grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
  }
  puVar6 = PTR_DAT_047cc330;
  lVar3 = tpidr_el0;
  if (*(long *)(lVar3 + 0x50) == 0) {
    if ((*PTR_DAT_047cc330 & 1) != 0) {
      FUN_0038e994();
    }
    if (puVar4 != (undefined *)0x0) {
      grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
    }
    *(undefined8 **)(lVar3 + 0x50) = &local_58;
  }
  puVar5 = PTR___tls_init_047cc328;
  puVar4 = PTR_DAT_047cc320;
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
                    /* try { // try from 0036bd00 to 0036bd03 has its CatchHandler @ 0036be80 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  local_60 = *(undefined8 *)(lVar3 + 0x48);
  if ((*puVar6 & 1) != 0) {
                    /* try { // try from 0036be60 to 0036be63 has its CatchHandler @ 0036be80 */
    FUN_0038e994();
  }
  if (puVar5 != (undefined *)0x0) {
                    /* try { // try from 0036bd28 to 0036bd2b has its CatchHandler @ 0036be80 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar3 + 0x48) = &local_a0;
  plVar8 = (long *)(param_1 + 0x8b8);
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      goto LAB_0036bdf0;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar8 = (long *)(param_1 + 0x910);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = *plVar8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
                    /* try { // try from 0036bd74 to 0036bde7 has its CatchHandler @ 0036be8c */
  FUN_003505cc(param_1 + 0x10,4);
  plVar8 = (long *)FUN_0038c780(0x48);
  *plVar8 = param_1;
  plVar8[6] = (long)&LAB_0036d000;
  plVar8[7] = (long)plVar8;
  plVar8[8] = 0;
  lVar9 = FUN_0037b8b0(plVar8 + 5);
  *(byte *)(lVar9 + 0x10) = *(byte *)(lVar9 + 0x10) | 0x40;
  *(undefined8 *)(*(long *)(lVar9 + 8) + 0x88) = 4;
  *(long *)(lVar9 + 0x18) = param_1;
  plVar8[2] = (long)&LAB_0036d060;
  plVar8[3] = lVar9;
  plVar8[4] = 0;
  FUN_003504a8(param_1 + 0x10,plVar8 + 1,0,"executing batch");
LAB_0036bdf0:
  local_a0 = puVar4 + 0x10;
  local_78 = local_78 | 1;
                    /* try { // try from 0036be04 to 0036be17 has its CatchHandler @ 0036be88 */
  FUN_003533a0(&local_a0);
  uVar7 = local_60;
  if (puVar5 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar3 + 0x48) = uVar7;
  if ((((byte)local_78 >> 2 & 1) == 0) && ((*puVar6 & 1) != 0)) {
                    /* try { // try from 0036be68 to 0036be6b has its CatchHandler @ 0036be88 */
    FUN_0038ea60();
  }
  FUN_002708dc(&local_58);
  return 0;
}


