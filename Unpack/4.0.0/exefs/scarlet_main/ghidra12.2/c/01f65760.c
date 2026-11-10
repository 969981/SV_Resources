/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f65760; name: FUN_01f65760
 */


bool FUN_01f65760(long param_1)

{
  bool bVar1;
  char local_30 [8];
  undefined8 local_28;
  
  if ((*(int *)(param_1 + 0x24) == 3) && (FUN_01ecce00(local_30), local_30[0] != '\0')) {
    bVar1 = *(char *)(param_1 + 0x10) != '\0';
    if (bVar1) {
      *(undefined1 *)(param_1 + 0x10) = 1;
      *(undefined8 *)(param_1 + 0x18) = local_28;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


