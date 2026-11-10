/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293da50; name: FUN_0293da50
 */


void FUN_0293da50(long param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_011e2dd4(*(undefined8 *)
                                (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x290) + 8) + 0x50));
  if (piVar2 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *piVar2;
    if (4 < iVar1) {
      iVar1 = 0;
    }
  }
  FUN_010f9114(*(undefined8 *)(*(long *)(param_1 + 8) + 0x290),iVar1);
  return;
}


