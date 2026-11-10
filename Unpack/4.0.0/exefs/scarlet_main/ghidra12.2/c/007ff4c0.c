/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ff4c0; name: FUN_007ff4c0
 */


void FUN_007ff4c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined4 local_50 [4];
  undefined4 local_38 [2];
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x1378));
  lVar4 = *(long *)(param_2 + 0x1308);
  lVar3 = *(long *)(param_2 + 0x1300);
  *(undefined8 *)(lVar3 + 0xa0) = *(undefined8 *)(lVar4 + 0x18);
  FUN_0284e39c(lVar3 + 0x60,param_3);
  FUN_0284e39c(*(long *)(param_2 + 0x1300) + 0x80,param_4);
  *(undefined1 *)(*(long *)(param_2 + 0x1300) + 0xa9) = *(undefined1 *)(param_2 + 0x1371);
  uVar1 = FUN_00796988(param_2 + 0xb8);
  plVar2 = (long *)FUN_00801444(lVar4,uVar1);
  if (plVar2 == (long *)0x0) {
    local_50[0] = 0x4c11;
  }
  else {
    if (*plVar2 == *(long *)(lVar4 + 0x18)) {
      *(undefined1 *)(param_2 + 0x1370) = 1;
    }
    else {
      if (*(short *)(param_2 + 0x114e) != 0) {
        uVar5 = 0;
        do {
          plVar2 = (long *)FUN_008013e4(*(undefined8 *)(param_2 + 0x1308),uVar5);
          if ((((plVar2 != (long *)0x0) && (*plVar2 != -1)) && (*(long *)(lVar4 + 0x18) != *plVar2))
             && ((int)plVar2[2] == 0)) {
            FUN_00801ff4(*(undefined8 *)(param_2 + 0x1300));
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)(param_2 + 0x114e));
      }
      *(undefined1 *)(param_2 + 0x1370) = 0;
    }
    local_50[0] = 0;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_50);
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x1378));
  return;
}


