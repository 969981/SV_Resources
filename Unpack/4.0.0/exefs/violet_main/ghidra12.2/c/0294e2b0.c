/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294e2b0; name: FUN_0294e2b0
 */


void FUN_0294e2b0(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0293d6a0(param_1,2);
  if (param_2 == (uVar1 & 0xff)) {
    FUN_01453738(*(undefined8 *)(param_1 + 0x38),0x38,0x2000);
    return;
  }
  return;
}


