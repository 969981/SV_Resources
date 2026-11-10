/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b0bc4c; name: FUN_01b0bc4c
 */


undefined8 FUN_01b0bc4c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)PTR_DAT_047d3f08;
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3f00), puVar4 = (undefined8 *)PTR_DAT_047d3f08,
       iVar1 != 0)) {
      uVar2 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar2;
      __cxa_guard_release(PTR_DAT_047d3f00);
      puVar4 = (undefined8 *)PTR_DAT_047d3f08;
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


