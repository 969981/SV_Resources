/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00282aa0; name: FUN_00282aa0
 */


void FUN_00282aa0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = param_1 + 0x33;
  do {
    lVar6 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
    puVar3 = PTR___tls_init_047cc328;
  } while (cVar1 != '\0');
  if (lVar6 + -1 == 0) {
    if (PTR___tls_init_047cc328 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar6 = tpidr_el0;
    uVar4 = FUN_0035347c(*(undefined8 *)(lVar6 + 0x48));
    plVar5 = param_1 + 0x34;
    param_1[0x35] = uVar4;
    do {
      while (*plVar5 == 1) {
        while (*plVar5 == 1) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = 2;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') {
            return;
          }
        }
        ClearExclusiveLocal();
      }
    } while (*plVar5 != 0);
    plVar5 = (long *)*param_1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (puVar3 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar6 = FUN_0035347c(*(undefined8 *)(lVar6 + 0x48));
    FUN_00360550(param_1 + 0x12,param_1[0x18] + lVar6,param_1 + 0x1b);
    param_1[0x34] = 3;
  }
  return;
}


