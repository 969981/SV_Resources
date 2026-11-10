/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003af3e0; name: FUN_003af3e0
 */


undefined8 FUN_003af3e0(long param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  
  lVar1 = 0x1d0;
  if (param_3 != 0) {
    lVar1 = 0x1c8;
  }
  FUN_00484650(*(undefined8 *)(param_1 + lVar1));
  *(long *)(param_1 + lVar1) = param_2;
  if ((param_2 != 0) && (param_4 != 0)) {
    FUN_004847f0(param_2);
  }
  return 1;
}


