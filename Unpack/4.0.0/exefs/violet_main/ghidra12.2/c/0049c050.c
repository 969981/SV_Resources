/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049c050; name: FUN_0049c050
 */


undefined8 FUN_0049c050(byte *param_1,ulong param_2,byte *param_3,ulong param_4,uint param_5)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  
  if ((param_5 >> 0xf & 1) != 0) {
    pbVar5 = param_1;
    uVar7 = param_2;
    if (param_4 <= param_2 && param_2 - param_4 != 0) {
      pbVar1 = param_1 + (param_2 - param_4);
      if ((param_5 >> 4 & 1) == 0) {
        do {
          if (*pbVar5 == 0) goto LAB_0049c0b4;
          uVar7 = uVar7 - 1;
          pbVar5 = pbVar5 + 1;
        } while (param_4 < uVar7);
      }
      else {
        do {
          if ((*pbVar5 == 0) || (*pbVar5 == 0x2e)) goto LAB_0049c0b4;
          uVar7 = uVar7 - 1;
          pbVar5 = pbVar5 + 1;
        } while (param_4 < uVar7);
      }
      goto joined_r0x0049c0cc;
    }
LAB_0049c0b4:
    pbVar1 = pbVar5;
    if (uVar7 == param_4) goto joined_r0x0049c0cc;
  }
  pbVar1 = param_1;
  if (param_2 != param_4) {
    return 0;
  }
joined_r0x0049c0cc:
  while( true ) {
    if (param_4 == 0) {
      return 1;
    }
    bVar3 = *pbVar1;
    if (bVar3 == 0) break;
    bVar4 = *param_3;
    if ((uint)bVar3 != (uint)bVar4) {
      uVar6 = (uint)bVar3;
      uVar2 = uVar6 + 0x20;
      if (0x19 < uVar6 - 0x41) {
        uVar2 = uVar6;
      }
      uVar6 = bVar4 + 0x20;
      if (0x19 < bVar4 - 0x41) {
        uVar6 = (uint)bVar4;
      }
      if ((uVar2 & 0xff) != (uVar6 & 0xff)) {
        return 0;
      }
    }
    param_3 = param_3 + 1;
    param_4 = param_4 - 1;
    pbVar1 = pbVar1 + 1;
  }
  return 0;
}


