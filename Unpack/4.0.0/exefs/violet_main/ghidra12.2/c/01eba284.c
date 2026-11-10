/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eba284; name: FUN_01eba284
 */


undefined1  [16] FUN_01eba284(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  if (*(long *)(param_1 + 0x40) == 0) {
    auVar5 = FUN_01e033bc();
    return auVar5;
  }
  bVar1 = FUN_011c4ef4(param_2);
  uVar4 = 0;
  if (((bVar1 < 4) && (uVar3 = (ulong)bVar1, (*(byte *)(param_1 + uVar3 * 0x28 + 0x58) & 1) != 0))
     && (*(char *)(param_1 + uVar3 * 0x28 + 0x60) != '\0')) {
    param_1 = param_1 + uVar3 * 0x28;
    nn::os::GetSystemTick();
    lVar2 = nn::os::ConvertToTimeSpan();
    lVar2 = lVar2 - *(long *)(param_1 + 0x68);
    *(long *)(param_1 + 0x70) = lVar2;
    uVar4 = (ulong)(uint)(float)((double)lVar2 / 1000000000.0);
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar4;
  return auVar5;
}


