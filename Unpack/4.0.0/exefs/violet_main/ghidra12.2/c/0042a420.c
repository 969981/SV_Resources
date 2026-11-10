/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0042a420; name: FUN_0042a420
 */


void FUN_0042a420(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_58 = param_2[1];
  local_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  uStack_38 = param_2[5];
  local_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  FUN_0042a4b0(&local_60);
  lVar2 = 0;
  uVar3 = 0;
  uVar5 = 0;
  uVar6 = 0;
  do {
    uVar4 = (uint)uVar5;
    if ((uVar6 < 0x10) && (uVar4 < 8)) {
      uVar1 = (ulong)uVar6;
      uVar6 = uVar6 + 1;
      uVar4 = uVar4 + 0x1c;
      uVar3 = (ulong)*(uint *)((long)&local_60 + uVar1 * 4) << (uVar5 & 0x3f) | uVar3;
    }
    *(char *)(param_1 + lVar2) = (char)uVar3;
    lVar2 = lVar2 + 1;
    uVar5 = (ulong)(uVar4 - 8);
    uVar3 = uVar3 >> 8;
  } while (lVar2 != 0x38);
  return;
}


