/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297db9c; name: FUN_0297db9c
 */


void FUN_0297db9c(long param_1,undefined4 param_2,long *param_3,char param_4,short param_5,
                 char param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar1 = (**(code **)(*param_3 + 0x98))(param_3);
  if (param_4 == '\x02') {
    if ((param_6 == '\x05') && ((ushort)(param_5 - 1U) < 6)) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      uVar3 = *(undefined4 *)(&DAT_03d6a8ac + (long)(short)(param_5 - 1U) * 4);
      goto LAB_0297dc8c;
    }
    uVar3 = 0x48;
  }
  else {
    if (param_4 != '\x01') {
switchD_0297dc10_caseD_7:
      FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xca,param_2,0x237,0xffff0000);
      return;
    }
    switch(param_5) {
    case 1:
      uVar3 = 0x5f;
      break;
    case 2:
      uVar3 = 0x6a;
      break;
    case 3:
      uVar3 = 100;
      break;
    case 4:
      uVar3 = 0x5a;
      break;
    case 5:
      uVar3 = 0x54;
      break;
    case 6:
      uVar3 = 0x77;
      break;
    default:
      goto switchD_0297dc10_caseD_7;
    case 0xf:
      uVar3 = 10;
      break;
    case 0x14:
      return;
    }
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
LAB_0297dc8c:
  FUN_0167ebc0(uVar2,0xcb,param_2,uVar3,uVar1,0xffff0000);
  return;
}


