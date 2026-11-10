/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ed10c; name: FUN_001ed10c
 */


uint FUN_001ed10c(long param_1)

{
  uint uVar1;
  ProxySetting local_d0 [2];
  undefined2 local_ce;
  char local_68;
  char acStack_67 [32];
  char acStack_47 [39];
  
  memset(local_d0,0,0xaa);
  uVar1 = nn::nifm::GetCurrentProxySetting(local_d0);
  if (uVar1 == 0) {
    *(ProxySetting *)(param_1 + 4) = local_d0[0];
    if (local_d0[0] != (ProxySetting)0x0) {
      *(undefined2 *)(param_1 + 6) = local_ce;
      strncpy((char *)(param_1 + 8),(char *)((ulong)local_d0 | 4),99);
      *(undefined1 *)(param_1 + 0x6b) = 0;
      *(char *)(param_1 + 0x70) = local_68;
      if (local_68 != '\0') {
        strncpy((char *)(param_1 + 0x71),acStack_67,0x1f);
        *(undefined1 *)(param_1 + 0x90) = 0;
        strncpy((char *)(param_1 + 0x91),acStack_47,0x1f);
        *(undefined1 *)(param_1 + 0xb0) = 0;
        return 0;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 >> 9 & 0x1fff;
    FUN_001ce618(*(undefined8 *)PTR_stderr_047cb8b8,
                 "\nError: nn::nifm::GetCurrentProxySetting() failed. Err Desc: %d\n\n",uVar1);
  }
  return uVar1;
}


