/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02292bbc; name: FUN_02292bbc
 */


void FUN_02292bbc(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  puVar1 = &LAB_0229adbc;
  if (DAT_04843bc8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  uVar2 = FUN_0229afc4(param_2);
  FUN_0229b050(param_1,puVar1,0,uVar2);
  return;
}


