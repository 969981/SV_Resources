/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027e97e0; name: FUN_027e97e0
 */


bool FUN_027e97e0(long param_1)

{
  int iVar1;
  
  if ((*(long *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x28) == 0)) {
    return false;
  }
  iVar1 = memcmp((void *)(*(long *)(param_1 + 0x20) + 5),&DAT_03d0b80b,0x10);
  return iVar1 != 0;
}


