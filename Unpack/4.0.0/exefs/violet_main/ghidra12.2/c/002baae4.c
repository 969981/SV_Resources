/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002baae4; name: FUN_002baae4
 */


void FUN_002baae4(long *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  void *__ptr;
  long lVar9;
  long extraout_x1;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_80 [32];
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  puVar6 = PTR_DAT_047cc7c8;
  if (PTR_DAT_047cc7c8[0x10] == '\0') {
    lVar11 = param_1[2];
    lVar10 = *(long *)(*(long *)(lVar11 + 0x18) + 0x30);
  }
  else {
    lStack_58 = param_1[0x17];
    local_60 = param_1[0x16];
    lStack_48 = param_1[0x19];
    lStack_50 = param_1[0x18];
    __ptr = (void *)FUN_00366f90(&local_60);
    free(__ptr);
    lVar11 = param_1[2];
    lVar10 = *(long *)(*(long *)(lVar11 + 0x18) + 0x30);
  }
  if ((lVar10 != 0) && (*(long **)(lVar10 + 0x10) == param_1)) {
    puVar7 = *(undefined8 **)(lVar11 + 0x10);
    cVar2 = *(char *)((long)puVar7 + 0x19);
    *(undefined8 *)(lVar11 + 0x10) = 0;
    if (puVar7 != (undefined8 *)0x0) {
                    /* try { // try from 002bab44 to 002bab47 has its CatchHandler @ 002bace0 */
      (**(code **)*puVar7)();
    }
    if (cVar2 == '\0') {
      if (*(char *)(lVar11 + 0xa1) == '\0') {
        lVar10 = FUN_003434ac(lVar11 + 0x20);
        puVar5 = PTR___tls_init_047cc328;
        if (puVar6[0x10] != '\0') {
          if (PTR___tls_init_047cc328 != (undefined *)0x0) {
            grpc_core::ExecCtx::exec_ctx_::__tls_init();
          }
          lVar4 = tpidr_el0;
          lVar9 = FUN_0035347c(*(undefined8 *)(lVar4 + 0x48));
          if (lVar9 < lVar10) {
            lVar9 = lVar10;
            if (puVar5 != (undefined *)0x0) {
              grpc_core::ExecCtx::exec_ctx_::__tls_init();
              lVar9 = extraout_x1;
            }
            FUN_0035347c(*(undefined8 *)(lVar4 + 0x48),lVar9);
          }
        }
        plVar1 = (long *)(lVar11 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        FUN_00360550(lVar11 + 0x50,lVar10,lVar11 + 0x80);
        *(undefined1 *)(lVar11 + 0xa0) = 1;
      }
    }
    else {
      FUN_00343498(lVar11 + 0x20);
      FUN_002c34cc(lVar11);
    }
    uVar12 = *(undefined8 *)(*(long *)(param_1[2] + 0x18) + 0x10);
    FUN_003673f0(auStack_80,"xds call failed");
    uVar8 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                         ,0x51f,auStack_80,0,0);
    FUN_002bace4(uVar12,uVar8);
  }
  plVar1 = param_1 + 1;
  do {
    lVar11 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar11 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar11 + -1 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    FUN_0049e790(PTR_LAB_047cba48,param_1);
  }
  if (4 < param_2) {
    FUN_00350fd0(param_2);
  }
  return;
}


