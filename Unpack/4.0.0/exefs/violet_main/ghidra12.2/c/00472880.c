/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00472880; name: FUN_00472880
 */


ulong FUN_00472880(long param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  
  if (param_4 <= param_3) {
    if (param_4 >> 3 == 0) {
      do {
        FUN_00472910(param_1);
        param_3 = param_3 - param_4;
      } while (param_4 <= param_3);
    }
    else {
      do {
        uVar1 = 0;
        puVar3 = param_2;
        do {
          lVar2 = uVar1 * 8;
          param_2 = puVar3 + 1;
          uVar1 = uVar1 + 1;
          *(ulong *)(param_1 + lVar2) = *puVar3 ^ *(ulong *)(param_1 + lVar2);
          puVar3 = param_2;
        } while (param_4 >> 3 != uVar1);
        FUN_00472910(param_1);
        param_3 = param_3 - param_4;
      } while (param_4 <= param_3);
    }
  }
  return param_3;
}


