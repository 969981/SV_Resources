/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e165a4; name: FUN_00e165a4
 */


void FUN_00e165a4(undefined8 *param_1)

{
  undefined *puVar1;
  short *psVar2;
  int *piVar3;
  undefined *puVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined8 local_68;
  
  lVar13 = param_1[0x68];
  if (lVar13 != 0) {
    lVar11 = param_1[0x6a];
    param_1[0x69] = lVar13;
    plVar18 = (long *)param_1[0x6b];
    uVar10 = (**(code **)(*plVar18 + 0xf8))(plVar18);
    if (((uVar10 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar18 + 0x18))(plVar18,lVar13,lVar11 - lVar13,8);
    }
    else {
      FUN_00c48fe8(plVar18,lVar13,lVar11 - lVar13,8);
    }
  }
  lVar13 = param_1[0x60];
  if (lVar13 != 0) {
    lVar11 = param_1[0x61];
    if (lVar11 == lVar13) {
      lVar11 = lVar13;
    }
    else {
      do {
        lVar11 = lVar11 + -0xb8;
        FUN_00e1ae04(lVar11);
      } while (lVar13 != lVar11);
      lVar11 = param_1[0x60];
    }
    lVar12 = param_1[0x62];
    param_1[0x61] = lVar13;
    plVar18 = (long *)param_1[99];
    uVar10 = (**(code **)(*plVar18 + 0xf8))(plVar18);
    if (((uVar10 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar18 + 0x18))(plVar18,lVar11,lVar12 - lVar11,8);
    }
    else {
      FUN_00c48fe8(plVar18,lVar11,lVar12 - lVar11,8);
    }
  }
  lVar13 = param_1[0x58];
  if (lVar13 != 0) {
    lVar11 = param_1[0x5a];
    param_1[0x59] = lVar13;
    plVar18 = (long *)param_1[0x5b];
    uVar10 = (**(code **)(*plVar18 + 0xf8))(plVar18);
    if (((uVar10 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar18 + 0x18))(plVar18,lVar13,lVar11 - lVar13,8);
    }
    else {
      FUN_00c48fe8(plVar18,lVar13,lVar11 - lVar13,8);
    }
  }
  lVar13 = param_1[0x50];
  if (lVar13 != 0) {
    lVar11 = param_1[0x51];
    if (lVar11 == lVar13) {
      lVar11 = lVar13;
    }
    else {
      do {
        lVar11 = lVar11 + -0x90;
        FUN_00e1ac58(lVar11);
      } while (lVar13 != lVar11);
      lVar11 = param_1[0x50];
    }
    lVar12 = param_1[0x52];
    param_1[0x51] = lVar13;
    plVar18 = (long *)param_1[0x53];
    uVar10 = (**(code **)(*plVar18 + 0xf8))(plVar18);
    if (((uVar10 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar18 + 0x18))(plVar18,lVar11,lVar12 - lVar11,8);
    }
    else {
      FUN_00c48fe8(plVar18,lVar11,lVar12 - lVar11,8);
    }
  }
  puVar16 = (undefined8 *)param_1[0x48];
  if (puVar16 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)param_1[0x49];
    if (puVar14 == puVar16) {
      puVar14 = puVar16;
    }
    else {
      do {
        puVar14 = puVar14 + -0x1f;
        (**(code **)*puVar14)(puVar14);
      } while (puVar16 != puVar14);
      puVar14 = (undefined8 *)param_1[0x48];
    }
    lVar13 = param_1[0x4a];
    param_1[0x49] = puVar16;
    plVar18 = (long *)param_1[0x4b];
    uVar10 = (**(code **)(*plVar18 + 0xf8))(plVar18);
    if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar18 + 0x18))(plVar18,puVar14,lVar13 - (long)puVar14,8);
    }
    else {
      FUN_00c48fe8(plVar18,puVar14,lVar13 - (long)puVar14,8);
    }
  }
  puVar16 = (undefined8 *)param_1[0x40];
  if (puVar16 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)param_1[0x41];
    if (puVar14 == puVar16) {
      puVar14 = puVar16;
    }
    else {
      do {
        puVar14 = puVar14 + -10;
        (**(code **)*puVar14)(puVar14);
      } while (puVar16 != puVar14);
      puVar14 = (undefined8 *)param_1[0x40];
    }
    lVar13 = param_1[0x42];
    param_1[0x41] = puVar16;
    plVar18 = (long *)param_1[0x43];
    uVar10 = (**(code **)(*plVar18 + 0xf8))(plVar18);
    if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar18 + 0x18))(plVar18,puVar14,lVar13 - (long)puVar14,8);
    }
    else {
      FUN_00c48fe8(plVar18,puVar14,lVar13 - (long)puVar14,8);
    }
  }
  lVar13 = param_1[0x38];
  if (lVar13 != 0) {
    lVar11 = param_1[0x3a];
    plVar18 = (long *)param_1[0x3b];
    param_1[0x39] = lVar13;
    uVar10 = (**(code **)(*plVar18 + 0xf8))(plVar18);
    if (((uVar10 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar18 + 0x18))(plVar18,lVar13,lVar11 - lVar13,8);
    }
    else {
      FUN_00c48fe8(plVar18,lVar13,lVar11 - lVar13,8);
    }
  }
  puVar8 = PTR_DAT_047d3918;
  puVar4 = PTR_DAT_047d3910;
  plVar18 = (long *)param_1[0x30];
  if (plVar18 != (long *)0x0) {
    if ((long *)param_1[0x31] == plVar18) {
      plVar15 = plVar18;
    }
    else {
      puVar1 = PTR_DAT_047e31c8 + 0x10;
      plVar15 = (long *)param_1[0x31];
      do {
        plVar20 = plVar15 + -0xc;
        *plVar20 = (long)puVar1;
        puVar16 = (undefined8 *)plVar15[-4];
        if (puVar16 != (undefined8 *)0x0) {
          psVar2 = (short *)(puVar16 + 3);
          do {
            sVar5 = *psVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar5 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar5 == 1) {
            piVar3 = (int *)((long)puVar16 + 0x1c);
            do {
              iVar9 = *piVar3;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar7) {
                *piVar3 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,puVar4,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar13 = *(long *)puVar4;
              *(long *)puVar8 = lVar13;
              local_68 = *puVar16;
              FUN_00c44438(lVar13 + 0x8040,&local_68);
            }
          }
          else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        if ((long *)plVar15[-5] != (long *)0x0) {
          (**(code **)(*(long *)plVar15[-5] + 0x20))();
        }
        plVar15 = plVar20;
      } while (plVar20 != plVar18);
      plVar15 = (long *)param_1[0x30];
    }
    lVar13 = param_1[0x32];
    plVar20 = (long *)param_1[0x33];
    param_1[0x31] = plVar18;
    uVar10 = (**(code **)(*plVar20 + 0xf8))(plVar20);
    if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar20 + 0x18))(plVar20,plVar15,lVar13 - (long)plVar15,8);
    }
    else {
      FUN_00c48fe8(plVar20,plVar15,lVar13 - (long)plVar15,8);
    }
  }
  lVar13 = param_1[0x28];
  if (lVar13 != 0) {
    lVar11 = param_1[0x29];
    if (lVar11 == lVar13) {
      lVar11 = lVar13;
    }
    else {
      do {
        plVar18 = (long *)(lVar11 + -8);
        lVar11 = lVar11 + -0x20;
        if ((long *)*plVar18 != (long *)0x0) {
          (**(code **)(*(long *)*plVar18 + 0x20))();
        }
      } while (lVar13 != lVar11);
      lVar11 = param_1[0x28];
    }
    lVar12 = param_1[0x2a];
    plVar18 = (long *)param_1[0x2b];
    param_1[0x29] = lVar13;
    uVar10 = (**(code **)(*plVar18 + 0xf8))(plVar18);
    if (((uVar10 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
      (**(code **)(*plVar18 + 0x18))(plVar18,lVar11,lVar12 - lVar11,8);
    }
    else {
      FUN_00c48fe8(plVar18,lVar11,lVar12 - lVar11,8);
    }
  }
  plVar18 = (long *)param_1[0x20];
  if (plVar18 != (long *)0x0) {
    if ((long *)param_1[0x21] == plVar18) {
      plVar15 = plVar18;
    }
    else {
      puVar4 = PTR_DAT_047e31d0 + 0x10;
      plVar15 = (long *)param_1[0x21];
      do {
        plVar19 = plVar15 + -0x23;
        *plVar19 = (long)puVar4;
        plVar20 = (long *)plVar15[-8];
        while (plVar20 != (long *)0x0) {
          plVar21 = (long *)*plVar20;
          if ((long *)plVar20[5] != (long *)0x0) {
            (**(code **)(*(long *)plVar20[5] + 0x20))();
          }
          plVar17 = (long *)plVar15[-7];
          uVar10 = (**(code **)(*plVar17 + 0xf8))(plVar17);
          if (((uVar10 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
            (**(code **)(*plVar17 + 0x18))(plVar17,plVar20,0x38,8);
            plVar20 = plVar21;
          }
          else {
            FUN_00c48fe8(plVar17,plVar20,0x38,8);
            plVar20 = plVar21;
          }
        }
        lVar13 = plVar15[-0xe];
        plVar15[-0xe] = 0;
        if (lVar13 != 0) {
          FUN_029c22a4(plVar15 + -0xd);
        }
        plVar20 = (long *)plVar15[-0x15];
        while (plVar20 != (long *)0x0) {
          plVar21 = (long *)*plVar20;
          if ((long *)plVar20[5] != (long *)0x0) {
            (**(code **)(*(long *)plVar20[5] + 0x20))();
          }
          plVar17 = (long *)plVar15[-0x14];
          uVar10 = (**(code **)(*plVar17 + 0xf8))(plVar17);
          if (((uVar10 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
            (**(code **)(*plVar17 + 0x18))(plVar17,plVar20,0x40,8);
            plVar20 = plVar21;
          }
          else {
            FUN_00c48fe8(plVar17,plVar20,0x40,8);
            plVar20 = plVar21;
          }
        }
        lVar13 = plVar15[-0x1b];
        plVar15[-0x1b] = 0;
        if (lVar13 != 0) {
          lVar11 = plVar15[-0x1a];
          plVar15 = (long *)plVar15[-0x19];
          uVar10 = (**(code **)(*plVar15 + 0xf8))(plVar15);
          if (((uVar10 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
            (**(code **)(*plVar15 + 0x18))(plVar15,lVar13,lVar11 << 3,8);
          }
          else {
            FUN_00c48fe8(plVar15,lVar13,lVar11 << 3,8);
          }
        }
        plVar15 = plVar19;
      } while (plVar19 != plVar18);
      plVar15 = (long *)param_1[0x20];
    }
    lVar13 = param_1[0x22];
    plVar20 = (long *)param_1[0x23];
    param_1[0x21] = plVar18;
    uVar10 = (**(code **)(*plVar20 + 0xf8))(plVar20);
    if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar20 + 0x18))(plVar20,plVar15,lVar13 - (long)plVar15,8);
    }
    else {
      FUN_00c48fe8(plVar20,plVar15,lVar13 - (long)plVar15,8);
    }
  }
  plVar18 = (long *)param_1[0x18];
  if (plVar18 != (long *)0x0) {
    if ((long *)param_1[0x19] == plVar18) {
      plVar15 = plVar18;
    }
    else {
      puVar4 = PTR_DAT_047e31d8 + 0x10;
      plVar15 = (long *)param_1[0x19];
      do {
        plVar20 = plVar15 + -0xb;
        *plVar20 = (long)puVar4;
        if ((long *)plVar15[-6] != (long *)0x0) {
          (**(code **)(*(long *)plVar15[-6] + 0x20))();
        }
        plVar15 = plVar20;
      } while (plVar18 != plVar20);
      plVar15 = (long *)param_1[0x18];
    }
    lVar13 = param_1[0x1a];
    plVar20 = (long *)param_1[0x1b];
    param_1[0x19] = plVar18;
    uVar10 = (**(code **)(*plVar20 + 0xf8))(plVar20);
    if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar20 + 0x18))(plVar20,plVar15,lVar13 - (long)plVar15,8);
    }
    else {
      FUN_00c48fe8(plVar20,plVar15,lVar13 - (long)plVar15,8);
    }
  }
  lVar13 = param_1[0x10];
  if (lVar13 != 0) {
    lVar11 = param_1[0x12];
    plVar18 = (long *)param_1[0x13];
    param_1[0x11] = lVar13;
    uVar10 = (**(code **)(*plVar18 + 0xf8))(plVar18);
    if (((uVar10 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar18 + 0x18))(plVar18,lVar13,lVar11 - lVar13,8);
    }
    else {
      FUN_00c48fe8(plVar18,lVar13,lVar11 - lVar13,8);
    }
  }
  plVar18 = (long *)param_1[8];
  if (plVar18 != (long *)0x0) {
    if ((long *)param_1[9] == plVar18) {
      plVar15 = plVar18;
    }
    else {
      puVar4 = PTR_DAT_047e31e0 + 0x10;
      plVar15 = (long *)param_1[9];
      do {
        plVar20 = plVar15 + -0xe;
        *plVar20 = (long)puVar4;
        if ((long *)plVar15[-4] != (long *)0x0) {
          (**(code **)(*(long *)plVar15[-4] + 0x20))();
        }
        if ((long *)plVar15[-8] != (long *)0x0) {
          (**(code **)(*(long *)plVar15[-8] + 0x20))();
        }
        plVar15 = plVar20;
      } while (plVar18 != plVar20);
      plVar15 = (long *)param_1[8];
    }
    lVar13 = param_1[10];
    plVar20 = (long *)param_1[0xb];
    param_1[9] = plVar18;
    uVar10 = (**(code **)(*plVar20 + 0xf8))(plVar20);
    if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar20 + 0x18))(plVar20,plVar15,lVar13 - (long)plVar15,8);
    }
    else {
      FUN_00c48fe8(plVar20,plVar15,lVar13 - (long)plVar15,8);
    }
  }
  plVar18 = (long *)*param_1;
  if (plVar18 == (long *)0x0) {
    return;
  }
  if ((long *)param_1[1] == plVar18) {
    plVar15 = plVar18;
  }
  else {
    puVar4 = PTR_DAT_047e31e8 + 0x10;
    plVar15 = (long *)param_1[1];
    do {
      plVar20 = plVar15 + -0x16;
      *plVar20 = (long)puVar4;
      lVar13 = plVar15[-0xd];
      if (lVar13 != 0) {
        lVar11 = plVar15[-0xb];
        plVar19 = (long *)plVar15[-10];
        plVar15[-0xc] = lVar13;
        uVar10 = (**(code **)(*plVar19 + 0xf8))(plVar19);
        if (((uVar10 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar19 + 0x18))(plVar19,lVar13,lVar11 - lVar13,8);
        }
        else {
          FUN_00c48fe8(plVar19,lVar13,lVar11 - lVar13,8);
        }
      }
      plVar15 = plVar20;
    } while (plVar18 != plVar20);
    plVar15 = (long *)*param_1;
  }
  lVar13 = param_1[2];
  plVar20 = (long *)param_1[3];
  param_1[1] = plVar18;
  uVar10 = (**(code **)(*plVar20 + 0xf8))(plVar20);
  if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00e16e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar20 + 0x18))(plVar20,plVar15,lVar13 - (long)plVar15,8);
    return;
  }
  FUN_00c48fe8(plVar20,plVar15,lVar13 - (long)plVar15,8);
  return;
}


