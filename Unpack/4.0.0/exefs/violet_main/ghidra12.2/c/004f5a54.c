/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004f5a54; name: FUN_004f5a54
 */


void FUN_004f5a54(long param_1,long param_2,long param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long local_58;
  undefined *puStack_50;
  undefined ***local_48;
  undefined **local_40;
  long *plStack_38;
  
  puVar4 = PTR_LAB_047cd728;
  puVar5 = *(ulong **)(param_3 + 0x30);
  if (puVar5 != (ulong *)0x0) {
    puStack_50 = PTR_LAB_047cd728;
    local_58 = param_3;
    if (*puVar5 != 0xffffffffffffffff) {
      local_40 = &puStack_50;
      plStack_38 = &local_58;
      local_48 = &local_40;
      std::__call_once(puVar5,&local_48,(_func_void_void_ptr *)&LAB_004f9a40);
    }
  }
  if (*(char *)(param_3 + 0x43) == '\0') {
    uVar6 = FUN_004fa4b0(param_1 + 8,param_3);
    puVar1 = (uint *)(param_2 + (uVar6 & 0xffffffff));
    uVar2 = *puVar1;
    if (uVar2 == puVar1[1]) {
      FUN_005319ec(puVar1,uVar2 + 1);
    }
    *(undefined8 *)(*(long *)(puVar1 + 2) + (ulong)uVar2 * 8) = param_4;
    *puVar1 = uVar2 + 1;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x28);
    uVar3 = *(undefined4 *)(param_3 + 0x44);
    puVar5 = *(ulong **)(param_3 + 0x30);
    if (puVar5 != (ulong *)0x0) {
      puStack_50 = puVar4;
      local_58 = param_3;
      if (*puVar5 != 0xffffffffffffffff) {
        local_40 = &puStack_50;
        plStack_38 = &local_58;
        local_48 = &local_40;
        std::__call_once(puVar5,&local_48,(_func_void_void_ptr *)&LAB_004f9a40);
      }
    }
    FUN_00522244(param_2 + (ulong)uVar2,uVar3,*(undefined4 *)(param_3 + 0x38),
                 *(undefined1 *)(*(long *)(param_3 + 0x78) + 0x4c),param_4,param_3);
  }
  return;
}


