/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02976430; name: FUN_02976430
 */


void FUN_02976430(undefined8 param_1,long *param_2,long *param_3,uint param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  bVar1 = (param_4 & 1) == 0;
  uVar2 = 10;
  if (bVar1) {
    uVar2 = 8;
  }
  uVar3 = 0xb;
  if (bVar1) {
    uVar3 = 9;
  }
  local_38 = (**(code **)(*param_2 + 0xb0))(param_2,uVar2);
  local_34 = (**(code **)(*param_3 + 0xb0))(param_3,uVar3);
  local_3c = (**(code **)(*param_2 + 0x118))(param_2);
  local_3c = local_3c & 0xff;
  local_40 = FUN_015d9950(0x321);
  local_40 = local_40 & 0xffff;
  FUN_029764e0(param_1,&local_40);
  return;
}


