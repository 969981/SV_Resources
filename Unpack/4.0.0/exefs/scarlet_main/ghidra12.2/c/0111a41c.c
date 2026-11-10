/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0111a41c; name: FUN_0111a41c
 */


void FUN_0111a41c(long *param_1)

{
  char *pcVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  ushort uVar16;
  ulong uVar17;
  ushort local_2a0 [256];
  undefined8 *local_a0 [4];
  long local_80;
  undefined8 local_78;
  int local_70 [4];
  
  nn::os::LockMutex((MutexType *)(param_1 + 8));
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar10 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar10;
  if ((lVar10 == 0) || (param_1[0xc] == 0)) goto LAB_0111a48c;
  lVar10 = param_1[0x23];
  if (lVar10 == param_1[0x24]) goto LAB_0111a48c;
  uVar11 = param_1[0x24] - lVar10;
  uVar12 = uVar11 - 0x20;
  uVar17 = (uVar12 >> 5) + 1;
  uVar14 = uVar17 & 3;
  if (uVar12 < 0x60) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    lVar15 = -(uVar17 & 0xffffffffffffffc);
    do {
      if (*(char *)(lVar10 + 0x18) == '\0') {
        uVar9 = uVar9 + 1;
      }
      pcVar13 = (char *)(lVar10 + 0x58);
      if (*(char *)(lVar10 + 0x38) == '\0') {
        uVar9 = uVar9 + 1;
      }
      pcVar1 = (char *)(lVar10 + 0x78);
      lVar10 = lVar10 + 0x80;
      if (*pcVar13 == '\0') {
        uVar9 = uVar9 + 1;
      }
      if (*pcVar1 == '\0') {
        uVar9 = uVar9 + 1;
      }
      lVar15 = lVar15 + 4;
    } while (lVar15 != 0);
  }
  if (uVar14 != 0) {
    lVar15 = -uVar14;
    pcVar13 = (char *)(lVar10 + 0x18);
    do {
      if (*pcVar13 == '\0') {
        uVar9 = uVar9 + 1;
      }
      bVar6 = lVar15 != -1;
      lVar15 = lVar15 + 1;
      pcVar13 = pcVar13 + 0x20;
    } while (bVar6);
  }
  if ((uVar9 & 0xffff) == 0) goto LAB_0111a48c;
  uVar3 = 0x100;
  if ((uVar9 & 0xffff) < 0x100) {
    uVar3 = uVar9;
  }
  lVar10 = *(long *)PTR_DAT_047d0a08;
  if (lVar10 == 0) {
    local_80 = 0;
    goto LAB_0111a48c;
  }
  lVar15 = *(long *)(lVar10 + 0xb8);
  local_80 = *(long *)(lVar10 + 0xc0);
  if (local_80 == 0 || lVar15 == 0) goto LAB_0111a48c;
  uVar11 = uVar11 >> 5;
  FUN_016947d8(local_a0);
  if (local_a0[0] != (undefined8 *)0x0) {
    if (local_a0[0][3] + 1 <= (ulong)local_a0[0][2]) {
      *(undefined1 *)(local_a0[0][1] + local_a0[0][3]) = 1;
      local_a0[0][3] = local_a0[0][3] + 1;
    }
    uVar9 = 0xffffff80;
    if (0xff < (uVar3 & 0xffff)) {
      uVar9 = 0xffffff81;
    }
    uVar4 = uVar3;
    if (0x7f < (uVar3 & 0xffff)) {
      uVar4 = uVar9;
    }
    lVar10 = FUN_0111b030(uVar4);
    if ((ulong)(local_a0[0][3] + lVar10) <= (ulong)local_a0[0][2]) {
      *(char *)(local_a0[0][1] + local_a0[0][3]) = (char)uVar4;
      lVar10 = local_a0[0][3] + 1;
      local_a0[0][3] = lVar10;
      if ((uVar4 & 0xff) == 0x81) {
        *(short *)(local_a0[0][1] + lVar10) = (short)uVar3;
        lVar10 = local_a0[0][3] + 2;
      }
      else {
        if ((uVar4 & 0xff) != 0x80) goto LAB_0111a610;
        *(char *)(local_a0[0][1] + lVar10) = (char)uVar3;
        lVar10 = local_a0[0][3] + 1;
      }
      local_a0[0][3] = lVar10;
    }
  }
LAB_0111a610:
  memset(local_2a0,0,0x200);
  if ((uVar11 & 0xffff) == 0) {
    if (lVar15 != local_80) {
      uVar17 = 0;
      goto LAB_0111a7f8;
    }
LAB_0111a798:
    if (local_a0[0] == (undefined8 *)0x0) {
      uVar8 = 0;
      uVar5 = 0;
    }
    else {
      uVar8 = *local_a0[0];
      uVar5 = *(undefined4 *)(local_a0[0] + 3);
    }
    (**(code **)(*param_1 + 0x30))(param_1,uVar8,uVar5,local_80,param_1[0xc]);
  }
  else {
    uVar16 = 0;
    uVar17 = 0;
    do {
      puVar2 = (ulong *)(param_1[0x23] + (ulong)uVar16 * 0x20);
      if ((char)puVar2[3] == '\0') {
        if (local_a0[0] != (undefined8 *)0x0) {
          uVar12 = *puVar2;
          if (0x7f < uVar12) {
            if (uVar12 < 0x100) {
              uVar12 = 0x80;
            }
            else if (uVar12 < 0x10000) {
              uVar12 = 0x81;
            }
            else {
              uVar9 = 0xffffff82;
              if (uVar12 >> 0x20 != 0) {
                uVar9 = 0xffffff83;
              }
              uVar12 = (ulong)uVar9;
            }
          }
          lVar10 = FUN_0111b030(uVar12);
          if ((ulong)local_a0[0][2] < lVar10 + local_a0[0][3] + 2U) {
            local_78 = CONCAT44(local_78._4_4_,0xd);
          }
          else {
            *(undefined1 *)(local_a0[0][1] + local_a0[0][3]) = 0xb9;
            local_a0[0][3] = local_a0[0][3] + 1;
            local_78 = 1;
            FUN_0111b0ac(local_70,&local_78,local_a0[0] + 1);
            if (local_70[0] == 0) {
              FUN_0111b0ac(&local_78,puVar2,local_a0[0] + 1);
            }
            else {
              local_78 = CONCAT44(local_78._4_4_,local_70[0]);
              local_70[0] = 0;
            }
          }
        }
        uVar12 = uVar17 & 0xffff;
        uVar9 = (int)uVar17 + 1;
        uVar17 = (ulong)uVar9;
        local_2a0[uVar12] = uVar16;
        if ((uVar3 & 0xffff) <= (uVar9 & 0xffff)) break;
      }
      uVar16 = uVar16 + 1;
    } while ((uint)uVar16 < ((uint)uVar11 & 0xffff));
    if (lVar15 == local_80) {
      if ((uVar17 & 0xffff) != 0) {
        if (((uint)uVar17 & 0xffff) == 1) {
          uVar12 = 0;
        }
        else {
          uVar11 = 0;
          do {
            uVar12 = uVar11 + 2;
            *(undefined1 *)(param_1[0x23] + (ulong)local_2a0[uVar11] * 0x20 + 0x18) = 1;
            *(undefined1 *)(param_1[0x23] + (ulong)local_2a0[uVar11 + 1] * 0x20 + 0x18) = 1;
            uVar11 = uVar12;
          } while ((uVar17 & 0xfffe) != uVar12);
        }
        if ((uVar17 & 1) != 0) {
          *(undefined1 *)(param_1[0x23] + (ulong)local_2a0[uVar12] * 0x20 + 0x18) = 1;
        }
      }
      goto LAB_0111a798;
    }
LAB_0111a7f8:
    uVar11 = FUN_0111b1ec(param_1[0xc]);
    if ((uVar11 & 1) != 0) {
      if (local_a0[0] == (undefined8 *)0x0) {
        uVar8 = 0;
        uVar5 = 0;
      }
      else {
        uVar8 = *local_a0[0];
        uVar5 = *(undefined4 *)(local_a0[0] + 3);
      }
      uVar11 = (**(code **)(*(long *)param_1[0xc] + 0x68))
                         ((long *)param_1[0xc],uVar8,uVar5,&local_80);
      if (((uVar17 & 0xffff) != 0) && ((uVar11 & 1) != 0)) {
        if (((uint)uVar17 & 0xffff) == 1) {
          uVar12 = 0;
        }
        else {
          uVar11 = 0;
          do {
            uVar12 = uVar11 + 2;
            *(undefined1 *)(param_1[0x23] + (ulong)local_2a0[uVar11] * 0x20 + 0x18) = 1;
            *(undefined1 *)(param_1[0x23] + (ulong)local_2a0[uVar11 + 1] * 0x20 + 0x18) = 1;
            uVar11 = uVar12;
          } while ((uVar17 & 0xfffe) != uVar12);
        }
        if ((uVar17 & 1) != 0) {
          *(undefined1 *)(param_1[0x23] + (ulong)local_2a0[uVar12] * 0x20 + 0x18) = 1;
        }
      }
    }
  }
  FUN_01694aa8(local_a0);
LAB_0111a48c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 8));
  return;
}


