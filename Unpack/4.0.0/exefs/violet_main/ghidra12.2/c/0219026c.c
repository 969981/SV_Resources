/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0219026c; name: FUN_0219026c
 */


void FUN_0219026c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x42) != '\0') {
    (**(code **)(param_2 + 0xa40))(param_2 + 0xa60);
    uVar1 = FUN_01026e74(param_1);
    uVar2 = uVar1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_1 + 0x78) + uVar2) =
         *(ulong *)(*(long *)(param_1 + 0x78) + uVar2) &
         (1L << (uVar1 & 0x3f) ^ 0xffffffffffffffffU);
  }
  return;
}


