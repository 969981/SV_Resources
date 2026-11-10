/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02613ae0; name: FUN_02613ae0
 */


undefined1  [16] FUN_02613ae0(int *param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  ushort *puVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  puVar3 = (ushort *)((long)param_2 - (long)*param_2);
  uVar4 = 0;
  if (*puVar3 < 0xb) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if ((ulong)puVar3[5] != 0) {
      uVar1 = (uint)*(ushort *)((long)param_2 + (ulong)puVar3[5]);
    }
    if ((0xe < *puVar3) && ((ulong)puVar3[7] != 0)) {
      uVar4 = *(ulong *)((long)param_2 + (ulong)puVar3[7]);
    }
  }
  if ((uVar1 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar2 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)uVar1), uVar2 != 0)) {
    auVar6._0_8_ = *(ulong *)((long)param_1 + uVar2);
    auVar6._8_8_ = 0;
    return auVar6;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar4;
  return auVar5;
}


