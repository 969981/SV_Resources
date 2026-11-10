/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00103030; name: FUN_00103030
 */


void FUN_00103030(long param_1)

{
  long lVar1;
  
  FUN_001003e0();
  FUN_001209d0(&DAT_047ec2a8);
  for (lVar1 = DAT_047ec4b8; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0xb8)) {
    if (lVar1 == param_1) goto LAB_00103078;
  }
  *(long *)(param_1 + 0xb8) = DAT_047ec4b8;
  DAT_047ec4b8 = param_1;
LAB_00103078:
  FUN_00120750(&DAT_047ec2a8);
  return;
}


