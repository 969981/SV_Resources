/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e813ac; name: FUN_00e813ac
 */


undefined8 FUN_00e813ac(long param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  void *__dest;
  undefined8 local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(int *)(param_1 + 0x3f4) == 1) {
    iVar5 = *param_2;
    if (iVar5 == 2) {
      uStack_68 = *(undefined8 *)(param_2 + 10);
      local_70 = *(undefined8 *)(param_2 + 8);
      local_78 = *(undefined8 *)(param_2 + 0xe);
      local_80 = *(undefined8 *)(param_2 + 0xc);
      plStack_88 = *(long **)(param_2 + 6);
      local_90 = *(undefined8 *)(param_2 + 4);
      FUN_00cb4960(&local_90,param_2 + 0x12);
    }
    else if (iVar5 == 1) {
      plStack_88 = *(long **)(param_2 + 6);
      local_90 = *(undefined8 *)(param_2 + 4);
      local_80 = CONCAT44(local_80._4_4_,param_2[0x10]);
      FUN_00e819b0(&local_90,param_2 + 0x12);
    }
    else {
      if (iVar5 != 3) goto LAB_00e817d8;
      plStack_88 = *(long **)(param_2 + 6);
      local_90 = *(undefined8 *)(param_2 + 4);
      local_78 = *(undefined8 *)(param_2 + 0xe);
      local_80 = *(undefined8 *)(param_2 + 0xc);
      local_70 = *(undefined8 *)(param_2 + 0x10);
      FUN_00cb1ce0(&local_90,param_2 + 0x12);
    }
    plVar12 = *(long **)(param_1 + 0x418);
    if (plVar12 == (long *)0x0) {
      plVar13 = *(long **)(param_1 + 8);
      plVar12 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x38,8);
      if (plVar12 == (long *)0x0) {
        local_80 = 0;
        local_78 = 0;
        plStack_88 = (long *)0x0;
      }
      else {
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00e81960;
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar13;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        *plVar12 = 0;
        plVar12[5] = 0;
        plVar12[6] = 0;
        plVar12[3] = 0;
        plVar12[4] = 0;
        plVar12[1] = 0;
        plVar12[2] = 0;
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
           (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) {
          lVar14 = tpidr_el0;
          lVar7 = *(long *)(lVar14 + 0x30);
          if (lVar7 == 0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            lVar7 = DAT_04859430;
            *(long *)(lVar14 + 0x30) = DAT_04859430;
          }
        }
        plVar12[3] = lVar7;
        plVar12[4] = 0x333333333333333;
        plVar12[5] = 0;
        *(undefined4 *)(plVar12 + 6) = 0;
        local_80 = 0x38;
        local_78 = 8;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        plStack_88 = plVar13;
      }
      local_90 = 0;
      lVar6 = *(long *)(param_1 + 0x418);
      *(long **)(param_1 + 0x418) = plVar12;
      if (lVar6 == 0) {
        *(undefined8 *)(param_1 + 0x430) = local_78;
      }
      else {
        FUN_014f24d4(param_1 + 0x420);
        *(undefined8 *)(param_1 + 0x430) = local_78;
        plVar12 = *(long **)(param_1 + 0x418);
      }
      *(undefined8 *)(param_1 + 0x428) = local_80;
      *(long **)(param_1 + 0x420) = plStack_88;
    }
    if ((ulong)plVar12[1] < (ulong)plVar12[2]) {
      FUN_00e81d60(plVar12,param_2);
    }
    else {
      uVar11 = plVar12[4];
      lVar6 = plVar12[1] - *plVar12 >> 4;
      if (0x7ffffffffffffffe < uVar11) {
        uVar11 = 0x7fffffffffffffff;
      }
      uVar1 = lVar6 * -0x3333333333333333 + 1;
      if (uVar11 < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar7 = plVar12[2] - *plVar12 >> 4;
      uVar10 = lVar7 * -0x6666666666666666;
      if (uVar1 <= uVar10) {
        uVar1 = uVar10;
      }
      plVar13 = plVar12 + 3;
      if (uVar11 >> 1 <= (ulong)(lVar7 * -0x3333333333333333)) {
        uVar1 = uVar11;
      }
      if (uVar1 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = (**(code **)(*(long *)*plVar13 + 0x10))((long *)*plVar13,uVar1 * 0x50,0x10);
        if (lVar7 == 0) {
          (**(code **)(*(long *)*plVar13 + 0xe8))();
        }
      }
      lVar14 = *plVar13;
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar8 != 0) {
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_00e81960:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar14;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      }
      __dest = (void *)(lVar7 + lVar6 * 0x10);
      memcpy(__dest,param_2,0x48);
      lVar14 = *(long *)(param_2 + 0x12);
      *(long *)(lVar7 + lVar6 * 0x10 + 0x48) = lVar14;
      if ((lVar14 != 0) && (*(long *)(lVar14 + 8) != 0)) {
        plVar2 = (long *)(lVar14 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      }
      lVar14 = *plVar12;
      lVar8 = plVar12[1];
      lVar6 = (long)__dest + 0x50;
      if (lVar8 == lVar14) {
        lVar8 = lVar14;
      }
      else {
        do {
          __dest = (void *)((long)__dest + -0x50);
          lVar8 = lVar8 + -0x50;
          FUN_00e81c74(plVar13,__dest,lVar8);
        } while (lVar14 != lVar8);
        lVar14 = *plVar12;
        lVar8 = plVar12[1];
      }
      *plVar12 = (long)__dest;
      plVar12[1] = lVar6;
      lVar6 = plVar12[2];
      plVar12[2] = lVar7 + uVar1 * 0x50;
      if (lVar8 != lVar14) {
        plVar12 = *(long **)(lVar8 + -8);
        lVar8 = lVar8 + -0x50;
        if (plVar12 == (long *)0x0) goto LAB_00e8173c;
        if (plVar12[1] == 0) goto LAB_00e8173c;
        plVar2 = plVar12 + 2;
        do {
          lVar7 = *plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          if (lVar7 == 0) {
            (**(code **)(*plVar12 + 0x18))();
          }
LAB_00e8173c:
          do {
            if (lVar8 == lVar14) goto LAB_00e8164c;
            plVar12 = *(long **)(lVar8 + -8);
            lVar8 = lVar8 + -0x50;
          } while ((plVar12 == (long *)0x0) || (plVar12[1] == 0));
          plVar2 = plVar12 + 2;
          do {
            lVar7 = *plVar2 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = lVar7;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        } while( true );
      }
LAB_00e8164c:
      if (lVar14 != 0) {
        plVar13 = (long *)*plVar13;
        uVar11 = (**(code **)(*plVar13 + 0xf8))(plVar13);
        if (((uVar11 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar13 + 0x18))(plVar13,lVar14,lVar6 - lVar14,0x10);
        }
        else {
          FUN_00c48fe8(plVar13,lVar14,lVar6 - lVar14,0x10);
        }
      }
    }
    uVar9 = 1;
  }
  else {
LAB_00e817d8:
    uVar9 = 0;
  }
  return uVar9;
}


