/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01769110; name: FUN_01769110
 */


void FUN_01769110(undefined1 *param_1,byte *param_2)

{
  int iVar1;
  undefined *puVar3;
  undefined8 uVar2;
  
  if ((1 < *param_2) ||
     (puVar3 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d42e0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d42e0);
      puVar3 = PTR_DAT_047d42e8;
      if (iVar1 != 0) {
        *(undefined8 *)PTR_DAT_047d42e8 = 0;
        __cxa_guard_release(PTR_DAT_047d42e0);
      }
    }
    else {
      puVar3 = PTR_DAT_047d42e8;
    }
  }
  uVar2 = FUN_017691a4(puVar3);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = uVar2;
  return;
}


