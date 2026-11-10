/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01573894; name: FUN_01573894
 */


undefined1  [16] FUN_01573894(long *param_1,ulong param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar3 = 1;
  if (param_2 < (ulong)param_1[2]) {
    uVar3 = (ulong)*(byte *)(param_1 + 1);
    bVar1 = *(byte *)(*param_1 + param_1[2] * uVar3 + param_2);
    lVar2 = *param_1 + uVar3 * param_2;
    uVar4 = (ulong)(bVar1 >> 2) << 0x20;
    uVar5 = ((ulong)(uint)(1 << ((ulong)bVar1 & 3)) & 0xff) << 8;
  }
  else {
    uVar4 = 0;
    lVar2 = 0;
    uVar5 = 0x100;
  }
  auVar6._8_8_ = uVar5 | uVar4 | uVar3;
  auVar6._0_8_ = lVar2;
  return auVar6;
}


