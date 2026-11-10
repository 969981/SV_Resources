/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0033f804; name: FUN_0033f804
 */


void FUN_0033f804(undefined8 *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_18 [8];
  
  if (*(undefined8 **)(param_1[1] + 0x60) == param_1) {
    *(undefined8 *)(param_1[1] + 0x60) = 0;
                    /* try { // try from 0033f834 to 0033f83b has its CatchHandler @ 0033f92c */
    (**(code **)*param_1)(param_1);
    if ((param_2 & 1) != 0) {
      if (*(char *)(param_1[1] + 0x58) != '\0') {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar6 = param_1[1];
      if ((*(byte *)(param_1 + 0xfa) & 1) == 0) {
        plVar4 = *(long **)(lVar6 + 0x50);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x18))(plVar4,3);
        }
        uVar5 = FUN_003434ac(lVar6 + 0x68);
        if (PTR_DAT_047ccd30[0x10] != '\0') {
          if (PTR___tls_init_047cc328 != (undefined *)0x0) {
            grpc_core::ExecCtx::exec_ctx_::__tls_init();
          }
          lVar3 = tpidr_el0;
          FUN_0035347c(*(undefined8 *)(lVar3 + 0x48));
        }
        plVar4 = (long *)(lVar6 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        *(undefined1 *)(lVar6 + 0xe8) = 1;
        FUN_00360550(lVar6 + 0x98,uVar5,lVar6 + 200);
      }
      else {
        FUN_00343498(lVar6 + 0x68);
        FUN_0033ed9c(param_1[1]);
      }
    }
  }
  FUN_0033a3b0(param_1[0x19],auStack_18,"call_ended");
  return;
}


