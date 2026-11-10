/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0029524c; name: FUN_0029524c
 */


void FUN_0029524c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *local_120;
  undefined8 uStack_118;
  long local_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_1[10] == 0) goto LAB_002955e4;
  if ((char)param_1[9] != '\0') {
    return;
  }
  if (param_1[0xd] != 0) goto LAB_002955e4;
  plVar10 = param_1 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = *plVar10 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar5 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x158);
  if (puVar5 == (undefined8 *)0x0) {
    plVar10 = param_1;
  }
  else {
    puVar5[7] = 0;
    puVar5[0xc] = 0;
    *puVar5 = &PTR_LAB_0448d8a0;
    puVar5[1] = 1;
    *(undefined2 *)(puVar5 + 0x11) = 0;
    puVar5[0x1f] = 0;
    puVar5[2] = param_1;
    puVar5[3] = 0;
    puVar5[0x1e] = 0;
    *(undefined2 *)(puVar5 + 0x26) = 0;
    *(undefined1 *)((long)puVar5 + 0x132) = 0;
    if ((char)param_1[9] != '\0') {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002955e8 to 002955f3 has its CatchHandler @ 002955f4 */
      abort();
    }
    if ((char *)param_1[6] == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*(char *)param_1[6] == '\0') {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar5[0xb] = 0;
    puVar5[9] = &LAB_002956a8;
    puVar5[10] = puVar5;
    puVar5[0x10] = 0;
    puVar5[0x15] = 0;
    puVar5[0x2a] = 0;
    puVar5[0xe] = &LAB_00295824;
    puVar5[0xf] = puVar5;
    puVar5[0x13] = &LAB_002959a0;
    puVar5[0x14] = puVar5;
    puVar5[0x28] = &LAB_00295b28;
    puVar5[0x29] = puVar5;
    if ((int)param_1[0xe] == 0) {
      lVar6 = 0x7fffffffffffffff;
      plVar10 = param_1;
    }
    else {
      if (PTR___tls_init_047cc328 != (undefined *)0x0) {
                    /* try { // try from 00295344 to 00295347 has its CatchHandler @ 00295604 */
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar6 = tpidr_el0;
                    /* try { // try from 00295360 to 002953af has its CatchHandler @ 00295604 */
      lVar6 = FUN_0035347c(*(undefined8 *)(lVar6 + 0x48));
      lVar6 = lVar6 + (int)((long *)puVar5[2])[0xe];
      plVar10 = (long *)puVar5[2];
    }
    uVar7 = FUN_0036f8e0(plVar10[10],0,0xffff,plVar10[4],*(long *)PTR_DAT_047cc628 + 0x440,0,lVar6,0
                        );
    puVar5[3] = uVar7;
                    /* try { // try from 002953b4 to 002953c7 has its CatchHandler @ 00295600 */
    lVar8 = FUN_0038bc70(0,0,PTR_PTR_047cc630);
    lVar6 = *(long *)(puVar5[2] + 0x38);
    if ((*(byte *)(lVar6 + 0x18) & 1) == 0) {
      if (*(byte *)(lVar6 + 0x18) < 2) {
LAB_00295400:
        lVar6 = *(long *)(puVar5[2] + 0x30);
      }
      else {
        lVar6 = lVar6 + 0x19;
      }
    }
    else {
      if (*(long *)(lVar6 + 0x20) == 0) goto LAB_00295400;
      lVar6 = *(long *)(lVar6 + 0x28);
    }
                    /* try { // try from 00295404 to 0029545b has its CatchHandler @ 0029560c */
    FUN_00298ab0(&local_120,lVar6,lVar8);
    uVar7 = FUN_0036a600(&local_120,1);
    puVar5[7] = uVar7;
    if ((local_120 != (undefined8 *)0x0) && (plVar10 = (long *)*local_120, plVar10 != (long *)0x0))
    {
      do {
        lVar6 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 == 0) {
        (*(code *)local_120[3])(local_120[4]);
      }
    }
    FUN_00373770(puVar5 + 4);
    FUN_00373770(puVar5 + 0x16);
    plVar10 = (long *)0x0;
    if (lVar8 != 0) {
                    /* try { // try from 00295460 to 00295467 has its CatchHandler @ 002955f8 */
      FUN_0038bd40(lVar8);
      plVar10 = (long *)0x0;
    }
  }
  puVar9 = (undefined8 *)param_1[0xd];
  param_1[0xd] = (long)puVar5;
  if (puVar9 != (undefined8 *)0x0) {
                    /* try { // try from 00295480 to 00295483 has its CatchHandler @ 002955fc */
    (**(code **)*puVar9)();
  }
  if (plVar10 == (long *)0x0) {
LAB_002954a0:
    lVar6 = param_1[0xd];
    lVar8 = *(long *)(lVar6 + 0x18);
    uVar7 = DAT_03cb55b0;
  }
  else {
    plVar1 = plVar10 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 != 0) goto LAB_002954a0;
    (**(code **)(*plVar10 + 8))(plVar10);
    FUN_0049e790(PTR_LAB_047cba48,plVar10);
    lVar6 = param_1[0xd];
    lVar8 = *(long *)(lVar6 + 0x18);
    uVar7 = DAT_03cb55b0;
  }
  DAT_03cb55b0 = uVar7;
  if (lVar8 != 0) {
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    local_120 = (undefined8 *)0xa000000000;
    uStack_118 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    lStack_c0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    lStack_100 = 0;
    if (*(long *)(lVar6 + 0x38) != 0) {
      plVar10 = (long *)(lVar6 + 8);
      uStack_c8 = 0;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_d0 = uVar7;
      lStack_c0 = *(long *)(lVar6 + 0x38);
      iVar4 = FUN_0036cee0(lVar8,&local_120,2,lVar6 + 0x40);
      if (iVar4 == 0) {
        lStack_c0 = lVar6 + 0x60;
        uStack_c8 = 0;
        local_120 = DAT_03cb5380;
        local_110 = lVar6 + 0x20;
        uStack_118 = 0;
        local_d0 = DAT_03cb5678;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = *plVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        iVar4 = FUN_0036cee0(*(undefined8 *)(lVar6 + 0x18),&local_120,2,lVar6 + 0x68);
        if (iVar4 == 0) {
          lStack_108 = lVar6 + 200;
          lStack_100 = lVar6 + 0xd0;
          local_110 = lVar6 + 0xb0;
          local_120 = DAT_03cb53c0;
          uStack_118 = 0;
          iVar4 = FUN_0036cee0(*(undefined8 *)(lVar6 + 0x18),&local_120,1,lVar6 + 0x90);
          if (iVar4 == 0) {
            return;
          }
        }
      }
    }
  }
LAB_002955e4:
                    /* WARNING: Subroutine does not return */
  abort();
}


