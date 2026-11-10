/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0266b6f0; name: FUN_0266b6f0
 */


undefined8 FUN_0266b6f0(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_00c92df0(param_1,1,0);
  if ((DAT_04855dc8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04855dc8);
    if (iVar3 != 0) {
      __cxa_guard_release(&DAT_04855dc8);
    }
  }
  uVar2 = nn::time::IsLeapYear(iVar1);
  FUN_00c419e0(param_1,uVar2 & 1);
  return 1;
}


