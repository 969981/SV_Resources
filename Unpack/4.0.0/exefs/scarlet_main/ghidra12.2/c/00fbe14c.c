/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fbe14c; name: FUN_00fbe14c
 */


void FUN_00fbe14c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  void *__dest;
  ushort *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  void *__src;
  undefined8 uVar12;
  int iVar13;
  long *plVar14;
  int iVar15;
  void *pvVar16;
  void *pvVar17;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined1 *local_290;
  char *local_288;
  undefined8 local_280;
  long *local_278;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined1 auStack_170 [24];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [64];
  undefined1 auStack_100 [64];
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined1 auStack_a0 [8];
  int *local_98;
  char *local_88;
  char *local_80;
  undefined8 local_78;
  long *local_70;
  
  local_158 = *(undefined8 *)(param_1 + 0x8e0);
  local_150 = *(undefined8 *)(param_1 + 0x8e8);
  uStack_148 = *(undefined8 *)(param_1 + 0x8f0);
  FUN_00fb9f24(auStack_140,param_1 + 0x8f8);
  FUN_00fb9f24(auStack_100,param_1 + 0x938);
  FUN_00fb4dd0(auStack_170,&local_158);
  *(undefined8 *)(param_1 + 0x988) = *(undefined8 *)(param_1 + 0x980);
  local_290 = &DAT_fbec41851566601b;
  local_288 = "values";
  local_280 = 6;
  local_278 = (long *)0x0;
  piVar3 = (int *)FUN_00efa07c(auStack_170,&local_290);
  if (piVar3 == (int *)0x0) {
    iVar15 = 0;
  }
  else {
    iVar15 = *piVar3;
  }
  if (local_278 != (long *)0x0) {
    (**(code **)(*local_278 + 0x20))();
  }
  if (iVar15 != 0) {
    iVar13 = 0;
    do {
      local_278 = (long *)0x0;
      local_290 = &DAT_fbec41851566601b;
      local_288 = "values";
      local_280 = 6;
      FUN_00e90ee0(&local_188,auStack_170,&local_290,iVar13);
      if (local_278 != (long *)0x0) {
        (**(code **)(*local_278 + 0x20))();
      }
      memset(&local_290,0,0x104);
      local_2a8 = local_188;
      uStack_2a0 = uStack_180;
      local_298 = local_178;
      local_88 = (char *)0x45e350da1d34436d;
      local_80 = "Type";
      local_78 = 4;
      local_70 = (long *)0x0;
      piVar3 = (int *)FUN_00d27b5c(&local_2a8,&local_88);
      if ((piVar3 == (int *)0x0) || (*(ushort *)((long)piVar3 - (long)*piVar3) < 7)) {
        uVar1 = 0;
      }
      else {
        uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3];
        uVar1 = 0;
        if (uVar5 != 0) {
          uVar1 = *(undefined4 *)((long)piVar3 + uVar5);
        }
      }
      local_290 = (undefined1 *)CONCAT44(local_290._4_4_,uVar1);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_a8 = (long *)0x0;
      local_c0 = 0x90bebfb0190e1a45;
      local_b8 = &DAT_03bf5fdf;
      uStack_b0 = 4;
      FUN_00fb4c10(auStack_a0,&local_2a8,&local_c0);
      memset((void *)((ulong)&local_290 | 4),0,0x100);
      if (local_98 != (int *)0x0) {
        if ((*(ushort *)((long)local_98 - (long)*local_98) < 7) ||
           (uVar5 = (ulong)((ushort *)((long)local_98 - (long)*local_98))[3], uVar5 == 0)) {
          puVar4 = (uint *)0x0;
        }
        else {
          puVar4 = (uint *)((long)local_98 + uVar5);
          puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        }
        local_88 = "InvalidActions";
        puVar4 = bsearch(&local_88,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar4 != (uint *)0x0) {
          piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
          puVar7 = (ushort *)((long)piVar3 - (long)*piVar3);
          if (*puVar7 < 7) {
            piVar10 = (int *)0x0;
          }
          else {
            piVar10 = (int *)0x0;
            if ((ulong)puVar7[3] != 0) {
              puVar4 = (uint *)((long)piVar3 + (ulong)puVar7[3]);
              piVar10 = (int *)((long)puVar4 + (ulong)*puVar4);
            }
          }
          if (((4 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
              (uVar5 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar5 != 0)) &&
             (*(char *)((long)piVar10 + uVar5) == '\x11')) {
            piVar3 = (int *)((long)((long)piVar3 + (ulong)puVar7[3]) +
                            (ulong)*(uint *)((long)piVar3 + (ulong)puVar7[3]));
            if (((10 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
                (uVar5 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[5], uVar5 != 0)) &&
               (uVar5 = (ulong)*(ushort *)((long)piVar3 + uVar5), uVar5 != 0)) {
              uVar11 = 0;
              do {
                local_88 = (char *)0x5fc13e104596721b;
                local_80 = "InvalidActions";
                local_78 = 0xe;
                local_70 = (long *)0x0;
                uVar1 = FUN_00dbb83c(auStack_a0,&local_88,uVar11 & 0xffffffff);
                *(undefined4 *)((long)((ulong)&local_290 | 4) + uVar11 * 4) = uVar1;
                if (local_70 != (long *)0x0) {
                  (**(code **)(*local_70 + 0x20))();
                }
                uVar11 = uVar11 + 1;
              } while (uVar5 != uVar11);
            }
          }
        }
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      if (*(long *)(param_1 + 0x988) == *(long *)(param_1 + 0x990)) {
        lVar8 = *(long *)(param_1 + 0x988) - *(long *)(param_1 + 0x980) >> 2;
        uVar5 = *(ulong *)(param_1 + 0x9a0);
        if (0x7ffffffffffffffe < uVar5) {
          uVar5 = 0x7fffffffffffffff;
        }
        uVar11 = lVar8 * 0xfc0fc0fc0fc0fc1 + 1;
        if (uVar5 < uVar11) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar6 = *(long *)(param_1 + 0x990) - *(long *)(param_1 + 0x980) >> 2;
        uVar9 = lVar6 * 0x1f81f81f81f81f82;
        if (uVar11 <= uVar9) {
          uVar11 = uVar9;
        }
        if (uVar5 >> 1 <= (ulong)(lVar6 * 0xfc0fc0fc0fc0fc1)) {
          uVar11 = uVar5;
        }
        if (uVar11 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = (**(code **)(**(long **)(param_1 + 0x998) + 0x10))
                            (*(long **)(param_1 + 0x998),uVar11 * 0x104,4);
          if (lVar6 == 0) {
            (**(code **)(**(long **)(param_1 + 0x998) + 0xe8))();
          }
        }
        __dest = (void *)(lVar6 + lVar8 * 4);
        uVar12 = *(undefined8 *)(param_1 + 0x998);
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 == 0) {
          memcpy(__dest,&local_290,0x104);
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_00fbe858:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar12;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          memcpy(__dest,&local_290,0x104);
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        pvVar17 = *(void **)(param_1 + 0x980);
        __src = *(void **)(param_1 + 0x988);
        pvVar16 = __dest;
        if (__src != pvVar17) {
          do {
            uVar12 = *(undefined8 *)(param_1 + 0x998);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            pvVar16 = (void *)((long)pvVar16 + -0x104);
            __src = (void *)((long)__src + -0x104);
            lVar8 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar8 == 0) {
              memcpy(pvVar16,__src,0x104);
            }
            else {
              if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00fbe858;
              *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar12;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
              memcpy(pvVar16,__src,0x104);
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
            }
          } while (pvVar17 != __src);
          pvVar17 = *(void **)(param_1 + 0x980);
        }
        *(void **)(param_1 + 0x980) = pvVar16;
        *(long *)(param_1 + 0x988) = (long)__dest + 0x104;
        lVar8 = *(long *)(param_1 + 0x990);
        *(ulong *)(param_1 + 0x990) = lVar6 + uVar11 * 0x104;
        if (pvVar17 != (void *)0x0) {
          plVar14 = *(long **)(param_1 + 0x998);
          lVar8 = lVar8 - (long)pvVar17;
          uVar5 = (**(code **)(*plVar14 + 0xf8))(plVar14);
          if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
            (**(code **)(*plVar14 + 0x18))(plVar14,pvVar17,lVar8,4);
          }
          else {
            FUN_00c48fe8(plVar14,pvVar17,lVar8,4);
          }
        }
      }
      else {
        FUN_00fbe864((undefined8 *)(param_1 + 0x980),&local_290);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != iVar15);
  }
  FUN_00db239c(auStack_100);
  FUN_00db239c(auStack_140);
  return;
}


