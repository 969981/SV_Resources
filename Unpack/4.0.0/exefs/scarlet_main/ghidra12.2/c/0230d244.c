/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0230d244; name: FUN_0230d244
 */


undefined8 FUN_0230d244(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if ((*param_1 != 0) && (puVar4 = *(undefined8 **)(*param_1 + 8), puVar4 != (undefined8 *)0x0)) {
    puVar5 = (undefined8 *)PTR_DAT_047ddc88;
    if (((*PTR_DAT_047ddc80 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047ddc80), puVar1 = PTR_DAT_047d9278,
       puVar5 = (undefined8 *)PTR_DAT_047ddc88, iVar2 != 0)) {
      if (((*PTR_DAT_047d9270 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d9270), iVar2 != 0)) {
        uVar3 = FUN_01e19d1c();
        *(undefined8 *)puVar1 = uVar3;
        __cxa_guard_release(PTR_DAT_047d9270);
      }
      puVar5 = (undefined8 *)PTR_DAT_047ddc88;
      *(undefined **)PTR_DAT_047ddc88 = puVar1;
      __cxa_guard_release(PTR_DAT_047ddc80);
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


