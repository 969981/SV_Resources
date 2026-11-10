/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bfe304; name: FUN_00bfe304
 */


void FUN_00bfe304(long *param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  size_t __n;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  ulong *puVar15;
  ulong *puVar14;
  long lVar16;
  long *plVar17;
  byte *pbVar18;
  ulong *puVar19;
  ulong uVar20;
  int iVar21;
  ulong local_a0;
  size_t local_98;
  void *local_90;
  ulong *local_88;
  ulong *local_80;
  ulong *local_78;
  long local_70;
  
  lVar4 = (**(code **)(*param_1 + 0xb8))();
  plVar5 = (long *)(**(code **)(*param_1 + 0xb0))(param_1);
  lVar10 = tpidr_el0;
  if (0 < *(int *)(lVar4 + 0x2c)) {
    lVar16 = 0;
    do {
      if ((*(int *)(*(long *)(lVar4 + 0x30) + lVar16 * 0x90 + 0x40) == 2) &&
         (uVar6 = (**(code **)(*plVar5 + 0x28))
                            (plVar5,param_1,*(long *)(lVar4 + 0x30) + lVar16 * 0x90),
         (uVar6 & 1) == 0)) {
        pbVar18 = *(byte **)(*(long *)(lVar4 + 0x30) + lVar16 * 0x90);
        local_a0 = 0;
        local_98 = 0;
        local_90 = (void *)0x0;
        bVar1 = *pbVar18;
        uVar6 = (ulong)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          uVar6 = *(ulong *)(pbVar18 + 8);
        }
        pbVar12 = param_2 + 1;
        __n = (ulong)(*param_2 >> 1);
        if ((*param_2 & 1) != 0) {
          pbVar12 = *(byte **)(param_2 + 0x10);
          __n = *(size_t *)(param_2 + 8);
        }
        uVar6 = uVar6 + __n;
        if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (uVar6 < 0x17) {
          local_a0 = (ulong)(byte)((int)__n << 1);
          pvVar7 = (void *)((ulong)&local_a0 | 1);
        }
        else {
          uVar6 = uVar6 + 0x10 & 0xfffffffffffffff0;
          plVar17 = *(long **)(lVar10 + 0x30);
          if (plVar17 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar17 = DAT_04859430;
            *(long **)(lVar10 + 0x30) = DAT_04859430;
          }
          pvVar7 = (void *)(**(code **)(*plVar17 + 0x10))(plVar17,uVar6,8);
          local_a0 = uVar6 | 1;
          local_98 = __n;
          local_90 = pvVar7;
        }
        if (__n != 0) {
          memcpy(pvVar7,pbVar12,__n);
        }
        *(undefined1 *)((long)pvVar7 + __n) = 0;
        pbVar12 = *(byte **)(pbVar18 + 0x10);
        if ((bVar1 & 1) == 0) {
          pbVar12 = pbVar18 + 1;
        }
        std::string::append((char *)&local_a0,(ulong)pbVar12);
        puVar19 = (ulong *)param_3[1];
        if (puVar19 < (ulong *)param_3[2]) {
          puVar19[1] = local_98;
          puVar19[2] = (ulong)local_90;
          *puVar19 = local_a0;
          local_98 = 0;
          local_90 = (void *)0x0;
          local_a0 = 0;
          param_3[1] = (long)(puVar19 + 3);
        }
        else {
          lVar11 = ((long)puVar19 - *param_3 >> 3) * -0x5555555555555555;
          uVar6 = lVar11 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar6) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar13 = param_3[2] - *param_3 >> 3;
          uVar20 = lVar13 * 0x5555555555555556;
          if (uVar6 <= uVar20) {
            uVar6 = uVar20;
          }
          if (0x555555555555554 < (ulong)(lVar13 * -0x5555555555555555)) {
            uVar6 = 0xaaaaaaaaaaaaaaa;
          }
          FUN_01f6e248(&local_88,uVar6,lVar11,param_3 + 2);
          local_78[1] = local_98;
          local_78[2] = (ulong)local_90;
          *local_78 = local_a0;
          puVar19 = local_78 + 3;
          local_98 = 0;
          local_90 = (void *)0x0;
          local_a0 = 0;
          local_78 = (ulong *)*param_3;
          if ((ulong *)param_3[1] == local_78) {
            local_88 = local_78;
          }
          else {
            puVar14 = (ulong *)param_3[1];
            do {
              puVar15 = puVar14 + -3;
              uVar6 = puVar14[-2];
              uVar20 = puVar14[-1];
              local_80[-3] = *puVar15;
              local_80[-2] = uVar6;
              local_80[-1] = uVar20;
              *puVar15 = 0;
              puVar14[-2] = 0;
              puVar14[-1] = 0;
              local_80 = local_80 + -3;
              puVar14 = puVar15;
            } while (local_78 != puVar15);
            local_78 = (ulong *)param_3[1];
            local_88 = (ulong *)*param_3;
          }
          *param_3 = (long)local_80;
          param_3[1] = (long)puVar19;
          lVar11 = param_3[2];
          param_3[2] = local_70;
          local_80 = local_88;
          local_70 = lVar11;
          FUN_01f6e36c(&local_88);
          pvVar7 = local_90;
          if (((local_a0 & 1) != 0) && (local_90 != (void *)0x0)) {
            plVar17 = *(long **)(lVar10 + 0x30);
            if (plVar17 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar17 = DAT_04859430;
              *(long **)(lVar10 + 0x30) = DAT_04859430;
            }
            uVar6 = (**(code **)(*plVar17 + 0xf8))(plVar17);
            if (((uVar6 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
              (**(code **)(*plVar17 + 0x18))(plVar17,pvVar7,0,8);
            }
            else {
              FUN_00c48fe8(plVar17,pvVar7,0,8);
            }
          }
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)(lVar4 + 0x2c));
  }
  local_80 = (ulong *)0x0;
  local_78 = (ulong *)0x0;
  local_88 = (ulong *)0x0;
  (**(code **)(*plVar5 + 0x80))(plVar5,param_1,&local_88);
  puVar19 = local_80;
  if (local_80 != local_88) {
    uVar6 = 0;
    do {
      uVar20 = local_88[uVar6];
      if ((*(uint *)(uVar20 + 0x3c) & 0xfffffffe) == 10) {
        if (*(int *)(uVar20 + 0x40) == 3) {
          iVar3 = (**(code **)(*plVar5 + 0x30))(plVar5,param_1,uVar20);
          if (0 < iVar3) {
            iVar21 = 0;
            do {
              uVar8 = (**(code **)(*plVar5 + 0x1a0))(plVar5,param_1,uVar20,iVar21);
              FUN_00bfeb70(&local_a0,param_2,uVar20,iVar21);
              FUN_00bfe304(uVar8,&local_a0,param_3);
              pvVar7 = local_90;
              if (((local_a0 & 1) != 0) && (local_90 != (void *)0x0)) {
                plVar17 = *(long **)(lVar10 + 0x30);
                if (plVar17 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar17 = DAT_04859430;
                  *(long **)(lVar10 + 0x30) = DAT_04859430;
                }
                uVar9 = (**(code **)(*plVar17 + 0xf8))(plVar17);
                if (((uVar9 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                  (**(code **)(*plVar17 + 0x18))(plVar17,pvVar7,0,8);
                }
                else {
                  FUN_00c48fe8(plVar17,pvVar7,0,8);
                }
              }
              iVar21 = iVar21 + 1;
            } while (iVar3 != iVar21);
          }
        }
        else {
          uVar8 = (**(code **)(*plVar5 + 0xd8))(plVar5,param_1,uVar20,0);
          FUN_00bfeb70(&local_a0,param_2,uVar20,0xffffffff);
          FUN_00bfe304(uVar8,&local_a0,param_3);
          pvVar7 = local_90;
          if (((local_a0 & 1) != 0) && (local_90 != (void *)0x0)) {
            plVar17 = *(long **)(lVar10 + 0x30);
            if (plVar17 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar17 = DAT_04859430;
              *(long **)(lVar10 + 0x30) = DAT_04859430;
            }
            uVar20 = (**(code **)(*plVar17 + 0xf8))(plVar17);
            if (((uVar20 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
              (**(code **)(*plVar17 + 0x18))(plVar17,pvVar7,0,8);
            }
            else {
              FUN_00c48fe8(plVar17,pvVar7,0,8);
            }
          }
        }
      }
      uVar6 = uVar6 + 1;
      puVar19 = local_88;
    } while (uVar6 < (ulong)((long)local_80 - (long)local_88 >> 3));
  }
  if (puVar19 != (ulong *)0x0) {
    plVar5 = *(long **)(lVar10 + 0x30);
    local_80 = puVar19;
    if (plVar5 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar5 = DAT_04859430;
      *(long **)(lVar10 + 0x30) = DAT_04859430;
    }
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar6 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,puVar19,0,8);
    }
    else {
      FUN_00c48fe8(plVar5,puVar19,0,8);
    }
  }
  return;
}


