/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022ebd64; name: FUN_022ebd64
 */


undefined8 FUN_022ebd64(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_c8 [4];
  uint local_c4;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined4 *local_a0;
  undefined4 *puStack_98;
  undefined1 *local_90;
  undefined4 local_24;
  
  local_c0 = (undefined1 *)((ulong)param_2 << 0x20 | 1);
  puVar1 = param_1 + 0x20;
  lVar3 = FUN_00d74de4(param_1,puVar1,&local_c0);
  if (**(char **)(lVar3 + 8) == '\0') {
    uVar4 = 0;
  }
  else {
    local_c8[0] = 1;
    local_c4 = param_2;
    local_24 = param_3;
    if (*(long *)(param_1 + 0x6e) == 0) {
      local_a0 = &local_24;
      local_c0 = &LAB_02e657b0;
      local_b8 = FUN_02e657f0;
      local_b0 = &LAB_02e657f4;
      puStack_a8 = &LAB_02e65800;
      FUN_00c837c0(param_1,puVar1,local_c8,&local_c0);
      pcVar2 = local_b8;
    }
    else {
      puStack_98 = &local_24;
      local_90 = local_c8;
      local_c0 = &LAB_029e901c;
      local_b8 = FUN_02e65784;
      local_b0 = &LAB_02e65788;
      puStack_a8 = &LAB_02e6579c;
      local_a0 = param_1;
      FUN_00c837c0(param_1,puVar1,local_c8,&local_c0);
      pcVar2 = local_b8;
    }
    if (pcVar2 != (code *)0x0) {
      puStack_a8 = (undefined1 *)0x0;
      local_b0 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar2)(&local_a0);
    }
    uVar4 = 1;
  }
  return uVar4;
}


