/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078bae4; name: FUN_0078bae4
 */


void FUN_0078bae4(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_047d08c8;
  if (*(long *)PTR_DAT_047d08c8 != 0) {
    FUN_0078b8e8();
    *(undefined8 *)puVar1 = 0;
  }
  puVar1 = PTR_DAT_047d08d0;
  lVar2 = *(long *)PTR_DAT_047d08d0;
  if (lVar2 != 0) {
    FUN_007bfae0(lVar2);
    FUN_007bfaa0(lVar2);
    *(undefined8 *)puVar1 = 0;
  }
  return;
}


