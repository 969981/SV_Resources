/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b62684; name: FUN_00b62684
 */


bool FUN_00b62684(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  ulong uVar12;
  undefined4 *__s;
  long lVar13;
  long lVar14;
  void *pvVar15;
  undefined8 uVar16;
  byte bVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  undefined8 uVar24;
  long *plVar25;
  long local_b0;
  long *local_a0;
  undefined8 local_98;
  long *local_88 [2];
  long *local_78 [2];
  long *local_68;
  
  puVar4 = PTR_DAT_047d6c98;
  if (((*PTR_DAT_047d6c98 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  puVar7 = PTR_DAT_047d6ca8;
  puVar6 = PTR_DAT_047d6ca0;
  lVar22 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar22;
  puVar5 = PTR_DAT_047d0a08;
  if (((lVar22 == 0) || (*(long *)PTR_DAT_047d0a08 == 0)) || (iVar11 = FUN_00f21480(), iVar11 != 1))
  {
    return false;
  }
  if (((*puVar4 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar18 = *(long *)puVar6;
  *(long *)puVar7 = lVar18;
  puVar4 = PTR_DAT_047d0860;
  if (lVar18 == 0) {
    return false;
  }
  if (*(long *)puVar5 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  }
  if (*(long *)(lVar18 + 0x70) == 0) {
    return false;
  }
  if (*(long *)PTR_DAT_047d0860 == 0) {
    return false;
  }
  local_88[0] = (long *)CONCAT71(local_88[0]._1_7_,0xfd);
  FUN_00f42ddc(local_78,*(long *)PTR_DAT_047d0860,local_88,uVar16);
  if ((byte)local_88[0] == 0xfd) {
    return false;
  }
  if ((int)local_78[0] != 0) {
    return false;
  }
  if (DAT_045dfcb0 < (byte)local_88[0] || DAT_045dfcb0 == (byte)local_88[0]) {
    return false;
  }
  if (*(long *)(param_1 + ((ulong)local_88[0] & 0xff) * 8 + 0x40) == 0) {
    return false;
  }
  uVar12 = FUN_00b64f8c();
  if ((uVar12 & 1) == 0) {
    return false;
  }
  plVar19 = *(long **)(param_1 + 8);
  __s = (undefined4 *)(**(code **)(*plVar19 + 0x10))(plVar19,0xff008,4);
  if (__s == (undefined4 *)0x0) {
    return false;
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar18 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar18 + 0x80)) {
LAB_00b62fc8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar19;
  *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
  memset(__s,0,0xff008);
  *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
  puVar8 = PTR_DAT_047d8e18;
  puVar7 = PTR_DAT_047d8e10;
  *__s = *(undefined4 *)PTR_DAT_047d8e10;
  __s[1] = *(undefined4 *)puVar8;
  puVar6 = PTR_DAT_047d8520;
  lVar18 = *(long *)PTR_DAT_047d8520;
  if ((((lVar18 != 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
      (uVar12 = FUN_02bb6e1c(), (uVar12 & 1) != 0)) && (*(long *)(lVar18 + 0x30) != 0)) {
    lVar18 = *(long *)puVar6;
    if (((*(long *)(lVar18 + 0x28) == 0) || (uVar12 = FUN_02bb6e1c(), (uVar12 & 1) == 0)) ||
       (*(long *)(lVar18 + 0x30) == 0)) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("false","CompressedBufferCopy",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/ui/ui_utility/screen_capture.cpp"
                 ,0x56d,"Buffer Copy Faild GetCompressedBuffer is null");
    }
    lVar18 = *(long *)puVar6;
    iVar11 = *(int *)puVar7;
    iVar3 = *(int *)puVar8;
    if (((*(long *)(lVar18 + 0x28) == 0) || (uVar12 = FUN_02bb6e1c(), (uVar12 & 1) == 0)) ||
       (pvVar15 = *(void **)(lVar18 + 0x30), pvVar15 == (void *)0x0)) {
      pvVar15 = (void *)0x0;
    }
    memcpy(__s + 2,pvVar15,(ulong)(uint)(iVar11 * iVar3 * 3) / 6);
  }
  if (*(long *)puVar5 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(*(long *)puVar5 + 0xb8);
  }
  if (*(long *)(lVar22 + 0x70) == 0) {
    bVar17 = 0xfd;
  }
  else {
    lVar22 = *(long *)puVar4;
    bVar17 = 0xfd;
    if (lVar22 != 0) {
      local_88[0] = (long *)CONCAT71(local_88[0]._1_7_,0xfd);
      FUN_00f42ddc(local_78,lVar22,local_88,uVar16);
      bVar17 = (byte)local_88[0];
      if (DAT_045dfcb0 <= (byte)local_88[0] || (int)local_78[0] != 0) {
        bVar17 = 0xfd;
      }
    }
  }
  lVar22 = *(long *)(param_1 + (ulong)bVar17 * 8 + 0x40);
  if ((((*(char *)(lVar22 + 0x60) != '\0') ||
       ((*(long *)(lVar22 + 0x48) != 0 && (*(short *)(*(long *)(lVar22 + 0x48) + 0x1a) != 0)))) &&
      (plVar23 = *(long **)(lVar22 + 0x58), plVar23 != (long *)0x0)) &&
     ((cVar10 = (**(code **)(*plVar23 + 0x28))(plVar23), cVar10 != -3 && (*(long *)puVar5 != 0)))) {
    bVar17 = *(byte *)(lVar22 + 0x68);
    iVar11 = FUN_00f21480();
    if (iVar11 == 1) {
      uVar1 = bVar17 + 4;
      if (((uVar1 & 0xff) < 8) && (lVar18 = *(long *)puVar4, lVar18 != 0)) {
        lVar18 = FUN_00f21488(lVar18 + 0x10,(&DAT_0485ea48)[(ulong)uVar1 & 0xff],0x81);
        bVar9 = false;
        if (lVar18 == 0) goto LAB_00b62a34;
        local_78[0] = (long *)((ulong)local_78[0] & 0xffffffffffffff00);
        if (DAT_045dfcb0 != 0) {
          do {
            lVar13 = (**(code **)(*plVar23 + 0x30))(plVar23,local_78);
            if (((lVar13 != 0) &&
                (lVar14 = (**(code **)(*plVar23 + 0x20))(plVar23), lVar13 != lVar14)) &&
               (uVar12 = FUN_00f21f18(lVar18,lVar13,uVar1), (uVar12 & 1) != 0)) {
              FUN_00f220f4(local_78,lVar18);
              if ((int)local_78[0] == 0) {
                plVar23 = *(long **)(lVar22 + 0x40);
                pvVar15 = (void *)(**(code **)(*plVar23 + 0x10))(plVar23,0xff008,4);
                if (pvVar15 == (void *)0x0) {
                  plVar23 = (long *)0x0;
                  uVar16 = 0;
                  local_98 = 0;
                }
                else {
                  if (((DAT_04865a38 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
                    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                    __cxa_guard_release(&DAT_04865a38);
                  }
                  lVar13 = nn::os::GetTlsValue(DAT_04865a30);
                  if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_00b62fc8;
                  *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar23;
                  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
                  memcpy(pvVar15,__s,0xff008);
                  *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
                  uVar16 = 0xff008;
                  local_98 = 4;
                }
                lVar13 = *(long *)(lVar22 + 0x90);
                *(void **)(lVar22 + 0x90) = pvVar15;
                if (lVar13 != 0) {
                  FUN_00c4e600();
                  FUN_00c4e600();
                  lVar14 = FUN_00c4e600();
                  iVar3 = *(int *)(lVar14 + 0x12c8);
                  iVar11 = iVar3 + 1;
                  *(int *)(lVar14 + 0x12c8) = iVar11;
                  if (*(int *)(lVar14 + 0x12cc) <= iVar3) {
                    *(int *)(lVar14 + 0x12cc) = iVar11;
                  }
                  plVar20 = *(long **)(lVar22 + 0x98);
                  uVar2 = *(undefined8 *)(lVar22 + 0xa0);
                  uVar24 = *(undefined8 *)(lVar22 + 0xa8);
                  uVar12 = (**(code **)(*plVar20 + 0xf8))(plVar20);
                  if (((uVar12 & 1) == 0) ||
                     (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
                    (**(code **)(*plVar20 + 0x18))(plVar20,lVar13,uVar2,uVar24);
                  }
                  else {
                    FUN_00c48fe8(plVar20,lVar13,uVar2,uVar24);
                  }
                  lVar13 = FUN_00c4e600();
                  iVar11 = *(int *)(lVar13 + 0x12c8) + -1;
                  *(int *)(lVar13 + 0x12c8) = iVar11;
                  if (iVar11 == 0) {
                    plVar20 = (long *)FUN_00c4e600();
                    if (plVar20[600] != 0) {
                      local_68 = plVar20 + plVar20[600] * 3;
                      local_88[0] = plVar20;
                      FUN_00c4ea30(local_88,&local_68);
                      local_a0 = (long *)*plVar20;
                      plVar21 = plVar20;
                      if (plVar20[600] != 0) {
                        plVar21 = plVar20 + plVar20[600] * 3;
                      }
                      if (plVar21 == plVar20) {
                        lVar14 = 0;
                        local_b0 = 0;
                      }
                      else {
                        lVar14 = 0;
                        local_b0 = 0;
                        plVar25 = plVar20;
                        do {
                          (**(code **)(*(long *)*plVar25 + 0xd0))();
                          if ((long *)*plVar25 != local_a0) {
                            (**(code **)(*local_a0 + 0x100))
                                      (local_a0,plVar20 + local_b0 * 3,plVar25);
                            local_a0 = (long *)*plVar25;
                            local_b0 = lVar14;
                          }
                          plVar25 = plVar25 + 3;
                          lVar14 = lVar14 + 1;
                        } while (plVar21 != plVar25);
                      }
                      (**(code **)(*local_a0 + 0x100))
                                (local_a0,plVar20 + local_b0 * 3,plVar20 + lVar14 * 3);
                      plVar20[600] = 0;
                    }
                    *(undefined4 *)(lVar13 + 0x12cc) = 0;
                  }
                  pvVar15 = *(void **)(lVar22 + 0x90);
                }
                *(long **)(lVar22 + 0x98) = plVar23;
                *(undefined8 *)(lVar22 + 0xa0) = uVar16;
                *(undefined8 *)(lVar22 + 0xa8) = local_98;
                FUN_00f22188(local_88,lVar18,pvVar15,0xff008,(ulong)uVar1);
                FUN_018ff39c(local_78,local_88);
                bVar9 = (int)local_78[0] == 0;
                goto LAB_00b62a34;
              }
              break;
            }
            bVar17 = (char)local_78[0] + 1;
            local_78[0] = (long *)CONCAT71(local_78[0]._1_7_,bVar17);
          } while (bVar17 < DAT_045dfcb0);
        }
      }
    }
  }
  bVar9 = false;
LAB_00b62a34:
  FUN_00c4e600();
  FUN_00c4e600();
  lVar22 = FUN_00c4e600();
  iVar3 = *(int *)(lVar22 + 0x12c8);
  iVar11 = iVar3 + 1;
  *(int *)(lVar22 + 0x12c8) = iVar11;
  if (*(int *)(lVar22 + 0x12cc) <= iVar3) {
    *(int *)(lVar22 + 0x12cc) = iVar11;
  }
  uVar12 = (**(code **)(*plVar19 + 0xf8))(plVar19);
  if (((uVar12 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
    (**(code **)(*plVar19 + 0x18))(plVar19,__s,0xff008,4);
  }
  else {
    FUN_00c48fe8(plVar19,__s,0xff008,4);
  }
  lVar22 = FUN_00c4e600();
  iVar11 = *(int *)(lVar22 + 0x12c8) + -1;
  *(int *)(lVar22 + 0x12c8) = iVar11;
  if (iVar11 != 0) {
    return bVar9;
  }
  plVar19 = (long *)FUN_00c4e600();
  if (plVar19[600] != 0) {
    local_88[0] = plVar19 + plVar19[600] * 3;
    local_78[0] = plVar19;
    FUN_00c4ea30(local_78,local_88);
    plVar20 = (long *)*plVar19;
    plVar23 = plVar19;
    if (plVar19[600] != 0) {
      plVar23 = plVar19 + plVar19[600] * 3;
    }
    if (plVar23 == plVar19) {
      lVar13 = 0;
      lVar18 = 0;
    }
    else {
      lVar18 = 0;
      lVar13 = 0;
      plVar21 = plVar19;
      do {
        (**(code **)(*(long *)*plVar21 + 0xd0))();
        if ((long *)*plVar21 != plVar20) {
          (**(code **)(*plVar20 + 0x100))(plVar20,plVar19 + lVar13 * 3,plVar21);
          plVar20 = (long *)*plVar21;
          lVar13 = lVar18;
        }
        plVar21 = plVar21 + 3;
        lVar18 = lVar18 + 1;
      } while (plVar23 != plVar21);
    }
    (**(code **)(*plVar20 + 0x100))(plVar20,plVar19 + lVar13 * 3,plVar19 + lVar18 * 3);
    plVar19[600] = 0;
  }
  *(undefined4 *)(lVar22 + 0x12cc) = 0;
  return bVar9;
}


