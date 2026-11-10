/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fe0560; name: FUN_01fe0560
 */


void FUN_01fe0560(undefined1 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  if (*(char *)(param_2 + 0xc0) != '\0') {
    uVar1 = *(undefined8 *)(param_2 + 0xd8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0xd0);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *param_1 = 1;
  }
  return;
}


