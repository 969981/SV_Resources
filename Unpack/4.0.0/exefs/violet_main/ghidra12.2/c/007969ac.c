/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007969ac; name: FUN_007969ac
 */


void FUN_007969ac(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong local_18;
  
  uVar1 = (param_2 & 0xff00ff00ff00ff00) >> 8 | (param_2 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  local_18 = uVar1 >> 0x20 | uVar1 << 0x20;
  memcpy((void *)(param_1 + 8),&DAT_03d0b5ff,8);
  memcpy((void *)(param_1 + 0x10),&local_18,8);
  return;
}


