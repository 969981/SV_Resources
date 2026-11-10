/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01659454; name: FUN_01659454
 */


void FUN_01659454(long *param_1)

{
  undefined *puVar1;
  
  FUN_01659680();
  puVar1 = PTR_DAT_047dcda8;
  *param_1 = (long)(PTR_DAT_047dcda8 + 0x10);
  param_1[4] = (long)(puVar1 + 0x100);
  param_1[6] = (long)(puVar1 + 0x130);
  FUN_016594a0(param_1 + 7);
  FUN_016594e0(param_1 + 0x14);
  return;
}


