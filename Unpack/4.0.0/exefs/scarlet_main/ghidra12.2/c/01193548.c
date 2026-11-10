/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01193548; name: FUN_01193548
 */


void FUN_01193548(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((*(long *)(param_2 + 0x120) != 0) &&
     (puVar2 = *(undefined8 **)(*(long *)(param_2 + 0x120) + 8), puVar2 != (undefined8 *)0x0)) {
    puVar3 = (undefined8 *)PTR_DAT_047d92d8;
    if ((*PTR_DAT_047d92d0 & 1) == 0) {
      uVar1 = __cxa_guard_acquire(PTR_DAT_047d92d0);
      puVar3 = (undefined8 *)PTR_DAT_047d92d8;
      if ((int)uVar1 != 0) {
        uVar1 = FUN_01e2b0d8(uVar1,param_2 + 0x120);
        *(undefined8 *)PTR_DAT_047d92d8 = uVar1;
        __cxa_guard_release(PTR_DAT_047d92d0);
        puVar3 = (undefined8 *)PTR_DAT_047d92d8;
      }
    }
    do {
      if (puVar2 == puVar3) {
        FUN_01193608(param_1,param_2 + 0x120);
        return;
      }
      puVar2 = (undefined8 *)*puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


