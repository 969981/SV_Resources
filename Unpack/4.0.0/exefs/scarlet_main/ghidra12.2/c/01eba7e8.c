/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eba7e8; name: FUN_01eba7e8
 */


void FUN_01eba7e8(long param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 local_8;
  
  if ((param_2 == 1) && (local_8 = param_3, bVar1 = FUN_014c2bc0(&local_8), bVar1 < 4)) {
    param_1 = param_1 + (ulong)bVar1 * 0x28;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(char *)(param_1 + 0x60) != '\0') {
      *(char *)(param_1 + 0x60) = '\0';
    }
  }
  return;
}


