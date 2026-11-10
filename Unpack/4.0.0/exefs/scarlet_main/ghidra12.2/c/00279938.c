/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00279938; name: FUN_00279938
 */


void FUN_00279938(long *param_1,ulong param_2)

{
  void *__src;
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  void *__dest;
  undefined8 *puVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  long *plVar10;
  ulong *puVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long *local_98;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long *local_68;
  long *local_60;
  long *local_58;
  
  lVar7 = param_1[8];
  if (*(long *)(lVar7 + 0x30) == *(long *)(lVar7 + 0x28)) {
LAB_00279964:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    param_1[0x11] = 0;
    FUN_003673f0(&local_90,"no ready priority");
    uVar4 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                         ,0x1c8,&local_90,0,0);
    lVar7 = FUN_00351770(uVar4,3,0xe);
    plVar9 = (long *)param_1[5];
    local_98 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x10);
    if (local_98 != (long *)0x0) {
      *local_98 = (long)(PTR_DAT_047cc560 + 0x10);
      local_98[1] = lVar7;
    }
                    /* try { // try from 002799e0 to 002799ef has its CatchHandler @ 0027a0b0 */
    (**(code **)(*plVar9 + 0x18))(plVar9,3,&local_98);
    param_1 = local_98;
    local_98 = (long *)0x0;
    if (param_1 != (long *)0x0) {
LAB_002799fc:
      pcVar8 = *(code **)*param_1;
LAB_00279a04:
      (*pcVar8)(param_1);
      FUN_0049e790(PTR_LAB_047cba48,param_1);
    }
    return;
  }
  uVar12 = 0;
LAB_00279a50:
  lVar15 = *(long *)(lVar7 + 0x28);
  puVar11 = (ulong *)(lVar15 + uVar12 * 0x18);
  plVar9 = (long *)FUN_002793b8(param_1 + 0xd,puVar11);
  lVar7 = *plVar9;
  if (lVar7 == 0) {
    if ((param_2 & 1) != 0) {
      plVar13 = (long *)param_1[5];
      plVar10 = param_1 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = *plVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      local_58 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
      if (local_58 == (long *)0x0) {
        plVar10 = param_1;
      }
      else {
        *local_58 = (long)(PTR_DAT_047cc568 + 0x10);
        local_58[1] = (long)param_1;
        *(undefined1 *)(local_58 + 2) = 0;
        plVar10 = (long *)0x0;
      }
                    /* try { // try from 00279bfc to 00279c0b has its CatchHandler @ 00279f48 */
      (**(code **)(*plVar13 + 0x18))(plVar13,1,&local_58);
      plVar13 = local_58;
      local_58 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        (**(code **)*plVar13)(plVar13);
        FUN_0049e790(PTR_LAB_047cba48,plVar13);
      }
      if (plVar10 != (long *)0x0) {
        plVar13 = plVar10 + 1;
        do {
          lVar7 = *plVar13;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar2) {
            *plVar13 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar10 + 8))(plVar10);
          FUN_0049e790(PTR_LAB_047cba48,plVar10);
        }
      }
    }
    plVar10 = param_1 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = *plVar10 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puVar5 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0xf8);
    plVar10 = param_1;
    if (puVar5 != (undefined8 *)0x0) {
      if ((*puVar11 & 1) == 0) {
        uStack_88 = puVar11[1];
        local_90 = *puVar11;
        local_80 = (void *)puVar11[2];
      }
      else {
        lVar15 = lVar15 + uVar12 * 0x18;
        uVar12 = *(ulong *)(lVar15 + 8);
        __src = *(void **)(lVar15 + 0x10);
        if (uVar12 < 0x17) {
          __dest = (void *)((ulong)&local_90 | 1);
          local_90 = CONCAT71(local_90._1_7_,(char)((int)uVar12 << 1));
        }
        else {
          if (0xffffffffffffffef < uVar12) {
                    /* try { // try from 00279ed0 to 00279ed7 has its CatchHandler @ 00279ed8 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          uVar14 = uVar12 + 0x10 & 0xfffffffffffffff0;
          __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar14);
          local_90 = uVar14 | 1;
          uStack_88 = uVar12;
          local_80 = __dest;
        }
        memcpy(__dest,__src,uVar12 + 1);
      }
      plVar10 = puVar5 + 1;
      *plVar10 = 1;
      puVar5[2] = param_1;
      *puVar5 = &PTR_LAB_0448cb68;
      puVar5[5] = local_80;
      puVar5[6] = 0;
      puVar5[4] = uStack_88;
      puVar5[3] = local_90;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = (void *)0x0;
      *(undefined4 *)(puVar5 + 7) = 1;
      puVar5[8] = 0;
      *(undefined1 *)(puVar5 + 0x13) = 0;
      *(undefined1 *)(puVar5 + 0x1e) = 0;
      puVar5[0x1d] = 0;
      puVar5[0x12] = 0;
      puVar5[0x1b] = &LAB_0027b4c4;
      puVar5[0x1c] = puVar5;
      puVar5[0x10] = &LAB_0027b64c;
      puVar5[0x11] = puVar5;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar2) {
          *plVar10 = *plVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (PTR___tls_init_047cc328 != (undefined *)0x0) {
                    /* try { // try from 00279d88 to 00279d8b has its CatchHandler @ 00279fe0 */
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar7 = tpidr_el0;
                    /* try { // try from 00279da4 to 00279dc3 has its CatchHandler @ 00279fe0 */
      lVar7 = FUN_0035347c(*(undefined8 *)(lVar7 + 0x48));
      FUN_00360550(puVar5 + 0x14,lVar7 + *(int *)(puVar5[2] + 0x30),puVar5 + 0x1a);
      *(undefined1 *)(puVar5 + 0x1e) = 1;
      if ((local_90 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_80);
      }
      plVar10 = (long *)0x0;
    }
    puVar6 = (undefined8 *)*plVar9;
    *plVar9 = (long)puVar5;
    if (puVar6 != (undefined8 *)0x0) {
                    /* try { // try from 00279dfc to 00279dff has its CatchHandler @ 00279fb4 */
      (**(code **)*puVar6)();
    }
    if (plVar10 != (long *)0x0) {
      plVar13 = plVar10 + 1;
      do {
        lVar7 = *plVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar2) {
          *plVar13 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar10 + 8))(plVar10);
        FUN_0049e790(PTR_LAB_047cba48,plVar10);
      }
    }
    lVar15 = *plVar9;
    lVar7 = FUN_0027a1ac(param_1[8] + 0x10,puVar11);
    local_60 = (long *)0x0;
    if (*(long *)(lVar7 + 0x38) != 0) {
      plVar9 = (long *)(*(long *)(lVar7 + 0x38) + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = *plVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      local_60 = *(long **)(lVar7 + 0x38);
    }
                    /* try { // try from 00279e58 to 00279e63 has its CatchHandler @ 00279fb8 */
    FUN_002795cc(lVar15,&local_60);
    if (local_60 == (long *)0x0) {
      return;
    }
    plVar9 = local_60 + 1;
    do {
      lVar7 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    param_1 = local_60;
    if (lVar7 + -1 != 0) {
      return;
    }
    goto LAB_002799fc;
  }
  if (*(char *)(lVar7 + 0x98) != '\0') {
    *(undefined1 *)(lVar7 + 0x98) = 0;
    FUN_00360570(lVar7 + 0x48);
    lVar7 = *plVar9;
  }
  if ((*(uint *)(lVar7 + 0x38) | 2) == 2) {
    FUN_0027a8e4(param_1,uVar12);
    return;
  }
  if (*(char *)(lVar7 + 0xf0) == '\0') goto code_r0x00279aa0;
  if ((param_2 & 1) == 0) {
    return;
  }
  plVar10 = (long *)param_1[5];
  plVar9 = param_1 + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = *plVar9 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  local_68 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  puVar3 = PTR_DAT_047cc568;
  if (local_68 != (long *)0x0) {
    *(undefined1 *)(local_68 + 2) = 0;
    *local_68 = (long)(puVar3 + 0x10);
    local_68[1] = (long)param_1;
    param_1 = (long *)0x0;
  }
                    /* try { // try from 00279b88 to 00279b97 has its CatchHandler @ 00279ef0 */
  (**(code **)(*plVar10 + 0x18))(plVar10,1,&local_68);
  plVar9 = local_68;
  local_68 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)*plVar9)(plVar9);
    FUN_0049e790(PTR_LAB_047cba48,plVar9);
  }
  if (param_1 == (long *)0x0) {
    return;
  }
  plVar9 = param_1 + 1;
  do {
    lVar7 = *plVar9;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 + -1 != 0) {
    return;
  }
  pcVar8 = *(code **)(*param_1 + 8);
  goto LAB_00279a04;
code_r0x00279aa0:
  lVar7 = param_1[8];
  uVar12 = (ulong)((int)uVar12 + 1);
  if ((ulong)((*(long *)(lVar7 + 0x30) - *(long *)(lVar7 + 0x28) >> 3) * -0x5555555555555555) <=
      uVar12) goto LAB_00279964;
  goto LAB_00279a50;
}


