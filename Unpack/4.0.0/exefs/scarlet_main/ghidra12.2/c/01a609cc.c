/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a609cc; name: FUN_01a609cc
 */


void FUN_01a609cc(long param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  switch(param_5) {
  case 1:
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xcc,param_2,param_3,param_4,*param_6,0xffff0000);
    return;
  case 2:
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xcc,param_2,param_3,param_4,*param_6,param_6[1],
                 0xffff0000);
    return;
  case 3:
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *param_6;
    uVar2 = param_6[1];
    uVar1 = param_6[2];
    uVar5 = 0xffff0000;
    break;
  case 4:
    uVar1 = param_6[2];
    uVar5 = param_6[3];
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *param_6;
    uVar2 = param_6[1];
    break;
  default:
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xcc,param_2,param_3,param_4,0xffff0000);
    return;
  }
  FUN_0167ebc0(uVar3,0xcc,param_2,param_3,param_4,uVar4,uVar2,uVar1,uVar5);
  return;
}


