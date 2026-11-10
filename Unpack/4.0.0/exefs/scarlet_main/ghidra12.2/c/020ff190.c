/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020ff190; name: FUN_020ff190
 */


void FUN_020ff190(long param_1,byte param_2,undefined2 param_3,byte param_4)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x120) == '\0') {
    if ((*(char *)(param_1 + 0x11c) == *(char *)(*(long *)(param_1 + 0x48) + 0x95)) &&
       (uVar1 = FUN_01254b34(), (uVar1 & 1) != 0)) {
      param_1 = param_1 + (ulong)param_2 * 4;
      *(undefined2 *)(param_1 + 0x104) = param_3;
      *(byte *)(param_1 + 0x106) = param_4 & 1;
    }
  }
  return;
}


