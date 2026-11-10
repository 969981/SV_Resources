/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0111a03c; name: FUN_0111a03c
 */


void FUN_0111a03c(long *param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  size_t sVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  undefined8 *local_98 [4];
  long local_78;
  undefined8 local_70;
  int local_68 [2];
  
  nn::os::LockMutex((MutexType *)(param_1 + 8));
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar12 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar12;
  if ((lVar12 == 0) || (param_1[0xc] == 0)) goto LAB_0111a0ac;
  if (param_1[0x2a] == param_1[0x2b]) goto LAB_0111a0ac;
  lVar12 = *(long *)PTR_DAT_047d0a08;
  if (lVar12 == 0) {
    local_78 = 0;
    goto LAB_0111a0ac;
  }
  local_78 = *(long *)(lVar12 + 0xc0);
  if ((local_78 == 0) || (lVar12 = *(long *)(lVar12 + 0xb8), lVar12 == 0)) goto LAB_0111a0ac;
  uVar13 = (param_1[0x2b] - param_1[0x2a] >> 3) * -0x5555555555555555;
  uVar11 = (uint)uVar13;
  if ((uVar13 & 0xff00) != 0) {
    uVar11 = 0x100;
  }
  FUN_016947d8(local_98);
  if (local_98[0] != (undefined8 *)0x0) {
    if (local_98[0][3] + 1 <= (ulong)local_98[0][2]) {
      *(undefined1 *)(local_98[0][1] + local_98[0][3]) = 2;
      local_98[0][3] = local_98[0][3] + 1;
    }
    uVar15 = 0xffffff80;
    if (0xff < (uVar11 & 0xffff)) {
      uVar15 = 0xffffff81;
    }
    uVar1 = uVar11;
    if (0x7f < (uVar11 & 0xffff)) {
      uVar1 = uVar15;
    }
    lVar6 = FUN_0111b030(uVar1);
    if ((ulong)(local_98[0][3] + lVar6) <= (ulong)local_98[0][2]) {
      *(char *)(local_98[0][1] + local_98[0][3]) = (char)uVar1;
      lVar6 = local_98[0][3] + 1;
      local_98[0][3] = lVar6;
      if ((uVar1 & 0xff) == 0x81) {
        *(ushort *)(local_98[0][1] + lVar6) = (ushort)uVar11;
        lVar6 = local_98[0][3] + 2;
      }
      else {
        if ((uVar1 & 0xff) != 0x80) goto LAB_0111a1a8;
        *(char *)(local_98[0][1] + lVar6) = (char)uVar11;
        lVar6 = local_98[0][3] + 1;
      }
      local_98[0][3] = lVar6;
    }
  }
LAB_0111a1a8:
  if ((uVar11 & 0xffff) == 0) {
    if (lVar12 != local_78) goto LAB_0111a2e8;
LAB_0111a2ac:
    if (local_98[0] == (undefined8 *)0x0) {
      uVar10 = 0;
      uVar3 = 0;
    }
    else {
      uVar10 = *local_98[0];
      uVar3 = *(undefined4 *)(local_98[0] + 3);
    }
    (**(code **)(*param_1 + 0x30))(param_1,uVar10,uVar3,local_78,param_1[0xc]);
  }
  else {
    uVar13 = (ulong)uVar11 & 0xffff;
    lVar6 = 0;
    do {
      if (local_98[0] != (undefined8 *)0x0) {
        lVar14 = param_1[0x2a];
        uVar7 = *(ulong *)(lVar14 + lVar6);
        if (0x7f < uVar7) {
          if (uVar7 < 0x100) {
            uVar7 = 0x80;
          }
          else if (uVar7 < 0x10000) {
            uVar7 = 0x81;
          }
          else {
            uVar15 = 0xffffff82;
            if (uVar7 >> 0x20 != 0) {
              uVar15 = 0xffffff83;
            }
            uVar7 = (ulong)uVar15;
          }
        }
        lVar8 = FUN_0111b030(uVar7);
        if ((ulong)local_98[0][2] < lVar8 + local_98[0][3] + 2U) {
          local_70 = CONCAT44(local_70._4_4_,0xd);
        }
        else {
          *(undefined1 *)(local_98[0][1] + local_98[0][3]) = 0xb9;
          local_98[0][3] = local_98[0][3] + 1;
          local_70 = 1;
          FUN_0111b0ac(local_68,&local_70,local_98[0] + 1);
          if (local_68[0] == 0) {
            FUN_0111b0ac(&local_70,(ulong *)(lVar14 + lVar6),local_98[0] + 1);
          }
          else {
            local_70 = CONCAT44(local_70._4_4_,local_68[0]);
            local_68[0] = 0;
          }
        }
      }
      lVar6 = lVar6 + 0x18;
    } while ((uVar13 * 2 + (ulong)(ushort)uVar11) * 8 != lVar6);
    if (lVar12 == local_78) {
      pvVar2 = (void *)param_1[0x2a];
      pvVar9 = (void *)((long)pvVar2 + uVar13 * 0x18);
      sVar4 = param_1[0x2b] - (long)pvVar9;
      if (sVar4 != 0) {
        memmove(pvVar2,pvVar9,sVar4);
      }
      param_1[0x2b] = (long)pvVar2 + sVar4;
      goto LAB_0111a2ac;
    }
LAB_0111a2e8:
    uVar13 = FUN_0111b1ec(param_1[0xc]);
    if ((uVar13 & 1) != 0) {
      if (local_98[0] == (undefined8 *)0x0) {
        uVar10 = 0;
        uVar3 = 0;
      }
      else {
        uVar10 = *local_98[0];
        uVar3 = *(undefined4 *)(local_98[0] + 3);
      }
      uVar13 = (**(code **)(*(long *)param_1[0xc] + 0x68))
                         ((long *)param_1[0xc],uVar10,uVar3,&local_78);
      if (((uVar13 & 1) != 0) && ((uVar11 & 0xffff) != 0)) {
        pvVar2 = (void *)param_1[0x2a];
        pvVar9 = (void *)((long)pvVar2 + ((ulong)uVar11 & 0xffff) * 0x18);
        sVar4 = param_1[0x2b] - (long)pvVar9;
        if (sVar4 != 0) {
          memmove(pvVar2,pvVar9,sVar4);
        }
        param_1[0x2b] = (long)pvVar2 + sVar4;
      }
    }
  }
  FUN_01694aa8(local_98);
LAB_0111a0ac:
  nn::os::UnlockMutex((MutexType *)(param_1 + 8));
  return;
}


