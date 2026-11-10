/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00483880; name: FUN_00483880
 */


int FUN_00483880(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 8) != 0)) &&
     (iVar2 = FUN_0048b9c0(param_1,0), iVar2 < 0)) {
    iVar2 = -2;
  }
  else {
    if (((*(long *)(param_2 + 0x18) == 0) || (*(int *)(param_2 + 8) != 0)) &&
       (iVar2 = FUN_0048b9c0(param_2,0), iVar2 < 0)) {
      return -2;
    }
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = iVar1 - *(int *)(param_2 + 0x20);
    if ((iVar1 != 0) && (iVar2 == 0)) {
      iVar2 = memcmp(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),(long)iVar1);
      return iVar2;
    }
  }
  return iVar2;
}


