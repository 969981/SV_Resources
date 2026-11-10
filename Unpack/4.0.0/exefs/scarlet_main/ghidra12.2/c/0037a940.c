/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0037a940; name: FUN_0037a940
 */


ulong FUN_0037a940(int param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [24];
  
  FUN_0038d190((long)param_1,auStack_38);
  lVar2 = *(long *)PTR_DAT_047cc628;
  FUN_0036762c(auStack_58,auStack_38);
  uVar1 = FUN_0049e770(PTR_FUN_047cba38,0x80);
  if (uVar1 != 0) {
    FUN_00375ccc(uVar1,lVar2 + 0xe0,auStack_58);
  }
  return uVar1 | 2;
}


