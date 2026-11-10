/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fdaabc; name: FUN_02fdaabc
 */


void FUN_02fdaabc(long param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  int *piVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  MutexType *pMVar16;
  uint *puVar17;
  long lVar18;
  float fVar19;
  dword *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  switch(*(undefined2 *)((long)param_2 + 4)) {
  case 0:
    uVar9 = (ulong)*(uint *)(param_2 + 1) & 0xffffff;
    if (((((uint)uVar9 != 0xffffff) &&
         (lVar13 = *(long *)(param_1 + 0x20), (uint)uVar9 < *(uint *)(lVar13 + 0x40))) &&
        (lVar14 = *(long *)(lVar13 + 0x38), (*(byte *)(lVar14 + uVar9 * 0xc0 + 0x54) & 3) != 0)) &&
       ((*(uint *)(lVar14 + uVar9 * 0xc0 + 0x50) == *(uint *)(param_2 + 1) &&
        ((*(byte *)(lVar14 + uVar9 * 0xc0 + 0x88) & 1) != 0)))) {
      uVar8 = *(uint *)(lVar14 + uVar9 * 0xc0 + 0x80);
      if (*(uint *)((long)param_2 + 0xc) == uVar8) {
        lVar14 = *(long *)(lVar13 + 0x150) + (ulong)uVar8 * 0x80;
        pbVar12 = (byte *)(lVar14 + 0x5e);
        bVar2 = *pbVar12;
        if (bVar2 == *(byte *)(param_2 + 2)) {
          bVar3 = *(byte *)((long)param_2 + 0x11);
          if (bVar2 != bVar3) {
            puVar17 = (uint *)(lVar14 + 0x4c);
            if ((*puVar17 == 0) || (*puVar17 == 0x7fffffff)) {
              *pbVar12 = bVar3;
            }
            else {
              pMVar16 = *(MutexType **)(lVar13 + 0x480);
              nn::os::LockMutex(pMVar16);
              uVar1 = *puVar17;
              piVar11 = (int *)(lVar13 + (ulong)bVar2 * 0x18 + 0x188);
              if (uVar1 < (uint)((long)*piVar11 + -1)) {
                lVar15 = lVar13 + (ulong)bVar2 * 0x18;
                iVar4 = *(int *)(*(long *)(lVar15 + 0x180) + ((long)*piVar11 + -1) * 4);
                *(uint *)(*(long *)(lVar13 + 0x150) + (long)iVar4 * 0x80 + 0x4c) = uVar1;
                *(int *)(*(long *)(lVar15 + 0x180) + (long)(int)uVar1 * 4) = iVar4;
              }
              *pbVar12 = 0xff;
              *puVar17 = 0x7fffffff;
              *piVar11 = *piVar11 + -1;
              nn::os::UnlockMutex(pMVar16);
              *pbVar12 = bVar3;
              lVar18 = lVar13 + (ulong)bVar3 * 0x18;
              pMVar16 = *(MutexType **)(lVar13 + 0x480);
              nn::os::LockMutex(pMVar16);
              *puVar17 = *(uint *)(lVar18 + 0x188);
              iVar4 = *(int *)(lVar18 + 0x188);
              lVar15 = (long)iVar4;
              if ((int)(*(uint *)(lVar18 + 0x18c) & 0x7fffffff) <= iVar4) {
                FUN_02f1dbfc((long *)(lVar18 + 0x180),PTR_PTR_047d1a50,lVar15 + 1);
                iVar4 = *(int *)(lVar18 + 0x188);
              }
              *(uint *)(*(long *)(lVar18 + 0x180) + (long)iVar4 * 4) = uVar8;
              *(int *)(lVar18 + 0x188) = (int)(lVar15 + 1);
              nn::os::UnlockMutex(pMVar16);
            }
            uVar8 = *(uint *)(lVar14 + 0x48);
            lVar13 = *(long *)(lVar13 + 0x140);
            uVar1 = uVar8;
            do {
              lVar14 = *(long *)(lVar13 + 0x10);
              uVar9 = (ulong)uVar1 & 0xffffff;
              if ((*(byte *)(lVar14 + uVar9 * 0xc0 + 0x54) >> 3 & 1) != 0) {
                *(byte *)(*(long *)(lVar13 + 0xd0) + uVar9) = bVar3;
              }
              lVar14 = lVar14 + uVar9 * 0xc0;
              *(ushort *)(lVar14 + 0x58) = *(ushort *)(lVar14 + 0x58) | 0x20;
              uVar1 = *(uint *)(lVar14 + 0x84);
            } while (uVar1 != uVar8);
          }
        }
      }
    }
    break;
  case 2:
    iVar4 = (**(code **)(**(long **)(param_1 + 0x20) + 0x100))
                      (*(long **)(param_1 + 0x20),param_2[1]);
    if ((iVar4 != 0) &&
       (iVar4 = (**(code **)(**(long **)(param_1 + 0x20) + 0x100))
                          (*(long **)(param_1 + 0x20),param_2[2]), iVar4 != 0)) {
      uVar9 = param_2[1];
      if ((long)uVar9 < 0) {
        uVar9 = uVar9 & 0xffffffff;
      }
      else {
        uVar7 = FUN_00dbb6c8(*(long *)(param_1 + 0x20) + 0x960,uVar9,&local_88);
        uVar9 = (ulong)local_88 & 0xffffffff;
        if ((uVar7 & 1) == 0) {
          uVar9 = 0xffffff;
        }
      }
      uVar7 = param_2[2];
      if ((long)uVar7 < 0) {
        uVar7 = uVar7 & 0xffffffff;
      }
      else {
        uVar6 = FUN_00dbb6c8(*(long *)(param_1 + 0x20) + 0x960,uVar7,&local_88);
        uVar7 = (ulong)local_88 & 0xffffffff;
        if ((uVar6 & 1) == 0) {
          uVar7 = 0xffffff;
        }
      }
      lVar13 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
      if ((*(int *)(lVar13 + (uVar9 & 0xffffff) * 0xc0 + 0x50) == (int)uVar9) &&
         (*(int *)(lVar13 + (uVar7 & 0xffffff) * 0xc0 + 0x50) == (int)uVar7)) {
        local_88 = (dword *)0x0;
        fVar19 = (float)FUN_02f2c8b8(param_2,*(long *)(param_1 + 0x20),&local_88,0,0);
        if (fVar19 < 1.0) {
          pbVar12 = (byte *)param_2[3];
          lVar13 = *(long *)(pbVar12 + 0x20);
          uStack_80 = param_2[1];
          if (pbVar12 == (byte *)0x0) {
            local_68 = 0xffffffff;
            uStack_64 = 0xffffffff;
          }
          else {
            lVar14 = 0;
            if ((*pbVar12 & 0x30) != 0) {
              lVar14 = 0x90;
            }
            lVar14 = lVar14 + (ulong)pbVar12[4] * 0x20;
            lVar14 = (ulong)(byte)PTR_DAT_047e4908[pbVar12[lVar14 + 0x44]] + lVar14;
            local_68 = *(undefined4 *)(pbVar12 + lVar14 + 0x40);
            uStack_64 = *(undefined4 *)(pbVar12 + lVar14 + 0x44);
          }
          local_78 = param_2[2];
          local_88 = &fde_04000030;
          local_70 = CONCAT35(local_70._5_3_,3);
          plVar5 = *(long **)(*(long *)(param_1 + 0x20) + 0x908);
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_88);
          *(ushort *)(lVar13 + 0x3e) = *(ushort *)(lVar13 + 0x3e) | 2;
        }
      }
    }
    break;
  case 3:
    iVar4 = (**(code **)(**(long **)(param_1 + 0x20) + 0x100))
                      (*(long **)(param_1 + 0x20),param_2[1]);
    if ((iVar4 != 0) &&
       (iVar4 = (**(code **)(**(long **)(param_1 + 0x20) + 0x100))
                          (*(long **)(param_1 + 0x20),param_2[2]), iVar4 != 0)) {
      if (-1 < (long)param_2[1]) {
        FUN_00dbb6c8(*(long *)(param_1 + 0x20) + 0x960,param_2[1],&local_88);
      }
      if (-1 < (long)param_2[2]) {
        FUN_00dbb6c8(*(long *)(param_1 + 0x20) + 0x960,param_2[2],&local_88);
      }
    }
    break;
  case 5:
    iVar4 = 1;
    if (*(char *)(param_2 + 3) == '\0') {
      iVar4 = -1;
    }
    uVar8 = *(uint *)(param_1 + 0x30);
    uVar9 = (ulong)uVar8;
    if (0 < (int)uVar8) {
      piVar11 = (int *)(*(long *)(param_1 + 0x28) + 0x20);
      do {
        if (piVar11[-6] == *(int *)(param_2 + 1)) {
          *piVar11 = *piVar11 + iVar4;
          return;
        }
        piVar11 = piVar11 + 10;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    local_88 = (dword *)*param_2;
    uStack_80 = param_2[1];
    lVar13 = (long)(int)uVar8;
    local_78 = param_2[2];
    local_70 = param_2[3];
    if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) <= (int)uVar8) {
      FUN_02fdbc54((long *)(param_1 + 0x28),lVar13 + 1);
      uVar8 = *(uint *)(param_1 + 0x30);
    }
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x28) + (long)(int)uVar8 * 0x28);
    *(int *)(puVar10 + 4) = iVar4;
    puVar10[2] = local_78;
    puVar10[3] = local_70;
    *puVar10 = local_88;
    puVar10[1] = uStack_80;
    *(int *)(param_1 + 0x30) = (int)(lVar13 + 1);
  }
  return;
}


