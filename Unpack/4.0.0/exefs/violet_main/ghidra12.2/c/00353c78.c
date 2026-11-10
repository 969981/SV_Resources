/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00353c78; name: FUN_00353c78
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00353c78(undefined8 *param_1,undefined8 *param_2,ulong param_3,byte param_4)

{
  ulong uVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined2 local_90 [4];
  undefined8 local_88;
  undefined4 local_80 [2];
  long local_78;
  undefined2 local_70;
  undefined6 uStack_6e;
  undefined8 uStack_68;
  
  plVar10 = param_1 + 4;
  lVar9 = tpidr_el0;
  do {
    uVar15 = param_1[3];
    if (uVar15 == 0) {
      if (PTR___tls_init_047cc328 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      if (param_2 == (undefined8 *)0x0) {
        if (param_3 < 5) {
          return;
        }
        FUN_00350fd0(param_3);
        return;
      }
      lVar9 = *(long *)(lVar9 + 0x48);
      param_2[3] = param_3;
      *param_2 = 0;
      plVar10 = (long *)(lVar9 + 8);
      if (*plVar10 != 0) {
        plVar10 = *(long **)(lVar9 + 0x10);
      }
      *plVar10 = (long)param_2;
      *(undefined8 **)(lVar9 + 0x10) = param_2;
      return;
    }
    uVar6 = thunk_FUN_00354880(param_2,param_3);
    if ((uVar6 & 1) != 0) {
      return;
    }
    lVar13 = *(long *)(lVar9 + 0x58);
    if (lVar13 == 0) {
      lVar13 = param_1[1];
      if (PTR___tls_init_047cc328 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      uVar6 = *(ulong *)(lVar9 + 0x48);
      uVar14 = uVar6 >> 4;
      if (PTR___tls_init_047cc328 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
        uVar6 = *(ulong *)(lVar9 + 0x48);
      }
      uVar1 = uVar6 >> 9;
      if (PTR___tls_init_047cc328 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
        uVar6 = *(ulong *)(lVar9 + 0x48);
      }
      uVar14 = uVar14 ^ uVar1 ^ uVar6 >> 0xe;
      uVar6 = 0;
      if (uVar15 != 0) {
        uVar6 = uVar14 / uVar15;
      }
      lVar13 = lVar13 + (uVar14 - uVar6 * uVar15) * 0x78;
    }
    lVar12 = lVar13;
    do {
      FUN_0038db40(lVar12);
      if (*(char *)(lVar12 + 0x51) == '\0') {
        plVar7 = (long *)(lVar12 + 0x38);
        if ((*plVar7 == 0) && (*(char *)(lVar12 + 0x50) == '\0')) {
          FUN_0038dc90(lVar12 + 0x30);
          if (param_2 != (undefined8 *)0x0) goto LAB_00353df0;
LAB_00353e1c:
          if (4 < param_3) {
            FUN_00350fd0(param_3);
          }
        }
        else {
          if (param_2 == (undefined8 *)0x0) goto LAB_00353e1c;
LAB_00353df0:
          param_2[3] = param_3;
          *param_2 = 0;
          if (*plVar7 != 0) {
            plVar7 = *(long **)(lVar12 + 0x40);
          }
          *plVar7 = (long)param_2;
          *(undefined8 **)(lVar12 + 0x40) = param_2;
        }
        uVar6 = *(long *)(lVar12 + 0x48) + 1;
        *(ulong *)(lVar12 + 0x48) = uVar6;
        if ((uVar6 < 3) || ((ulong)param_1[2] <= uVar15)) {
          *(byte *)(lVar12 + 0x51) = ~param_4 & 1;
          FUN_0038db60(lVar12);
          return;
        }
        *(byte *)(lVar12 + 0x51) = ~param_4 & 1;
        cVar4 = *(char *)(lVar12 + 0x50);
        FUN_0038db60(lVar12);
        if (cVar4 != '\0') {
          return;
        }
        bVar11 = false;
        goto LAB_00353e68;
      }
      FUN_0038db60(lVar12);
      uVar6 = *(long *)(lVar12 + 0x20) + 1;
      uVar14 = 0;
      if (uVar15 != 0) {
        uVar14 = uVar6 / uVar15;
      }
      lVar12 = param_1[1] + (uVar6 - uVar14 * uVar15) * 0x78;
    } while (lVar12 != lVar13);
    bVar11 = true;
LAB_00353e68:
    do {
      if (*plVar10 != 0) {
        ClearExclusiveLocal();
        goto LAB_00353cd4;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar15 = param_1[3];
    if (uVar15 < (ulong)param_1[2]) {
      param_1[3] = uVar15 + 1;
      local_90[0] = 0x101;
      local_88 = 0;
      FUN_0038f3ac(local_80,*param_1,PTR_LAB_047ccdf0,param_1[1] + uVar15 * 0x78,0,local_90);
      puVar2 = (undefined4 *)(param_1[1] + uVar15 * 0x78 + 0x58);
      if (puVar2 == local_80) {
        if (((char)local_70 != '\0') && (local_78 != 0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00353ff8 to 00353ffb has its CatchHandler @ 00354000 */
          abort();
        }
      }
      else {
        lVar13 = param_1[1] + uVar15 * 0x78;
        *puVar2 = local_80[0];
        *(long *)(lVar13 + 0x60) = local_78;
        *(undefined8 *)(lVar13 + 0x70) = uStack_68;
        *(ulong *)(lVar13 + 0x68) = CONCAT62(uStack_6e,local_70);
        local_80[0] = 5;
        local_78 = 0;
        local_70 = 0x101;
        uStack_68 = 0;
      }
      lVar13 = param_1[1] + uVar15 * 0x78;
      piVar8 = (int *)(lVar13 + 0x58);
      iVar3 = *piVar8;
      plVar7 = *(long **)(lVar13 + 0x60);
      if (plVar7 == (long *)0x0) {
        if (iVar3 != 4) goto LAB_00353ffc;
        goto LAB_00353f60;
      }
      if (iVar3 != 1) {
LAB_00353ffc:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *piVar8 = 2;
      (**(code **)(*plVar7 + 0x10))();
      *plVar10 = 0;
    }
    else {
LAB_00353f60:
      *plVar10 = 0;
    }
LAB_00353cd4:
    if (!bVar11) {
      return;
    }
  } while( true );
}


