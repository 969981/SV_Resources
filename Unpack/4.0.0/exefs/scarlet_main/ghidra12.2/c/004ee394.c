/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ee394; name: FUN_004ee394
 */


undefined8 * FUN_004ee394(long *param_1,long param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *local_48;
  long local_40;
  undefined *puStack_38;
  undefined **local_30;
  long *plStack_28;
  undefined ***local_18;
  
  uVar1 = FUN_00521a38(param_1,*(undefined4 *)(param_2 + 0x44),param_2,&local_48);
  if ((uVar1 & 1) != 0) {
    puVar2 = *(ulong **)(param_2 + 0x30);
    if (puVar2 != (ulong *)0x0) {
      puStack_38 = PTR_LAB_047cd728;
      local_40 = param_2;
      if (*puVar2 != 0xffffffffffffffff) {
        local_30 = &puStack_38;
        plStack_28 = &local_40;
        local_18 = &local_30;
        std::__call_once(puVar2,&local_18,(_func_void_void_ptr *)&LAB_004ef690);
      }
    }
    *(char *)(local_48 + 1) = (char)*(undefined4 *)(param_2 + 0x38);
    *(undefined1 *)((long)local_48 + 9) = 1;
    lVar4 = *param_1;
    if (lVar4 == 0) {
      plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
      if (plVar3 != (long *)0x0) {
        *plVar3 = 0;
        plVar3[1] = 0;
        plVar3[2] = 0;
      }
    }
    else {
      if (*(long *)(lVar4 + 0x70) != 0) {
        FUN_00520d08(lVar4,0,0x18);
      }
      plVar3 = (long *)FUN_00520544(lVar4,0x18,PTR_LAB_047cdac0);
      plVar3[1] = 0;
      plVar3[2] = 0;
      *plVar3 = lVar4;
    }
    *local_48 = plVar3;
  }
  return local_48;
}


