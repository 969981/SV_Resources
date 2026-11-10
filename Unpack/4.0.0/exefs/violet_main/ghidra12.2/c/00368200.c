/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00368200; name: FUN_00368200
 */


int FUN_00368200(long *param_1,char *param_2)

{
  int iVar1;
  size_t __n;
  
  __n = strlen(param_2);
  if (*param_1 == 0) {
    iVar1 = (uint)*(byte *)(param_1 + 1) - (int)__n;
    if (iVar1 == 0) {
      iVar1 = memcmp((void *)((long)param_1 + 9),param_2,__n);
      return iVar1;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 1) - (int)__n;
    if (iVar1 == 0) {
      iVar1 = memcmp((void *)param_1[2],param_2,__n);
      return iVar1;
    }
  }
  return iVar1;
}


