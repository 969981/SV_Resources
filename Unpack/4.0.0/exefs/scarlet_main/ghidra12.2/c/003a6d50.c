/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a6d50; name: FUN_003a6d50
 */


void FUN_003a6d50(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      puVar2 = (undefined8 *)(param_1 + 0x80);
      do {
        uVar3 = puVar2[-10];
        uVar1 = uVar1 + 2;
        uVar4 = *puVar2;
        puVar2[-3] = 0;
        puVar2[-4] = 0;
        puVar2[-0xb] = 0;
        puVar2[-0xc] = 0;
        puVar2[-9] = 0;
        puVar2[-10] = 0;
        puVar2[-10] = uVar3;
        puVar2[3] = 0;
        puVar2[2] = 0;
        puVar2[-0xf] = 0;
        puVar2[-0x10] = 0;
        puVar2[-0xd] = 0;
        puVar2[-0xe] = 0;
        puVar2[-1] = 0;
        puVar2[-2] = 0;
        puVar2[1] = 0;
        *puVar2 = 0;
        puVar2[-7] = 0;
        puVar2[-8] = 0;
        puVar2[-5] = 0;
        puVar2[-6] = 0;
        *puVar2 = uVar4;
        puVar2 = puVar2 + 0x14;
      } while ((param_2 & 0xfffffffffffffffe) != uVar1);
    }
    if ((param_2 & 1) != 0) {
      puVar2 = (undefined8 *)(param_1 + uVar1 * 0x50);
      uVar3 = puVar2[6];
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[6] = uVar3;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[9] = 0;
      puVar2[8] = 0;
    }
  }
  return;
}


