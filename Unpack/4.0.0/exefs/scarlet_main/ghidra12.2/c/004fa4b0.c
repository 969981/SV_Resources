/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004fa4b0; name: FUN_004fa4b0
 */


uint FUN_004fa4b0(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  long local_40;
  undefined *puStack_38;
  undefined **local_30;
  undefined1 *puStack_28;
  undefined ***local_18;
  
  puStack_28 = (undefined1 *)&local_40;
  lVar2 = *(long *)(param_2 + 0x58);
  if ((lVar2 == 0) ||
     ((*(int *)(lVar2 + 0x18) == 1 && (*(char *)(**(long **)(lVar2 + 0x20) + 0x41) != '\0')))) {
    if (*(char *)(param_2 + 0x43) == '\0') {
      plVar3 = (long *)(*(long *)(param_2 + 0x50) + 0x28);
    }
    else if (*(long *)(param_2 + 0x60) == 0) {
      plVar3 = (long *)(*(long *)(param_2 + 0x28) + 0x80);
    }
    else {
      plVar3 = (long *)(*(long *)(param_2 + 0x60) + 0x50);
    }
    uVar4 = (int)((ulong)(param_2 - *plVar3) >> 3) * 0x286bca1b;
    uVar4 = *(uint *)(*(long *)(param_1 + 8) +
                     (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2));
    puVar1 = *(ulong **)(param_2 + 0x30);
  }
  else {
    uVar4 = *(uint *)(*(long *)(param_1 + 8) +
                     (long)(*(int *)(*(long *)(param_2 + 0x50) + 0x68) +
                           (int)((ulong)(lVar2 - *(long *)(*(long *)(lVar2 + 0x10) + 0x30)) >> 4) *
                           -0x55555555) * 4);
    puVar1 = *(ulong **)(param_2 + 0x30);
  }
  if ((puVar1 != (ulong *)0x0) && (puStack_38 = PTR_LAB_047cd728, *puVar1 != 0xffffffffffffffff)) {
    local_30 = &puStack_38;
    local_18 = &local_30;
    local_40 = param_2;
    std::__call_once(puVar1,&local_18,(_func_void_void_ptr *)&LAB_004f9a40);
  }
  if ((*(int *)(param_2 + 0x38) == 0xc) || (*(int *)(param_2 + 0x38) == 9)) {
    uVar4 = uVar4 & 0xfffffffe;
  }
  return uVar4;
}


