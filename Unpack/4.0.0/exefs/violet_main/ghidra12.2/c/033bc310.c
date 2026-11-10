/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033bc310; name: FUN_033bc310
 */


int * FUN_033bc310(long *param_1)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  
  lVar2 = param_1[2];
  uVar3 = (ulong)(*(uint *)(param_1 + 3) & 0x9e3779b9);
  uVar4 = *(uint *)(lVar2 + uVar3 * 8 + 4);
  if (-1 < (int)uVar4) {
    do {
      piVar1 = (int *)(lVar2 + uVar3 * 8);
      if ((*piVar1 == -0x61c88647) && (*(long *)(*param_1 + (ulong)uVar4 * 0x18) == 0)) {
        return piVar1;
      }
      uVar3 = uVar3 + 1 & (long)(int)*(uint *)(param_1 + 3);
      uVar4 = *(uint *)(lVar2 + uVar3 * 8 + 4);
    } while (-1 < (int)uVar4);
  }
  return (int *)0x0;
}


