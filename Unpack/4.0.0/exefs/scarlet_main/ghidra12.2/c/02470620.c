/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02470620; name: FUN_02470620
 */


undefined8 FUN_02470620(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((*param_1 != 0) && (puVar3 = *(undefined8 **)(*param_1 + 8), puVar3 != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)PTR_DAT_047d8d68;
    if (((*PTR_DAT_047d8d60 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8d60), puVar4 = (undefined8 *)PTR_DAT_047d8d68,
       iVar1 != 0)) {
      uVar2 = FUN_00ded9b0();
      *(undefined8 *)PTR_DAT_047d8d68 = uVar2;
      __cxa_guard_release(PTR_DAT_047d8d60);
      puVar4 = (undefined8 *)PTR_DAT_047d8d68;
    }
    do {
      if (puVar3 == puVar4) {
        return 1;
      }
      puVar3 = (undefined8 *)*puVar3;
    } while (puVar3 != (undefined8 *)0x0);
  }
  return 0;
}


