/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00371850; name: FUN_00371850
 */


void FUN_00371850(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  FUN_00371280();
  puVar5 = PTR___tls_init_047cc328;
  puVar4 = PTR_DAT_047cc320;
  local_54 = 0;
  local_60 = 1;
  local_58 = 0xffffffff;
  local_88 = PTR_DAT_047cc320 + 0x10;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_50 = 0;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar6 = PTR_DAT_047cc330;
  lVar3 = tpidr_el0;
  local_48 = *(undefined8 *)(lVar3 + 0x48);
  if ((*PTR_DAT_047cc330 & 1) != 0) {
    FUN_0038e994();
  }
  if (puVar5 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar3 + 0x48) = &local_88;
  do {
    lVar8 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar8 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar8 + -1 == 0) {
                    /* try { // try from 00371988 to 003719ab has its CatchHandler @ 003719b8 */
    (**(code **)(param_1[2] + 0x20))(param_1 + 10);
    (**(code **)(param_1[3] + 0x30))((long)(param_1 + 10) + *(long *)(param_1[2] + 8));
    free(param_1);
  }
  local_88 = puVar4 + 0x10;
  local_60 = local_60 | 1;
                    /* try { // try from 00371920 to 00371933 has its CatchHandler @ 00371a18 */
  FUN_003533a0(&local_88);
  uVar7 = local_48;
  if (puVar5 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar3 + 0x48) = uVar7;
  if ((((byte)local_60 >> 2 & 1) == 0) && ((*puVar6 & 1) != 0)) {
                    /* try { // try from 003719b0 to 003719b3 has its CatchHandler @ 00371a18 */
    FUN_0038ea60();
  }
  return;
}


