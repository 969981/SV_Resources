/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a4f3e0; name: FUN_00a4f3e0
 */


uint FUN_00a4f3e0(long param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_3 < 0x402) {
    uVar2 = FUN_00a4f8c0(param_2);
    if ((uVar2 & 1) != 0) {
      uVar1 = 0;
      if ((2 < param_2) || (0x1f < (param_4 & 0xff))) goto LAB_00a4f468;
      if ((*(uint *)(param_1 + (long)param_3 * 0x18 + (ulong)param_2 * 4 + 0x38) >>
           (ulong)(param_4 & 0x1f) & 1) != 0) {
        uVar1 = FUN_00a61b94(param_1 + 0x6358,param_2,param_3,param_4);
        uVar1 = uVar1 ^ 1;
        goto LAB_00a4f468;
      }
    }
  }
  uVar1 = 0;
LAB_00a4f468:
  return uVar1 & 1;
}


