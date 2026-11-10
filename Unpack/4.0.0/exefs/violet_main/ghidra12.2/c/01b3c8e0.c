/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b3c8e0; name: FUN_01b3c8e0
 */


undefined1 * FUN_01b3c8e0(undefined4 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  
  FUN_01fb1e70();
  lVar1 = FUN_01fb1f0c();
  if (lVar1 == 0) {
    return &DAT_03c886bc;
  }
  puVar2 = (undefined1 *)FUN_01fb2ebc(lVar1,param_1);
  return puVar2;
}


