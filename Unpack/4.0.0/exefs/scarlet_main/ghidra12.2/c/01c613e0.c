/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c613e0; name: FUN_01c613e0
 */


undefined2 FUN_01c613e0(byte *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((1 < *param_1) ||
     (puVar3 = *(undefined **)(param_1 + 8), *(undefined **)(param_1 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d42e0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d42e0);
      puVar3 = PTR_DAT_047d42e8;
      if (iVar2 != 0) {
        *(undefined8 *)PTR_DAT_047d42e8 = 0;
        __cxa_guard_release(PTR_DAT_047d42e0);
      }
    }
    else {
      puVar3 = PTR_DAT_047d42e8;
    }
  }
  uVar1 = FUN_01c64644(puVar3);
  return uVar1;
}


