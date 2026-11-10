/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d74d08; name: FUN_00d74d08
 */


undefined4 FUN_00d74d08(long param_1,uint param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 local_c8 [4];
  uint local_c4;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined4 *local_a0 [12];
  undefined4 local_24;
  
  local_c0 = (undefined1 *)((ulong)param_2 << 0x20 | 1);
  lVar2 = FUN_00d74de4(param_1,param_1 + 0xb8,&local_c0);
  if (**(char **)(lVar2 + 8) == '\0') {
    local_24 = 0;
  }
  else {
    local_a0[0] = &local_24;
    local_c8[0] = 1;
    local_24 = 0;
    local_c0 = &LAB_02e65aa0;
    local_b8 = FUN_02e65ae0;
    local_b0 = &LAB_02e65ae4;
    puStack_a8 = &LAB_02e65af0;
    local_c4 = param_2;
    FUN_00c837c0(param_1,param_1 + 0xb8,local_c8,&local_c0);
    pcVar1 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined1 *)0x0;
      puStack_a8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar1)(local_a0);
    }
  }
  return local_24;
}


