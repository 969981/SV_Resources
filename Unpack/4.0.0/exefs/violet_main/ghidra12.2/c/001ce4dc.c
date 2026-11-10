/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ce4dc; name: FUN_001ce4dc
 */


ulong FUN_001ce4dc(byte param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    lVar2 = FUN_001ec2f8(0x20);
    *param_2 = lVar2;
    if (lVar2 == 0) {
LAB_001ce568:
      *(undefined4 *)(param_2 + 3) = 1;
      return 0xffffffff;
    }
    lVar3 = 0;
    param_2[1] = 0;
    param_2[2] = 0x20;
  }
  else {
    lVar3 = param_2[1];
    uVar1 = param_2[2];
    if (uVar1 <= lVar3 + 1U) {
      uVar4 = uVar1 * 2;
      if ((uVar4 < uVar1 || uVar1 == 0) || (lVar2 = FUN_001ec318(lVar2,uVar4), lVar2 == 0))
      goto LAB_001ce568;
      lVar3 = param_2[1];
      *param_2 = lVar2;
      param_2[2] = uVar4;
    }
  }
  *(byte *)(lVar2 + lVar3) = param_1;
  param_2[1] = param_2[1] + 1;
  return (ulong)param_1;
}


