/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008d9c20; name: FUN_008d9c20
 */


void FUN_008d9c20(code *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d2580;
  (*param_1)(PTR_DAT_047d2580 + 0x260,PTR_DAT_047d2580 + 0x120,param_2);
  *(undefined8 *)(puVar1 + 0x260) = 0xffffffffffffffff;
  return;
}


