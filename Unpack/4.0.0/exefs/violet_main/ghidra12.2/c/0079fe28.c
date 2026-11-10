/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079fe28; name: FUN_0079fe28
 */


undefined8 FUN_0079fe28(long *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [32];
  
  cVar1 = *(char *)(param_2 + 0x10);
  uVar3 = (**(code **)(*param_1 + 0x180))();
  if ((((((uVar3 & 1) == 0) && (uVar2 = (int)cVar1 - 0x30, uVar2 < 0x12)) &&
       ((0x2000fU >> (ulong)(uVar2 & 0x1f) & 1) != 0)) ||
      ((uVar3 = (**(code **)(*param_1 + 0x1e8))(param_1), ((int)cVar1 & 0xfffffffeU) == 0x50 &&
       ((uVar3 & 1) == 0)))) || ((cVar1 < -0x7e && (param_1[0x230] == 0)))) {
LAB_0079fea4:
    uVar4 = 1;
  }
  else {
    switch(*(undefined1 *)(param_2 + 0x10)) {
    case 0x11:
    case 0x13:
    case 0x21:
    case 0x31:
    case 0x33:
    case 0x40:
    case 0x50:
    case 0x80:
      uVar3 = FUN_00796784(param_1 + 0x17);
      if ((uVar3 & 1) != 0) {
        uVar3 = FUN_00796784(param_1 + 0x13);
        if (((uVar3 & 1) != 0) &&
           (uVar3 = FUN_007967e8(param_1 + 0x13,param_1 + 0x17), (uVar3 & 1) != 0))
        goto LAB_0079fea4;
      }
      if (cVar1 != '3') {
        FUN_00796584(auStack_50);
        nn::os::LockMutex((MutexType *)(param_1 + 0x1b));
        (**(code **)(*(long *)param_1[0x24] + 0x50))((long *)param_1[0x24],auStack_50);
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x1b));
        uVar3 = FUN_007967e8(auStack_50,param_3);
        if ((uVar3 & 1) == 0) goto LAB_0079fea4;
      }
    default:
switchD_0079fee0_caseD_14:
      uVar4 = 0;
      break;
    case 0x12:
    case 0x20:
    case 0x30:
    case 0x32:
    case 0x51:
    case 0x81:
      uVar3 = FUN_00796784(param_1 + 0x17);
      if ((uVar3 & 1) != 0) {
        uVar3 = FUN_00796784(param_1 + 0x13);
        if (((uVar3 & 1) != 0) &&
           (uVar3 = FUN_007967e8(param_1 + 0x13,param_1 + 0x17), (uVar3 & 1) != 0))
        goto switchD_0079fee0_caseD_14;
      }
      goto LAB_0079fea4;
    }
  }
  return uVar4;
}


