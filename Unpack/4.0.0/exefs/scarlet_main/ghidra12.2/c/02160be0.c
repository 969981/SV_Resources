/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02160be0; name: FUN_02160be0
 */


void FUN_02160be0(long *param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  
  puVar2 = (ulong *)*param_2;
  puVar3 = (ulong *)*param_3;
  if ((puVar3 != puVar2) && ((*puVar2 & 0x100000000) == 0)) {
    do {
      puVar4 = puVar2 + 1;
      if (puVar3 == puVar4) {
        puVar2 = puVar3;
        break;
      }
      pbVar1 = (byte *)((long)puVar2 + 0xc);
      puVar2 = puVar4;
    } while ((*pbVar1 & 1) == 0);
  }
  *param_2 = (long)puVar2;
  puVar4 = (ulong *)*param_3;
  puVar3 = puVar2;
  if (puVar4 != puVar2) {
    while (puVar3 = puVar3 + 1, puVar3 != puVar4) {
      if ((*puVar3 >> 0x20 & 1) == 0) {
        *puVar2 = *puVar3;
        puVar2 = (ulong *)(*param_2 + 8);
        *param_2 = (long)puVar2;
        puVar4 = (ulong *)*param_3;
      }
    }
  }
  *param_1 = (long)puVar2;
  return;
}


