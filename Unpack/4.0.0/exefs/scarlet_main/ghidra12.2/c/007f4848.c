/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f4848; name: FUN_007f4848
 */


void FUN_007f4848(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    do {
      lVar1 = *(long *)(param_1 + 0x18);
      if (lVar1 == 0) break;
      FUN_0078fa2c((long *)(param_1 + 0x18),lVar1);
      FUN_0078fa04(param_1 + 0x30,param_1 + 0x30,lVar1 + *(int *)(param_1 + 0x44));
    } while (*(int *)(param_1 + 0x28) != 0);
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    do {
      lVar1 = *(long *)(param_1 + 0x58);
      if (lVar1 == 0) break;
      FUN_0078fa2c((long *)(param_1 + 0x58),lVar1);
      FUN_0078fa04(param_1 + 0x70,param_1 + 0x70,lVar1 + *(int *)(param_1 + 0x84));
    } while (*(int *)(param_1 + 0x68) != 0);
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_007bfae0(lVar1);
    FUN_007bfaa0(lVar1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_007bfae0(lVar1);
    FUN_007bfaa0(lVar1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


