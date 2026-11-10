/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0117b620; name: FUN_0117b620
 */


bool FUN_0117b620(long *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  char *pcVar14;
  ulong uVar15;
  ulong local_78;
  long *local_70;
  long *local_68;
  
  FUN_01064488();
  uVar3 = (**(code **)(*param_1 + 0x188))(param_1);
  if ((uVar3 & 1) == 0) goto LAB_0117b760;
  nn::os::LockMutex((MutexType *)(param_1 + 0x2d));
  plVar13 = (long *)param_1[0x4b];
  if (plVar13 == (long *)0x0) {
    plVar11 = (long *)param_1[1];
    plVar13 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x68,8);
    if (plVar13 == (long *)0x0) {
      plVar11 = (long *)0x0;
      lVar9 = 0;
      lVar5 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_0117bd7c;
      *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar11;
      lVar9 = 0x68;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      memset(plVar13,0,0x68);
      FUN_0117bd98(plVar13);
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      lVar5 = 8;
    }
    lVar6 = param_1[0x4b];
    param_1[0x4b] = (long)plVar13;
    if (lVar6 != 0) {
      FUN_013edd68(param_1 + 0x4c);
      plVar13 = (long *)param_1[0x4b];
    }
    param_1[0x4c] = (long)plVar11;
    param_1[0x4d] = lVar9;
    param_1[0x4e] = lVar5;
  }
  uVar15 = *param_2;
  uVar3 = plVar13[1];
  if (uVar3 == 0) {
LAB_0117b980:
    plVar11 = (long *)(**(code **)(*(long *)plVar13[7] + 0x10))((long *)plVar13[7],0x20,8);
    if (plVar11 == (long *)0x0) {
      (**(code **)(*(long *)plVar13[7] + 0xe8))();
    }
    lVar9 = plVar13[7];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 == 0) {
      plVar11[2] = *param_2;
      FUN_00daf940(plVar11 + 3,param_3);
    }
    else {
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_0117bd7c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar9;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      plVar11[2] = *param_2;
      FUN_00daf940(plVar11 + 3,param_3);
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    *plVar11 = 0;
    plVar11[1] = uVar15;
    if ((uVar3 == 0) || (*(float *)(plVar13 + 0xc) * (float)uVar3 < (float)(plVar13[0xb] + 1))) {
      uVar3 = (ulong)(uVar3 < 3 || (uVar3 & uVar3 - 1) != 0) | uVar3 << 1;
      uVar7 = (ulong)((float)(plVar13[0xb] + 1) / *(float *)(plVar13 + 0xc));
      if (uVar7 <= uVar3) {
        uVar7 = uVar3;
      }
      FUN_01610d58(plVar13,uVar7);
      uVar3 = plVar13[1];
      if ((uVar3 & uVar3 - 1) == 0) {
        local_78 = uVar3 - 1 & uVar15;
      }
      else if (uVar15 < uVar3) {
        local_78 = uVar15;
      }
      else {
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = uVar15 / uVar3;
        }
        local_78 = uVar15 - uVar7 * uVar3;
      }
    }
    plVar8 = *(long **)(*plVar13 + local_78 * 8);
    if (plVar8 == (long *)0x0) {
      plVar8 = plVar13 + 6;
      *plVar11 = *plVar8;
      *plVar8 = (long)plVar11;
      *(long **)(*plVar13 + local_78 * 8) = plVar8;
      if (*plVar11 != 0) {
        uVar15 = *(ulong *)(*plVar11 + 8);
        if ((uVar3 & uVar3 - 1) == 0) {
          uVar15 = uVar15 & uVar3 - 1;
        }
        else if (uVar3 <= uVar15) {
          uVar7 = 0;
          if (uVar3 != 0) {
            uVar7 = uVar15 / uVar3;
          }
          uVar15 = uVar15 - uVar7 * uVar3;
        }
        plVar8 = (long *)(*plVar13 + uVar15 * 8);
        goto LAB_0117bae4;
      }
    }
    else {
      *plVar11 = *plVar8;
LAB_0117bae4:
      *plVar8 = (long)plVar11;
    }
    plVar13[0xb] = plVar13[0xb] + 1;
  }
  else {
    uVar7 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar10 = uVar3 - 1 & uVar15;
    }
    else {
      uVar10 = uVar15;
      if (uVar3 <= uVar15) {
        uVar10 = 0;
        if (uVar3 != 0) {
          uVar10 = uVar15 / uVar3;
        }
        uVar10 = uVar15 - uVar10 * uVar3;
      }
    }
    lVar9 = *plVar13;
    plVar11 = *(long **)(lVar9 + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar11[1] == uVar15) {
            if (plVar11[2] == uVar15) goto LAB_0117b704;
          }
          else if ((plVar11[1] & uVar3 - 1) != uVar10) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar11[1];
          if (uVar12 == uVar15) {
            if (plVar11[2] == uVar15) goto LAB_0117b704;
          }
          else {
            if (uVar3 <= uVar12) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar12 / uVar3;
              }
              uVar12 = uVar12 - uVar1 * uVar3;
            }
            if (uVar12 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
    if (uVar7 < 2) {
      local_78 = uVar3 - 1 & uVar15;
      plVar11 = *(long **)(lVar9 + local_78 * 8);
      if (plVar11 == (long *)0x0) goto LAB_0117b980;
      do {
        plVar11 = (long *)*plVar11;
        if ((plVar11 == (long *)0x0) ||
           (plVar11[1] != uVar15 && (plVar11[1] & uVar3 - 1) != local_78)) goto LAB_0117b980;
      } while (plVar11[2] != uVar15);
    }
    else {
      local_78 = uVar15;
      if (uVar3 <= uVar15) {
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = uVar15 / uVar3;
        }
        local_78 = uVar15 - uVar7 * uVar3;
      }
      plVar11 = *(long **)(lVar9 + local_78 * 8);
      if (plVar11 == (long *)0x0) goto LAB_0117b980;
      do {
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) goto LAB_0117b980;
        uVar7 = plVar11[1];
        if (uVar7 != uVar15) {
          if (uVar3 <= uVar7) {
            uVar10 = 0;
            if (uVar3 != 0) {
              uVar10 = uVar7 / uVar3;
            }
            uVar7 = uVar7 - uVar10 * uVar3;
          }
          if (uVar7 != local_78) goto LAB_0117b980;
        }
      } while (plVar11[2] != uVar15);
    }
  }
  pcVar14 = (char *)param_2[1];
  local_70 = (long *)0x0;
  if (*pcVar14 == '\0') {
    plVar13 = (long *)FUN_00d44228();
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    local_70 = plVar13;
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar4 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar4;
    FUN_00cf9884(&local_68,uVar4,pcVar14);
    plVar13 = local_70;
    local_70 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))();
    }
    local_70 = local_68;
  }
  FUN_01064c84(param_1 + 0x53,&local_70);
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  goto LAB_0117b758;
LAB_0117b704:
  pcVar14 = *(char **)(param_3 + 8);
  if (*pcVar14 == '\0') {
    local_68 = (long *)FUN_00d44228();
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))(local_68);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar4 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar4;
    FUN_00cf9884(&local_68,uVar4,pcVar14);
  }
  plVar13 = (long *)plVar11[3];
  plVar11[3] = 0;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))();
  }
  plVar11[3] = (long)local_68;
LAB_0117b758:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2d));
LAB_0117b760:
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar9 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar9;
  plVar13 = *(long **)(*(long *)(lVar9 + 0x200) + 0x60);
  iVar2 = (**(code **)(*plVar13 + 0xa8))
                    (plVar13,param_2[1],*(undefined8 *)(param_3 + 8),param_1[99]);
  return iVar2 == 1;
}


