/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f3700; name: FUN_026f3700
 */


bool FUN_026f3700(long param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_026f3730(*(undefined8 *)(param_1 + 0x90),param_2 & 1);
  return iVar1 != 0;
}


