/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017a4810; name: FUN_017a4810
 */


undefined8 FUN_017a4810(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_00c92df0(param_1,1,0);
  if ((DAT_04800a20 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04800a20);
    if (iVar2 != 0) {
      __cxa_guard_release(&DAT_04800a20);
    }
  }
  uVar1 = FUN_017a4890(uVar3);
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


