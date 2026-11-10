/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007da5ec; name: FUN_007da5ec
 */


void FUN_007da5ec(long param_1)

{
  int iVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x69) == '\0') {
    *(undefined1 *)(param_1 + 0x69) = 1;
    iVar1 = FUN_00807e34(*(undefined8 *)PTR_DAT_047d0dd8,0x10);
    plVar2 = (long *)FUN_0079365c();
    *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + *plVar2 * (long)iVar1;
    return;
  }
  return;
}


