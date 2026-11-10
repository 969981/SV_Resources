/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 035360ac; name: FUN_035360ac
 */


undefined8 * FUN_035360ac(long *param_1,long param_2,long param_3,uint param_4,undefined4 param_5)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  bool bVar8;
  undefined *puVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  ulong uVar17;
  long *plVar18;
  int iVar19;
  MutexType *pMVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  double dVar25;
  double dVar26;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  
  if (param_3 == 0) {
    lVar24 = 0;
    lVar23 = 0;
  }
  else {
    local_68 = *(undefined4 *)(param_2 + 0x2c);
    lVar23 = *(long *)(param_3 + 8);
    lVar21 = *(long *)(*(long *)(param_3 + 0x18) + 0x78);
    FUN_03524478(lVar21,0,*(byte *)(param_2 + 0x30) & 0x1f,&local_68,1,&local_64);
    lVar24 = (long)local_64;
    iVar19 = *(int *)(param_2 + 0x20);
    uVar17 = (ulong)*(uint *)PTR_DAT_047e6fa0;
    auVar6 = SEXT816((long)(uVar17 * (long)iVar19)) * SEXT816(-0x20c49ba5e353f7cf);
    iVar11 = *(int *)(param_2 + 0x28) + ((int)(auVar6._8_8_ >> 7) - (auVar6._12_4_ >> 0x1f));
    if (iVar11 < -local_64) {
      dVar25 = ((double)(*(int *)(param_2 + 0x28) + local_64) * 1000.0) / (double)uVar17;
      dVar26 = 0.5;
      if (dVar25 <= 0.0) {
        dVar26 = -0.5;
      }
      iVar19 = (int)(dVar26 + dVar25);
      iVar11 = -local_64;
    }
    if (iVar19 == 0 && iVar11 == 0) {
      if ((*(byte *)(param_2 + 0x30) >> 5 & 1) == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)(lVar21 + 0x140) -
                 *(int *)(*(long *)(lVar21 + 0x130) + (ulong)*(uint *)(lVar21 + 0x138) * 0x10 + -0xc
                         );
      }
    }
    iVar11 = (*(int *)(*(long *)(lVar21 + 0x130) + (ulong)*(uint *)(lVar21 + 0x138) * 0x10 + -0xc) -
             *(int *)(*(long *)(lVar21 + 0x130) + 4)) + iVar11;
    iVar12 = *(int *)(param_3 + 0x24);
    uVar16 = *(undefined4 *)(param_2 + 0x24);
    *(int *)(param_3 + 0x38) = iVar19;
    if (iVar11 < iVar12) {
      dVar25 = ((double)(iVar11 - iVar12) * 1000.0) / (double)uVar17;
      dVar26 = 0.5;
      if (dVar25 <= 0.0) {
        dVar26 = -0.5;
      }
      *(int *)(param_3 + 0x38) = iVar19 + (int)(dVar26 + dVar25);
      iVar11 = iVar12;
    }
    *(undefined4 *)(param_3 + 0x3c) = uVar16;
    *(int *)(param_3 + 0x34) = iVar11;
    *(byte *)(param_3 + 0x44) = *(byte *)(param_3 + 0x44) | 2;
  }
  if (param_4 != 0) {
    pMVar20 = *(MutexType **)PTR_DAT_047e6f28;
    nn::os::LockMutex(pMVar20);
    uVar2 = *(uint *)(pMVar20 + 0x28);
    if (uVar2 != 0) {
      uVar7 = 0;
      if (uVar2 != 0) {
        uVar7 = param_4 / uVar2;
      }
      for (lVar21 = *(long *)(*(long *)(pMVar20 + 0x20) + (ulong)(param_4 - uVar7 * uVar2) * 8);
          lVar21 != 0; lVar21 = *(long *)(lVar21 + 8)) {
        if (*(uint *)(lVar21 + 0x10) == param_4) {
          plVar18 = (long *)(lVar21 + -8);
          *(int *)(lVar21 + 0x14) = *(int *)(lVar21 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar20);
          local_6c = 0;
          cVar4 = *(char *)(param_2 + 0x48);
          uVar2 = (uint)(int)cVar4 >> 3 & 7;
          if (uVar2 == 3) {
            uVar2 = *(uint *)(param_2 + 0x40) & ((int)cVar4 >> 0x1f ^ 0xffffffffU);
            uVar15 = 1;
LAB_035363e0:
            iVar11 = FUN_03524754(plVar18,0,uVar2,uVar15,&local_6c);
          }
          else {
            if (uVar2 == 2) {
              uVar2 = *(uint *)(param_2 + 0x40) & ((int)cVar4 >> 0x1f ^ 0xffffffffU);
              uVar15 = 0;
              goto LAB_035363e0;
            }
            iVar11 = 0;
            if (uVar2 == 0) {
              iVar11 = 0;
              local_6c = **(undefined4 **)(lVar21 + 0x128);
            }
          }
          puVar9 = PTR_DAT_047e2fd0;
          if ((*(int *)(lVar21 + 0x130) == 0) ||
             (plVar14 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0xa0),
             plVar14 == (long *)0x0)) {
            plVar14 = (long *)0x0;
            bVar8 = true;
            *(undefined1 *)(param_1 + 0x18) = 0;
          }
          else {
            *(undefined4 *)(plVar14 + 4) = 0;
            plVar14[7] = 0;
            plVar14[8] = 0;
            *(undefined2 *)(plVar14 + 0xb) = 0;
            plVar14[9] = 0;
            plVar14[10] = -0xc0800000;
            puVar1 = PTR_DAT_047e7578;
            *(byte *)((long)plVar14 + 0x5a) = *(byte *)((long)plVar14 + 0x5a) & 0xe0;
            *plVar14 = (long)(puVar1 + 0x10);
            plVar14[2] = (long)param_1;
            plVar14[3] = (long)(puVar1 + 0xa0);
            plVar14[5] = (long)(puVar1 + 200);
            plVar14[6] = 0;
            puVar1 = PTR_DAT_047e7580 + 0x10;
            plVar14[0xe] = 0;
            plVar14[0xf] = (long)plVar18;
            plVar14[0x10] = 0;
            plVar14[0x11] = 0;
            *(undefined8 *)((long)plVar14 + 0x8d) = 0;
            plVar14[0xc] = (long)puVar1;
            plVar14[0xd] = 0;
            (**(code **)(*plVar18 + 0x28))(plVar18);
            *(int *)(plVar14 + 9) = (int)plVar14[9] + 1;
            lVar21 = plVar14[2];
            if (lVar21 != 0) {
              if (*(long *)(lVar21 + 0x30) == 0) {
                *(long **)(lVar21 + 0x30) = plVar14;
                plVar14[1] = 0;
              }
              else {
                plVar14[1] = *(long *)(lVar21 + 0x30);
                *(long **)(lVar21 + 0x30) = plVar14;
              }
              *(int *)(lVar21 + 0x48) = *(int *)(lVar21 + 0x48) + 1;
            }
            FUN_03532e8c(plVar14);
            bVar8 = false;
            *(undefined4 *)(plVar14 + 0x13) = param_5;
          }
          (**(code **)(*plVar18 + 0x30))(plVar18);
          puVar13 = (undefined8 *)(**(code **)(puVar9 + 0x10))(0,0x48);
          if (puVar13 != (undefined8 *)0x0) {
            lVar21 = 0;
            *puVar13 = 0;
            puVar13[1] = lVar23 + lVar24;
            puVar13[2] = 0;
            puVar13[3] = plVar14;
            if (!bVar8) {
              *(int *)(plVar14 + 9) = (int)plVar14[9] + 1;
              lVar21 = puVar13[3];
            }
            *(undefined4 *)((long)puVar13 + 0x3c) = 4;
            *(undefined8 *)((long)puVar13 + 0x24) = 0;
            *(undefined8 *)((long)puVar13 + 0x34) = 0;
            *(undefined1 *)(puVar13 + 8) = 0;
            *(byte *)((long)puVar13 + 0x44) = *(byte *)((long)puVar13 + 0x44) & 0xf8;
            uVar16 = 0;
            if (lVar21 != 0) {
              *(undefined8 **)(lVar21 + 0x80) = puVar13;
              uVar16 = *(undefined4 *)(*(long *)(puVar13[3] + 0x78) + 0x18);
            }
            *(undefined4 *)(puVar13 + 4) = uVar16;
            *puVar13 = 0;
            plVar18 = param_1 + 0x10;
            if (*plVar18 != 0) {
              plVar18 = (long *)param_1[0xf];
            }
            *plVar18 = (long)puVar13;
            param_1[0xf] = (long)puVar13;
          }
          if (bVar8) goto LAB_03536320;
          iVar19 = (int)plVar14[9] + -1;
          *(int *)(plVar14 + 9) = iVar19;
          if (iVar19 == 0) {
            if (plVar14[2] == 0) {
              FUN_03518540(plVar14);
            }
            else {
              FUN_0351c44c(plVar14[2],plVar14);
              plVar14[2] = 0;
            }
            (**(code **)(*plVar14 + 0x50))(plVar14);
            (**(code **)(puVar9 + 0x30))(0,plVar14);
          }
          if (puVar13 != (undefined8 *)0x0) {
            if (*(int *)(param_2 + 0x34) < 1) {
              iVar19 = iVar11 - (*(uint *)(*(long *)(plVar14[0xf] + 0x130) + 4) &
                                (int)((uint)*(byte *)(param_2 + 0x48) << 0x19) >> 0x1f);
            }
            else {
              iVar12 = *(int *)(param_2 + 0x3c) + iVar11;
              iVar19 = 0;
              if (-1 < iVar12 || (*(byte *)(param_2 + 0x48) & 0x40) != 0) {
                iVar19 = iVar12;
              }
            }
            lVar24 = puVar13[3];
            if (lVar24 == 0) {
              iVar12 = 0;
            }
            else {
              *(int *)(lVar24 + 0x90) = iVar19;
              iVar3 = *(int *)((*(long **)(lVar24 + 0x78))[0x26] + 4);
              uVar10 = (**(code **)(**(long **)(lVar24 + 0x78) + 600))();
              if (uVar10 == 0) {
                iVar12 = 0;
              }
              else {
                uVar17 = 0;
                iVar22 = 0;
                do {
                  if (uVar17 < *(uint *)(*(long *)(lVar24 + 0x78) + 0x108)) {
                    uVar15 = *(undefined8 *)
                              (*(long *)(*(long *)(lVar24 + 0x78) + 0x100) + uVar17 * 8);
                  }
                  else {
                    uVar15 = 0;
                  }
                  iVar12 = FUN_0352cdd4(uVar15,iVar3 + iVar19);
                  uVar17 = uVar17 + 1;
                  if (iVar12 <= iVar22) {
                    iVar12 = iVar22;
                  }
                  iVar22 = iVar12;
                } while (uVar10 != uVar17);
              }
              iVar12 = (iVar11 - iVar19) + iVar12;
            }
            *(int *)((long)puVar13 + 0x24) = iVar11 - iVar12;
            *(undefined4 *)(puVar13 + 5) = 0;
            bVar5 = *(byte *)((long)puVar13 + 0x44) | 1;
            *(byte *)((long)puVar13 + 0x44) = bVar5;
            iVar11 = *(int *)(param_2 + 0x3c);
            uVar16 = *(undefined4 *)(param_2 + 0x38);
            *(undefined4 *)(puVar13 + 5) = *(undefined4 *)(param_2 + 0x34);
            *(undefined4 *)((long)puVar13 + 0x2c) = uVar16;
            *(int *)(puVar13 + 6) = iVar11 + iVar12;
            *(byte *)((long)puVar13 + 0x44) = bVar5;
            return puVar13;
          }
          goto LAB_03536324;
        }
      }
    }
    nn::os::UnlockMutex(pMVar20);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  puVar13 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x48);
  if (puVar13 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar13 + 0x3c) = 4;
    *puVar13 = 0;
    puVar13[1] = lVar23 + lVar24;
    *(undefined4 *)(puVar13 + 5) = 0;
    *(undefined8 *)((long)puVar13 + 0x34) = 0;
    puVar13[2] = 0;
    puVar13[3] = 0;
    *(undefined1 *)(puVar13 + 8) = 0;
    puVar13[4] = 0;
    *(byte *)((long)puVar13 + 0x44) = *(byte *)((long)puVar13 + 0x44) & 0xf8;
    plVar18 = param_1 + 0x10;
    if (*plVar18 != 0) {
      plVar18 = (long *)param_1[0xf];
    }
    *plVar18 = (long)puVar13;
    param_1[0xf] = (long)puVar13;
LAB_03536320:
    if (puVar13 != (undefined8 *)0x0) {
      return puVar13;
    }
  }
LAB_03536324:
  puVar13 = (undefined8 *)(**(code **)(*param_1 + 0x120))(param_1);
  return puVar13;
}


