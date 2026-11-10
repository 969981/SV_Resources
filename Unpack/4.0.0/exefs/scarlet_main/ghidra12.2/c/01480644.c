/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01480644; name: FUN_01480644
 */


undefined8 FUN_01480644(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = *(long *)(param_1 + 0x48);
  puVar5 = (undefined8 *)(lVar4 + 0x28);
  plVar2 = (long *)(**(code **)*puVar5)(puVar5);
  if (((*PTR_DAT_047dcd50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047dcd50), iVar1 != 0))
  {
    uVar3 = FUN_01af5520();
    *(undefined8 *)PTR_DAT_047dcd58 = uVar3;
    __cxa_guard_release(PTR_DAT_047dcd50);
  }
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    if (plVar2 == (long *)PTR_DAT_047dcd58) break;
    plVar2 = (long *)*plVar2;
  }
  return *(undefined8 *)(lVar4 + 0x48);
}


