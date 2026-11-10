/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001358f0; name: FUN_001358f0
 */


void FUN_001358f0(long *param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  long local_18;
  
  FUN_00133b50(param_1,param_3);
  switch(param_2) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    if ((param_3[4] != param_3[5]) || (1 < *param_3 - 5U)) {
LAB_00135954:
      FUN_001345b0(param_1,param_3);
      return;
    }
    break;
  case 0xc:
    FUN_00133b50(param_1,param_3);
    if ((*param_3 == 8) && (iVar2 = param_3[2], iVar3 = FUN_0012ea70(param_1), iVar3 <= iVar2)) {
      *(char *)((long)param_1 + 0x44) = *(char *)((long)param_1 + 0x44) + -1;
    }
    bVar1 = *(byte *)((long)param_1 + 0x44);
    bVar4 = bVar1 + 1;
    if (*(byte *)(*param_1 + 0xc) <= bVar1) {
      if (0xfd < bVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00138770(param_1[2],"function or expression needs too many registers");
      }
      *(byte *)(*param_1 + 0xc) = bVar4;
      bVar4 = *(char *)((long)param_1 + 0x44) + 1;
    }
    *(byte *)((long)param_1 + 0x44) = bVar4;
    FUN_00133ee0(param_1,param_3,bVar4 - 1);
    return;
  case 0xd:
  case 0x10:
    if (((param_3[4] != param_3[5]) || (1 < *param_3 - 5U)) &&
       (iVar2 = FUN_00134700(param_1,param_3), iVar2 == 0)) goto LAB_00135954;
    break;
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x12:
    if (*param_3 == 5) {
      iVar2 = FUN_0013fed0(*(undefined8 *)(param_3 + 2),&local_18,0);
      if (iVar2 == 0) goto LAB_001359f8;
    }
    else {
      if (*param_3 != 6) goto LAB_001359f8;
      local_18 = *(long *)(param_3 + 2);
    }
    if ((param_3[4] != param_3[5]) || (0xff < local_18 + 0x7fU)) {
LAB_001359f8:
      FUN_001345b0(param_1,param_3);
      return;
    }
    break;
  case 0x13:
    FUN_00134c10(param_1,param_3);
    return;
  case 0x14:
    FUN_00135010(param_1,param_3);
    return;
  }
  return;
}


