/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00346244; name: FUN_00346244
 */


void FUN_00346244(byte *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar5 = tpidr_el0;
  lVar5 = *(long *)(lVar5 + 0x48);
  uVar4 = *(uint *)(lVar5 + 0x30);
  if (uVar4 == 0xffffffff) {
    uVar4 = nn::os::GetCurrentCoreNumber();
    *(uint *)(lVar5 + 0x30) = uVar4;
    bVar1 = *param_1;
  }
  else {
    bVar1 = *param_1;
  }
  if ((bVar1 & 1) == 0) {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = *(byte **)(param_1 + 8);
  }
  param_1 = param_1 + (ulong)uVar4 * 0x40 + 0x10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *(long *)param_1 = *(long *)param_1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


