/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00317f80; name: FUN_00317f80
 */


void FUN_00317f80(long param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  void *__ptr;
  ulong uVar5;
  long lVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
  plVar4 = (long *)FUN_00376bf0(param_2,&LAB_003182c0);
  if (plVar4 == (long *)0x0) {
    uVar5 = param_2 & 0xfffffffffffffffc;
    iVar3 = FUN_0037ad30((undefined8 *)(uVar5 + 0x20),&local_28);
    if (iVar3 == 0) {
      uStack_48 = *(undefined8 *)(uVar5 + 0x28);
      local_50 = *(undefined8 *)(uVar5 + 0x20);
      uStack_38 = *(undefined8 *)(uVar5 + 0x38);
      uStack_40 = *(undefined8 *)(uVar5 + 0x30);
      __ptr = (void *)FUN_00366f90(&local_50);
      free(__ptr);
      local_28 = 0x7fffffffffffffff;
    }
    if ((param_2 & 1) != 0) {
      plVar4 = (long *)FUN_0038c780(8);
      *plVar4 = local_28;
      FUN_00376c90(param_2,&LAB_003182c0,plVar4);
    }
  }
  else {
    local_28 = *plVar4;
  }
  if (local_28 != 0x7fffffffffffffff) {
    if (PTR___tls_init_047cc328 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar6 = tpidr_el0;
    lVar6 = FUN_0035347c(*(undefined8 *)(lVar6 + 0x48));
    FUN_00316be0(param_1 + 0x1d8,local_28 + lVar6);
  }
  if (1 < ((uint)param_2 & 3)) {
    uVar5 = param_2 & 0xfffffffffffffffc;
    plVar4 = (long *)(uVar5 + 0x40);
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      FUN_00376de0((uint)param_2 & 3,uVar5,*(undefined4 *)(uVar5 + 0x48));
      return;
    }
  }
  return;
}


