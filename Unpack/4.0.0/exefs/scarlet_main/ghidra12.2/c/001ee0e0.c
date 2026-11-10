/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ee0e0; name: FUN_001ee0e0
 */


undefined8 FUN_001ee0e0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xa8);
  lVar1 = param_2 + 0x890;
  if (((lVar2 != 0) && (*(char *)(lVar2 + 0x90) == '\0')) && (lVar2 != *(long *)(param_2 + 0x150)))
  {
    FUN_001f9168(lVar2,lVar1);
    FUN_001f45b0(lVar1,lVar2);
  }
  FUN_001f9640(param_1);
  FUN_001f45b0(lVar1,param_1);
  return 0;
}


