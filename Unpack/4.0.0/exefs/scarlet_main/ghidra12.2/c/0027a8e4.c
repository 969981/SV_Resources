/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0027a8e4; name: FUN_0027a8e4
 */


void FUN_0027a8e4(long param_1,uint param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *local_68;
  
  lVar10 = *(long *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0x88) = 0;
  uVar11 = (ulong)(param_2 + 1);
  if (uVar11 < (ulong)((*(long *)(lVar10 + 0x30) - *(long *)(lVar10 + 0x28) >> 3) *
                      -0x5555555555555555)) {
    lVar5 = tpidr_el0;
    do {
      lVar7 = FUN_0027ac14(param_1 + 0x68,*(long *)(lVar10 + 0x28) + uVar11 * 0x18);
      if ((param_1 + 0x70 != lVar7) &&
         (lVar7 = *(long *)(lVar7 + 0x38), *(char *)(lVar7 + 0x98) == '\0')) {
        if (*(char *)(lVar7 + 0xf0) != '\0') {
          FUN_00360570(lVar7 + 0xa0);
          *(undefined1 *)(lVar7 + 0xf0) = 0;
        }
        plVar8 = (long *)(lVar7 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = *plVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (PTR___tls_init_047cc328 != (undefined *)0x0) {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
        }
        lVar10 = FUN_0035347c(*(undefined8 *)(lVar5 + 0x48));
        FUN_00360550(lVar7 + 0x48,lVar10 + 900000,lVar7 + 0x78);
        *(undefined1 *)(lVar7 + 0x98) = 1;
        lVar10 = *(long *)(param_1 + 0x40);
      }
      uVar11 = (ulong)((int)uVar11 + 1);
    } while (uVar11 < (ulong)((*(long *)(lVar10 + 0x30) - *(long *)(lVar10 + 0x28) >> 3) *
                             -0x5555555555555555));
  }
  plVar8 = (long *)FUN_002793b8(param_1 + 0x68,*(long *)(lVar10 + 0x28) + (ulong)param_2 * 0x18);
  lVar10 = *plVar8;
  plVar8 = *(long **)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(lVar10 + 0x38);
  local_68 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x10);
  if (local_68 != (undefined8 *)0x0) {
    uVar9 = 0;
    if (*(long *)(lVar10 + 0x40) != 0) {
      plVar1 = (long *)(*(long *)(lVar10 + 0x40) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uVar9 = *(undefined8 *)(lVar10 + 0x40);
    }
    *local_68 = &PTR_FUN_0448cb40;
    local_68[1] = uVar9;
  }
                    /* try { // try from 0027aa74 to 0027aa83 has its CatchHandler @ 0027aad0 */
  (**(code **)(*plVar8 + 0x18))(plVar8,uVar2,&local_68);
  puVar6 = local_68;
  local_68 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    FUN_0049e790(PTR_LAB_047cba48,puVar6);
  }
  return;
}


