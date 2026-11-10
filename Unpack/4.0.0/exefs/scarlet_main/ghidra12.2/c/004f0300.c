/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f0300; name: FUN_004f0300
 */


long FUN_004f0300(long param_1,long param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  long *plVar5;
  long local_48;
  undefined *puStack_40;
  undefined ***local_38;
  undefined **local_30;
  long *plStack_28;
  
  lVar4 = *(long *)(param_3 + 0x58);
  if ((lVar4 == 0) ||
     (((*(int *)(lVar4 + 0x18) == 1 && (*(char *)(**(long **)(lVar4 + 0x20) + 0x41) != '\0')) ||
      (*(int *)(param_2 +
               (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                            (int)((ulong)(lVar4 - *(long *)(*(long *)(lVar4 + 0x10) + 0x30)) >> 4) *
                            -0x55555554)) == *(int *)(param_3 + 0x44))))) {
    uVar2 = FUN_004fa4b0(param_1 + 8,param_3);
    uVar2 = uVar2 & 0xffffffff;
  }
  else {
    param_2 = *(long *)(param_1 + 8);
    if (*(char *)(param_3 + 0x43) == '\0') {
      plVar5 = (long *)(*(long *)(param_3 + 0x50) + 0x28);
    }
    else if (*(long *)(param_3 + 0x60) == 0) {
      plVar5 = (long *)(*(long *)(param_3 + 0x28) + 0x80);
    }
    else {
      plVar5 = (long *)(*(long *)(param_3 + 0x60) + 0x50);
    }
    uVar1 = (int)((ulong)(param_3 - *plVar5) >> 3) * 0x286bca1b;
    uVar1 = *(uint *)(*(long *)(param_1 + 0x10) +
                     (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2));
    uVar2 = (ulong)uVar1;
    puVar3 = *(ulong **)(param_3 + 0x30);
    if (puVar3 != (ulong *)0x0) {
      puStack_40 = PTR_LAB_047cd728;
      if (*puVar3 != 0xffffffffffffffff) {
        local_30 = &puStack_40;
        plStack_28 = &local_48;
        local_38 = &local_30;
        local_48 = param_3;
        std::__call_once(puVar3,&local_38,(_func_void_void_ptr *)&LAB_004f9a40);
      }
    }
    if ((*(int *)(param_3 + 0x38) == 0xc) || (*(int *)(param_3 + 0x38) == 9)) {
      uVar2 = (ulong)(uVar1 & 0xfffffffe);
    }
  }
  return param_2 + uVar2;
}


