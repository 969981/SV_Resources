/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ffb84; name: FUN_007ffb84
 */


void FUN_007ffb84(int *param_1,long param_2,long param_3)

{
  MutexType *pMVar1;
  int iVar2;
  ulong uVar3;
  ushort *puVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined4 local_88 [4];
  undefined4 local_78 [9];
  undefined1 auStack_54 [4];
  
  if ((*(long **)(param_2 + 0x13a8) == (long *)0x0) ||
     (uVar3 = (**(code **)(**(long **)(param_2 + 0x13a8) + 0x68))(), (uVar3 & 1) == 0)) {
    (**(code **)(**(long **)(param_2 + 0x1318) + 0x60))
              (param_1,*(long **)(param_2 + 0x1318),param_3 + 0x30,*(undefined4 *)(param_3 + 0x5f8))
    ;
    if (*param_1 != 0) {
      return;
    }
  }
  else {
    pMVar1 = (MutexType *)(param_2 + 0x1378);
    nn::os::LockMutex(pMVar1);
    puVar4 = *(ushort **)(param_2 + 0x1308);
    if (*puVar4 != 0) {
      uVar7 = 0;
      do {
        lVar5 = FUN_008013e4(puVar4,uVar7);
        if (((lVar5 != 0) &&
            (lVar8 = *(long *)(lVar5 + 8), lVar6 = FUN_007ec4a8(param_2), lVar8 != lVar6)) &&
           (lVar6 = *(long *)(lVar5 + 8), lVar6 != 0)) {
          *param_1 = 0;
          local_78[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)(param_1 + 1),(Result *)local_78);
          uVar3 = (**(code **)(**(long **)(param_2 + 0x13a8) + 0x90))
                            (*(long **)(param_2 + 0x13a8),lVar6);
          if ((uVar3 & 1) == 0) {
            lVar6 = lVar5 + 0x38;
            if (*(char *)(lVar5 + 0x58) != '\0') {
              lVar6 = lVar5 + 0x18;
            }
            FUN_0078a1c0(local_78,lVar6);
            FUN_007929a0(local_88,*(undefined8 *)(param_2 + 0x13b0),param_3 + 0x30,
                         *(undefined4 *)(param_3 + 0x5f8),local_78,auStack_54);
            FUN_018ff39c(param_1,local_88);
            FUN_0284e3d4(local_78);
            iVar2 = *param_1;
          }
          else {
            (**(code **)(**(long **)(param_2 + 0x13a8) + 0x88))
                      (local_78,*(long **)(param_2 + 0x13a8),lVar6,param_3 + 0x30,
                       *(undefined4 *)(param_3 + 0x5f8));
            FUN_018ff39c(param_1,local_78);
            iVar2 = *param_1;
          }
          if (iVar2 != 0) {
            nn::os::UnlockMutex(pMVar1);
            return;
          }
        }
        puVar4 = *(ushort **)(param_2 + 0x1308);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *puVar4);
    }
    nn::os::UnlockMutex(pMVar1);
  }
  local_78[0] = 0;
  local_88[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_88);
  FUN_00cbd7c0(param_1,local_78);
  return;
}


