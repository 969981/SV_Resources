/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012496a0; name: FUN_012496a0
 */


void FUN_012496a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  *(undefined4 *)(param_1 + 0xc08) = 0;
  do {
    lVar1 = param_1 + lVar2;
    lVar2 = lVar2 + 0x60;
    *(undefined2 *)(*(long *)(lVar1 + 8) + 8) = 0;
    *(undefined2 *)(*(long *)(lVar1 + 0x28) + 8) = 0;
    *(undefined2 *)(*(long *)(lVar1 + 0x48) + 8) = 0;
  } while (lVar2 != 0xc00);
  return;
}


