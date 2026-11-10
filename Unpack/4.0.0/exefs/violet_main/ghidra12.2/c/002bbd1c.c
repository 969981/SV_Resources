/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002bbd1c; name: FUN_002bbd1c
 */


void FUN_002bbd1c(long *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  FUN_0036a810(*(undefined8 *)(param_1[2] + 0x40));
  lVar4 = param_1[2];
  *(undefined8 *)(lVar4 + 0x40) = 0;
  lVar6 = *(long *)(*(long *)(lVar4 + 0x10) + 0x18);
  if (*(long *)(*(long *)(lVar6 + 0x10) + 0x148) == 0) {
    puVar5 = *(undefined8 **)(lVar6 + 0x38);
    *(undefined8 *)(lVar6 + 0x38) = 0;
    if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 002bbdc4 to 002bbdc7 has its CatchHandler @ 002bbe78 */
      (**(code **)*puVar5)();
    }
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      FUN_0049e790(PTR_LAB_047cba48,param_1);
      return;
    }
  }
  else if ((param_2 == 0) && (*(long **)(lVar4 + 0x118) == param_1)) {
    if (PTR___tls_init_047cc328 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar4 = tpidr_el0;
    lVar4 = FUN_0035347c(*(undefined8 *)(lVar4 + 0x48));
    FUN_00360550(param_1 + 5,param_1[3] + lVar4,param_1 + 0xb);
    *(undefined1 *)((long)param_1 + 0x21) = 1;
  }
  else {
    if (*(long **)(lVar4 + 0x118) != param_1) {
      FUN_002ba9b8();
    }
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      FUN_0049e790(PTR_LAB_047cba48,param_1);
    }
    if (4 < param_2) {
      FUN_00350fd0(param_2);
      return;
    }
  }
  return;
}


