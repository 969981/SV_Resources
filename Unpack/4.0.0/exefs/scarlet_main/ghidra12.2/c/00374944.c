/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00374944; name: FUN_00374944
 */


long FUN_00374944(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined1 auVar7 [12];
  
  auVar7 = FUN_0038e500(0);
  auVar7 = FUN_0038dfd0(auVar7._0_8_,auVar7._8_4_,*(undefined8 *)(param_1 + 6),
                        *(undefined8 *)(param_1 + 8));
  dVar6 = (double)auVar7._8_4_ * 1e-09 + (double)auVar7._0_8_;
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  else {
    dVar6 = (double)*(long *)(param_1 + 2) / dVar6;
  }
  if (*param_1 != 2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = *(long *)(param_1 + 2);
  lVar5 = *(ulong *)(param_1 + 4) * 2;
  iVar1 = param_1[10];
  if ((lVar4 <= (long)(lVar5 / 3 + (lVar5 >> 0x3f) +
                      ((*(ulong *)(param_1 + 4) & 0x7fffffffffffffff) >> 0x3e))) ||
     (dVar6 <= *(double *)(param_1 + 0xc))) {
    if ((9999 < iVar1) || (iVar3 = param_1[0xb], param_1[0xb] = iVar3 + 1, iVar3 < 1))
    goto LAB_00374a6c;
    iVar3 = rand();
    iVar3 = param_1[10] + (int)(((double)iVar3 * 100.0) / 2147483647.0) + 100;
    param_1[10] = iVar3;
  }
  else {
    if (lVar4 <= lVar5) {
      lVar4 = lVar5;
    }
    *(long *)(param_1 + 4) = lVar4;
    iVar3 = iVar1;
    if (iVar1 < 0) {
      iVar3 = iVar1 + 1;
    }
    *(double *)(param_1 + 0xc) = dVar6;
    iVar3 = iVar3 >> 1;
    param_1[10] = iVar3;
  }
  if (iVar1 != iVar3) {
    param_1[0xb] = 0;
  }
LAB_00374a6c:
  *param_1 = 0;
  puVar2 = PTR___tls_init_047cc328;
  param_1[2] = 0;
  param_1[3] = 0;
  if (puVar2 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar4 = tpidr_el0;
  lVar4 = FUN_0035347c(*(undefined8 *)(lVar4 + 0x48));
  return lVar4 + param_1[10];
}


