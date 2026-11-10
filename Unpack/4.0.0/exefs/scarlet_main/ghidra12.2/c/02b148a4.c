/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b148a4; name: FUN_02b148a4
 */


bool FUN_02b148a4(undefined8 param_1,long *param_2,uint param_3)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*param_2 + 0x9a8))(param_2);
  if ((int)param_3 < 0xe) {
    bVar1 = *(int *)(lVar2 + (ulong)param_3 * 4 + 0xa8) != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


