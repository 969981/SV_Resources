/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a7940; name: FUN_024a7940
 */


undefined * FUN_024a7940(void)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = FUN_00821660();
  puVar1 = PTR_PTR_044e8b70;
  if ((uVar2 & 1) == 0) {
    return PTR_PTR_047d19a8;
  }
  thunk_FUN_008217d0();
  return puVar1;
}


