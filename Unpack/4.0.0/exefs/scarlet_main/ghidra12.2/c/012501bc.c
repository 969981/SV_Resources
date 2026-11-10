/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012501bc; name: FUN_012501bc
 */


void FUN_012501bc(long param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  switch(param_4) {
  case 1:
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xca,param_2,param_3,*param_5,0xffff0000);
    return;
  case 2:
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xca,param_2,param_3,*param_5,param_5[1],0xffff0000
                );
    return;
  case 3:
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xca,param_2,param_3,*param_5,param_5[1],param_5[2]
                 ,0xffff0000);
    return;
  case 4:
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xca,param_2,param_3,*param_5,param_5[1],param_5[2]
                 ,param_5[3],0xffff0000);
    return;
  default:
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xca,param_2,param_3,0xffff0000);
    return;
  }
}


