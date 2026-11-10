/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0218f640; name: FUN_0218f640
 */


long FUN_0218f640(int *param_1)

{
  uint *puVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)((long)param_1 - (long)*param_1);
  if ((((*puVar2 < 5) || ((ulong)puVar2[2] == 0)) ||
      (*puVar2 < 7 || *(char *)((long)param_1 + (ulong)puVar2[2]) != '\x06')) ||
     ((ulong)puVar2[3] == 0)) {
    return 0;
  }
  puVar1 = (uint *)((long)param_1 + (ulong)puVar2[3]);
  return (long)puVar1 + (ulong)*puVar1;
}


