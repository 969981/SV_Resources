/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00350840; name: FUN_00350840
 */


undefined8 FUN_00350840(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar5 = PTR___tls_init_047cc328;
  if (PTR___tls_init_047cc328 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar4 = tpidr_el0;
  plVar9 = *(long **)(lVar4 + 0x48);
  plVar8 = (long *)plVar9[3];
  if (plVar8 == (long *)0x0) {
    return 0;
  }
  if (plVar8[0xb] == 0) {
    if (puVar5 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
      plVar9 = *(long **)(lVar4 + 0x48);
    }
    if ((*(byte *)(plVar9 + 5) & 1) == 0) {
      uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9);
      if ((uVar7 & 1) == 0) goto LAB_00350884;
      plVar9[5] = plVar9[5] | 1;
    }
    uVar7 = thunk_FUN_00354870();
    if (((uVar7 & 1) != 0) || (uVar7 = FUN_00354160(), (uVar7 & 1) == 0)) goto LAB_00350884;
    if (puVar5 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar6 = *(long *)(lVar4 + 0x48);
    uVar11 = **(undefined8 **)(lVar6 + 0x18);
    if (puVar5 == (undefined *)0x0) {
      *(undefined8 *)(lVar6 + 0x18) = uVar11;
    }
    else {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
      *(undefined8 *)(*(long *)(lVar4 + 0x48) + 0x18) = uVar11;
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
      lVar6 = *(long *)(lVar4 + 0x48);
    }
    lVar10 = *(long *)(lVar6 + 0x18);
joined_r0x00350bb0:
    if (lVar10 == 0) {
      if (puVar5 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
        lVar6 = *(long *)(lVar4 + 0x48);
      }
      *(undefined8 *)(lVar6 + 0x20) = 0;
    }
    FUN_003540d4(plVar8 + 0x10,0,0,0);
  }
  else {
LAB_00350884:
    if (((char)plVar8[0xd] == '\0') || (3 < plVar8[0xc])) {
      lVar6 = FUN_0038f234(plVar8 + 1);
      if (lVar6 == 0) {
        if (puVar5 != (undefined *)0x0) {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
        }
        lVar6 = *(long *)(lVar4 + 0x48);
        lVar10 = **(long **)(lVar6 + 0x18);
        if (puVar5 == (undefined *)0x0) {
          *(long *)(lVar6 + 0x18) = lVar10;
        }
        else {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
          *(long *)(*(long *)(lVar4 + 0x48) + 0x18) = lVar10;
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
          lVar6 = *(long *)(lVar4 + 0x48);
          lVar10 = *(long *)(lVar6 + 0x18);
        }
        goto joined_r0x00350bb0;
      }
      uVar7 = *(ulong *)(lVar6 + 0x18);
      (**(code **)(lVar6 + 8))(*(undefined8 *)(lVar6 + 0x10),uVar7);
      if (4 < uVar7) {
        FUN_00350fd0(uVar7);
      }
    }
    else {
      plVar9 = (long *)plVar8[0xe];
      if (plVar9 == (long *)0x0) goto switchD_00350a44_caseD_0;
      plVar8[0xe] = 0;
      plVar8[0xf] = 0;
      do {
        uVar7 = plVar9[3];
        plVar1 = (long *)*plVar9;
        (*(code *)plVar9[1])(plVar9[2],uVar7);
        if (4 < uVar7) {
          FUN_00350fd0(uVar7);
        }
        plVar9 = plVar1;
      } while (plVar1 != (long *)0x0);
    }
    if (puVar5 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar6 = *(long *)(lVar4 + 0x48);
    lVar10 = **(long **)(lVar6 + 0x18);
    if (puVar5 == (undefined *)0x0) {
      *(long *)(lVar6 + 0x18) = lVar10;
    }
    else {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
      *(long *)(*(long *)(lVar4 + 0x48) + 0x18) = lVar10;
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
      lVar6 = *(long *)(lVar4 + 0x48);
      lVar10 = *(long *)(lVar6 + 0x18);
    }
    if (lVar10 == 0) {
      if (puVar5 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
        lVar6 = *(long *)(lVar4 + 0x48);
      }
      *(undefined8 *)(lVar6 + 0x20) = 0;
    }
    plVar9 = plVar8 + 0xc;
    *(undefined1 *)(plVar8 + 0xd) = 0;
    do {
      lVar6 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar6 + -2;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    switch(lVar6) {
    case 2:
      if (*plVar9 == 0) {
        if (plVar8 + 10 != (long *)plVar8[1]) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00350c00 to 00350c07 has its CatchHandler @ 00350c08 */
          abort();
        }
        if ((long *)plVar8[9] != (long *)plVar8[1]) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        FUN_0049e790(PTR_LAB_047cba48,plVar8);
        return 1;
      }
    case 0:
    case 1:
switchD_00350a44_caseD_0:
                    /* WARNING: Subroutine does not return */
      abort();
    case 3:
      return 1;
    case 4:
    case 5:
      if (plVar8[0xe] != 0) {
        *(undefined1 *)(plVar8 + 0xd) = 1;
      }
    default:
      if (puVar5 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar6 = *(long *)(lVar4 + 0x48);
      lVar10 = *(long *)(lVar6 + 0x18);
      *plVar8 = lVar10;
      if (puVar5 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
        lVar6 = *(long *)(lVar4 + 0x48);
        lVar10 = *plVar8;
      }
      *(long **)(lVar6 + 0x18) = plVar8;
      if (lVar10 == 0) {
        if (puVar5 != (undefined *)0x0) {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
          lVar6 = *(long *)(lVar4 + 0x48);
        }
        *(long **)(lVar6 + 0x20) = plVar8;
      }
    }
  }
  return 1;
}


