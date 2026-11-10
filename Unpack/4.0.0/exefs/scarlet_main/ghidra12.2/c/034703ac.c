/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034703ac; name: FUN_034703ac
 */


void FUN_034703ac(long *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  undefined4 uVar25;
  long *local_60;
  undefined1 local_58;
  
  *param_1 = (long)&PTR_FUN_047c1c50;
  param_1[1] = (long)&PTR_LAB_047c1ef0;
  param_1[4] = (long)&PTR_LAB_047c1f30;
  param_1[7] = (long)&PTR_LAB_047c1fc8;
  nn::os::LockMutex((MutexType *)&DAT_048afcc0);
  bVar9 = *(byte *)((long)param_1 + 0x1bc);
  if ((bVar9 >> 6 & 1) != 0) {
    if (DAT_048afca0 != 0) {
      puVar17 = DAT_048afc98 + DAT_048afca0;
      puVar11 = DAT_048afc98;
      if ((long *)*DAT_048afc98 != param_1) {
        lVar18 = (ulong)DAT_048afca0 * 8;
        puVar16 = DAT_048afc98;
        do {
          lVar18 = lVar18 + -8;
          if (lVar18 == 0) {
            puVar11 = puVar17;
            goto LAB_03470458;
          }
          puVar11 = puVar16 + 1;
          puVar2 = puVar16 + 1;
          puVar16 = puVar11;
        } while ((long *)*puVar2 != param_1);
      }
LAB_03470458:
      if (puVar17 != puVar11) {
        if (DAT_048afca0 < 2) {
          DAT_048afca0 = 0;
        }
        else {
          *puVar11 = puVar17[-1];
          bVar9 = *(byte *)((long)param_1 + 0x1bc);
          DAT_048afca0 = DAT_048afca0 - 1;
        }
      }
    }
    *(byte *)((long)param_1 + 0x1bc) = bVar9 & 0xbf;
    uVar25 = 0x3f800000;
    local_58 = 0x61;
    if ((param_1[0xe] != 0) && (pbVar14 = *(byte **)(param_1[0xe] + 0x18), pbVar14 != (byte *)0x0))
    {
      bVar9 = *pbVar14;
      uVar6 = (uint)bVar9;
      if (bVar9 < 2) {
        uVar6 = 1;
      }
      uVar12 = (ulong)uVar6;
      pbVar15 = pbVar14 + ((ulong)(bVar9 + 4) & 0x1fc);
      do {
        pbVar14 = pbVar14 + 1;
        if (*pbVar14 == 0xb) {
          uVar25 = *(undefined4 *)pbVar15;
          break;
        }
        pbVar15 = pbVar15 + 0x10;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    local_60 = param_1;
    (**(code **)(*param_1 + 0xd0))(uVar25,param_1,&local_60,1);
    if ((DAT_048afca0 == 0) && (DAT_048afc98 != (undefined8 *)0x0)) {
      DAT_048afca0 = 0;
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
      DAT_048afc98 = (undefined8 *)0x0;
      DAT_048afca4 = 0;
    }
  }
  nn::os::UnlockMutex((MutexType *)&DAT_048afcc0);
  for (plVar10 = (long *)param_1[0x2a]; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    lVar18 = plVar10[4];
    if (lVar18 != 0) {
      uVar6 = *(uint *)(lVar18 + 0x30);
      if (uVar6 != 0) {
        plVar19 = *(long **)(lVar18 + 0x28);
        plVar5 = plVar19 + uVar6;
        if ((long *)*plVar19 != plVar10 + 2) {
          lVar20 = (ulong)uVar6 * 8;
          do {
            lVar20 = lVar20 + -8;
            if (lVar20 == 0) {
              plVar19 = plVar5;
              break;
            }
            plVar4 = plVar19 + 1;
            plVar3 = plVar19 + 1;
            plVar19 = plVar4;
          } while ((long *)*plVar3 != plVar10 + 2);
        }
        if (plVar5 != plVar19) {
          if (uVar6 < 2) {
            iVar13 = 0;
          }
          else {
            *plVar19 = plVar5[-1];
            iVar13 = *(int *)(lVar18 + 0x30) + -1;
          }
          *(int *)(lVar18 + 0x30) = iVar13;
        }
      }
      plVar10[4] = 0;
    }
  }
  FUN_034709cc(param_1 + 0x2a);
  for (plVar10 = (long *)param_1[0x2f]; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
    lVar18 = plVar10[4];
    if (lVar18 != 0) {
      uVar6 = *(uint *)(lVar18 + 0x30);
      if (uVar6 != 0) {
        plVar19 = *(long **)(lVar18 + 0x28);
        plVar5 = plVar19 + uVar6;
        if ((long *)*plVar19 != plVar10 + 2) {
          lVar20 = (ulong)uVar6 * 8;
          do {
            lVar20 = lVar20 + -8;
            if (lVar20 == 0) {
              plVar19 = plVar5;
              break;
            }
            plVar4 = plVar19 + 1;
            plVar3 = plVar19 + 1;
            plVar19 = plVar4;
          } while ((long *)*plVar3 != plVar10 + 2);
        }
        if (plVar5 != plVar19) {
          if (uVar6 < 2) {
            iVar13 = 0;
          }
          else {
            *plVar19 = plVar5[-1];
            iVar13 = *(int *)(lVar18 + 0x30) + -1;
          }
          *(int *)(lVar18 + 0x30) = iVar13;
        }
      }
      plVar10[4] = 0;
    }
  }
  FUN_034709cc(param_1 + 0x2f);
  puVar8 = PTR_DAT_047e2fd0;
  plVar10 = (long *)param_1[0x25];
  puVar7 = PTR_DAT_047e2fd0;
  while (PTR_DAT_047e2fd0 = puVar7, plVar10 != (long *)0x0) {
    param_1[0x25] = *plVar10;
    if ((long *)param_1[0x26] == plVar10) {
      param_1[0x26] = 0;
    }
    if ((plVar10 < (long *)param_1[0x28]) ||
       ((long *)param_1[0x28] + (ulong)*(uint *)(param_1 + 0x29) * 4 <= plVar10)) {
      (**(code **)(puVar8 + 0x30))(0);
    }
    else {
      *plVar10 = param_1[0x27];
      param_1[0x27] = (long)plVar10;
    }
    plVar10 = (long *)param_1[0x25];
    *(int *)((long)param_1 + 0x14c) = *(int *)((long)param_1 + 0x14c) + -1;
    puVar7 = PTR_DAT_047e2fd0;
  }
  puVar21 = (ulong *)param_1[0x27];
  while (puVar21 != (ulong *)0x0) {
    puVar22 = (ulong *)*puVar21;
    if ((puVar21 < (ulong)param_1[0x28]) ||
       (bVar1 = param_1[0x28] + (ulong)*(uint *)(param_1 + 0x29) * 0x20 <= puVar21,
       puVar21 = puVar22, bVar1)) {
      (**(code **)(puVar7 + 0x30))(0);
      puVar21 = puVar22;
    }
  }
  if (param_1[0x28] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[0x28] = 0;
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
  if (DAT_048afcb0 != 0) {
    lVar18 = (ulong)DAT_048afcb0 << 3;
    puVar11 = DAT_048afca8;
LAB_03470798:
    if ((long *)*puVar11 != param_1) goto code_r0x034707a4;
    puVar17 = DAT_048afca8 + ((ulong)DAT_048afcb0 - 1);
    if (puVar11 < puVar17) {
      do {
        puVar16 = puVar11 + 1;
        *puVar11 = *puVar16;
        puVar11 = puVar16;
      } while (puVar16 < puVar17);
    }
    DAT_048afcb0 = DAT_048afcb0 - 1;
    if (DAT_048afcb0 == 0) {
      if (DAT_048afca8 != (undefined8 *)0x0) {
        DAT_048afcb0 = 0;
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
        DAT_048afca8 = (undefined8 *)0x0;
        DAT_048afcb4 = 0;
      }
      puVar7 = PTR_DAT_047e6d30;
      nn::os::LockMutex((MutexType *)PTR_DAT_047e6d30);
      FUN_034dc18c(*(undefined8 *)PTR_DAT_047e7050,1);
      nn::os::UnlockMutex((MutexType *)puVar7);
    }
  }
LAB_03470844:
  nn::os::UnlockMutex((MutexType *)PTR_DAT_047e6d30);
  if ((long *)param_1[0x21] != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x22) = 0;
    if (param_1 + 0x20 != (long *)param_1[0x21]) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    }
    param_1[0x21] = 0;
    *(undefined4 *)((long)param_1 + 0x114) = 0;
  }
  if (param_1[0x1f] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(2);
  }
  puVar21 = (ulong *)param_1[0x35];
  param_1[0x34] = (long)(PTR_DAT_047e7128 + 0x10);
  puVar7 = PTR_DAT_047e6fd8;
  if (puVar21 == (ulong *)0x0) goto LAB_03470958;
  uVar12 = *puVar21;
  if (uVar12 == 0) {
LAB_03470914:
    if (puVar21[2] != 0) {
      *(undefined4 *)(puVar21 + 3) = 0;
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
      puVar21[2] = 0;
      *(undefined4 *)((long)puVar21 + 0x1c) = 0;
    }
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(2,puVar21);
  }
  else {
    uVar23 = 0;
    do {
      uVar24 = 1L << (uVar23 & 0x3f);
      if ((uVar24 & uVar12) != 0) {
        FUN_034b6c14(*(undefined8 *)puVar7,param_1 + 0x34,uVar23);
        *(ulong *)param_1[0x35] = *(ulong *)param_1[0x35] & (uVar24 ^ 0xffffffffffffffff);
        puVar21 = (ulong *)param_1[0x35];
      }
      uVar12 = *puVar21;
      uVar23 = (ulong)((int)uVar23 + 1);
    } while (uVar12 != 0);
    if (puVar21 != (ulong *)0x0) goto LAB_03470914;
  }
  param_1[0x35] = 0;
LAB_03470958:
  *param_1 = (long)&PTR_FUN_047c1ff0;
  param_1[1] = (long)&PTR_LAB_047c2250;
  param_1[4] = (long)&PTR_LAB_047c2290;
  param_1[7] = (long)&PTR_FUN_047c2328;
  if ((long *)param_1[0x1d] != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x1e) = 0;
    if (param_1 + 0x1c != (long *)param_1[0x1d]) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    }
    param_1[0x1d] = 0;
    *(undefined4 *)((long)param_1 + 0xf4) = 0;
  }
  FUN_034aa790(param_1);
  return;
code_r0x034707a4:
  puVar11 = puVar11 + 1;
  lVar18 = lVar18 + -8;
  if (lVar18 == 0) goto LAB_03470844;
  goto LAB_03470798;
}


