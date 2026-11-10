/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e052fc; name: FUN_00e052fc
 */


void FUN_00e052fc(long param_1,long *param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x70); lVar1 != param_1 + 0x68; lVar1 = *(long *)(lVar1 + 8)) {
    FUN_00e0534c(*(undefined8 *)(lVar1 + 0x10),*param_2 + 0x70);
  }
  return;
}


