/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0035e1f0; name: FUN_0035e1f0
 */


void FUN_0035e1f0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  FUN_0038db40(*param_1);
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar3 = tpidr_el0;
  lVar3 = FUN_0035347c(*(undefined8 *)(lVar3 + 0x48));
  lVar3 = FUN_00358170(param_1 + 5,0,lVar3 + 10000);
  if (lVar3 != 0) {
    FUN_00352b40("backup_poller:pollset_work",lVar3,
                 "external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x1cc);
  }
  FUN_0038db60(*param_1);
  if (DAT_047ef718 != 1) {
LAB_0035e2c8:
    FUN_003540d4(param_1 + 1,0,0,1);
    return;
  }
  do {
    if (DAT_047ef718 != 1) {
      ClearExclusiveLocal();
      goto LAB_0035e2c8;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x47ef718,0x10);
    if (bVar2) {
      DAT_047ef718 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  FUN_0038db40(*param_1);
  do {
    if (DAT_047ef720 != param_1) {
      ClearExclusiveLocal();
      break;
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x47ef720,0x10);
    if (bVar2) {
      DAT_047ef720 = (undefined8 *)0x0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  FUN_0038db60(*param_1);
  param_1[4] = 0;
  param_1[2] = &LAB_0035e320;
  param_1[3] = param_1;
  FUN_00358130(param_1 + 5,param_1 + 1);
  return;
}


