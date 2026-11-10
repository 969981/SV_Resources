/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003671a0; name: FUN_003671a0
 */


void FUN_003671a0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
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
  
  puVar4 = PTR___tls_init_047cc328;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar3 = PTR_DAT_047cc320;
  lVar8 = tpidr_el0;
  if (*(long *)(lVar8 + 0x48) == 0) {
    local_44 = 0;
    local_50 = 1;
    local_48 = 0xffffffff;
    local_78 = PTR_DAT_047cc320 + 0x10;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    local_40 = 0;
    local_38 = 0;
    if (puVar4 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
      local_38 = *(undefined8 *)(lVar8 + 0x48);
    }
    puVar5 = PTR_DAT_047cc330;
    if ((*PTR_DAT_047cc330 & 1) != 0) {
      FUN_0038e994();
    }
    if (puVar4 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    *(undefined ***)(lVar8 + 0x48) = &local_78;
    param_1 = (undefined8 *)*param_1;
    if ((param_1 != (undefined8 *)0x0) && (plVar7 = (long *)*param_1, plVar7 != (long *)0x0)) {
      do {
        lVar9 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 + -1 == 0) {
                    /* try { // try from 003672c4 to 003672c7 has its CatchHandler @ 0036733c */
        (*(code *)param_1[3])(param_1[4]);
      }
    }
    local_78 = puVar3 + 0x10;
    local_50 = local_50 | 1;
                    /* try { // try from 003672dc to 003672ef has its CatchHandler @ 0036739c */
    FUN_003533a0(&local_78);
    uVar6 = local_38;
    if (puVar4 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    *(undefined8 *)(lVar8 + 0x48) = uVar6;
    if ((((byte)local_50 >> 2 & 1) == 0) && ((*puVar5 & 1) != 0)) {
                    /* try { // try from 00367334 to 00367337 has its CatchHandler @ 0036739c */
      FUN_0038ea60();
    }
  }
  else {
    param_1 = (undefined8 *)*param_1;
    if ((param_1 != (undefined8 *)0x0) && (plVar7 = (long *)*param_1, plVar7 != (long *)0x0)) {
      do {
        lVar8 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00367218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_1[3])(param_1[4]);
        return;
      }
    }
  }
  return;
}


