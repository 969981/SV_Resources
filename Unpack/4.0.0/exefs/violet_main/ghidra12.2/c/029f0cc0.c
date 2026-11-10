/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029f0cc0; name: FUN_029f0cc0
 */


void FUN_029f0cc0(long param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = PTR_DAT_047dca98;
  if (*param_2 != 0x4c70eef446d33b4c) {
    puVar1 = PTR_DAT_047db188;
  }
  puVar2 = PTR_DAT_047db188;
  if (*param_2 != -0x65e463199a50382f) {
    puVar2 = puVar1;
  }
  *(undefined1 *)(param_1 + 0x58) = *puVar2;
  return;
}


