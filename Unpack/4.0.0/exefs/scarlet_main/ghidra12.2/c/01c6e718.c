/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c6e718; name: FUN_01c6e718
 */


void FUN_01c6e718(undefined8 param_1,byte *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  
  cVar2 = DAT_04815c78;
  if ((1 < *param_2) ||
     (puVar4 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d42e0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_047d42e0);
      puVar4 = PTR_DAT_047d42e8;
      if (iVar3 != 0) {
        *(undefined8 *)PTR_DAT_047d42e8 = 0;
        __cxa_guard_release(PTR_DAT_047d42e0);
      }
    }
    else {
      puVar4 = PTR_DAT_047d42e8;
    }
  }
  puVar1 = PTR_FUN_047d6300;
  if (cVar2 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01c6ec7c(param_1,puVar1,0,puVar4);
  return;
}


