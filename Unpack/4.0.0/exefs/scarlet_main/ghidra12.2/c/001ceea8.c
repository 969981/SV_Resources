/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ceea8; name: FUN_001ceea8
 */


void FUN_001ceea8(long param_1)

{
  int iVar1;
  
  if ((*(long *)(param_1 + 0xd8) != 0) &&
     ((*(long *)(param_1 + 0x1290) != 0 || (*(int *)(param_1 + 0x1298) != 0)))) {
    iVar1 = FUN_001e0880(*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0xb0),param_1 + 0x12a0);
    if (iVar1 != 0) {
      FUN_001db818(param_1,"Internal error clearing splay node = %d\n",iVar1);
    }
    if (*(long *)(param_1 + 0x12f0) != 0) {
      do {
        FUN_001cb600(param_1 + 0x12d8,*(undefined8 *)(param_1 + 0x12e0),0);
      } while (*(long *)(param_1 + 0x12f0) != 0);
    }
    *(undefined8 *)(param_1 + 0x1290) = 0;
    *(undefined4 *)(param_1 + 0x1298) = 0;
  }
  return;
}


