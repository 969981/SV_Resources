/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f7757c; name: FUN_00f7757c
 */


void FUN_00f7757c(long param_1,int *param_2)

{
  uint *puVar1;
  long local_28;
  uint *puStack_20;
  uint *local_18;
  
  puVar1 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (4 - (long)*param_2)));
  puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
  local_18 = puVar1 + 1;
  puStack_20 = local_18 + (ulong)*puVar1 * 2;
  local_28 = param_1;
  FUN_00f77684(*(undefined8 *)(param_1 + 0x360),&local_18,&puStack_20,&local_28);
  return;
}


