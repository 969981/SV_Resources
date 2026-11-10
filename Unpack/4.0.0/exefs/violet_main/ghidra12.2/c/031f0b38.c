/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031f0b38; name: FUN_031f0b38
 */


undefined8
FUN_031f0b38(long *param_1,undefined8 param_2,byte *param_3,ulong *param_4,undefined4 param_5)

{
  undefined8 uVar1;
  byte *pbVar2;
  ulong *puVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *local_48;
  ulong *local_28;
  
  pbVar2 = param_3;
  do {
    if ((*pbVar2 >> 1 & 1) != 0) {
      puVar3 = *(ulong **)(pbVar2 + 0x18);
      goto LAB_031f0b80;
    }
    pbVar2 = *(byte **)(pbVar2 + 8);
  } while (pbVar2 != (byte *)0x0);
  puVar3 = (ulong *)0x0;
LAB_031f0b80:
  if (puVar3 != param_4) {
    local_28 = param_4;
    while( true ) {
      uVar4 = (uint)*local_28;
      if ((uVar4 >> 0xd & 1) != 0) break;
      if (((*local_28 & 1) != 0) || (local_28 = (ulong *)local_28[1], local_28 == (ulong *)0x0))
      goto LAB_031f0bd0;
    }
    if (local_28 != (ulong *)0x0) {
      uVar4 = uVar4 & 0x1fff;
      local_28 = local_28 + (ulong)(byte)(POPCOUNT((char)uVar4) + POPCOUNT((char)(uVar4 >> 8))) + 2;
      goto LAB_031f0bd8;
    }
LAB_031f0bd0:
    local_28 = (ulong *)0x0;
LAB_031f0bd8:
    local_48 = puVar3;
    while( true ) {
      uVar4 = (uint)*local_48;
      if ((uVar4 >> 0xd & 1) != 0) break;
      if (((*local_48 & 1) != 0) || (local_48 = (ulong *)local_48[1], local_48 == (ulong *)0x0))
      goto LAB_031f0c34;
    }
    if (local_48 != (ulong *)0x0) {
      uVar6 = CONCAT44(uVar4,uVar4) & 0x1fff00001fff;
      local_48 = local_48 + (ulong)(byte)(POPCOUNT((char)uVar6) + POPCOUNT((char)(uVar6 >> 8))) + 2;
      if (local_28 == (ulong *)0x0) {
        return 1;
      }
      uVar6 = FUN_031dd3c0(&local_28,&local_48);
      if ((uVar6 & 1) == 0) {
        return 1;
      }
      goto LAB_031f0c78;
    }
LAB_031f0c34:
    local_48 = (ulong *)0x0;
    if (local_28 != (ulong *)0x0) {
      return 1;
    }
    if (param_4 == (ulong *)0x0) {
      puVar5 = (ulong *)0x0;
    }
    else {
      puVar5 = param_4;
      do {
        if ((*puVar5 & 1) != 0) break;
        puVar5 = (ulong *)puVar5[1];
      } while (puVar5 != (ulong *)0x0);
    }
    for (; (puVar3 != (ulong *)0x0 && ((*puVar3 & 1) == 0)); puVar3 = (ulong *)puVar3[1]) {
    }
    if (puVar5 != puVar3) {
      return 1;
    }
  }
LAB_031f0c78:
  puVar3 = param_4;
  while( true ) {
    uVar4 = (uint)*puVar3;
    if ((uVar4 >> 0x16 & 1) != 0) break;
    if (((*puVar3 & 1) != 0) || (puVar3 = (ulong *)puVar3[1], puVar3 == (ulong *)0x0))
    goto LAB_031f0cbc;
  }
  if ((puVar3 != (ulong *)0x0) &&
     (uVar6 = CONCAT44(uVar4,uVar4) & 0x3fffff003fffff,
     puVar3[(ulong)(byte)(POPCOUNT((char)uVar6) + POPCOUNT((char)(uVar6 >> 8)) +
                         POPCOUNT((char)(uVar6 >> 0x10))) + 2] != 0)) goto LAB_031f0d00;
LAB_031f0cbc:
  puVar3 = param_4;
  while (uVar6 = *puVar3, ((uint)uVar6 >> 6 & 1) == 0) {
    if ((uVar6 & 1) != 0) {
      return 1;
    }
    puVar3 = (ulong *)puVar3[1];
    if (puVar3 == (ulong *)0x0) {
      return 1;
    }
  }
  if ((puVar3 == (ulong *)0x0) || (puVar3[(ulong)(byte)POPCOUNT((byte)uVar6 & 0x3f) + 2] == 0)) {
    return 1;
  }
LAB_031f0d00:
                    /* WARNING: Could not recover jumptable at 0x031f0d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}


