/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00248bd8; name: FUN_00248bd8
 */


void FUN_00248bd8(undefined8 *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  char cVar4;
  long *plVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *local_100;
  long *local_f8;
  long *local_f0;
  undefined *local_e0;
  long *plStack_d8;
  undefined8 ****local_d0;
  undefined8 ****ppppuStack_c8;
  undefined1 auStack_b8 [64];
  long **local_78;
  undefined8 uStack_70;
  
  local_100 = (long *)0x0;
  local_f8 = (long *)0x0;
  local_f0 = (long *)0x0;
  plVar7 = (long *)FUN_01cf7e20();
  nn::os::LockMutex((MutexType *)(param_1 + 4));
  plVar13 = param_1 + 1;
  plVar14 = (long *)*param_1;
  if (plVar14 != plVar13) {
    do {
      (**(code **)(*(long *)plVar14[8] + 0x10))(&local_e0);
      if (local_f8 < local_f0) {
        local_f8[1] = (long)plStack_d8;
        *local_f8 = (long)local_e0;
        local_e0 = (undefined *)0x0;
        plStack_d8 = (long *)0x0;
        plVar5 = local_100;
        local_f8 = local_f8 + 2;
        plVar3 = local_f0;
      }
      else {
        lVar10 = (long)local_f8 - (long)local_100 >> 4;
        uVar1 = lVar10 + 1;
        if (uVar1 >> 0x3c != 0) {
                    /* try { // try from 00248f50 to 00248f57 has its CatchHandler @ 00248f58 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        uVar11 = (long)local_f0 - (long)local_100 >> 3;
        if (uVar1 <= uVar11) {
          uVar1 = uVar11;
        }
        if (0x7fffffffffffffe < (ulong)((long)local_f0 - (long)local_100 >> 4)) {
          uVar1 = 0xfffffffffffffff;
        }
        if (uVar1 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,uVar1 << 4,8);
        }
        plVar9 = (long *)(lVar8 + lVar10 * 0x10);
        plVar3 = (long *)(lVar8 + uVar1 * 0x10);
        plVar9[1] = (long)plStack_d8;
        *plVar9 = (long)local_e0;
        local_e0 = (undefined *)0x0;
        plStack_d8 = (long *)0x0;
        plVar5 = plVar9;
        plVar12 = local_f8;
        while (plVar12 != local_100) {
          plVar15 = plVar12 + -2;
          lVar10 = *plVar15;
          plVar5[-1] = plVar12[-1];
          plVar5[-2] = lVar10;
          *plVar15 = 0;
          plVar12[-1] = 0;
          plVar5 = plVar5 + -2;
          plVar12 = plVar15;
        }
        while (local_f8 != local_100) {
          plVar12 = (long *)local_f8[-1];
          local_f8 = local_f8 + -2;
          if (plVar12 != (long *)0x0) {
            plVar15 = plVar12 + 1;
            do {
              lVar10 = *plVar15;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = lVar10 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar10 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        local_f8 = plVar9 + 2;
        if (local_100 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x18))(plVar7,local_100,(long)local_f0 - (long)local_100,8);
        }
      }
      local_f0 = plVar3;
      local_100 = plVar5;
      if (plStack_d8 == (long *)0x0) {
LAB_00248d4c:
        plVar9 = (long *)plVar14[1];
        if ((long *)plVar14[1] != (long *)0x0) goto LAB_00248d54;
LAB_00248dcc:
        plVar9 = plVar14 + 2;
        bVar6 = *(long **)*plVar9 != plVar14;
        plVar14 = (long *)*plVar9;
        if (bVar6) {
          do {
            lVar10 = *plVar9;
            plVar9 = (long *)(lVar10 + 0x10);
            plVar14 = (long *)*plVar9;
          } while (*plVar14 != lVar10);
        }
      }
      else {
        plVar9 = plStack_d8 + 1;
        do {
          lVar10 = *plVar9;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar6) {
            *plVar9 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 != 0) goto LAB_00248d4c;
        (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
        std::__shared_weak_count::__release_weak();
        plVar9 = (long *)plVar14[1];
        if ((long *)plVar14[1] == (long *)0x0) goto LAB_00248dcc;
LAB_00248d54:
        do {
          plVar14 = plVar9;
          plVar9 = (long *)*plVar14;
        } while ((long *)*plVar14 != (long *)0x0);
      }
    } while (plVar14 != plVar13);
  }
  FUN_027bee38(param_1,param_1[1]);
  param_1[3] = 0;
  *param_1 = plVar13;
  param_1[1] = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 4));
  if (local_100 != local_f8) {
    puVar2 = PTR_DAT_047cbb30 + 0x10;
    plVar14 = (long *)(PTR_DAT_047cbb38 + 0x10);
    plVar13 = local_100;
    do {
      local_78 = (long **)0x0;
      uStack_70 = 0;
      plVar9 = plVar13 + 2;
      local_e0 = puVar2;
      plStack_d8 = plVar14;
      local_d0 = &local_d0;
      ppppuStack_c8 = &local_d0;
      (**(code **)(*(long *)*plVar13 + 0x10))((long *)*plVar13,auStack_b8);
      local_78 = &plStack_d8;
      thunk_FUN_006c4e40(&local_e0);
      local_e0 = puVar2;
      FUN_006c4274(&plStack_d8);
      plVar13 = plVar9;
    } while (local_f8 != plVar9);
  }
  if (local_100 != (long *)0x0) {
    while (local_f8 != local_100) {
      plVar14 = (long *)local_f8[-1];
      local_f8 = local_f8 + -2;
      if (plVar14 != (long *)0x0) {
        plVar13 = plVar14 + 1;
        do {
          lVar10 = *plVar13;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = lVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,local_100,(long)local_f0 - (long)local_100,8);
  }
  return;
}


