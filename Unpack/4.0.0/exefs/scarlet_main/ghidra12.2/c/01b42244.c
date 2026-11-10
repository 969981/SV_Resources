/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b42244; name: FUN_01b42244
 */


undefined8 FUN_01b42244(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((*param_1 != 0) && (puVar3 = *(undefined8 **)(*param_1 + 8), puVar3 != (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)PTR_DAT_047d4870;
    if (((*PTR_DAT_047d4868 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d4868), puVar4 = (undefined8 *)PTR_DAT_047d4870,
       iVar1 != 0)) {
      uVar2 = FUN_01b4260c();
      *(undefined8 *)PTR_DAT_047d4870 = uVar2;
      __cxa_guard_release(PTR_DAT_047d4868);
      puVar4 = (undefined8 *)PTR_DAT_047d4870;
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


