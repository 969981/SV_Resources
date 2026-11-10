/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004c02e8; name: FUN_004c02e8
 */


undefined8 FUN_004c02e8(undefined *param_1)

{
  undefined *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  undefined *local_40;
  undefined *local_38;
  undefined **local_30;
  undefined **ppuStack_28;
  undefined ***local_18;
  
  ppuStack_28 = &local_40;
  puVar1 = param_1;
  if ((param_1[0x43] != '\0') &&
     (*(char *)(*(long *)(*(long *)(param_1 + 0x50) + 0x20) + 0x48) != '\0')) {
    puVar2 = *(ulong **)(param_1 + 0x30);
    if ((puVar2 != (ulong *)0x0) &&
       (local_38 = PTR_LAB_047cd728, local_40 = param_1, *puVar2 != 0xffffffffffffffff)) {
      local_30 = &local_38;
      local_18 = &local_30;
      std::__call_once(puVar2,&local_18,(_func_void_void_ptr *)&LAB_004c0750);
    }
    if ((*(int *)(param_1 + 0x38) == 0xb) && (*(int *)(param_1 + 0x3c) == 1)) {
      puVar3 = *(undefined **)(param_1 + 0x60);
      puVar2 = *(ulong **)(param_1 + 0x30);
      if ((puVar2 != (ulong *)0x0) && (*puVar2 != 0xffffffffffffffff)) {
        ppuStack_28 = &local_38;
        local_30 = (undefined **)PTR_LAB_047cd728;
        local_18 = &local_30;
        local_38 = param_1;
        std::__call_once(puVar2,&local_18,(_func_void_void_ptr *)&LAB_004c9500);
      }
      if ((puVar3 == *(undefined **)(param_1 + 0x68)) &&
         (puVar2 = *(ulong **)(param_1 + 0x30), puVar1 = puVar3, puVar2 != (ulong *)0x0)) {
        if (*puVar2 != 0xffffffffffffffff) {
          ppuStack_28 = &local_38;
          local_30 = (undefined **)PTR_LAB_047cd728;
          local_18 = &local_30;
          local_38 = param_1;
          std::__call_once(puVar2,&local_18,(_func_void_void_ptr *)&LAB_004c9500);
        }
        puVar1 = *(undefined **)(param_1 + 0x68);
      }
    }
  }
  return *(undefined8 *)(puVar1 + 8);
}


