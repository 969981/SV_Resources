/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018f5d68; name: FUN_018f5d68
 */


undefined2 * FUN_018f5d68(byte *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 local_8;
  undefined1 local_6;
  
  if ((1 < *param_1) || (puVar2 = *(undefined2 **)(param_1 + 8), puVar2 == (undefined2 *)0x0)) {
    if (((DAT_04812eb8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04812eb8), iVar1 != 0)) {
      FUN_017b54d8(&local_8);
      DAT_04812eb2 = local_6;
      DAT_04812eb0 = local_8;
      __cxa_guard_release(&DAT_04812eb8);
      puVar2 = &DAT_04812eb0;
    }
    else {
      puVar2 = &DAT_04812eb0;
    }
  }
  return puVar2;
}


