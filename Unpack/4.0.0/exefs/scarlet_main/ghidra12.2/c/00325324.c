/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00325324; name: FUN_00325324
 */


undefined8 FUN_00325324(long param_1,undefined8 param_2,long param_3,uint param_4,ulong *param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong local_50;
  double local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((*(long *)(param_1 + 0xe8) != 0) &&
     (piVar4 = *(int **)(*(long *)(param_1 + 0xe8) + 0x18), piVar4 != (int *)0x0)) {
    if (param_3 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_0033a31c(*(undefined8 *)(param_3 + 0x10));
      if ((*(byte *)(lVar2 + 0x568) & 1) != 0) {
        return 1;
      }
    }
    if (param_4 == 0) {
      if (*(long *)(param_1 + 0xe0) == 0) {
        return 0;
      }
      FUN_00335e10();
    }
    else if ((((uint)piVar4[7] >> (ulong)(param_4 & 0x1f) & 1) != 0) &&
            ((((*(long *)(param_1 + 0xe0) == 0 || (uVar3 = FUN_00335dbc(), (uVar3 & 1) != 0)) &&
              ((*(byte *)(param_1 + 0x240) >> 4 & 1) == 0)) &&
             ((iVar1 = *(int *)(param_1 + 0x244) + 1, *(int *)(param_1 + 0x244) = iVar1,
              iVar1 < *piVar4 && (*(long *)(param_1 + 0x128) == 0)))))) {
      if (param_5 == (ulong *)0x0) {
        uVar3 = 0xffffffffffffffff;
      }
      else {
        uVar3 = *param_5 & 0xfffffffffffffffc;
        uStack_68 = *(undefined8 *)(uVar3 + 0x28);
        local_70 = *(undefined8 *)(uVar3 + 0x20);
        uStack_58 = *(undefined8 *)(uVar3 + 0x38);
        uStack_60 = *(undefined8 *)(uVar3 + 0x30);
        uVar3 = FUN_0036a5a0(&local_70,&local_50);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        uVar3 = local_50 & 0xffffffff;
      }
      if ((*(long *)(param_1 + 0xe8) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_1 + 0xe8) + 0x18), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (*(long *)(param_1 + 0x120) != 0) {
        FUN_0033a390();
      }
      *(undefined8 *)(param_1 + 0x120) = 0;
      if ((long)uVar3 < 0) {
        if ((*(int *)(param_1 + 0x244) == 1) || ((*(byte *)(param_1 + 0x240) >> 5 & 1) != 0)) {
          local_50 = *(ulong *)(lVar5 + 8);
          local_48 = (double)*(float *)(lVar5 + 0x18);
          local_40 = 0x3fc999999999999a;
          local_38 = *(undefined8 *)(lVar5 + 0x10);
          FUN_0034345c(param_1 + 0x250,&local_50);
          *(byte *)(param_1 + 0x240) = *(byte *)(param_1 + 0x240) & 0xdf;
        }
        lVar5 = FUN_003434ac(param_1 + 0x250);
      }
      else {
        if (PTR___tls_init_047cc328 != (undefined *)0x0) {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
        }
        lVar5 = tpidr_el0;
        lVar5 = FUN_0035347c(*(undefined8 *)(lVar5 + 0x48));
        lVar5 = lVar5 + uVar3;
        *(byte *)(param_1 + 0x240) = *(byte *)(param_1 + 0x240) | 0x20;
      }
      *(code **)(param_1 + 400) = FUN_00322198;
      *(undefined8 *)(param_1 + 0x198) = param_2;
      *(undefined8 *)(param_1 + 0x1a0) = 0;
      FUN_00360550(param_1 + 0x280,lVar5,param_1 + 0x188);
      if (lVar2 != 0) {
        *(byte *)(lVar2 + 0x568) = *(byte *)(lVar2 + 0x568) | 1;
      }
      return 1;
    }
  }
  return 0;
}


