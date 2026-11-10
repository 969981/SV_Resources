/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034bf410; name: FUN_034bf410
 */


void FUN_034bf410(long param_1,uint param_2,undefined4 param_3)

{
  long lVar1;
  
  if (*(int *)(*(long *)(param_1 + 8) + 0x18) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    do {
      (**(code **)(**(long **)(lVar1 + 8) + 0x18))(*(long **)(lVar1 + 8),param_2 & 1,param_3);
      lVar1 = lVar1 + 0x10;
    } while (lVar1 != *(long *)(*(long *)(param_1 + 8) + 0x10) +
                      (ulong)*(uint *)(*(long *)(param_1 + 8) + 0x18) * 0x10);
  }
  return;
}


