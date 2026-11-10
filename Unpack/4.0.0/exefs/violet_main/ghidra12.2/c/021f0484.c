/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f0484; name: FUN_021f0484
 */


void FUN_021f0484(long param_1,code *param_2)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (*(uint *)(param_1 + 0x7c) < *(uint *)(param_1 + 0x80)) {
    do {
      uVar2 = (*param_2)(6);
      pcVar3 = (char *)(param_1 + (uVar2 & 0xffffffff) + 0x6d);
      if ((*pcVar3 == '\0') &&
         (pcVar4 = (char *)(param_1 + (uVar2 & 0xffffffff) + 0x73), *pcVar4 == '\0')) {
        iVar1 = (*param_2)(2);
        if (iVar1 != 0) {
          pcVar3 = pcVar4;
        }
        *pcVar3 = '\x01';
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
      }
    } while (*(uint *)(param_1 + 0x7c) < *(uint *)(param_1 + 0x80));
  }
  return;
}


