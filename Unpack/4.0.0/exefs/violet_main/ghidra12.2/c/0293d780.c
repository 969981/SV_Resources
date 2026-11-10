/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293d780; name: FUN_0293d780
 */


int FUN_0293d780(long param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_011e2dd4(*(undefined8 *)
                                (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x290) + 8) + 0x50));
  iVar1 = 0;
  if ((piVar2 != (int *)0x0) && (iVar1 = *piVar2, 4 < iVar1)) {
    iVar1 = 0;
  }
  return iVar1;
}


