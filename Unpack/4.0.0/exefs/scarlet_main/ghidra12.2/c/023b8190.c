/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023b8190; name: FUN_023b8190
 */


ulong FUN_023b8190(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  long *local_70;
  ulong uStack_68;
  
  if ((*(long *)(param_2 + 0x40) == 0) && (*(long *)(param_2 + 0x48) == 0)) {
    uVar7 = 0xffffffffffffffff;
  }
  else {
    uVar7 = 0xffffffffffffffff;
    if (*(char *)(param_2 + 0x68) == '\0') {
      plVar1 = (long *)(param_2 + 0x2d0);
      lVar8 = *plVar1;
      lVar4 = nn::os::GetCurrentThread();
      if (lVar4 != lVar8) {
        lVar4 = nn::os::GetCurrentThread();
LAB_023b8218:
        if (*plVar1 == 0) goto code_r0x023b8220;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2d8));
        do {
          if (*plVar1 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x2d8));
              while (*plVar1 == 0) {
                cVar2 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar10) {
                  *plVar1 = lVar4;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') goto LAB_023b8228;
              }
            } while( true );
          }
          cVar2 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_023b8228:
        bVar10 = false;
        plVar9 = plVar1;
        goto LAB_023b8230;
      }
      plVar9 = (long *)0x0;
      bVar10 = true;
LAB_023b8230:
      do {
        lVar4 = *(long *)(param_2 + 0x360) - *(long *)(param_2 + 0x358);
        if (lVar4 == 0) {
          uVar7 = *(long *)(param_2 + 0x2f0) - *(long *)(param_2 + 0x2e8) >> 3;
          FUN_023708f8(param_2 + 0x2e8);
          goto LAB_023b825c;
        }
        uVar7 = *(ulong *)(*(long *)(param_2 + 0x360) + -8);
        *(long *)(param_2 + 0x360) = lVar4 + *(long *)(param_2 + 0x358) + -8;
        uVar6 = uVar7 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(*(long *)(param_2 + 800) + uVar6) =
             *(ulong *)(*(long *)(param_2 + 800) + uVar6) &
             (1L << (uVar7 & 0x3f) ^ 0xffffffffffffffffU);
      } while ((ulong)(*(long *)(param_2 + 0x2f0) - *(long *)(param_2 + 0x2e8) >> 3) <= uVar7);
      *(undefined8 *)(*(long *)(param_2 + 0x2e8) + uVar7 * 8) = 0xffffffffffffffff;
      if (*(ulong *)(param_2 + 0x390) <= uVar7) {
LAB_023b825c:
        *(ulong *)(param_2 + 0x390) = uVar7 + 1;
      }
      if (!bVar10) {
        *plVar9 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar9 + 1));
      }
      cVar2 = *(char *)(param_2 + 0x398);
      if (((*PTR_DAT_047d88d0 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar3 != 0)) {
        FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d88d0);
      }
      uVar5 = *(undefined8 *)PTR_DAT_047d88d8;
      *(undefined8 *)PTR_DAT_047d88e0 = uVar5;
      local_70 = plVar1;
      uStack_68 = uVar7;
      if (cVar2 == '\0') {
        FUN_023b8d28(param_1,uVar5,&local_70,*(undefined8 *)(param_2 + 0x48),
                     *(undefined8 *)(param_2 + 0x40),param_3,param_4);
      }
      else {
        FUN_023b8424(param_1,uVar5,&local_70,*(undefined8 *)(param_2 + 0x48),
                     *(undefined8 *)(param_2 + 0x40),param_3,param_4);
      }
    }
  }
  return uVar7;
code_r0x023b8220:
  cVar2 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
  if (bVar10) {
    *plVar1 = lVar4;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 == '\0') goto LAB_023b8228;
  goto LAB_023b8218;
}


