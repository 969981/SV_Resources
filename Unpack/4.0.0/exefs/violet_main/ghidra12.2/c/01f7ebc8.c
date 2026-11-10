/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f7ebc8; name: FUN_01f7ebc8
 */


void FUN_01f7ebc8(undefined8 *param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  
  if (((int)param_3 < 0) || (*(ulong *)(param_2 + 0x40) <= (ulong)param_3)) {
    *param_1 = 0;
    return;
  }
  FUN_0193b578(param_1,*(undefined8 *)(param_2 + 8));
  lVar1 = *(long *)(param_2 + 0x38);
  if (0 < (int)param_3) {
    lVar2 = (ulong)param_3 + 1;
    do {
      lVar1 = *(long *)(lVar1 + 8);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
  }
  FUN_01f7eb84(*param_1,lVar1 + 0x10);
  return;
}


