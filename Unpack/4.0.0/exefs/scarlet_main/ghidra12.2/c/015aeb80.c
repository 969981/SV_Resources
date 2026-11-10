/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015aeb80; name: FUN_015aeb80
 */


void FUN_015aeb80(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long local_18;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    nn::crypto::GenerateCryptographicallyRandomBytes(&local_18,8);
    *(long *)(param_1 + 0x40) = local_18;
    nn::crypto::GenerateCryptographicallyRandomBytes(&local_18,8);
    *(long *)(param_1 + 0x48) = local_18;
    if (local_18 == 0) goto LAB_015aec18;
    lVar1 = *(long *)(param_1 + 0x40);
    while (lVar1 == 0) {
LAB_015aec18:
      do {
        nn::crypto::GenerateCryptographicallyRandomBytes(&local_18,8);
        *(long *)(param_1 + 0x40) = local_18;
        nn::crypto::GenerateCryptographicallyRandomBytes(&local_18,8);
        *(long *)(param_1 + 0x48) = local_18;
        lVar1 = *(long *)(param_1 + 0x40);
      } while (local_18 == 0);
    }
  }
  lVar1 = 500;
  puVar2 = (undefined1 *)(param_1 + 0x6c);
  do {
    puVar2[-0x1c] = 0;
    *(undefined8 *)(puVar2 + -0x14) = 0;
    nn::crypto::GenerateCryptographicallyRandomBytes(&local_18,8);
    *(undefined4 *)(puVar2 + -4) = 0;
    *(long *)(puVar2 + -0xc) = local_18;
    *puVar2 = 1;
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 0x20;
  } while (lVar1 != 0);
  return;
}


