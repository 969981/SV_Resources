/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02706a84; name: FUN_02706a84
 */


bool FUN_02706a84(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *local_8;
  
  local_8 = param_1;
  puVar1 = (undefined8 *)FUN_027065c0(&local_8);
  lVar6 = param_1[1];
  if (puVar1 == &DAT_04859d88) {
    if (lVar6 != 0) {
      uVar3 = *(ulong *)(lVar6 + 0x30);
      lVar4 = param_1[2];
      goto LAB_02706ae0;
    }
    uVar2 = 0;
    uVar5 = 0;
  }
  else {
    lVar4 = param_1[2];
    if (puVar1 == param_1) {
      uVar2 = 0;
    }
    else {
      uVar2 = param_1[4] - puVar1[5];
    }
    uVar3 = uVar2;
    if ((lVar6 != 0) && (uVar3 = *(ulong *)(lVar6 + 0x30), *(ulong *)(lVar6 + 0x30) <= uVar2)) {
      uVar3 = uVar2;
    }
    if (lVar4 == 0) goto LAB_02706aec;
LAB_02706ae0:
    uVar5 = *(ulong *)(lVar4 + 0x30);
    uVar2 = uVar3;
  }
  uVar3 = uVar5;
  if (uVar5 <= uVar2) {
    uVar3 = uVar2;
  }
LAB_02706aec:
  uVar2 = param_1[6];
  param_1[6] = uVar3;
  return uVar3 == uVar2;
}


