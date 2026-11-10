/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027b6ee8; name: FUN_027b6ee8
 */


void FUN_027b6ee8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  if ((DAT_0485ee28 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0485ee28);
    if (iVar1 != 0) {
      FUN_027b6fd4();
      DAT_0485ee20 = &DAT_0485ee30;
      __cxa_guard_release(&DAT_0485ee28);
    }
  }
  if (param_3 != 0) {
    if ((param_3 & 1) == 0) {
      uVar2 = param_3;
    }
    else {
      uVar2 = param_3 - 1;
    }
    if (param_3 != 1) {
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
  }
  return;
}


