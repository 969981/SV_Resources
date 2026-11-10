/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0133d97c; name: FUN_0133d97c
 */


void FUN_0133d97c(long *param_1,long *param_2)

{
  MutexType *pMVar1;
  char *__s;
  byte bVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *local_300;
  byte *pbStack_2f8;
  size_t local_2f0;
  long *local_2e8;
  undefined1 auStack_2e0 [8];
  long local_2d8;
  byte local_2a0 [256];
  byte local_1a0 [256];
  long *local_a0 [4];
  long *local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_38;
  
  lVar6 = *param_2;
  local_70 = *(undefined8 *)(lVar6 + 0x1d0);
  uStack_68 = *(undefined8 *)(lVar6 + 0x1d8);
  local_60 = *(undefined8 *)(lVar6 + 0x1e0);
  local_58 = *(long **)(lVar6 + 0x1e8);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  FUN_017bc954(local_a0,*(undefined8 *)param_1[2],&local_70);
  if ((local_a0[0] != (long *)0x0) && (*(char *)local_a0[0][7] != '\0')) {
    pcVar3 = strrchr((char *)local_a0[0][7],0x2f);
    __s = (char *)0x0;
    if (pcVar3 != (char *)0x0) {
      __s = pcVar3 + 1;
    }
    pcVar3 = strrchr(__s,0x2e);
    if (pcVar3 != (char *)0x0) {
      puVar11 = &DAT_cbf29ce484222645;
      memset(local_1a0,0,0x100);
      strncpy((char *)local_1a0,__s,(long)pcVar3 - (long)__s);
      puVar7 = &DAT_cbf29ce484222645;
      if (local_1a0[0] != 0) {
        puVar7 = &DAT_cbf29ce484222645;
        pbVar8 = (byte *)((ulong)local_1a0 | 1);
        do {
          puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)local_1a0[0]) * 0x100000001b3);
          local_1a0[0] = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (local_1a0[0] != 0);
      }
      uVar4 = FUN_017bd458(*(undefined4 *)param_1[3],puVar7);
      if ((uVar4 & 1) != 0) {
        memset(local_2a0,0,0x100);
        local_2a0[0] = 0;
        FUN_0133dc1c(local_2a0,local_1a0,param_1[4]);
        uVar9 = *(undefined8 *)param_1[5];
        local_2f0 = strlen((char *)local_2a0);
        if (local_2a0[0] != 0) {
          pbVar8 = (byte *)((ulong)local_2a0 | 1);
          bVar2 = local_2a0[0];
          do {
            puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar2) * 0x100000001b3);
            bVar2 = *pbVar8;
            pbVar8 = pbVar8 + 1;
          } while (bVar2 != 0);
        }
        local_2e8 = (long *)0x0;
        local_300 = puVar11;
        pbStack_2f8 = local_2a0;
        FUN_0133dc54(auStack_2e0,uVar9,&local_300);
        if (local_2e8 != (long *)0x0) {
          (**(code **)(*local_2e8 + 0x20))();
        }
        if (((local_2d8 != 0) && ((*(byte *)(local_2d8 + 0x1e8) & 1) != 0)) && (local_2d8 != 0)) {
          pMVar1 = (MutexType *)(local_2d8 + 0x120);
          uVar4 = nn::os::IsMutexLockedByCurrentThread(pMVar1);
          if ((uVar4 & 1) == 0) {
            nn::os::LockMutex(pMVar1);
            uVar4 = *(ulong *)(local_2d8 + 0x170);
            iVar10 = *(int *)(local_2d8 + 0x178);
            nn::os::UnlockMutex(pMVar1);
          }
          else {
            uVar4 = *(ulong *)(local_2d8 + 0x170);
            iVar10 = *(int *)(local_2d8 + 0x178);
          }
          if ((iVar10 == 0) && ((uVar4 >> 0x20 & 0xff) != 0)) {
            FUN_0178842c(*(undefined8 *)param_1[2],&local_70,auStack_2e0);
            local_38 = local_70;
            puVar5 = (undefined8 *)FUN_01235878(*param_1 + 0x158,&local_38);
            *(undefined1 *)(puVar5 + 2) = 1;
            *puVar5 = PTR_LAB_047dcd90;
          }
        }
        FUN_01185de0(auStack_2e0);
      }
    }
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_a0[0] != (long *)0x0) {
    (**(code **)(*local_a0[0] + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


