/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f0cc0; name: FUN_021f0cc0
 */


void FUN_021f0cc0(long param_1,short param_2)

{
  uint uVar1;
  undefined2 uVar2;
  ulong uVar3;
  short *psVar4;
  ulong uVar5;
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x60);
  uVar3 = (ulong)uVar1;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    psVar4 = (short *)(param_1 + 100);
    uVar5 = uVar3;
    do {
      if (*psVar4 == param_2) {
        return;
      }
      uVar5 = uVar5 - 1;
      psVar4 = psVar4 + 1;
    } while (uVar5 != 0);
    if (3 < uVar1) {
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x66);
      uVar2 = *(undefined2 *)(param_1 + 0x6a);
      *(short *)(param_1 + 0x6a) = param_2;
      *(undefined2 *)(param_1 + 0x68) = uVar2;
      return;
    }
  }
  *(short *)(param_1 + uVar3 * 2 + 100) = param_2;
  *(uint *)(param_1 + 0x60) = uVar1 + 1;
  return;
}


