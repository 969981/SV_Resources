/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001fab78; name: FUN_001fab78
 */


long FUN_001fab78(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_001fa4f4();
  if (iVar1 != -1) {
    if (iVar1 < 0x32) {
      lVar2 = FUN_001fa55c(0x1000,param_1,param_2,"LibcurlResolver");
      if (lVar2 == 0) {
        return 0;
      }
      FUN_001fa938(lVar2);
      nnosStartThread(lVar2);
      return lVar2;
    }
    nnsocketSetLastErrno(0xb);
  }
  return 0;
}


