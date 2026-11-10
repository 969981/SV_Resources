/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e4dc4; name: FUN_002e4dc4
 */


byte * FUN_002e4dc4(uint param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  bVar1 = *param_2;
  if ((bVar1 == param_1) && (*(ushort *)(param_2 + 2) == param_3)) {
    return param_2;
  }
  if (bVar1 == 7) {
    if (*(ushort *)(param_2 + 2) == param_3) {
      return param_2;
    }
  }
  else if (((bVar1 & 0xfe) == 8) && (*(ushort *)(param_2 + 2) == param_3)) {
    pbVar3 = (byte *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (pbVar3 != (byte *)0x0) {
      *(short *)(pbVar3 + 2) = (short)param_3;
      pbVar3[0] = 7;
      pbVar3[1] = 0;
      pbVar3[4] = 1;
      pbVar3[5] = 0;
      pbVar3[0x26] = 0;
      pbVar3[0x27] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      pbVar3[0x10] = 0;
      pbVar3[0x11] = 0;
      pbVar3[0x12] = 0;
      pbVar3[0x13] = 0;
      pbVar3[0x14] = 0;
      pbVar3[0x15] = 0;
      pbVar3[6] = 0;
      pbVar3[7] = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0x1e] = 0;
      pbVar3[0x1f] = 0;
      pbVar3[0x20] = 0;
      pbVar3[0x21] = 0;
      pbVar3[0x22] = 0;
      pbVar3[0x23] = 0;
      pbVar3[0x24] = 0;
      pbVar3[0x25] = 0;
      pbVar3[0x16] = 0;
      pbVar3[0x17] = 0;
      pbVar3[0x18] = 0;
      pbVar3[0x19] = 0;
      pbVar3[0x1a] = 0;
      pbVar3[0x1b] = 0;
      pbVar3[0x1c] = 0;
      pbVar3[0x1d] = 0;
    }
    pbVar3[6] = 1;
    pbVar3[7] = 0;
    pbVar4 = param_2 + 8;
    if (1 < *(ushort *)(param_2 + 6)) {
      pbVar4 = *(byte **)pbVar4;
    }
    uVar2 = FUN_002e4590(*(undefined8 *)pbVar4);
    pbVar4 = pbVar3 + 8;
    if (1 < *(ushort *)(pbVar3 + 6)) {
      pbVar4 = *(byte **)pbVar4;
    }
    *(undefined8 *)pbVar4 = uVar2;
    FUN_002e4804(param_2);
    return pbVar3;
  }
  pbVar3 = (byte *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  if (pbVar3 != (byte *)0x0) {
    *pbVar3 = (byte)param_1;
    pbVar3[1] = 0;
    *(short *)(pbVar3 + 2) = (short)param_3;
    pbVar3[4] = 1;
    pbVar3[5] = 0;
    pbVar3[0x26] = 0;
    pbVar3[0x27] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3[0x10] = 0;
    pbVar3[0x11] = 0;
    pbVar3[0x12] = 0;
    pbVar3[0x13] = 0;
    pbVar3[0x14] = 0;
    pbVar3[0x15] = 0;
    pbVar3[6] = 0;
    pbVar3[7] = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0x1e] = 0;
    pbVar3[0x1f] = 0;
    pbVar3[0x20] = 0;
    pbVar3[0x21] = 0;
    pbVar3[0x22] = 0;
    pbVar3[0x23] = 0;
    pbVar3[0x24] = 0;
    pbVar3[0x25] = 0;
    pbVar3[0x16] = 0;
    pbVar3[0x17] = 0;
    pbVar3[0x18] = 0;
    pbVar3[0x19] = 0;
    pbVar3[0x1a] = 0;
    pbVar3[0x1b] = 0;
    pbVar3[0x1c] = 0;
    pbVar3[0x1d] = 0;
  }
  *(byte **)(pbVar3 + 8) = param_2;
  pbVar3[6] = 1;
  pbVar3[7] = 0;
  return pbVar3;
}


