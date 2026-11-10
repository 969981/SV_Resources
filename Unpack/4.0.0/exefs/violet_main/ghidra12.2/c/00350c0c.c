/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00350c0c; name: FUN_00350c0c
 */


void FUN_00350c0c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  
  puVar1 = param_1 + 0xc;
  do {
    uVar7 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar7 + 2;
      cVar2 = ExclusiveMonitorsStatus();
    }
    puVar4 = PTR___tls_init_047cc328;
  } while (cVar2 != '\0');
  if (uVar7 == 1) {
    if (PTR___tls_init_047cc328 == (undefined *)0x0) {
      lVar5 = tpidr_el0;
      lVar5 = *(long *)(lVar5 + 0x48);
      param_1[0xb] = lVar5;
      *param_1 = 0;
      lVar8 = *(long *)(lVar5 + 0x18);
    }
    else {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
      lVar5 = tpidr_el0;
      param_1[0xb] = *(undefined8 *)(lVar5 + 0x48);
      *param_1 = 0;
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
      lVar5 = *(long *)(lVar5 + 0x48);
      lVar8 = *(long *)(lVar5 + 0x18);
      if (puVar4 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
        lVar5 = tpidr_el0;
        lVar5 = *(long *)(lVar5 + 0x48);
      }
    }
    if (lVar8 == 0) {
      *(undefined8 **)(lVar5 + 0x20) = param_1;
      if (puVar4 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
        lVar5 = tpidr_el0;
        lVar5 = *(long *)(lVar5 + 0x48);
      }
      puVar6 = (undefined8 *)(lVar5 + 0x18);
    }
    else {
      **(undefined8 **)(lVar5 + 0x20) = param_1;
      if (puVar4 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
        lVar5 = tpidr_el0;
        lVar5 = *(long *)(lVar5 + 0x48);
      }
      puVar6 = (undefined8 *)(lVar5 + 0x20);
    }
    *puVar6 = param_1;
  }
  else {
    lVar5 = param_1[0xb];
    if (lVar5 != 0) {
      if (PTR___tls_init_047cc328 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = tpidr_el0;
      if (lVar5 != *(long *)(lVar8 + 0x48)) {
        param_1[0xb] = 0;
      }
    }
    if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  *(undefined8 *)(param_2 + 0x18) = param_3;
  FUN_0038f210(param_1 + 1,param_2);
  return;
}


