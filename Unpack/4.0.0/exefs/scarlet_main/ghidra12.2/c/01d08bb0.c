/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d08bb0; name: FUN_01d08bb0
 */


undefined8 FUN_01d08bb0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_01cf5f90(param_1,1);
  if ((DAT_0481cc60 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0481cc60);
    if (iVar1 != 0) {
      __cxa_guard_release(&DAT_0481cc60);
    }
  }
  FUN_01cf7688(uVar2);
  iVar1 = FUN_01d08c30();
  FUN_00c5d960(param_1,(long)iVar1);
  return 1;
}


