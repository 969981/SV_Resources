/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017609f4; name: FUN_017609f4
 */


ulong FUN_017609f4(long *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  uVar4 = FUN_01760a94();
  if ((uVar4 & 1) != 0) {
    if (param_1[8] == 0) {
      if (param_1[9] == 0) {
        return uVar4;
      }
      uVar2 = (**(code **)(*param_1 + 0x88))(param_1);
      uVar1 = 0;
      uVar6 = (uint)(uVar4 >> 0x20);
      if (uVar2 != 0) {
        uVar1 = uVar6 / uVar2;
      }
      uVar3 = (**(code **)(*param_1 + 0x88))(param_1);
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = uVar6 / uVar3;
      }
      lVar5 = *(long *)(param_1[9] + (ulong)uVar1 * 8) + (ulong)(uVar6 - uVar2 * uVar3) * 0x10;
    }
    else {
      lVar5 = param_1[8] + (uVar4 >> 0x20) * 0x10;
    }
    if (lVar5 != 0) {
      *(undefined1 *)(lVar5 + 8) = *(undefined1 *)(param_3 + 8);
    }
  }
  return uVar4;
}


