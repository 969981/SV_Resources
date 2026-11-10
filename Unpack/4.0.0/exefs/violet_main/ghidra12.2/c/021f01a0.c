/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f01a0; name: FUN_021f01a0
 */


void FUN_021f01a0(long param_1,undefined8 *param_2,code *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_00e974d8(*param_2);
  uVar3 = FUN_00cf4c64(uVar6,0xf);
  uVar6 = FUN_00e974d8(param_2[1]);
  uVar4 = FUN_00cf4c64(uVar6,0xf);
  uVar1 = FUN_00e97b70(*param_2);
  uVar2 = FUN_00e97b70(param_2[1]);
  if (((uVar3 & 1) == 0) || ((uVar4 & 1) == 0)) {
    if ((uVar3 & 1) == 0) {
      uVar1 = uVar2;
    }
    if (((uVar3 | uVar4) & 1) == 0) {
      return;
    }
  }
  else {
    iVar5 = (*param_3)(2);
    if (iVar5 != 0) {
      uVar1 = uVar2;
    }
  }
  *(undefined2 *)(param_1 + 0x32) = uVar1;
  return;
}


