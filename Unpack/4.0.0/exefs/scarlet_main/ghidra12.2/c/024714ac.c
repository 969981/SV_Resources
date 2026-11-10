/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024714ac; name: FUN_024714ac
 */


undefined1  [16] FUN_024714ac(byte *param_1)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  
  if ((1 < *param_1) ||
     (pauVar2 = *(undefined1 (**) [16])(param_1 + 8),
     *(undefined1 (**) [16])(param_1 + 8) == (undefined1 (*) [16])0x0)) {
    if ((*PTR_DAT_047d5148 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d5148);
      pauVar2 = (undefined1 (*) [16])PTR_DAT_047d5150;
      if (iVar1 != 0) {
        *(undefined8 *)(PTR_DAT_047d5150 + 0x30) = 0;
        *(undefined8 *)((long)pauVar2 + 0x38) = 0;
        *(undefined8 *)((long)pauVar2 + 0x20) = 0;
        *(undefined8 *)((long)pauVar2 + 0x28) = 0;
        *(undefined8 *)((long)pauVar2 + 0x10) = 0;
        *(undefined8 *)((long)pauVar2 + 0x18) = 0;
        *(undefined8 *)pauVar2 = 0;
        *(undefined8 *)((long)pauVar2 + 8) = 0;
        __cxa_guard_release(PTR_DAT_047d5148);
      }
    }
    else {
      pauVar2 = (undefined1 (*) [16])PTR_DAT_047d5150;
    }
  }
  return *pauVar2;
}


