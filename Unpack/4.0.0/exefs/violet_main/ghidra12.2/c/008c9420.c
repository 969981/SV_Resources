/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008c9420; name: FUN_008c9420
 */


void FUN_008c9420(long param_1,undefined8 param_2,ulong param_3)

{
  long local_8;
  
  *(undefined8 *)(param_1 + 0x98) = 0;
  if ((param_3 & 1) != 0) {
    FUN_008c7ed0(param_1);
    local_8 = param_1;
    FUN_008c8080(&local_8);
  }
  if (*(long *)(param_1 + 0x228) != 0) {
    *(int *)(param_1 + 0x838) = *(int *)(param_1 + 0x838) + -1;
    FUN_008d4410(*(long *)(param_1 + 0x228),1);
    *(undefined8 *)(param_1 + 0x228) = 0;
  }
  if (*(long *)(param_1 + 0x6e0) != 0) {
    FUN_008c9b4c(*(undefined8 *)(param_1 + 0x6f0),*(long *)(param_1 + 0x6e0),0);
    *(undefined8 *)(param_1 + 0x6e0) = 0;
  }
  if (*(long *)(param_1 + 0x708) != 0) {
    FUN_008c9b4c(*(undefined8 *)(param_1 + 0x718),*(long *)(param_1 + 0x708),0);
    *(undefined8 *)(param_1 + 0x708) = 0;
  }
  if (*(long *)(param_1 + 0x728) != 0) {
    FUN_008c9b4c(*(undefined8 *)(param_1 + 0x738),*(long *)(param_1 + 0x728),0);
    *(undefined8 *)(param_1 + 0x728) = 0;
  }
  if (*(long *)(param_1 + 0x748) != 0) {
    FUN_008c9b4c(*(undefined8 *)(param_1 + 0x758),*(long *)(param_1 + 0x748),0);
    *(undefined8 *)(param_1 + 0x748) = 0;
  }
  if (*(long *)(param_1 + 0x768) != 0) {
    FUN_008c9b4c(*(undefined8 *)(param_1 + 0x778),*(long *)(param_1 + 0x768),0);
    *(undefined8 *)(param_1 + 0x768) = 0;
  }
  if (*(long *)(param_1 + 0x788) != 0) {
    FUN_008c9b4c(*(undefined8 *)(param_1 + 0x798),*(long *)(param_1 + 0x788),0);
    *(undefined8 *)(param_1 + 0x788) = 0;
  }
  FUN_008ee788(param_1 + 0x7a8);
  return;
}


