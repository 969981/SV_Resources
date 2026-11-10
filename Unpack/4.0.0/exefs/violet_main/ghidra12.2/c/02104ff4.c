/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02104ff4; name: FUN_02104ff4
 */


undefined8 FUN_02104ff4(undefined8 param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  uVar2 = (**(code **)(*param_2 + 0xa48))(param_2,param_4);
  uVar3 = (**(code **)(*param_2 + 0xb20))(param_2);
  uVar6 = (uint)(0x100L >> ((uVar2 & 7) << 3));
  if (4 < ((uint)uVar2 & 0xff)) {
    uVar6 = 1;
  }
  uVar1 = (uint)((uVar2 & 0xfd) != 0);
  if ((uVar3 & 1) != 0) {
    uVar1 = uVar6;
  }
  lVar4 = (**(code **)(*param_2 + 0x9b0))(param_2,uVar1,param_3);
  if (*(int *)(lVar4 + 0x20) == 0) {
    return 0;
  }
  uVar5 = FUN_021050a8();
  return uVar5;
}


