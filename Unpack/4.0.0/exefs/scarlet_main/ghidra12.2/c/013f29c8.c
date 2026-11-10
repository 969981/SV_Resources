/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013f29c8; name: FUN_013f29c8
 */


void FUN_013f29c8(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  long lVar4;
  byte bVar5;
  ushort uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  long *plVar17;
  undefined1 *puVar18;
  ulong uVar19;
  long lVar20;
  uint *puVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  undefined1 *puVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  string local_58;
  char local_57 [8];
  undefined4 local_4f;
  undefined1 local_4b;
  long local_48;
  
  if (*(char *)(param_1 + 0xdc) == '\0') {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x180));
  piVar11 = *(int **)(param_1 + 0x18);
  uVar14 = (ulong)*(ushort *)((long)piVar11 + (10 - (long)*piVar11));
  puVar2 = (uint *)((long)piVar11 + uVar14);
  uVar16 = (ulong)*puVar2;
  puVar2 = (uint *)((long)puVar2 + uVar16);
  puVar21 = puVar2 + 1;
  uVar19 = (ulong)*puVar2;
  if (uVar19 == 0) {
    fVar27 = 0.0;
  }
  else {
    piVar3 = (int *)((long)puVar21 + (ulong)*puVar21);
    fVar27 = 0.0;
    if (6 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
      uVar22 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3];
      fVar27 = 0.0;
      if (uVar22 != 0) {
        fVar27 = *(float *)((long)piVar3 + uVar22);
      }
    }
    fVar27 = fVar27 + 0.0;
    if (*puVar2 != 1) {
      piVar3 = (int *)((long)(puVar2 + 2) + (ulong)puVar2[2]);
      fVar26 = 0.0;
      if ((6 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar22 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar22 != 0)) {
        fVar26 = *(float *)((long)piVar3 + uVar22);
      }
      fVar27 = fVar27 + fVar26;
      puVar1 = puVar2 + 3;
      if (puVar1 != puVar21 + uVar19) {
        piVar3 = (int *)((long)puVar1 + (ulong)*puVar1);
        fVar26 = 0.0;
        if ((6 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
           (uVar22 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar22 != 0)) {
          fVar26 = *(float *)((long)piVar3 + uVar22);
        }
        fVar27 = fVar27 + fVar26;
        if (puVar2 + 4 != puVar21 + uVar19) {
          lVar4 = uVar16 + uVar14;
          lVar20 = 0;
          do {
            uVar14 = (ulong)*(uint *)((long)piVar11 + lVar20 + lVar4 + 0x10);
            lVar7 = lVar20 + (uVar14 - (long)*(int *)((long)piVar11 + lVar20 + uVar14 + lVar4 + 0x10
                                                     )) + lVar4;
            fVar26 = 0.0;
            if (6 < *(ushort *)((long)piVar11 + lVar7 + 0x10)) {
              uVar16 = (ulong)*(ushort *)((long)piVar11 + lVar7 + 0x16);
              fVar26 = 0.0;
              if (uVar16 != 0) {
                fVar26 = *(float *)((long)piVar11 + lVar20 + uVar14 + uVar16 + lVar4 + 0x10);
              }
            }
            fVar27 = fVar27 + fVar26;
            lVar20 = lVar20 + 4;
          } while (uVar19 * 4 + -0xc != lVar20);
        }
      }
    }
  }
  if (((DAT_0483d2c8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_0483d2c8), iVar10 != 0)) {
    local_58 = (string)0x18;
    local_4f = 0x6d6f646e;
    local_4b = 0;
    local_57[0] = s__dev_urandom_03c1765b[0];
    local_57[1] = s__dev_urandom_03c1765b[1];
    local_57[2] = s__dev_urandom_03c1765b[2];
    local_57[3] = s__dev_urandom_03c1765b[3];
    local_57[4] = s__dev_urandom_03c1765b[4];
    local_57[5] = s__dev_urandom_03c1765b[5];
    local_57[6] = s__dev_urandom_03c1765b[6];
    local_57[7] = s__dev_urandom_03c1765b[7];
    std::random_device::random_device((random_device *)&DAT_0483c900,&local_58);
    if ((((byte)local_58 & 1) != 0) && (local_48 != 0)) {
      lVar20 = tpidr_el0;
      plVar24 = *(long **)(lVar20 + 0x30);
      if (plVar24 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0))
        {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar24 = DAT_04859430;
        *(long **)(lVar20 + 0x30) = DAT_04859430;
      }
      uVar14 = (**(code **)(*plVar24 + 0xf8))(plVar24);
      if (((uVar14 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
        (**(code **)(*plVar24 + 0x18))(plVar24,local_48,0,8);
      }
      else {
        FUN_00c48fe8(plVar24,local_48,0,8);
      }
    }
    FUN_00100190(PTR__random_device_047dcb28,&DAT_0483c900,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483d2c8);
  }
  if (((DAT_0483d2d0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_0483d2d0), iVar10 != 0)) {
    uVar8 = std::random_device::operator()((random_device *)&DAT_0483c900);
    iVar10 = (int)((ulong)uVar8 * 2 + (ulong)uVar8 >> 0x20);
    DAT_0483e6c0 = uVar8 + (iVar10 + (uVar8 - iVar10 >> 1) >> 0x1e) * -0x7fffffff;
    if (DAT_0483e6c0 == 0) {
      DAT_0483e6c0 = 1;
    }
    __cxa_guard_release(&DAT_0483d2d0);
  }
  uVar8 = (DAT_0483e6c0 % 0xadc8) * 0xbc8f;
  iVar10 = 0x7fffffff;
  if ((DAT_0483e6c0 / 0xadc8) * 0xd47 <= uVar8) {
    iVar10 = 0;
  }
  iVar10 = iVar10 + uVar8 + (DAT_0483e6c0 / 0xadc8) * -0xd47;
  DAT_0483e6c0 = iVar10;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar25 = *(undefined1 **)PTR_DAT_047d3e30;
  plVar24 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x18))(plVar24);
  }
  piVar11 = *(int **)(param_1 + 0x18);
  uVar14 = (ulong)*(ushort *)((long)piVar11 + (10 - (long)*piVar11));
  uVar19 = (ulong)*(uint *)((long)piVar11 + uVar14);
  uVar16 = (ulong)*(uint *)((long)((long)piVar11 + uVar14) + uVar19);
  if (uVar16 != 0) {
    lVar4 = uVar19 + uVar14;
    lVar20 = 0;
    fVar26 = 0.0;
LAB_013f2c44:
    uVar22 = (ulong)*(uint *)((long)piVar11 + lVar20 + lVar4 + 4);
    lVar7 = lVar20 + (uVar22 - (long)*(int *)((long)piVar11 + lVar20 + uVar22 + lVar4 + 4)) + lVar4;
    uVar6 = *(ushort *)((long)piVar11 + lVar7 + 4);
    fVar28 = 0.0;
    if (6 < uVar6) {
      uVar23 = (ulong)*(ushort *)((long)piVar11 + lVar7 + 10);
      fVar28 = 0.0;
      if (uVar23 != 0) {
        fVar28 = *(float *)((long)piVar11 + lVar20 + uVar22 + uVar23 + lVar4 + 4);
      }
    }
    fVar26 = fVar26 + fVar28;
    if (fVar26 < fVar27 * (float)(iVar10 - 1) * 4.656613e-10 + 0.0) goto LAB_013f2e60;
    if ((uVar6 < 5) || (uVar16 = (ulong)*(ushort *)((long)piVar11 + lVar7 + 8), uVar16 == 0)) {
      lVar20 = 0;
    }
    else {
      lVar20 = (long)piVar11 +
               lVar20 + uVar16 + *(uint *)((long)piVar11 +
                                          lVar20 + uVar16 + uVar22 + uVar14 + uVar19 + 4) + uVar22 +
                        uVar14 + uVar19 + 4;
    }
    bVar5 = *(byte *)(lVar20 + 4);
    puVar25 = &DAT_cbf29ce484222645;
    if (bVar5 != 0) {
      pbVar12 = (byte *)(lVar20 + 5);
      do {
        puVar25 = (undefined1 *)(((ulong)puVar25 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar5 != 0);
    }
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x20))(plVar24);
      plVar24 = (long *)0x0;
    }
  }
LAB_013f2d14:
  if (((*PTR_DAT_047d82d8 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d82d8), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d8aa0,PTR_DAT_047d82e0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d82d8);
  }
  lVar20 = *(long *)PTR_DAT_047d82e0;
  *(long *)PTR_DAT_047d82e8 = lVar20;
  puVar13 = *(undefined1 **)(lVar20 + 0x80);
  if (puVar13 != (undefined1 *)0x0) {
    uVar14 = (long)puVar13 - ((ulong)puVar13 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      puVar15 = (undefined1 *)((ulong)(puVar13 + -1) & (ulong)puVar25);
    }
    else {
      puVar15 = puVar25;
      if (puVar13 <= puVar25) {
        uVar16 = 0;
        if (puVar13 != (undefined1 *)0x0) {
          uVar16 = (ulong)puVar25 / (ulong)puVar13;
        }
        puVar15 = puVar25 + -(uVar16 * (long)puVar13);
      }
    }
    plVar17 = *(long **)(*(long *)(lVar20 + 0x78) + (long)puVar15 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if ((undefined1 *)plVar17[1] == puVar25) {
            if ((undefined1 *)plVar17[2] == puVar25) goto LAB_013f2dbc;
          }
          else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar13 + -1)) != puVar15) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          puVar18 = (undefined1 *)plVar17[1];
          if (puVar18 == puVar25) {
            if ((undefined1 *)plVar17[2] == puVar25) goto LAB_013f2dbc;
          }
          else {
            if (puVar13 <= puVar18) {
              uVar14 = 0;
              if (puVar13 != (undefined1 *)0x0) {
                uVar14 = (ulong)puVar18 / (ulong)puVar13;
              }
              puVar18 = puVar18 + -(uVar14 * (long)puVar13);
            }
            if (puVar18 != puVar15) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
LAB_013f2dd0:
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x20))(plVar24);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x180));
  return;
LAB_013f2e60:
  lVar20 = lVar20 + 4;
  if (uVar16 * 4 == lVar20) goto LAB_013f2d14;
  goto LAB_013f2c44;
LAB_013f2dbc:
  lVar20 = plVar17[6];
  *(long *)(param_1 + 0x18) = lVar20;
  if (lVar20 != 0) {
    FUN_012267bc(param_1);
  }
  goto LAB_013f2dd0;
}


