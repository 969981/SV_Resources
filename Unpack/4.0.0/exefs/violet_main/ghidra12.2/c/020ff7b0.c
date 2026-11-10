/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020ff7b0; name: FUN_020ff7b0
 */


void FUN_020ff7b0(long param_1,long *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0x50) + 0x210) + 8);
  if (((ulong)uVar2 < 8 && uVar2 != 4) && uVar2 != 7) {
    uVar3 = (**(code **)(*param_2 + 0x730))
                      (param_2,*(undefined4 *)(&DAT_03cbf380 + (ulong)uVar2 * 4));
    uVar2 = FUN_011e21c0(uVar3,*(undefined8 *)(param_1 + 0x50),param_2,uVar3 & 0xffffffff,
                         param_1 + 0xb0);
    uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[2] = uVar1;
    uVar2 = (uVar2 & 0xf) << 4 | ((uint)uVar3 & 0xffff) << 8 | 1;
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
    uVar2 = *param_3 & 0xfffff000 | 6;
    param_3[2] = uVar1;
  }
  *param_3 = uVar2;
  return;
}


