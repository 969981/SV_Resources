/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005161f8; name: FUN_005161f8
 */


ulong FUN_005161f8(long *param_1,ulong param_2,ulong *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  if (0 < (int)((ulong)(param_1[1] - lVar3) >> 4)) {
    lVar4 = 0;
    do {
      lVar3 = lVar3 + lVar4 * 0x10;
      if (param_2 < *param_3) {
        uVar1 = *(uint *)(lVar3 + 4);
      }
      else {
        param_2 = FUN_0052c6d8(param_3,param_2);
        uVar1 = *(uint *)(lVar3 + 4);
      }
      if (uVar1 < 5) {
                    /* WARNING: Could not recover jumptable at 0x00516288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&UNK_0051628c + (ulong)(byte)(&DAT_03d08d98)[uVar1] * 4))();
        return uVar2;
      }
      lVar3 = *param_1;
      lVar4 = lVar4 + 1;
    } while (lVar4 < (int)((ulong)(param_1[1] - lVar3) >> 4));
  }
  return param_2;
}


