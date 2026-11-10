/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0271ab30; name: FUN_0271ab30
 */


void FUN_0271ab30(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar1 + 0x30) == *(long *)(lVar1 + 0x20)) {
    FUN_00e5c07c();
    *(undefined8 *)(lVar1 + 0x30) = 0;
    return;
  }
  *(undefined8 *)(lVar1 + 0x30) = 0;
  return;
}


