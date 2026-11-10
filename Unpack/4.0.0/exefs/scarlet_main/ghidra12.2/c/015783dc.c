/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015783dc; name: FUN_015783dc
 */


undefined8 FUN_015783dc(long param_1,long param_2,uint param_3)

{
  long lVar1;
  
  if (((ulong)param_3 <
       (ulong)*(uint *)(param_2 + 0xc) + (ulong)*(uint *)(param_2 + 0x10) +
       (ulong)*(uint *)(param_2 + 0x14) + (ulong)*(uint *)(param_2 + 0x18) + 0x1c) ||
     (*(int *)(param_2 + 8) == 0)) {
    return 2;
  }
  *(long *)(param_1 + 0x10) = param_2 + 0x1c;
  lVar1 = param_2 + 0x1c + (ulong)*(uint *)(param_2 + 0xc);
  *(long *)(param_1 + 0x18) = lVar1;
  lVar1 = lVar1 + (ulong)*(uint *)(param_2 + 0x10);
  *(long *)(param_1 + 0x20) = lVar1;
  *(ulong *)(param_1 + 0x28) = lVar1 + (ulong)*(uint *)(param_2 + 0x14);
  return 1;
}


