/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002bcafc; name: FUN_002bcafc
 */


void FUN_002bcafc(long *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  void *__ptr;
  long lVar7;
  long extraout_x1;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  puVar5 = PTR_DAT_047cc7c8;
  if (param_1[4] == 0) {
LAB_002bccc8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (PTR_DAT_047cc7c8[0x10] == '\0') {
    lVar10 = param_1[2];
    lVar8 = *(long *)(lVar10 + 0x18);
    lVar9 = *(long *)(lVar8 + 0x38);
  }
  else {
    lStack_58 = param_1[0x17];
    local_60 = param_1[0x16];
    lStack_48 = param_1[0x19];
    lStack_50 = param_1[0x18];
    __ptr = (void *)FUN_00366f90(&local_60);
    free(__ptr);
    lVar10 = param_1[2];
    lVar8 = *(long *)(lVar10 + 0x18);
    lVar9 = *(long *)(lVar8 + 0x38);
  }
  if ((lVar9 != 0) && (*(long **)(lVar9 + 0x10) == param_1)) {
    if (*(char *)(*(long *)(lVar8 + 0x10) + 0x168) != '\0') goto LAB_002bccc8;
    puVar6 = *(undefined8 **)(lVar10 + 0x10);
    cVar2 = *(char *)(puVar6 + 3);
    *(undefined8 *)(lVar10 + 0x10) = 0;
    if (puVar6 != (undefined8 *)0x0) {
                    /* try { // try from 002bcb70 to 002bcb73 has its CatchHandler @ 002bcccc */
      (**(code **)*puVar6)();
    }
    if (cVar2 == '\0') {
      if (*(char *)(lVar10 + 0xa1) == '\0') {
        lVar8 = FUN_003434ac(lVar10 + 0x20);
        puVar4 = PTR___tls_init_047cc328;
        if (puVar5[0x10] != '\0') {
          if (PTR___tls_init_047cc328 != (undefined *)0x0) {
            grpc_core::ExecCtx::exec_ctx_::__tls_init();
          }
          lVar9 = tpidr_el0;
          lVar7 = FUN_0035347c(*(undefined8 *)(lVar9 + 0x48));
          if (lVar7 < lVar8) {
            lVar7 = lVar8;
            if (puVar4 != (undefined *)0x0) {
              grpc_core::ExecCtx::exec_ctx_::__tls_init();
              lVar7 = extraout_x1;
            }
            FUN_0035347c(*(undefined8 *)(lVar9 + 0x48),lVar7);
          }
        }
        plVar1 = (long *)(lVar10 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        FUN_00360550(lVar10 + 0x50,lVar8,lVar10 + 0x80);
        *(undefined1 *)(lVar10 + 0xa0) = 1;
      }
    }
    else {
      FUN_00343498(lVar10 + 0x20);
      FUN_002c2b78(lVar10);
    }
  }
  plVar1 = param_1 + 1;
  do {
    lVar10 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar10 + -1 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    FUN_0049e790(PTR_LAB_047cba48,param_1);
  }
  if (4 < param_2) {
    FUN_00350fd0(param_2);
  }
  return;
}


