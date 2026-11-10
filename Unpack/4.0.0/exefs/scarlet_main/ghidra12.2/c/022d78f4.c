/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022d78f4; name: FUN_022d78f4
 */


undefined8 FUN_022d78f4(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if ((*param_1 != 0) && (puVar4 = *(undefined8 **)(*param_1 + 8), puVar4 != (undefined8 *)0x0)) {
    puVar5 = (undefined8 *)PTR_DAT_047d92c0;
    if (((*PTR_DAT_047d92b8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d92b8), puVar1 = PTR_DAT_047d9278,
       puVar5 = (undefined8 *)PTR_DAT_047d92c0, iVar2 != 0)) {
      if (((*PTR_DAT_047d9270 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d9270), iVar2 != 0)) {
        uVar3 = FUN_01e19d1c();
        *(undefined8 *)puVar1 = uVar3;
        __cxa_guard_release(PTR_DAT_047d9270);
      }
      puVar5 = (undefined8 *)PTR_DAT_047d92c0;
      *(undefined **)PTR_DAT_047d92c0 = puVar1;
      __cxa_guard_release(PTR_DAT_047d92b8);
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


