/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00558ce0; name: FUN_00558ce0
 */


void FUN_00558ce0(long *param_1,long *param_2,long param_3,long *param_4,char *param_5)

{
  undefined *puVar1;
  char *__s;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  size_t __n;
  long lVar6;
  void *__dest;
  ulong uVar7;
  undefined4 *puVar8;
  long *plVar9;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = (long)(PTR_DAT_047cdfc8 + 0x10);
  plVar4 = (long *)FUN_0053f478(*param_2);
  param_1[3] = *plVar4;
  lVar6 = plVar4[1];
  param_1[4] = lVar6;
  if (lVar6 != 0) {
    plVar4 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[5] = *param_2;
  lVar6 = param_2[1];
  param_1[6] = lVar6;
  if (lVar6 != 0) {
    plVar4 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[7] = param_3;
  nn::os::InitializeMutex((MutexType *)(param_1 + 8),true,0);
  plVar4 = param_1 + 0xc;
  param_1[0x10] = 0;
  if (plVar4 != param_4) {
    plVar5 = (long *)param_4[4];
    if (plVar5 == (long *)0x0) {
      param_1[0x10] = 0;
    }
    else if (plVar5 == param_4) {
      param_1[0x10] = (long)plVar4;
      (**(code **)(*(long *)param_4[4] + 0x28))((long *)param_4[4],plVar4);
    }
    else {
      lVar6 = (**(code **)(*plVar5 + 0x38))();
      param_1[0x10] = lVar6;
    }
  }
  param_1[0x13] = 0;
  lVar6 = FUN_01cf7e20();
  param_1[0x12] = (long)(param_1 + 0x13);
  param_1[0x14] = lVar6;
  param_1[0x15] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x16),true,0);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((long)param_1 + 0xdd) = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((long)param_1 + 0xf5) = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((long)param_1 + 0x10d) = 0;
  plVar4 = *(long **)(param_1[3] + 0x238);
  plVar5 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0xd0,8);
  plVar5[2] = 0;
  plVar9 = plVar5 + 1;
  *plVar9 = 0;
  puVar1 = PTR_DAT_047cc158;
  plVar5[3] = (long)plVar4;
  plVar4 = plVar5 + 4;
  *plVar5 = (long)(puVar1 + 0x10);
  FUN_006c4254(plVar4);
  plVar5[4] = (long)(PTR_DAT_047cc168 + 0x10);
  nn::os::InitializeEvent(plVar5 + 6,0,0);
  plVar5[4] = (long)(PTR_DAT_047cc160 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar5 + 0xb),false,0);
  *(undefined1 *)(plVar5 + 0x19) = 0;
  param_1[0x23] = (long)plVar4;
  param_1[0x24] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = (long)plVar4;
  param_1[0x28] = (long)plVar5;
  *(undefined1 *)(plVar5 + 5) = 1;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x29),false,0);
  __s = "All";
  if (param_5 != (char *)0x0) {
    __s = param_5;
  }
  plVar4 = (long *)FUN_01cf7e20();
  param_1[0x30] = (long)plVar4;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0055912c to 00559133 has its CatchHandler @ 00559134 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 0x169);
    *(char *)(param_1 + 0x2d) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00558fc4;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar7,1);
    param_1[0x2d] = uVar7 | 1;
    param_1[0x2e] = __n;
    param_1[0x2f] = (long)__dest;
  }
  memcpy(__dest,__s,__n);
LAB_00558fc4:
  *(undefined1 *)((long)__dest + __n) = 0;
  plVar4 = *(long **)(param_1[3] + 0x238);
  plVar5 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x78,8);
  plVar5[2] = 0;
  plVar9 = plVar5 + 1;
  *plVar9 = 0;
  puVar1 = PTR_DAT_047cc0d8;
  plVar5[3] = (long)plVar4;
  plVar4 = plVar5 + 4;
  *plVar5 = (long)(puVar1 + 0x10);
  FUN_006c4254(plVar4);
  plVar5[4] = (long)(PTR_DAT_047cc0e0 + 0x10);
  nn::os::InitializeEvent(plVar5 + 6,0,0);
  plVar5[4] = (long)(PTR_DAT_047cc0e8 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar5 + 0xb),false,0);
  param_1[0x31] = (long)plVar4;
  param_1[0x32] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = (long)plVar4;
  param_1[0x36] = (long)plVar5;
  *(undefined1 *)(plVar5 + 5) = 1;
  *(undefined1 *)((long)param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  plVar5 = *(long **)(param_1[3] + 0x238);
  plVar4 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x28,8);
  puVar1 = PTR_DAT_047cdfd0 + 0x10;
  plVar4[2] = 0;
  plVar4[3] = (long)plVar5;
  *plVar4 = (long)puVar1;
  plVar4[1] = 0;
  *(undefined1 *)(plVar4 + 4) = 0;
  param_1[0x38] = (long)(plVar4 + 4);
  param_1[0x39] = (long)plVar4;
  if ((*(byte *)(param_1 + 0x2d) & 1) == 0) {
    if (1 < *(byte *)(param_1 + 0x2d)) {
      return;
    }
    puVar8 = (undefined4 *)((long)param_1 + 0x169);
    *(undefined1 *)(param_1 + 0x2d) = 6;
  }
  else {
    if (param_1[0x2e] != 0) {
      return;
    }
    puVar8 = (undefined4 *)param_1[0x2f];
    param_1[0x2e] = 3;
  }
  *puVar8 = 0x6c6c41;
  return;
}


