/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289c8fc; name: FUN_0289c8fc
 */


bool FUN_0289c8fc(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar4 = FUN_013fcabc(*param_2);
  uVar3 = FUN_01419488(*param_2);
  lVar7 = *(long *)(param_1 + 0x2a8);
  lVar6 = *(long *)(param_1 + 0x2b0);
  if (lVar7 == lVar6) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulong)(uVar4 == *(byte *)(lVar7 + 8));
    if (lVar7 + 0x18 != lVar6) {
      lVar2 = lVar7 + 0x30;
      if (uVar4 == *(byte *)(lVar7 + 0x20)) {
        uVar5 = uVar5 + 1;
      }
      while (lVar2 != lVar6) {
        pbVar1 = (byte *)(lVar2 + 8);
        lVar2 = lVar2 + 0x18;
        if (uVar4 == *pbVar1) {
          uVar5 = uVar5 + 1;
        }
      }
    }
  }
  return (long)(ulong)uVar3 <= (long)uVar5;
}


