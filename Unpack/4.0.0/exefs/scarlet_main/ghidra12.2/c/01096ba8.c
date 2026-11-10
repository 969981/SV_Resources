/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01096ba8; name: FUN_01096ba8
 */


long FUN_01096ba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long *local_70;
  undefined8 uStack_68;
  undefined2 local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar3 = -1;
  if ((*(byte *)(param_1 + 0x629) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x318);
    lVar4 = *plVar2;
    lVar3 = nn::os::GetCurrentThread();
    if (lVar3 != lVar4) {
      lVar3 = nn::os::GetCurrentThread();
LAB_01096bfc:
      if (*plVar2 == 0) goto code_r0x01096c04;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + 800));
      do {
        if (*plVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 800));
            while (*plVar2 == 0) {
              cVar1 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = lVar3;
                cVar1 = ExclusiveMonitorsStatus();
              }
              if (cVar1 == '\0') goto LAB_01096c0c;
            }
          } while( true );
        }
        cVar1 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar3;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
LAB_01096c0c:
      bVar5 = false;
      goto LAB_01096c10;
    }
    bVar5 = true;
LAB_01096c10:
    FUN_01096e28(&local_70,&DAT_045cf7f0);
    plVar2 = (long *)FUN_01098ff8(param_1 + 0x110,&local_70);
    lVar3 = *plVar2;
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + lVar3 * 8);
    if (*(char *)(lVar4 + 0x138) == '\0') {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("false","Register",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/haxe_lua.bindings/script_execution_manager.cpp"
                 ,0x557);
    }
    local_60 = 0;
    local_70 = (long *)0xffffffffffffffff;
    uStack_68 = 0xffffffffffffffff;
    local_5c = 0;
    local_58 = 0xffffffffffffffff;
    FUN_01096d3c(lVar4,param_2,param_3,&local_70);
    local_58 = lVar3;
    lVar3 = FUN_010999d8(param_1 + 0x1e8,&local_70);
    *(long *)(*(long *)(param_1 + 0x1e8) + lVar3 * 0x20) = lVar3;
    if (!bVar5) {
      *(undefined8 *)(param_1 + 0x318) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 800));
    }
  }
  return lVar3;
code_r0x01096c04:
  cVar1 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar5) {
    *plVar2 = lVar3;
    cVar1 = ExclusiveMonitorsStatus();
  }
  if (cVar1 == '\0') goto LAB_01096c0c;
  goto LAB_01096bfc;
}


