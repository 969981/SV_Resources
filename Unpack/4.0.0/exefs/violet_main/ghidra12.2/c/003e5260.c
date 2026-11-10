/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e5260; name: FUN_003e5260
 */


void FUN_003e5260(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if ((((param_1 != (long *)0x0) && (*param_1 != 0)) &&
      (lVar2 = *(long *)(param_2 + 0x20), lVar2 != 0)) && ((*(byte *)(lVar2 + 8) >> 1 & 1) != 0)) {
    puVar1 = (undefined8 *)(*param_1 + (long)*(int *)(lVar2 + 0x20));
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 1;
  }
  return;
}


