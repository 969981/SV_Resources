/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f70dc; name: FUN_004f70dc
 */


void FUN_004f70dc(long param_1,long param_2,long param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong *puVar4;
  ulong uVar5;
  long local_50;
  undefined *puStack_48;
  undefined **local_40;
  undefined1 *puStack_38;
  undefined ***local_28;
  
  if (*(char *)(param_3 + 0x43) == '\0') {
    uVar5 = FUN_004fa4b0(param_1 + 8,param_3);
    puVar1 = (uint *)(param_2 + (uVar5 & 0xffffffff));
    uVar2 = *puVar1;
    if (uVar2 == puVar1[1]) {
      FUN_00531134(puVar1,uVar2 + 1);
    }
    *(undefined4 *)(*(long *)(puVar1 + 2) + (ulong)uVar2 * 4) = param_4;
    *puVar1 = uVar2 + 1;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x28);
    uVar3 = *(undefined4 *)(param_3 + 0x44);
    puVar4 = *(ulong **)(param_3 + 0x30);
    if (puVar4 != (ulong *)0x0) {
      puStack_48 = PTR_LAB_047cd728;
      local_50 = param_3;
      if (*puVar4 != 0xffffffffffffffff) {
        local_40 = &puStack_48;
        local_28 = &local_40;
        puStack_38 = (undefined1 *)&local_50;
        std::__call_once(puVar4,&local_28,(_func_void_void_ptr *)&LAB_004f9a40);
      }
    }
    FUN_00522eb8(param_2 + (ulong)uVar2,uVar3,*(undefined4 *)(param_3 + 0x38),
                 *(undefined1 *)(*(long *)(param_3 + 0x78) + 0x4c),param_4,param_3);
  }
  return;
}


