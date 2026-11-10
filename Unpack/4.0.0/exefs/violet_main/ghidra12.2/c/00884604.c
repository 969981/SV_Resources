/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00884604; name: FUN_00884604
 */


undefined8 FUN_00884604(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  if (((*(int *)(param_1 + 0x98) < 1) && (0 < (int)param_3[2])) && (lVar1 = *param_3, lVar1 != 0)) {
    *(int *)(param_1 + 0x98) = (int)param_3[2];
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(long *)(param_1 + 0xa0) = lVar1;
    *(long *)(param_1 + 0xa8) = lVar1 + (long)(int)param_3[2] * 0x38;
    *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)((long)param_3 + 0x14);
    *(undefined1 *)(param_1 + 0xb9) = *(undefined1 *)((long)param_3 + 0x15);
    *(undefined1 *)(param_1 + 0xba) = *(undefined1 *)((long)param_3 + 0x16);
    *(undefined1 *)(param_1 + 0xbb) = *(undefined1 *)((long)param_3 + 0x17);
    *(long *)(param_1 + 0xb0) = param_3[1];
    return 1;
  }
  return 0;
}


