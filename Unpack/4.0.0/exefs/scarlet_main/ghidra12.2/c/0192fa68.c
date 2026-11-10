/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0192fa68; name: FUN_0192fa68
 */


int FUN_0192fa68(long param_1,undefined8 *param_2,undefined8 *param_3,int param_4,int param_5,
                byte param_6)

{
  ulong uVar1;
  int *piVar2;
  undefined2 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  void *pvVar13;
  int *piVar14;
  void *__src;
  long lVar15;
  long local_78;
  int local_70;
  byte local_6c [4];
  int local_68;
  int iStack_64;
  
  if (*(char *)(*(long *)(param_1 + 0x40) + 0x128) != '\0') {
    return -1;
  }
  lVar15 = *(long *)(param_1 + 0x58);
  param_6 = param_6 & 1;
  local_6c[0] = param_6;
  local_68 = param_5;
  iStack_64 = param_4;
  if (*(long *)(lVar15 + 0x80) == 0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *(int *)(lVar15 + 0x100);
    lVar6 = *(long *)(lVar15 + 0x160);
    uVar10 = (long)(*(ulong *)(lVar15 + 0x168) - lVar6) >> 6;
    local_70 = iVar9;
    if ((ulong)(long)iVar9 < uVar10) {
      piVar2 = (int *)(lVar6 + (long)iVar9 * 0x40);
      *piVar2 = iVar9;
      *(undefined8 *)(piVar2 + 6) = param_2[1];
      *(undefined8 *)(piVar2 + 4) = *param_2;
      *(undefined8 *)(piVar2 + 10) = param_3[1];
      *(undefined8 *)(piVar2 + 8) = *param_3;
      piVar2[0xc] = param_4;
      piVar2[0xd] = param_5;
      *(byte *)(piVar2 + 0xe) = param_6;
      piVar2[0xf] = 0;
    }
    else if (*(ulong *)(lVar15 + 0x168) < *(ulong *)(lVar15 + 0x170)) {
      FUN_0192feb8((long *)(lVar15 + 0x160),&local_70,param_2,param_3,&iStack_64,&local_68,local_6c)
      ;
    }
    else {
      uVar8 = *(ulong *)(lVar15 + 0x180);
      uVar1 = uVar10 + 1;
      if (0x7ffffffffffffffe < uVar8) {
        uVar8 = 0x7fffffffffffffff;
      }
      if (uVar8 < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar6 = *(ulong *)(lVar15 + 0x170) - lVar6;
      uVar7 = lVar6 >> 5;
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      if (uVar8 >> 1 <= (ulong)(lVar6 >> 6)) {
        uVar1 = uVar8;
      }
      if (uVar1 == 0) {
        local_78 = 0;
      }
      else {
        local_78 = (**(code **)(**(long **)(lVar15 + 0x178) + 0x10))
                             (*(long **)(lVar15 + 0x178),uVar1 << 6,0x10);
        if (local_78 == 0) {
          (**(code **)(**(long **)(lVar15 + 0x178) + 0xe8))();
        }
      }
      uVar11 = *(undefined8 *)(lVar15 + 0x178);
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar6 != 0) {
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_0192feac:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar11;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      }
      piVar2 = (int *)(local_78 + uVar10 * 0x40);
      *piVar2 = iVar9;
      *(undefined8 *)(piVar2 + 6) = param_2[1];
      *(undefined8 *)(piVar2 + 4) = *param_2;
      *(undefined8 *)(piVar2 + 10) = param_3[1];
      *(undefined8 *)(piVar2 + 8) = *param_3;
      piVar2[0xc] = param_4;
      piVar2[0xd] = param_5;
      *(byte *)(piVar2 + 0xe) = param_6;
      piVar2[0xf] = 0;
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      }
      pvVar13 = *(void **)(lVar15 + 0x160);
      __src = *(void **)(lVar15 + 0x168);
      piVar14 = piVar2;
      if (__src != pvVar13) {
        do {
          uVar11 = *(undefined8 *)(lVar15 + 0x178);
          if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          piVar14 = piVar14 + -0x10;
          __src = (void *)((long)__src + -0x40);
          lVar6 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar6 == 0) {
            memcpy(piVar14,__src,0x40);
          }
          else {
            if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_0192feac;
            *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar11;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
            memcpy(piVar14,__src,0x40);
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          }
        } while (pvVar13 != __src);
        pvVar13 = *(void **)(lVar15 + 0x160);
      }
      *(int **)(lVar15 + 0x160) = piVar14;
      *(int **)(lVar15 + 0x168) = piVar2 + 0x10;
      lVar6 = *(long *)(lVar15 + 0x170);
      *(ulong *)(lVar15 + 0x170) = local_78 + uVar1 * 0x40;
      if (pvVar13 != (void *)0x0) {
        plVar12 = *(long **)(lVar15 + 0x178);
        lVar6 = lVar6 - (long)pvVar13;
        uVar10 = (**(code **)(*plVar12 + 0xf8))(plVar12);
        if (((uVar10 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar12 + 0x18))(plVar12,pvVar13,lVar6,0x10);
        }
        else {
          FUN_00c48fe8(plVar12,pvVar13,lVar6,0x10);
        }
      }
    }
    *(int *)(lVar15 + 0x100) = *(int *)(lVar15 + 0x100) + 1;
  }
  if (-1 < iVar9) {
    *(undefined4 *)(param_1 + 0x48) = 1;
    lVar15 = *(long *)(param_1 + 0x50);
    if ((lVar15 != 0) && ((*(char *)(lVar15 + 0x58) != '\0' || (*(char *)(lVar15 + 0x59) != '\0'))))
    {
      uVar3 = *(undefined2 *)(lVar15 + 0x58);
      plVar12 = (long *)(lVar15 + 0x38);
      *(undefined2 *)(lVar15 + 0x58) = 0;
      if (*(long *)(lVar15 + 0x48) != 0) {
        FUN_00c6a584(*(long *)(lVar15 + 0x48),plVar12);
      }
      (**(code **)(*plVar12 + 0x20))(plVar12,uVar3);
    }
  }
  return iVar9;
}


