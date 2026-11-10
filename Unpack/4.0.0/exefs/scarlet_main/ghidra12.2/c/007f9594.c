/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f9594; name: FUN_007f9594
 */


void FUN_007f9594(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + lVar2);
    lVar2 = lVar2 + 0x30;
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(undefined1 *)((long)puVar1 + 0x2c) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  } while (lVar2 != 0x480);
  *(undefined4 *)(param_1 + 0x480) = 0;
  return;
}


