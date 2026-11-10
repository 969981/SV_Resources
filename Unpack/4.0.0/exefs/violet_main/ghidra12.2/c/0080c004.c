/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080c004; name: FUN_0080c004
 */


long FUN_0080c004(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x13cc) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 0x13c0) + lVar3) + 0x28))();
      if (((uVar2 & 1) != 0) &&
         (lVar1 = *(long *)(param_1 + 0x13c0) + lVar3, *(int *)(lVar1 + 0xb4) == param_2)) {
        return lVar1;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0xb8;
    } while (uVar4 < *(uint *)(param_1 + 0x13cc));
  }
  return 0;
}


