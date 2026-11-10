/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0031f4a0; name: FUN_0031f4a0
 */


void FUN_0031f4a0(long param_1,undefined4 param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 auVar11 [16];
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
  
  plVar1 = (long *)(param_1 + 0x78);
  puVar7 = (undefined8 *)FUN_003443a0(plVar1);
  puVar5 = PTR___tls_init_047cc338;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  if (PTR___tls_init_047cc338 != (undefined *)0x0) {
    grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
  }
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
  puVar5 = PTR___tls_init_047cc328;
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
                    /* try { // try from 0031f588 to 0031f58b has its CatchHandler @ 0031f75c */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  local_80 = *(undefined8 *)(lVar4 + 0x48);
  if ((*PTR_DAT_047cc330 & 1) != 0) {
                    /* try { // try from 0031f738 to 0031f73b has its CatchHandler @ 0031f75c */
    FUN_0038e994();
  }
  if (puVar5 != (undefined *)0x0) {
                    /* try { // try from 0031f5b8 to 0031f5bb has its CatchHandler @ 0031f75c */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar4 + 0x48) = &local_c0;
                    /* try { // try from 0031f5d4 to 0031f5f7 has its CatchHandler @ 0031f768 */
  lVar8 = FUN_0038c780(0x150);
  uVar9 = FUN_00371800(param_5,param_6);
  if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0031f754 to 0031f757 has its CatchHandler @ 0031f768 */
    abort();
  }
  FUN_0038db00(lVar8);
  *(undefined8 *)(lVar8 + 0x60) = 0;
  *(undefined1 **)(lVar8 + 0x30) = &LAB_0031f7f0;
  *(long *)(lVar8 + 0x38) = lVar8;
  *(undefined8 *)(lVar8 + 0x40) = 0;
  *(undefined4 *)(lVar8 + 0x20) = 0;
  *(undefined1 **)(lVar8 + 0x50) = &LAB_0031f820;
  *(long *)(lVar8 + 0x58) = lVar8;
  *(undefined4 *)(lVar8 + 0xb8) = param_2;
  *(undefined8 *)(lVar8 + 0xc0) = param_5;
  *(long *)(lVar8 + 0x138) = param_1;
  *(undefined8 *)(lVar8 + 0x140) = 0;
  *(undefined8 *)(lVar8 + 0x148) = param_6;
                    /* try { // try from 0031f630 to 0031f6ab has its CatchHandler @ 0031f76c */
  plVar10 = (long *)FUN_0038c780(0x18);
  plVar10[2] = param_4;
  *plVar10 = lVar8;
  plVar10[1] = param_3;
  *(undefined8 *)(lVar8 + 0x80) = 0;
  *(undefined1 **)(lVar8 + 0x70) = &LAB_0031f850;
  *(long **)(lVar8 + 0x78) = plVar10;
  if ((undefined *)*puVar7 != PTR_PTR_047cc608) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0031f758 to 0031f75b has its CatchHandler @ 0031f76c */
    abort();
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_00371a20(param_5);
  auVar11 = FUN_00357ff0();
  FUN_003211b0(puVar7,auVar11._0_8_,auVar11._8_8_,(undefined4 *)(lVar8 + 0xb8),lVar8 + 0x28,
               lVar8 + 0x68);
  local_c0 = PTR_DAT_047cc320 + 0x10;
  local_98 = local_98 | 1;
                    /* try { // try from 0031f6c8 to 0031f6e3 has its CatchHandler @ 0031f764 */
  FUN_003533a0(&local_c0);
  uVar6 = local_80;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar4 + 0x48) = uVar6;
  if ((((byte)local_98 >> 2 & 1) == 0) && ((*PTR_DAT_047cc330 & 1) != 0)) {
                    /* try { // try from 0031f740 to 0031f743 has its CatchHandler @ 0031f764 */
    FUN_0038ea60();
  }
  FUN_002708dc(&local_78);
  return;
}


