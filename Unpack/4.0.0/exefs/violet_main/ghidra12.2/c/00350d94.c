/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00350d94; name: thunk_FUN_00350da0
 */


void thunk_FUN_00350da0(long param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar4 = tpidr_el0;
  if (*(long *)(*(long *)(lVar4 + 0x48) + 0x18) != param_1) {
    param_2[3] = param_1;
    puVar6 = (undefined8 *)FUN_0038c780(0x30);
    puVar5 = PTR_FUN_047cc978;
    puVar6[4] = puVar6;
    puVar6[5] = 0;
    *puVar6 = &LAB_00350ea0;
    puVar6[1] = param_2;
    puVar6[3] = puVar5;
    FUN_00350c0c(param_1,puVar6 + 2,param_3);
    return;
  }
  plVar7 = (long *)(param_1 + 0x70);
  if (*plVar7 == 0) {
    plVar1 = (long *)(param_1 + 0x60);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (param_2 == (undefined8 *)0x0) {
    if (4 < param_3) {
      FUN_00350fd0(param_3);
      return;
    }
  }
  else {
    param_2[3] = param_3;
    *param_2 = 0;
    if (*plVar7 != 0) {
      plVar7 = *(long **)(param_1 + 0x78);
    }
    *plVar7 = (long)param_2;
    *(undefined8 **)(param_1 + 0x78) = param_2;
  }
  return;
}


