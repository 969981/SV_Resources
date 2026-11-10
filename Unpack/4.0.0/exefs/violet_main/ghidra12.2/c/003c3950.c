/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003c3950; name: FUN_003c3950
 */


void FUN_003c3950(long param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
                 undefined4 param_6)

{
  FUN_004806c0(0x14,param_3,param_4,param_5,param_6);
  if ((*(int *)(param_1 + 100) == 0) || (*(int *)(param_1 + 0x48) != 1)) {
    *(undefined4 *)(param_1 + 100) = 1;
    *(undefined4 *)(param_1 + 0x48) = 1;
    if ((param_2 != -1) && (*(int *)(param_1 + 0x7c) != 1)) {
      FUN_003ad170(param_1,2,param_2);
      return;
    }
  }
  return;
}


