/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea164c; name: FUN_01ea164c
 */


void FUN_01ea164c(long param_1,uint param_2,undefined8 param_3)

{
  char *pcVar1;
  
  if ((param_2 < *(uint *)(param_1 + 0x68)) &&
     (*(char *)(*(long *)(param_1 + 0x60) + (ulong)param_2 * 0x18 + 1) == '\0')) {
    memset((void *)(*(long *)(param_1 + 0x60) + (ulong)param_2 * 0x18 + 0x10),0,4);
    *(undefined8 *)(param_1 + 0x70) = 0;
    pcVar1 = (char *)(*(long *)(param_1 + 0x60) + (ulong)param_2 * 0x18);
    pcVar1[1] = '\x01';
    *(undefined8 *)(pcVar1 + 8) = param_3;
    *pcVar1 = *pcVar1 + '\x01';
    return;
  }
  return;
}


