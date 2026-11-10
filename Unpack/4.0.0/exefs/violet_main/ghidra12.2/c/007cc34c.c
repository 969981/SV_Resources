/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007cc34c; name: FUN_007cc34c
 */


void FUN_007cc34c(int *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  FUN_007cbb40();
  if (*param_1 != 0) {
    return;
  }
  uVar1 = *(uint *)(param_2 + 0xa0);
  uVar5 = (ulong)uVar1;
  uVar2 = FUN_0078a12c();
  lVar3 = FUN_007bf9f0(uVar5 * 0x1c0,uVar2);
  if ((lVar3 != 0) && (uVar1 != 0)) {
    lVar4 = lVar3;
    do {
      FUN_007cc79c(lVar4);
      uVar5 = uVar5 - 1;
      lVar4 = lVar4 + 0x1c0;
    } while (uVar5 != 0);
  }
  *(long *)(param_2 + 0xe0) = lVar3;
  return;
}


