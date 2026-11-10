/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025d2818; name: FUN_025d2818
 */


void FUN_025d2818(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x150); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x80)) {
    *(undefined8 *)(lVar1 + 0x438) = param_2[1];
    *(undefined8 *)(lVar1 + 0x430) = *param_2;
  }
  return;
}


