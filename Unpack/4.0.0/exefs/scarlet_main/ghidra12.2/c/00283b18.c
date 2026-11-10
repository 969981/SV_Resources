/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00283b18; name: FUN_00283b18
 */


void FUN_00283b18(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar4 = PTR___tls_init_047cc328;
  if (*(char *)(param_1 + 0x68) != '\0') {
    return;
  }
  lVar8 = *(long *)(param_1 + 200);
  lVar6 = tpidr_el0;
  if (-1 < lVar8) {
    lVar9 = *(long *)(param_1 + 0xc0);
    if (PTR___tls_init_047cc328 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar5 = FUN_0035347c(*(undefined8 *)(lVar6 + 0x48));
    lVar5 = (lVar9 + lVar8) - lVar5;
    if (0 < lVar5) {
      if (puVar4 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      FUN_0035347c(*(undefined8 *)(lVar6 + 0x48));
      *(undefined1 *)(param_1 + 0x68) = 1;
      plVar1 = (long *)(param_1 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined1 **)(param_1 + 0xa8) = &LAB_00283ca4;
      *(long *)(param_1 + 0xb0) = param_1;
      if (puVar4 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar6 = FUN_0035347c(*(undefined8 *)(lVar6 + 0x48));
      FUN_00360550(param_1 + 0x70,lVar6 + lVar5,param_1 + 0xa0);
      return;
    }
  }
  plVar1 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (*(char *)(param_1 + 0x41) != '\0') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined1 *)(param_1 + 0x41) = 1;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined1 **)(param_1 + 0x50) = &LAB_00283f5c;
  *(long *)(param_1 + 0x58) = param_1;
  FUN_003582b0(*(undefined8 *)(param_1 + 0x28),"https",*(undefined8 *)(param_1 + 0x38),
               param_1 + 0x48,param_1 + 0x100);
  if (puVar4 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  uVar7 = FUN_0035347c(*(undefined8 *)(lVar6 + 0x48));
  *(undefined8 *)(param_1 + 200) = uVar7;
  return;
}


