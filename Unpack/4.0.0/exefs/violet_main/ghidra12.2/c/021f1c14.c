/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f1c14; name: FUN_021f1c14
 */


int FUN_021f1c14(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = FUN_00d1eb6c(*(undefined8 *)(param_1 + 0x70));
  if (((uVar2 & 1) == 0) && (uVar1 = FUN_00e97f74(*(undefined8 *)(param_1 + 0x70)), uVar1 < 0x1f)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  uVar1 = FUN_00d1eb6c(*(undefined8 *)(param_1 + 0x70));
  if (((uVar1 >> 1 & 1) != 0) ||
     (uVar1 = FUN_00e982bc(*(undefined8 *)(param_1 + 0x70)), 0x1e < uVar1)) {
    iVar3 = iVar3 + 1;
  }
  uVar1 = FUN_00d1eb6c(*(undefined8 *)(param_1 + 0x70));
  if (((uVar1 >> 2 & 1) != 0) ||
     (uVar1 = FUN_00e98604(*(undefined8 *)(param_1 + 0x70)), 0x1e < uVar1)) {
    iVar3 = iVar3 + 1;
  }
  uVar1 = FUN_00d1eb6c(*(undefined8 *)(param_1 + 0x70));
  if (((uVar1 >> 3 & 1) != 0) ||
     (uVar1 = FUN_00e9894c(*(undefined8 *)(param_1 + 0x70)), 0x1e < uVar1)) {
    iVar3 = iVar3 + 1;
  }
  uVar1 = FUN_00d1eb6c(*(undefined8 *)(param_1 + 0x70));
  if (((uVar1 >> 4 & 1) != 0) ||
     (uVar1 = FUN_00e98fdc(*(undefined8 *)(param_1 + 0x70)), 0x1e < uVar1)) {
    iVar3 = iVar3 + 1;
  }
  uVar1 = FUN_00d1eb6c(*(undefined8 *)(param_1 + 0x70));
  if (((uVar1 >> 5 & 1) != 0) ||
     (uVar1 = FUN_00e98c94(*(undefined8 *)(param_1 + 0x70)), 0x1e < uVar1)) {
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}


