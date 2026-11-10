/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f0130; name: FUN_021f0130
 */


void FUN_021f0130(long param_1,undefined4 param_2,undefined4 param_3,code *param_4)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  
  sVar1 = FUN_00f51268(param_2,param_3);
  uVar4 = sVar1 - 1U & 0xff;
  if (2 < uVar4) {
    uVar2 = (*param_4)(100);
    uVar3 = FUN_01712c64(param_2,param_3);
    uVar4 = (ushort)(uVar2 < (uVar3 & 0xff));
  }
  *(ushort *)(param_1 + 0x30) = uVar4;
  return;
}


