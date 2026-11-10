/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033c12c; name: FUN_0033c12c
 */


void FUN_0033c12c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 local_38;
  long local_30;
  undefined8 uStack_28;
  
  if (((*(char *)(param_1 + 0x91) != '\0') || (*(char *)(param_1 + 0x90) != '\0')) ||
     (*(long *)(param_1 + 0x88) != 0)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  plVar1 = (long *)(param_1 + 0x40);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 != 0) {
    if (*(char *)(param_1 + 0x108) == '\0') {
      *(undefined1 *)(param_1 + 0x108) = 1;
      local_38 = *(undefined8 *)(param_1 + 0x18);
      lVar5 = *(long *)(param_1 + 0x100);
      if (PTR___tls_init_047cc328 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar4 = tpidr_el0;
      lVar4 = FUN_0035347c(*(undefined8 *)(lVar4 + 0x48));
      lVar4 = lVar4 + lVar5;
      lVar5 = FUN_003434ac(param_1 + 200);
      uStack_28 = *(undefined8 *)(param_1 + 0x10);
      *(long *)(param_1 + 0xf8) = lVar5;
      local_30 = lVar4;
      if (lVar4 <= lVar5) {
        local_30 = lVar5;
      }
      FUN_0033c32c(param_1,1);
      (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
                (*(long **)(param_1 + 0x48),&local_38,param_1 + 0x50,param_1 + 0x68);
      return;
    }
    if (*(char *)(param_1 + 0x160) == '\0') {
      *(undefined1 *)(param_1 + 0x160) = 1;
      if (PTR___tls_init_047cc328 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar5 = tpidr_el0;
      FUN_0035347c(*(undefined8 *)(lVar5 + 0x48));
      *(undefined8 *)(param_1 + 0x158) = 0;
      *(undefined **)(param_1 + 0x148) = PTR_LAB_047cccb0;
      *(long *)(param_1 + 0x150) = param_1;
      FUN_00360550(param_1 + 0x110,*(undefined8 *)(param_1 + 0xf8),param_1 + 0x140);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


