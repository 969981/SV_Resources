/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c611b0; name: FUN_01c611b0
 */


void FUN_01c611b0(undefined1 *param_1,byte *param_2)

{
  int iVar1;
  undefined *puVar2;
  char local_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((1 < *param_2) ||
     (puVar2 = *(undefined **)(param_2 + 8), *(undefined **)(param_2 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d42e0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d42e0);
      puVar2 = PTR_DAT_047d42e8;
      if (iVar1 != 0) {
        *(undefined8 *)PTR_DAT_047d42e8 = 0;
        __cxa_guard_release(PTR_DAT_047d42e0);
      }
    }
    else {
      puVar2 = PTR_DAT_047d42e8;
    }
  }
  FUN_01c645ac(local_40,puVar2);
  *param_1 = 0;
  if (local_40[0] != '\0') {
    *(undefined8 *)(param_1 + 0x10) = local_30;
    *(undefined8 *)(param_1 + 0x18) = uStack_28;
    *param_1 = 1;
  }
  return;
}


