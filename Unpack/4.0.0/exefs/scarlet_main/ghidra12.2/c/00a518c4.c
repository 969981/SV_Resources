/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a518c4; name: FUN_00a518c4
 */


ulong FUN_00a518c4(long param_1,int param_2)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 < (int)((ulong)(*(long *)(param_1 + 0x6328) - *(long *)(param_1 + 0x6320)) >> 3)) {
    puVar1 = (uint *)(*(long *)(param_1 + 0x6320) + (long)param_2 * 8);
    uVar2 = (ulong)*puVar1;
    uVar3 = (ulong)puVar1[1] << 0x20;
  }
  else {
    uVar3 = 0xffffffff00000000;
    uVar2 = 0xffffffff;
  }
  return uVar3 | uVar2;
}


