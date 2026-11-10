/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0349f750; name: FUN_0349f750
 */


undefined8 FUN_0349f750(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  local_60 = *param_1;
  uStack_58 = param_1[1];
  if ((*(int *)((long)param_1 + 4) == 0) || ((int)local_60 == 0)) {
    FUN_0349dde0(&local_60,(ulong)&local_60 | 4);
    uVar4 = 1;
    iVar6 = (int)local_60;
  }
  else {
    uVar4 = 0;
    iVar6 = (int)local_60;
  }
  iVar1 = local_60._4_4_;
  lVar5 = CONCAT44(local_60._4_4_,iVar6);
  lVar3 = DAT_048b0118;
  if ((*PTR_DAT_047e7258 != '\0') && ((iVar6 == 0 || (local_60._4_4_ == 0)))) {
    nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
    lVar3 = FUN_034a0148(iVar6,iVar1);
    if (lVar3 != 0) {
      lVar5 = *(long *)(lVar3 + 0x28);
    }
    nn::os::UnlockMutex((MutexType *)PTR_DAT_047e6d30);
    lVar3 = DAT_048b0118;
  }
  do {
    if (lVar3 == 0) {
LAB_0349f864:
      uVar4 = FUN_0349e7f4(lVar5,&local_60,param_3,auStack_50,1,1,0,uVar4);
      return uVar4;
    }
    if (*(char *)(lVar3 + 0x46d) != '\0') {
      if (*(long *)(lVar3 + 0x28) == lVar5) {
        if (*(int *)(lVar3 + 0x468) != 0) {
          if (*(int *)(lVar3 + 0x30) != 0xb50007) {
            return 1;
          }
          goto LAB_0349f844;
        }
LAB_0349f85c:
        bVar2 = false;
      }
      else {
        if (*(int *)(lVar3 + 0x468) == 0) goto LAB_0349f85c;
LAB_0349f844:
        bVar2 = *(int *)(lVar3 + 0x30) != 0xb50007;
      }
      FUN_0349f898(*(long *)(lVar3 + 0x28),bVar2);
      goto LAB_0349f864;
    }
    lVar3 = *(long *)(lVar3 + 0x20);
  } while( true );
}


