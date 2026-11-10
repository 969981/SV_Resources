/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004fd9b0; name: FUN_004fd9b0
 */


undefined8 FUN_004fd9b0(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined8 local_48;
  ulong local_40;
  byte *local_38;
  
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    if (bVar1 < 2) {
      return 0;
    }
    bVar2 = param_1[1];
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
      return 0;
    }
    bVar2 = **(byte **)(param_1 + 0x10);
  }
  if (((0x19 < bVar2 - 0x61) && (bVar2 != 0x5f)) && (0x19 < (byte)(bVar2 + 0xbf))) {
    return 0;
  }
  if ((bVar1 & 1) == 0) {
    uVar3 = (ulong)(bVar1 >> 1);
    if (bVar1 >> 1 == 0) {
LAB_004fdbac:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    param_1 = param_1 + 1;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 8);
    if (uVar3 == 0) goto LAB_004fdbac;
    param_1 = *(byte **)(param_1 + 0x10);
  }
  uVar4 = uVar3 - 1;
  if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar4 < 0x17) {
    local_48 = CONCAT71(local_48._1_7_,(char)((int)uVar4 << 1));
    pbVar6 = (byte *)((ulong)&local_48 | 1);
    if (uVar4 != 0) goto LAB_004fdaf8;
    *pbVar6 = 0;
    uVar3 = 0;
LAB_004fda7c:
    uVar4 = uVar3 >> 1;
    if ((int)uVar4 == 0) {
      return 1;
    }
    pbVar6 = (byte *)((long)&local_48 + 1);
    do {
      bVar1 = *pbVar6;
      if (((0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) && (bVar1 != 0x5f)) && (9 < (byte)(bVar1 - 0x30)))
      goto LAB_004fdb64;
      pbVar6 = pbVar6 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  else {
    uVar3 = uVar3 + 0xf & 0xfffffffffffffff0;
    pbVar6 = (byte *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
    local_48 = uVar3 | 1;
    local_40 = uVar4;
    local_38 = pbVar6;
LAB_004fdaf8:
    memcpy(pbVar6,param_1 + 1,uVar4);
    pbVar6[uVar4] = 0;
    uVar3 = local_48 & 0xff;
    if ((local_48 & 1) == 0) goto LAB_004fda7c;
    if (local_40 == 0) {
      uVar5 = 1;
      goto LAB_004fdb88;
    }
    uVar4 = local_40;
    pbVar6 = local_38;
    do {
      bVar1 = *pbVar6;
      if (((0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) && (bVar1 != 0x5f)) && (9 < (byte)(bVar1 - 0x30)))
      goto LAB_004fdb64;
      pbVar6 = pbVar6 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar5 = 1;
joined_r0x004fdb68:
  if ((uVar3 & 1) == 0) {
    return uVar5;
  }
LAB_004fdb88:
  FUN_0049e790(PTR_LAB_047cba48);
  return uVar5;
LAB_004fdb64:
  uVar5 = 0;
  goto joined_r0x004fdb68;
}


