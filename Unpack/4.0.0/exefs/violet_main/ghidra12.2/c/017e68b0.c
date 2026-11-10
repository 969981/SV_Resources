/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017e68b0; name: FUN_017e68b0
 */


void FUN_017e68b0(char *param_1,byte *param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  
  lVar1 = 0x10;
  if (DAT_04832168 == '\0') {
    lVar1 = -1;
  }
  if ((1 < *param_2) ||
     (puVar3 = *(undefined1 **)(param_2 + 8), *(undefined1 **)(param_2 + 8) == (undefined1 *)0x0)) {
    if ((*PTR_DAT_047d57a8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047d57a8);
      puVar3 = PTR_DAT_047d57b0;
      if (iVar2 != 0) {
        *PTR_DAT_047d57b0 = 0;
        __cxa_guard_release(PTR_DAT_047d57a8);
      }
    }
    else {
      puVar3 = PTR_DAT_047d57b0;
    }
  }
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    *(undefined *)(*(long *)(param_1 + 8) + lVar1) = *puVar3;
  }
  return;
}


