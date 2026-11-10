/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00256e08; name: FUN_00256e08
 */


void FUN_00256e08(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  size_t __n;
  long lVar6;
  long lVar7;
  char *__s;
  long *plVar8;
  undefined8 uVar9;
  void *__dest;
  long *plVar10;
  ulong uVar11;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  ulong local_90;
  size_t local_88;
  void *local_80;
  long *local_78;
  char *local_48;
  
  lVar7 = *param_2;
  plVar1 = (long *)param_2[1];
  __s = *(char **)PTR_PTR_047cc230;
  if (plVar1 != (long *)0x0) {
    plVar5 = plVar1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_48 = __s;
  nn::os::LockMutex((MutexType *)(lVar7 + 0x900));
  local_a0 = (long *)0x0;
  local_98 = (long *)0x0;
  plVar5 = (long *)FUN_01cf7e20();
  local_78 = plVar5;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00257120 to 00257127 has its CatchHandler @ 00257128 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_90 = CONCAT71(local_90._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_90 | 1);
    if (__n != 0) goto LAB_00256ed0;
  }
  else {
    uVar11 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar11,1);
    local_90 = uVar11 | 1;
    local_88 = __n;
    local_80 = __dest;
LAB_00256ed0:
    memcpy(__dest,__s,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00256ee8 to 00256ef3 has its CatchHandler @ 00257170 */
  lVar6 = FUN_0024e64c(lVar7 + 0x8e0,&local_90);
  if ((local_90 & 1) != 0) {
    (**(code **)(*local_78 + 0x18))(local_78,local_80,local_90 & 0xfffffffffffffffe,1);
  }
  if (lVar7 + 0x8e8 == lVar6) {
    FUN_027be0a8(&local_90,lVar7 + 0x10,PTR_DAT_047cc238);
    plVar10 = *(long **)(lVar7 + 0x238);
    uVar9 = *(undefined8 *)(lVar7 + 0x240);
    plVar5 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x1a0,0x10);
    puVar4 = PTR_DAT_047cc240;
    plVar5[4] = (long)plVar10;
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)(puVar4 + 0x10);
    FUN_002568fc(plVar5 + 6,uVar9,&local_90);
                    /* try { // try from 00256fd0 to 00256fdf has its CatchHandler @ 00257130 */
    local_b0 = plVar5 + 6;
    local_a8 = plVar5;
    FUN_00257724(lVar7 + 0x8e0,&local_48,&local_b0);
    plVar5 = local_98;
    if (local_a8 != (long *)0x0) {
      plVar10 = local_a8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_a0 = local_b0;
    local_98 = local_a8;
    if (plVar5 != (long *)0x0) {
      plVar10 = plVar5 + 1;
      do {
        lVar6 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar5 = local_98;
    if (local_a8 == (long *)0x0) goto LAB_00257070;
    plVar10 = local_a8 + 1;
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar8 = local_a8;
    } while (cVar2 != '\0');
  }
  else {
    local_a0 = *(long **)(lVar6 + 0x40);
    plVar5 = *(long **)(lVar6 + 0x48);
    if (plVar5 != (long *)0x0) {
      plVar10 = plVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (local_98 == (long *)0x0) goto LAB_00257070;
    plVar10 = local_98 + 1;
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar8 = local_98;
    } while (cVar2 != '\0');
  }
  local_98 = plVar5;
  plVar5 = local_98;
  if (lVar6 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__shared_weak_count::__release_weak();
    plVar5 = local_98;
  }
LAB_00257070:
  local_98 = plVar5;
  *param_1 = (long)local_a0;
  param_1[1] = (long)local_98;
  if (local_98 != (long *)0x0) {
    plVar5 = local_98 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (local_98 != (long *)0x0) {
      plVar5 = local_98 + 1;
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*local_98 + 0x10))(local_98);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(lVar7 + 0x900));
  if (plVar1 != (long *)0x0) {
    plVar5 = plVar1 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


