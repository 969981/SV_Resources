/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021d8a1c; name: FUN_021d8a1c
 */


undefined8 * FUN_021d8a1c(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if ((*param_1 != 0) && (puVar4 = *(undefined8 **)(*param_1 + 0x10), puVar4 != (undefined8 *)0x0))
  {
    puVar2 = (undefined8 *)(**(code **)*puVar4)(puVar4);
    if (((*PTR_DAT_047dce98 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047dce98), iVar1 != 0)) {
      uVar3 = FUN_019caf50();
      *(undefined8 *)PTR_DAT_047dcea0 = uVar3;
      __cxa_guard_release(PTR_DAT_047dce98);
    }
    if (puVar2 != (undefined8 *)0x0) {
      do {
        if (puVar2 == (undefined8 *)PTR_DAT_047dcea0) {
          return puVar4 + -5;
        }
        puVar2 = (undefined8 *)*puVar2;
      } while (puVar2 != (undefined8 *)0x0);
      return (undefined8 *)0x0;
    }
  }
  return (undefined8 *)0x0;
}


