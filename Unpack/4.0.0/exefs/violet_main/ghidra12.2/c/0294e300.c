/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294e300; name: FUN_0294e300
 */


uint FUN_0294e300(undefined8 param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  uVar3 = (**(code **)(*param_2 + 0x2f8))(param_2);
  uVar5 = FUN_029444f0(param_1);
  cVar2 = FUN_015d9aac(uVar5,5,uVar3);
  if ((byte)(cVar2 - 1U) < 0xd) {
    uVar6 = *(uint *)(&DAT_03d69f6c + (long)(char)(cVar2 - 1U) * 4);
  }
  else {
    uVar6 = 8;
  }
  uVar4 = (**(code **)(*param_2 + 0x140))(param_2);
  uVar1 = 0;
  if ((uVar6 & 0xffff) != 0) {
    uVar1 = (uVar4 & 0xffff) / (uVar6 & 0xffff);
  }
  if ((uVar4 & 0xffff) < uVar6) {
    uVar1 = 1;
  }
  return uVar1;
}


