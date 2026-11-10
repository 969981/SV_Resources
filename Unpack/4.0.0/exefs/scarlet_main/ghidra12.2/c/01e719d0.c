/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e719d0; name: FUN_01e719d0
 */


void FUN_01e719d0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((*PTR_DAT_047da7e0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_047da7e0);
    if (iVar1 != 0) {
      uVar2 = FUN_01e71abc();
      *(undefined8 *)PTR_DAT_047da7e8 = uVar2;
      __cxa_guard_release(PTR_DAT_047da7e0);
    }
  }
  if (param_3 != 0) {
    if ((param_3 & 1) == 0) {
      uVar3 = param_3;
    }
    else {
      uVar3 = param_3 - 1;
    }
    if (param_3 != 1) {
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
  }
  return;
}


