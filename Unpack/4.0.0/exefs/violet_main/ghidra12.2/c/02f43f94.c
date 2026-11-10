/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f43f94; name: FUN_02f43f94
 */


void FUN_02f43f94(long param_1,undefined2 *param_2,uint param_3)

{
  ulong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulong)param_3;
    do {
      FUN_02f1cb68(*(undefined8 *)(param_1 + 0x8a8),*param_2);
      uVar1 = uVar1 - 1;
      param_2 = param_2 + 1;
    } while (uVar1 != 0);
  }
  return;
}


