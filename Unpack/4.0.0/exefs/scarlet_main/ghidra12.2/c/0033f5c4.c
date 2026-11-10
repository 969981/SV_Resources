/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033f5c4; name: FUN_0033f5c4
 */


void FUN_0033f5c4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = (long)(PTR_DAT_047ccd20 + 0x10);
  if ((code *)param_1[0x12] != (code *)0x0) {
                    /* try { // try from 0033f5ec to 0033f61f has its CatchHandler @ 0033f6e0 */
    (*(code *)param_1[0x12])(param_1[0x11]);
  }
  if ((code *)param_1[0x14] != (code *)0x0) {
    (*(code *)param_1[0x14])(param_1[0x13]);
  }
  if ((code *)param_1[0x16] != (code *)0x0) {
    (*(code *)param_1[0x16])(param_1[0x15]);
  }
  if ((code *)param_1[0x18] != (code *)0x0) {
    (*(code *)param_1[0x18])(param_1[0x17]);
  }
                    /* try { // try from 0033f624 to 0033f63f has its CatchHandler @ 0033f6e4 */
  FUN_00350548(param_1 + 5,0);
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar5 = tpidr_el0;
                    /* try { // try from 0033f658 to 0033f663 has its CatchHandler @ 0033f6e4 */
  FUN_003533a0(*(undefined8 *)(lVar5 + 0x48));
  FUN_0038e77c(param_1[4]);
  puVar4 = (undefined8 *)param_1[0xd0];
  param_1[0xd0] = 0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 0033f678 to 0033f67b has its CatchHandler @ 0033f6dc */
    (**(code **)*puVar4)();
  }
  param_1[0x1f] = 0;
  FUN_00350404(param_1 + 5);
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
      FUN_0049e790(PTR_LAB_047cba48,plVar6);
      return;
    }
  }
  return;
}


