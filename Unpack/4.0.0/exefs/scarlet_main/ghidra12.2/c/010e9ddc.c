/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010e9ddc; name: FUN_010e9ddc
 */


void FUN_010e9ddc(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x120);
  if (((lVar1 == 0) || ((ulong)(*(long *)(lVar1 + 0x28) - *(long *)(lVar1 + 0x20) >> 3) <= param_3))
     || (*(long *)(*(long *)(lVar1 + 0x20) + param_3 * 8) == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_010e9e10(param_1,param_2 + 0x20);
  return;
}


