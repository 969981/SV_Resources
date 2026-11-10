/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004f906c; name: FUN_004f906c
 */


long FUN_004f906c(long param_1,long param_2,long param_3,int param_4,long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong *puVar5;
  uint uVar6;
  long local_60;
  undefined *puStack_58;
  undefined **local_50;
  undefined1 *puStack_48;
  undefined ***local_38;
  
  puVar3 = PTR_LAB_047cd728;
  puVar5 = *(ulong **)(param_3 + 0x30);
  if (puVar5 != (ulong *)0x0) {
    puStack_58 = PTR_LAB_047cd728;
    local_60 = param_3;
    if (*puVar5 != 0xffffffffffffffff) {
      local_50 = &puStack_58;
      local_38 = &local_50;
      puStack_48 = (undefined1 *)&local_60;
      std::__call_once(puVar5,&local_38,(_func_void_void_ptr *)&LAB_004f9a40);
    }
  }
  if ((*(int *)(PTR_DAT_047cd750 + (ulong)*(uint *)(param_3 + 0x38) * 4) != param_4) &&
     (puVar5 = *(ulong **)(param_3 + 0x30), puVar5 != (ulong *)0x0)) {
    puStack_58 = puVar3;
    local_60 = param_3;
    if (*puVar5 != 0xffffffffffffffff) {
      local_50 = &puStack_58;
      local_38 = &local_50;
      puStack_48 = (undefined1 *)&local_60;
      std::__call_once(puVar5,&local_38,(_func_void_void_ptr *)&LAB_004f9a40);
    }
  }
  if (param_5 != 0) {
    FUN_004a5124(param_3);
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    puVar5 = *(ulong **)(param_3 + 0x30);
    uVar6 = (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x50) + 0x28)) >> 3) * 0x286bca1b;
    uVar6 = *(uint *)(*(long *)(param_1 + 0x10) +
                     (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2));
    if (puVar5 != (ulong *)0x0) {
      puStack_58 = puVar3;
      if (*puVar5 != 0xffffffffffffffff) {
        local_50 = &puStack_58;
        local_38 = &local_50;
        local_60 = param_3;
        puStack_48 = (undefined1 *)&local_60;
        std::__call_once(puVar5,&local_38,(_func_void_void_ptr *)&LAB_004f9a40);
      }
    }
    if ((*(int *)(param_3 + 0x38) == 0xc) || (*(int *)(param_3 + 0x38) == 9)) {
      uVar6 = uVar6 & 0xfffffffe;
    }
    param_2 = param_2 + (ulong)uVar6;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x28);
    uVar1 = *(undefined4 *)(param_3 + 0x44);
    puVar5 = *(ulong **)(param_3 + 0x30);
    if (puVar5 != (ulong *)0x0) {
      puStack_58 = puVar3;
      local_60 = param_3;
      if (*puVar5 != 0xffffffffffffffff) {
        local_50 = &puStack_58;
        local_38 = &local_50;
        puStack_48 = (undefined1 *)&local_60;
        std::__call_once(puVar5,&local_38,(_func_void_void_ptr *)&LAB_004f9a40);
      }
    }
    uVar2 = *(undefined4 *)(param_3 + 0x38);
    uVar4 = FUN_004a8fc4(param_3);
    param_2 = FUN_00522a94(param_2 + (ulong)uVar6,uVar1,uVar2,uVar4 & 1,param_3);
  }
  return param_2;
}


