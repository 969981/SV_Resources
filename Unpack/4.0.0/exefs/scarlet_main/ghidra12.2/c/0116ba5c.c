/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0116ba5c; name: FUN_0116ba5c
 */


void FUN_0116ba5c(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  ulong uVar15;
  long *plVar16;
  undefined1 *puVar17;
  char *pcVar18;
  long *plVar19;
  byte *__s;
  undefined1 *unaff_x27;
  float fVar20;
  size_t local_e8;
  long local_e0;
  long *local_c8;
  long lStack_c0;
  long local_b8;
  long *local_b0;
  long local_a8;
  undefined1 auStack_a0 [64];
  
  pcVar18 = (char *)(*(long *)(param_3 + 0x18) + 0xb0);
  if (*pcVar18 == '\0') {
    plVar9 = (long *)FUN_00d44228();
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar6 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar6;
    FUN_00cf9884(&local_c8,uVar6,pcVar18);
    plVar9 = local_c8;
  }
  plVar16 = (long *)PTR_DAT_047d8b70;
  if (plVar9 != (long *)0x0) {
    plVar16 = plVar9 + 6;
  }
  plVar16 = (long *)*plVar16;
  plVar12 = (long *)PTR_PTR_047d4508;
  if (plVar9 != (long *)0x0) {
    plVar12 = plVar9 + 7;
  }
  lVar10 = *plVar12;
  if (plVar9 == (long *)0x0) {
    local_e0 = 0;
  }
  else {
    local_e0 = plVar9[8];
    (**(code **)(*plVar9 + 0x18))(plVar9);
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  __s = (byte *)*param_4;
  if (__s == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar13 = *(undefined1 **)PTR_DAT_047d3e30;
    __s = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_e8 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar12 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
  }
  else {
    puVar13 = &DAT_cbf29ce484222645;
    local_e8 = strlen((char *)__s);
    bVar2 = *__s;
    pbVar14 = __s;
    while (bVar2 != 0) {
      pbVar14 = pbVar14 + 1;
      puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar14;
    }
    plVar12 = (long *)0x0;
  }
  puVar17 = *(undefined1 **)(param_1 + 0x50);
  plVar1 = (long *)(param_1 + 0x48);
  if (puVar17 != (undefined1 *)0x0) {
    puVar11 = puVar17 + -1;
    if (((ulong)puVar17 & (ulong)puVar11) == 0) {
      unaff_x27 = (undefined1 *)((ulong)puVar11 & (ulong)puVar13);
      plVar19 = *(long **)(*plVar1 + (long)unaff_x27 * 8);
      if (plVar19 != (long *)0x0) {
        do {
          plVar19 = (long *)*plVar19;
          if ((plVar19 == (long *)0x0) ||
             ((undefined1 *)plVar19[1] != puVar13 &&
              (undefined1 *)((ulong)plVar19[1] & (ulong)puVar11) != unaff_x27)) goto LAB_0116bc9c;
        } while ((undefined1 *)plVar19[2] != puVar13);
        goto LAB_0116bc24;
      }
    }
    else {
      unaff_x27 = puVar13;
      if (puVar17 <= puVar13) {
        uVar3 = 0;
        if (puVar17 != (undefined1 *)0x0) {
          uVar3 = (ulong)puVar13 / (ulong)puVar17;
        }
        unaff_x27 = puVar13 + -(uVar3 * (long)puVar17);
      }
      plVar19 = *(long **)(*plVar1 + (long)unaff_x27 * 8);
      if (plVar19 != (long *)0x0) {
        do {
          plVar19 = (long *)*plVar19;
          if (plVar19 == (long *)0x0) goto LAB_0116bc9c;
          puVar11 = (undefined1 *)plVar19[1];
          if (puVar11 != puVar13) {
            if (puVar17 <= puVar11) {
              uVar3 = 0;
              if (puVar17 != (undefined1 *)0x0) {
                uVar3 = (ulong)puVar11 / (ulong)puVar17;
              }
              puVar11 = puVar11 + -(uVar3 * (long)puVar17);
            }
            if (puVar11 != unaff_x27) goto LAB_0116bc9c;
          }
        } while ((undefined1 *)plVar19[2] != puVar13);
        goto LAB_0116bc24;
      }
    }
  }
LAB_0116bc9c:
  plVar19 = (long *)(**(code **)(**(long **)(param_1 + 0x80) + 0x10))
                              (*(long **)(param_1 + 0x80),0x68,8);
  if (plVar19 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x80) + 0xe8))();
  }
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 != 0) {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar6;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  plVar19[2] = (long)puVar13;
  plVar19[3] = (long)__s;
  plVar19[0xc] = 0;
  plVar19[6] = 0;
  plVar19[7] = 0;
  plVar19[8] = 0;
  plVar19[9] = 0;
  plVar19[10] = 0;
  plVar19[0xb] = 0;
  plVar19[4] = local_e8;
  plVar19[5] = (long)plVar12;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
     (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
    lVar4 = tpidr_el0;
    lVar8 = *(long *)(lVar4 + 0x30);
    if (lVar8 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar8 = DAT_04859430;
      *(long *)(lVar4 + 0x30) = DAT_04859430;
    }
  }
  *(undefined4 *)(plVar19 + 0xc) = 0;
  plVar19[9] = lVar8;
  plVar19[10] = 0x276276276276276;
  plVar19[0xb] = 0;
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  *plVar19 = 0;
  plVar19[1] = (long)puVar13;
  fVar20 = (float)(*(long *)(param_1 + 0xa0) + 1);
  if ((puVar17 == (undefined1 *)0x0) || (*(float *)(param_1 + 0xa8) * (float)puVar17 < fVar20)) {
    uVar3 = (ulong)(puVar17 < (undefined1 *)0x3 || ((ulong)puVar17 & (ulong)(puVar17 + -1)) != 0) |
            (long)puVar17 << 1;
    uVar15 = (ulong)(fVar20 / *(float *)(param_1 + 0xa8));
    if (uVar15 <= uVar3) {
      uVar15 = uVar3;
    }
    FUN_0104c580(plVar1,uVar15);
    puVar17 = *(undefined1 **)(param_1 + 0x50);
    if (((ulong)puVar17 & (ulong)(puVar17 + -1)) == 0) {
      unaff_x27 = (undefined1 *)((ulong)(puVar17 + -1) & (ulong)puVar13);
    }
    else {
      unaff_x27 = puVar13;
      if (puVar17 <= puVar13) {
        uVar3 = 0;
        if (puVar17 != (undefined1 *)0x0) {
          uVar3 = (ulong)puVar13 / (ulong)puVar17;
        }
        unaff_x27 = puVar13 + -(uVar3 * (long)puVar17);
      }
    }
  }
  plVar12 = *(long **)(*plVar1 + (long)unaff_x27 * 8);
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)(param_1 + 0x78);
    *plVar19 = *plVar12;
    *plVar12 = (long)plVar19;
    *(long **)(*(long *)(param_1 + 0x48) + (long)unaff_x27 * 8) = plVar12;
    if (*plVar19 != 0) {
      puVar13 = *(undefined1 **)(*plVar19 + 8);
      if (((ulong)puVar17 & (ulong)(puVar17 + -1)) == 0) {
        puVar13 = (undefined1 *)((ulong)puVar13 & (ulong)(puVar17 + -1));
      }
      else if (puVar17 <= puVar13) {
        uVar3 = 0;
        if (puVar17 != (undefined1 *)0x0) {
          uVar3 = (ulong)puVar13 / (ulong)puVar17;
        }
        puVar13 = puVar13 + -(uVar3 * (long)puVar17);
      }
      plVar12 = (long *)(*plVar1 + (long)puVar13 * 8);
      goto LAB_0116be70;
    }
  }
  else {
    *plVar19 = *plVar12;
LAB_0116be70:
    *plVar12 = (long)plVar19;
  }
  plVar12 = (long *)0x0;
  *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
LAB_0116bc24:
  local_c8 = plVar16;
  lStack_c0 = lVar10;
  local_b8 = local_e0;
  local_b0 = plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  local_a8 = param_3;
  memcpy(auStack_a0,param_4,0x40);
  FUN_0116c124(plVar19 + 6,&local_c8);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  if (plVar9 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0116bedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x20))(plVar9);
  return;
}


