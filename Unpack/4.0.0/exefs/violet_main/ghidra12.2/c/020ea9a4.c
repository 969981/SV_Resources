/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020ea9a4; name: FUN_020ea9a4
 */


void FUN_020ea9a4(long param_1,int *param_2,int *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = FUN_020eaa60();
  uVar3 = FUN_020eaa60(param_1,param_3);
  uVar1 = param_2[1] + *param_2 * 0x1e;
  if (uVar1 < 0x3de) {
    uVar4 = (ulong)(uVar1 >> 6);
    uVar5 = 1L << ((ulong)uVar1 & 0x3f);
    if ((uVar3 & 1) == 0) {
      uVar5 = *(ulong *)(param_1 + uVar4 * 8) & (uVar5 ^ 0xffffffffffffffff);
    }
    else {
      uVar5 = *(ulong *)(param_1 + uVar4 * 8) | uVar5;
    }
    *(ulong *)(param_1 + uVar4 * 8) = uVar5;
    uVar1 = param_3[1] + *param_3 * 0x1e;
    if (uVar1 < 0x3de) {
      uVar3 = (ulong)(uVar1 >> 6);
      uVar4 = 1L << ((ulong)uVar1 & 0x3f);
      if ((uVar2 & 1) == 0) {
        uVar4 = *(ulong *)(param_1 + uVar3 * 8) & (uVar4 ^ 0xffffffffffffffff);
      }
      else {
        uVar4 = *(ulong *)(param_1 + uVar3 * 8) | uVar4;
      }
      *(ulong *)(param_1 + uVar3 * 8) = uVar4;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_020eaaa0();
}


