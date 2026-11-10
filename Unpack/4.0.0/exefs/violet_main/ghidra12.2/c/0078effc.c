/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078effc; name: FUN_0078effc
 */


void FUN_0078effc(void)

{
  undefined *puVar1;
  long lVar2;
  
  if (*(long *)PTR_DAT_047d0928 != 0) {
    *(undefined8 *)PTR_DAT_047d0928 = 0;
  }
  puVar1 = PTR_DAT_047d0930;
  lVar2 = *(long *)PTR_DAT_047d0930;
  if (lVar2 != 0) {
    FUN_007bfae0(lVar2);
    FUN_007bfaa0(lVar2);
    *(undefined8 *)puVar1 = 0;
  }
  return;
}


