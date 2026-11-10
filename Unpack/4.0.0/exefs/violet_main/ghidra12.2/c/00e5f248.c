/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5f248; name: FUN_00e5f248
 */


void FUN_00e5f248(undefined4 *param_1,char *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)*param_2;
  if (*param_2 < -0x40) {
    iVar2 = -0x7c;
  }
  lVar1 = FUN_0111b030(iVar2);
  if (*(ulong *)(param_3 + 8) < (ulong)(*(long *)(param_3 + 0x10) + lVar1)) {
    *param_1 = 0xd;
    return;
  }
  FUN_01eb7c5c(param_1,param_2,param_3);
  return;
}


