/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ae500; name: FUN_034ae500
 */


int FUN_034ae500(long *param_1,long *param_2,int *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  uint *puVar10;
  ushort *puVar11;
  MutexType *pMVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  
  iVar9 = (**(code **)(*param_1 + 0x208))();
  if (((iVar9 == 1) && ((param_4 & 1) == 0)) &&
     (iVar9 = (**(code **)(*param_1 + 0x210))(param_1,param_2,param_3), iVar9 == 1)) {
    bVar3 = *(byte *)*param_2;
    *param_2 = (long)((byte *)*param_2 + 1);
    *(uint *)((long)param_1 + 0xda) =
         *(uint *)((long)param_1 + 0xda) & 0xffffc000 |
         *(uint *)((long)param_1 + 0xda) & 0x1fff | (bVar3 & 1) << 0xd;
    puVar10 = (uint *)*param_2 + 1;
    uVar13 = *(uint *)*param_2;
    *param_2 = (long)puVar10;
    if (uVar13 == 0) {
LAB_034ae64c:
      uVar13 = *puVar10;
      *param_2 = (long)(puVar10 + 1);
      if (uVar13 != 0) {
        pMVar12 = *(MutexType **)PTR_DAT_047e6f28;
        nn::os::LockMutex(pMVar12);
        uVar16 = *(uint *)(pMVar12 + 0x28);
        if (uVar16 != 0) {
          uVar7 = 0;
          if (uVar16 != 0) {
            uVar7 = uVar13 / uVar16;
          }
          for (lVar14 = *(long *)(*(long *)(pMVar12 + 0x20) + (ulong)(uVar13 - uVar7 * uVar16) * 8);
              lVar14 != 0; lVar14 = *(long *)(lVar14 + 8)) {
            if (*(uint *)(lVar14 + 0x10) == uVar13) {
              *(int *)(lVar14 + 0x14) = *(int *)(lVar14 + 0x14) + 1;
              nn::os::UnlockMutex(pMVar12);
              (**(code **)(*param_1 + 0x28))(param_1);
              plVar15 = (long *)(lVar14 + -8);
              iVar9 = (**(code **)(*plVar15 + 0x50))(plVar15,param_1);
              (**(code **)(*plVar15 + 0x30))(plVar15);
              if (iVar9 != 1) {
                return iVar9;
              }
              goto LAB_034ae6a4;
            }
          }
        }
        nn::os::UnlockMutex(pMVar12);
      }
LAB_034ae6a4:
      bVar3 = *(byte *)*param_2;
      *param_2 = (long)((byte *)*param_2 + 1);
      if ((uint)((int)((ulong)bVar3 & 1) != 0) != ((uint)param_1[0x17] & 1)) {
        param_1[0x17] = param_1[0x17] & 0xfffffffffffffffeU | (ulong)bVar3 & 1;
        (**(code **)(*param_1 + 0x180))(param_1,0,0);
      }
      uVar13 = *(uint *)((long)param_1 + 0xda);
      if ((uint)((uVar13 & 0x8000) == 0) == (bVar3 & 2) >> 1) {
        *(uint *)((long)param_1 + 0xda) = uVar13 & 0xffff7fff | (bVar3 & 2) << 0xe;
        (**(code **)(*param_1 + 0x180))(param_1,0,0);
        uVar13 = *(uint *)((long)param_1 + 0xda);
      }
      *(uint *)((long)param_1 + 0xda) =
           uVar13 & 0xf8000000 | uVar13 & 0x7fffff | (bVar3 >> 2 & 0xf) << 0x17;
      iVar9 = (**(code **)(*param_1 + 0x200))(param_1,param_2,param_3);
      if (((iVar9 == 1) && (iVar9 = FUN_034ade74(param_1,param_2), iVar9 == 1)) &&
         ((iVar9 = (**(code **)(*param_1 + 0x218))(param_1,param_2,param_3), iVar9 == 1 &&
          ((iVar9 = (**(code **)(*param_1 + 0x220))(param_1,param_2,param_3), iVar9 == 1 &&
           (iVar9 = (**(code **)(param_1[4] + 0x70))(param_1 + 4,param_2,param_3), iVar9 == 1))))))
      {
        puVar11 = (ushort *)*param_2 + 1;
        uVar5 = *(ushort *)*param_2;
        *param_2 = (long)puVar11;
        uVar13 = (uint)uVar5;
        if (uVar13 != 0) {
          uVar16 = 0;
          while( true ) {
            uVar1 = *(undefined4 *)puVar11;
            *param_2 = (long)(puVar11 + 2);
            uVar5 = puVar11[2];
            *param_2 = (long)puVar11 + 5;
            uVar4 = *(undefined1 *)((long)puVar11 + 5);
            *param_2 = (long)(puVar11 + 3);
            bVar3 = (byte)puVar11[3];
            *param_2 = (long)puVar11 + 7;
            uVar7 = bVar3 & 0x7f;
            pbVar8 = (byte *)((long)puVar11 + 7);
            while ((char)bVar3 < '\0') {
              bVar3 = *pbVar8;
              uVar7 = bVar3 & 0x7f | uVar7 << 7;
              *param_2 = (long)(pbVar8 + 1);
              pbVar8 = pbVar8 + 1;
            }
            uVar2 = *(undefined4 *)pbVar8;
            *param_2 = (long)(pbVar8 + 4);
            bVar3 = pbVar8[4];
            *param_2 = (long)(pbVar8 + 5);
            uVar6 = *(ushort *)(pbVar8 + 5);
            *param_2 = (long)(pbVar8 + 7);
            iVar9 = (**(code **)(*param_1 + 0x1d8))
                              (param_1,uVar1,(char)uVar5,uVar4,uVar7,uVar2,bVar3,pbVar8 + 7,uVar6,1)
            ;
            if (iVar9 != 1) {
              return iVar9;
            }
            *param_2 = *param_2 + (ulong)uVar6 * 0xc;
            uVar16 = uVar16 + 1;
            *param_3 = *param_3 + (uint)uVar6 * -0xc;
            if (uVar16 == uVar13) break;
            puVar11 = (ushort *)*param_2;
          }
          iVar9 = 1;
        }
      }
    }
    else {
      lVar14 = *(long *)PTR_DAT_047e6f28;
      pMVar12 = (MutexType *)(lVar14 + 0x38);
      nn::os::LockMutex(pMVar12);
      uVar16 = *(uint *)(lVar14 + 0x60);
      if (uVar16 != 0) {
        uVar7 = 0;
        if (uVar16 != 0) {
          uVar7 = uVar13 / uVar16;
        }
        for (lVar14 = *(long *)(*(long *)(lVar14 + 0x58) + (ulong)(uVar13 - uVar7 * uVar16) * 8);
            lVar14 != 0; lVar14 = *(long *)(lVar14 + 8)) {
          if (*(uint *)(lVar14 + 0x10) == uVar13) {
            *(int *)(lVar14 + 0x14) = *(int *)(lVar14 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar12);
            (**(code **)(*param_1 + 0x28))(param_1);
            plVar15 = (long *)(lVar14 + -8);
            iVar9 = (**(code **)(*plVar15 + 0x50))(plVar15,param_1);
            (**(code **)(*plVar15 + 0x30))(plVar15);
            if (iVar9 != 1) {
              return iVar9;
            }
            puVar10 = (uint *)*param_2;
            goto LAB_034ae64c;
          }
        }
      }
      nn::os::UnlockMutex(pMVar12);
      iVar9 = 2;
    }
  }
  return iVar9;
}


