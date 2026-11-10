/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027db6a0; name: FUN_027db6a0
 */


void FUN_027db6a0(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_150;
  undefined8 uStack_148;
  long local_140;
  long *local_138;
  undefined8 local_128;
  long *plStack_120;
  char local_118;
  undefined1 auStack_110 [8];
  undefined8 local_108;
  byte local_f0;
  undefined7 uStack_ef;
  undefined1 auStack_e8 [8];
  undefined8 local_e0;
  long *plStack_d8;
  byte local_d0;
  undefined7 uStack_cf;
  undefined8 local_c0;
  long *plStack_b8;
  
  switch((int)param_1[0x12]) {
  case 1:
    uVar3 = (**(code **)(*(long *)param_1[0x16] + 0x20))();
    if ((uVar3 & 1) == 0) {
      return;
    }
    FUN_027dbae0(&local_140,param_1 + 0x16);
    uVar3 = FUN_027dbb4c(&local_140);
    param_1[0x11] = uVar3 & 0xffffffff | local_140 << 0x20;
    FUN_027dbb98(param_1 + 0xf,&local_f0);
    *(undefined4 *)(param_1 + 0x12) = 7;
    (**(code **)(*param_1 + 0x68))(param_1);
    FUN_01f6f1b0(&local_f0);
    goto joined_r0x027db904;
  case 2:
    uVar3 = (**(code **)(*(long *)param_1[0x1a] + 0x20))();
    if ((uVar3 & 1) == 0) {
      return;
    }
    FUN_01f6f5c8(&local_140,param_1 + 0x1a);
    uVar3 = FUN_01f6f634(&local_140);
    *(undefined4 *)(param_1 + 0x12) = 7;
    param_1[0x11] = uVar3 & 0xffffffff | local_140 << 0x20;
    (**(code **)(*param_1 + 0x68))(param_1);
    FUN_01f6f680(auStack_e8,local_e0);
    goto joined_r0x027db904;
  case 3:
    uVar3 = (**(code **)(*(long *)param_1[0x1c] + 0x20))();
    if ((uVar3 & 1) != 0) {
      FUN_027dbbf0(&local_140,param_1 + 0x1c);
      uVar3 = FUN_027dbc5c(&local_140);
      param_1[0x11] = uVar3 & 0xffffffff | local_140 << 0x20;
      FUN_027dbca8(param_1 + 0x20,&local_f0);
      *(undefined4 *)(param_1 + 0x12) = 7;
      (**(code **)(*param_1 + 0x68))(param_1);
      FUN_027dbdb8(&local_140);
    }
    break;
  case 4:
    uVar3 = (**(code **)(*(long *)param_1[0x1e] + 0x20))();
    if ((uVar3 & 1) == 0) {
      return;
    }
    FUN_027dbe98(&local_140,param_1 + 0x1e);
    uVar3 = FUN_027dbf04(&local_140);
    param_1[0x11] = uVar3 & 0xffffffff | local_140 << 0x20;
    FUN_027dbf50(param_1 + 0x39,&local_f0);
    *(undefined4 *)(param_1 + 0x12) = 7;
    (**(code **)(*param_1 + 0x68))(param_1);
    if ((local_d0 & 1) != 0) {
      (**(code **)(*plStack_b8 + 0x18))
                (plStack_b8,local_c0,CONCAT71(uStack_cf,local_d0) & 0xfffffffffffffffe,1);
    }
    if ((local_f0 & 1) != 0) {
      (**(code **)(*plStack_d8 + 0x18))
                (plStack_d8,local_e0,CONCAT71(uStack_ef,local_f0) & 0xfffffffffffffffe,1);
    }
joined_r0x027db904:
    if (local_118 != '\0') {
      FUN_01cfa44c(auStack_110,local_108);
    }
    if (((ulong)local_138 & 1) != 0) {
      (**(code **)(*plStack_120 + 0x18))
                (plStack_120,local_128,(ulong)local_138 & 0xfffffffffffffffe,1);
    }
    break;
  case 5:
    plVar5 = param_1 + 0x18;
    uVar3 = (**(code **)(*(long *)*plVar5 + 0x20))();
    if ((uVar3 & 1) != 0) {
      FUN_027dbfc4(plVar5);
      param_1[0x11] = 0;
      if (param_1[0xf] == 0) {
        *(undefined4 *)(param_1 + 0x12) = 7;
                    /* WARNING: Could not recover jumptable at 0x027dbadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x68))(param_1);
        return;
      }
      FUN_027dc030(&local_140);
      FUN_027dc3bc(plVar5,&local_140);
      if (local_138 != (long *)0x0) {
        plVar5 = local_138 + 1;
        do {
          lVar4 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*local_138 + 0x10))(local_138);
          std::__shared_weak_count::__release_weak();
        }
      }
      *(undefined4 *)(param_1 + 0x12) = 6;
    }
    break;
  case 6:
    uVar3 = (**(code **)(*(long *)param_1[0x18] + 0x20))();
    if ((uVar3 & 1) != 0) {
      FUN_027dbfc4(param_1 + 0x18);
      local_150 = 0;
      uStack_148 = 0;
      local_140 = param_1[0xf];
      local_138 = (long *)param_1[0x10];
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      FUN_01f6f1b0(&local_140);
      FUN_01f6f1b0(&local_150);
      *(undefined4 *)(param_1 + 0x12) = 7;
      (**(code **)(*param_1 + 0x68))(param_1);
    }
    break;
  case 7:
    if ((char)param_1[0x13] != '\0') {
      FUN_01e9eb34(param_1 + 0x14);
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
    local_140 = 0;
    local_138 = (long *)0x0;
    FUN_027dc418(param_1 + 0x16,&local_140);
    if (local_138 != (long *)0x0) {
      plVar5 = local_138 + 1;
      do {
        lVar4 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*local_138 + 0x10))(local_138);
        std::__shared_weak_count::__release_weak();
      }
    }
    local_140 = 0;
    local_138 = (long *)0x0;
    FUN_027dc3bc(param_1 + 0x18,&local_140);
    if (local_138 != (long *)0x0) {
      plVar5 = local_138 + 1;
      do {
        lVar4 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*local_138 + 0x10))(local_138);
        std::__shared_weak_count::__release_weak();
      }
    }
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
  return;
}


