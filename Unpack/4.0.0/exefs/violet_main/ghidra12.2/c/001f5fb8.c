/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f5fb8; name: FUN_001f5fb8
 */


undefined8 FUN_001f5fb8(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte local_20 [16];
  
  uVar3 = param_2 - 0x1f;
  if (param_2 < 0x1f) {
    local_20[0] = (byte)param_2 | 0x20;
    lVar2 = 1;
  }
  else {
    if (uVar3 < 0x80) {
      pbVar5 = (byte *)((ulong)local_20 | 1);
      lVar2 = 2;
    }
    else {
      uVar8 = 1;
      uVar7 = uVar3;
      do {
        uVar4 = uVar8;
        uVar9 = uVar7 >> 0xe;
        uVar7 = uVar7 >> 7;
        uVar8 = uVar4 + 1;
      } while (uVar9 != 0);
      if (0xf < uVar8) {
        return 0xfffffdf5;
      }
      lVar2 = uVar4 + 2;
      pbVar5 = (byte *)((ulong)local_20 | 1);
      if (0x7f < uVar3) {
        pbVar6 = pbVar5;
        uVar8 = uVar3;
        do {
          uVar3 = uVar8 >> 7;
          uVar7 = uVar8 >> 0xe;
          pbVar5 = pbVar6 + 1;
          *pbVar6 = (byte)uVar8 | 0x80;
          pbVar6 = pbVar5;
          uVar8 = uVar3;
        } while (uVar7 != 0);
      }
    }
    local_20[0] = 0x3f;
    *pbVar5 = (byte)uVar3;
  }
  uVar1 = FUN_001f4310(param_1,local_20,lVar2);
  return uVar1;
}


