/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01447a08; name: FUN_01447a08
 */


void FUN_01447a08(long *param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  
  local_44 = 0x100000002;
  local_3c = 0x200000001;
  local_34 = 0x100000001;
  if (param_3 == 1) {
    uVar1 = 5;
LAB_01447a44:
    local_44 = CONCAT44(1,uVar1);
    uVar1 = 6;
    goto LAB_01447a4c;
  }
  switch(param_3) {
  case 0:
    uVar1 = 2;
    goto LAB_01447ae4;
  default:
    goto switchD_01447ad4_caseD_1;
  case 2:
    uVar1 = 2;
    goto LAB_01447a44;
  case 3:
    local_44 = 0x100000010;
    uVar1 = 0x11;
    goto LAB_01447a4c;
  case 4:
    uVar1 = 5;
    goto LAB_01447af4;
  case 5:
    uVar1 = 2;
    local_44 = 0x100000002;
    goto LAB_01447a4c;
  case 6:
    uVar1 = 9;
LAB_01447ae4:
    local_44 = CONCAT44(1,uVar1);
    uVar1 = 1;
    goto LAB_01447a4c;
  case 7:
    uVar1 = 10;
LAB_01447af4:
    local_44 = CONCAT44(1,uVar1);
    break;
  case 8:
    local_44 = 0x200000005;
    break;
  case 9:
    local_44 = 0x300000005;
    break;
  case 10:
    local_44 = 0x400000005;
    break;
  case 0xb:
    local_44 = 0x500000005;
  }
  uVar1 = 2;
LAB_01447a4c:
  local_3c = CONCAT44(2,uVar1);
switchD_01447ad4_caseD_1:
  if (param_4 < 5) {
    local_3c = CONCAT44(*(undefined4 *)(&DAT_03d64fec + (long)(int)param_4 * 4),(undefined4)local_3c
                       );
    local_34 = CONCAT44(*(undefined4 *)(&DAT_03d65000 + (long)(int)param_4 * 4),1);
  }
  lVar2 = *(long *)(*param_1 + 0x30);
  local_28 = *(undefined8 *)(lVar2 + 8);
  uStack_20 = *(undefined8 *)(lVar2 + 0x6098);
  local_18 = lVar2 + 0x10;
  local_48 = param_2;
  FUN_015b28b8(*(undefined8 *)(lVar2 + 0x6260),&local_28,&local_48,1);
  return;
}


