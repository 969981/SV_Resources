/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0213d878; name: FUN_0213d878
 */


undefined * FUN_0213d878(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047d9118 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d9118), puVar1 = PTR_DAT_047d9120, iVar2 != 0)) {
    uVar3 = FUN_0213d8d8();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047d9118);
  }
  return PTR_DAT_047d9120;
}


