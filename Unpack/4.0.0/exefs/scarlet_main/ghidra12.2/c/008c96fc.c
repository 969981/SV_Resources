/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c96fc; name: FUN_008c96fc
 */


undefined8 FUN_008c96fc(long param_1)

{
  int iVar1;
  
  if ((((*(char *)(*(long *)(param_1 + 0x78) + 0xe) != '\0') &&
       (iVar1 = *(int *)(*(long *)(param_1 + 0x78) + 0x260), -1 < iVar1)) &&
      (*(float *)(param_1 + 0x68) + (float)*(int *)(*(long *)(param_1 + 0xa0) + 0x8b8) +
       (float)iVar1 <= *(float *)(param_1 + 0x44))) &&
     ((*(char *)(*(long *)(param_1 + 0xa0) + 0x752) != '\0' || (*(int *)(param_1 + 0x2c) < 1)))) {
    return 1;
  }
  return 0;
}


