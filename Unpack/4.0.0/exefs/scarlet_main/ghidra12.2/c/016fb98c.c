/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016fb98c; name: FUN_016fb98c
 */


undefined8 FUN_016fb98c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)PTR_DAT_047dd0b0;
    if (((*PTR_DAT_047dd0a8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047dd0a8), puVar1 = PTR_DAT_047d9018,
       puVar5 = (undefined8 *)PTR_DAT_047dd0b0, iVar2 != 0)) {
      if (((*PTR_DAT_047d9010 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d9010), iVar2 != 0)) {
        uVar3 = FUN_00ea2d24();
        *(undefined8 *)puVar1 = uVar3;
        __cxa_guard_release(PTR_DAT_047d9010);
      }
      puVar5 = (undefined8 *)PTR_DAT_047dd0b0;
      *(undefined **)PTR_DAT_047dd0b0 = puVar1;
      __cxa_guard_release(PTR_DAT_047dd0a8);
    }
    do {
      if (puVar4 == puVar5) {
        return 1;
      }
      puVar4 = (undefined8 *)*puVar4;
    } while (puVar4 != (undefined8 *)0x0);
  }
  return 0;
}


