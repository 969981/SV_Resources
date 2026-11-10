/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020c69b8; name: FUN_020c69b8
 */


undefined8 FUN_020c69b8(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x58);
  if (param_2 == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x48);
  }
  puVar2 = (undefined8 *)(param_1 + 0x50);
  if (param_2 != 1) {
    puVar2 = puVar1;
  }
  return *puVar2;
}


