/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01026e04; name: FUN_01026e04
 */


void FUN_01026e04(long param_1,long param_2,int param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_3 == 3) && (*(char *)(param_1 + 0x42) != '\0')) {
    (**(code **)(param_2 + 0xa40))(param_2 + 0xa60);
    uVar1 = FUN_01026e74(param_1);
    lVar2 = *(long *)(param_1 + 0x78);
    uVar3 = uVar1 >> 6;
    uVar1 = 1L << (uVar1 & 0x3f);
    if ((param_4 & 1) == 0) {
      uVar1 = *(ulong *)(lVar2 + uVar3 * 8) & (uVar1 ^ 0xffffffffffffffff);
    }
    else {
      uVar1 = *(ulong *)(lVar2 + uVar3 * 8) | uVar1;
    }
    *(ulong *)(lVar2 + uVar3 * 8) = uVar1;
  }
  return;
}


