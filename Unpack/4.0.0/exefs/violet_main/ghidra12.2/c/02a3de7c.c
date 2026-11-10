/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a3de7c; name: FUN_02a3de7c
 */


void FUN_02a3de7c(long param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 6) {
    uVar1 = (&DAT_03d5f138)[(int)param_2];
    *(undefined4 *)(param_1 + 100) = (&DAT_03d5f120)[(int)param_2];
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    *(undefined4 *)(param_1 + 0x28) = 6;
    FUN_0186cbc8();
    return;
  }
  return;
}


