/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d08f8; name: FUN_002d08f8
 */


uint FUN_002d08f8(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  
  pbVar8 = (byte *)*param_1;
  if (pbVar8 == param_2) {
    if (param_1[1] == 0) {
      return 0x2f;
    }
    pbVar1 = param_2 + param_1[1];
    uVar6 = 5;
joined_r0x002d0960:
    uVar7 = uVar6;
    if ((param_2 < pbVar1) && (uVar7 = uVar6 | 2, *param_2 != 10)) {
      uVar7 = uVar6;
    }
    if (pbVar8 == param_2) {
      bVar2 = *param_2;
      if ((((byte)((bVar2 & 0xdf) + 0xbf) < 0x1a) || (bVar2 == 0x5f)) || ((byte)(bVar2 - 0x30) < 10)
         ) {
        return ((uVar7 | 0x10) << 1 ^ 0xffffffff) & 0x20 | uVar7 | 0x10;
      }
      goto LAB_002d09b4;
    }
    bVar2 = param_2[-1];
    bVar3 = false;
    uVar6 = uVar7;
  }
  else {
    bVar2 = param_2[-1];
    pbVar1 = pbVar8 + param_1[1];
    uVar6 = (uint)(bVar2 == 10);
    if (pbVar1 != param_2) goto joined_r0x002d0960;
    uVar6 = uVar6 | 10;
    bVar3 = true;
  }
  uVar9 = (uint)bVar2;
  bVar4 = uVar9 - 0x30 < 10;
  bVar5 = ((uVar9 & 0xffffffdf) - 0x41 & 0xff) < 0x1a;
  if (!bVar3) {
    bVar2 = *param_2;
    uVar7 = uVar6 | 0x10;
    if ((bVar5 || (uVar9 == 0x5f || bVar4)) ==
        (((bVar2 & 0xffffffdf) - 0x41 & 0xff) < 0x1a || (bVar2 == 0x5f || bVar2 - 0x30 < 10))) {
      uVar7 = uVar6;
    }
    return (uVar7 << 1 ^ 0xffffffff) & 0x20 | uVar7;
  }
  uVar7 = uVar6 | 0x10;
  if (!bVar5 && (uVar9 != 0x5f && !bVar4)) {
    uVar7 = uVar6;
  }
LAB_002d09b4:
  return (uVar7 << 1 ^ 0xffffffff) & 0x20 | uVar7;
}


