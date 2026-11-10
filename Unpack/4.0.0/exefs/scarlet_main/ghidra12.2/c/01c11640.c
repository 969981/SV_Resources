/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c11640; name: FUN_01c11640
 */


undefined * FUN_01c11640(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*PTR_DAT_047d5ba0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(PTR_DAT_047d5ba0), puVar1 = PTR_DAT_047d5ba8, iVar2 != 0)) {
    uVar3 = FUN_01c117c8();
    *(undefined8 *)puVar1 = uVar3;
    __cxa_guard_release(PTR_DAT_047d5ba0);
  }
  return PTR_DAT_047d5ba8;
}


