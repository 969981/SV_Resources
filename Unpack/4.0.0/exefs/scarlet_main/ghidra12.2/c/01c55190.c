/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c55190; name: FUN_01c55190
 */


undefined4 * FUN_01c55190(byte *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_8;
  undefined2 local_4;
  
  if ((1 < *param_1) || (puVar2 = *(undefined4 **)(param_1 + 8), puVar2 == (undefined4 *)0x0)) {
    if (((DAT_04813400 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04813400), iVar1 != 0)) {
      FUN_01c4f4a4(&local_8);
      DAT_048133fc = local_4;
      DAT_048133f8 = local_8;
      __cxa_guard_release(&DAT_04813400);
      puVar2 = &DAT_048133f8;
    }
    else {
      puVar2 = &DAT_048133f8;
    }
  }
  return puVar2;
}


