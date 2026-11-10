/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0159abc0; name: FUN_0159abc0
 */


void FUN_0159abc0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  while ((param_1 != param_2 &&
         (((lVar1 = *(long *)(param_1 + 0x10), *(int *)(lVar1 + 0x2c) != (int)param_3 ||
           (*(int *)(lVar1 + 0x30) != (int)((ulong)param_3 >> 0x20))) ||
          (*(long *)(lVar1 + 0x60) != param_4))))) {
    param_1 = *(long *)(param_1 + 8);
  }
  return;
}


