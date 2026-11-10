/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078ce60; name: FUN_0078ce60
 */


void FUN_0078ce60(long *param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_047d0900;
  uVar5 = 6;
  if ((param_2 & 1) == 0) {
    uVar5 = 3;
  }
  *(undefined4 *)(param_1 + 1) = uVar5;
  lVar6 = *(long *)puVar2;
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0x68));
  uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  nn::os::LockMutex((MutexType *)(lVar6 + 0x68));
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  uVar5 = 8;
  switch(uVar3 & 0xff) {
  case 0:
  case 6:
  case 7:
    FUN_007935cc(param_1 + 2);
    uVar1 = (uint)uVar3 & 0xff;
    if (uVar1 == 7) {
      FUN_0078f40c(*(undefined8 *)puVar2,param_1,1);
LAB_0078cfb8:
      uVar5 = 5;
    }
    else {
      if (uVar1 == 6) {
        FUN_0078f40c(*(undefined8 *)puVar2,param_1,0);
      }
      else {
        FUN_0078f40c(*(undefined8 *)puVar2,param_1,param_2 & 1);
        if ((param_2 & 1) != 0) goto LAB_0078cfb8;
      }
      uVar5 = 2;
    }
    break;
  case 1:
  case 2:
    break;
  case 3:
    uVar5 = 7;
    break;
  case 4:
    FUN_007935cc(param_1 + 2);
    plVar4 = (long *)FUN_0079365c();
    param_1[2] = param_1[2] + *plVar4 * (uVar3 >> 0x10 & 0xffff);
    uVar5 = 4;
    if ((param_2 & 1) == 0) {
      uVar5 = 1;
    }
    FUN_0078f40c(*(undefined8 *)puVar2,param_1,param_2 & 1);
    break;
  case 5:
    FUN_007935cc(param_1 + 2);
    FUN_0078f474(*(undefined8 *)puVar2,param_1);
    uVar5 = 4;
    if ((param_2 & 1) == 0) {
      uVar5 = 1;
    }
    break;
  default:
    goto switchD_0078cef4_default;
  }
  *(undefined4 *)(param_1 + 1) = uVar5;
switchD_0078cef4_default:
  return;
}


