/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e5e24c; name: FUN_00e5e24c
 */


void FUN_00e5e24c(long param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  ulong local_e0;
  long *local_d8;
  ulong local_d0;
  long *plStack_c8;
  uint local_c0 [2];
  byte local_b8;
  undefined7 uStack_b7;
  undefined8 local_a8;
  long *plStack_a0;
  char local_98;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined5 local_40;
  undefined3 uStack_3b;
  undefined5 uStack_38;
  
  plVar5 = *(long **)(param_1 + 0x1f0);
  if ((plVar5 != (long *)0x0) && (uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5), (uVar4 & 1) != 0))
  {
    FUN_00e5eddc(local_c0,param_1 + 0x1f0);
    if (local_c0[0] == 0) {
      if (*(long *)(param_1 + 0xd0) != 0) {
        FUN_01cfa5b0(&local_e0,&local_70);
        uVar1 = (uint)((byte)local_e0 >> 1);
        if ((local_e0 & 1) != 0) {
          uVar1 = (uint)local_d8;
        }
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        uStack_3b = 0;
        uStack_38 = 0;
        if (uVar1 < 0x1d) {
          uVar4 = (ulong)&local_e0 | 1;
          if ((local_e0 & 1) != 0) {
            uVar4 = local_d0;
          }
          snprintf((char *)&local_50,0x1d,"%s",uVar4);
        }
        *(undefined8 *)(param_1 + 0x1d1) = local_50;
        *(ulong *)(param_1 + 0x1e6) = CONCAT53(uStack_38,uStack_3b);
        *(ulong *)(param_1 + 0x1e1) = CONCAT35(uStack_3b,local_40);
        *(undefined8 *)(param_1 + 0x1d9) = local_48;
        if (*(char *)(param_1 + 0x1d0) == '\0') {
          *(undefined1 *)(param_1 + 0x1d0) = 1;
        }
        local_50 = *(undefined8 *)(param_1 + 0x1d1);
        local_48 = *(undefined8 *)(param_1 + 0x1d9);
        uStack_38 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1e6) >> 0x18);
        local_40 = (undefined5)*(undefined8 *)(param_1 + 0x1e1);
        uStack_3b = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x1e1) >> 0x28);
        (**(code **)(param_1 + 0xd0))(param_1 + 0xf0,&local_50);
        if ((local_e0 & 1) != 0) {
          (**(code **)(*plStack_c8 + 0x18))(plStack_c8,local_d0,local_e0 & 0xfffffffffffffffe,1);
        }
      }
    }
    else if (*(long *)(param_1 + 0x150) != 0) {
      uVar4 = FUN_027bdad8(local_c0);
      local_e0 = uVar4 & 0xffffffff | (ulong)local_c0[0] << 0x20;
      (**(code **)(param_1 + 0x150))(param_1 + 0x170,&local_e0);
    }
    pcVar6 = *(code **)(param_1 + 0x158);
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      *(undefined8 *)(param_1 + 0x150) = 0;
      *(undefined8 *)(param_1 + 0x158) = 0;
      (*pcVar6)(param_1 + 0x170);
    }
    pcVar6 = *(code **)(param_1 + 0xd8);
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      (*pcVar6)(param_1 + 0xf0);
    }
    local_e0 = 0;
    local_d8 = (long *)0x0;
    FUN_00e5ed80(param_1 + 0x1f0,&local_e0);
    if (local_d8 != (long *)0x0) {
      plVar5 = local_d8 + 1;
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
        (**(code **)(*local_d8 + 0x10))(local_d8);
        std::__shared_weak_count::__release_weak();
      }
    }
    if ((local_70 & 1) != 0) {
      (**(code **)(*plStack_58 + 0x18))
                (plStack_58,local_60,CONCAT71(uStack_6f,local_70) & 0xfffffffffffffffe,1);
    }
    if (local_98 != '\0') {
      FUN_01cfa44c(auStack_90,local_88);
    }
    if ((local_b8 & 1) != 0) {
      (**(code **)(*plStack_a0 + 0x18))
                (plStack_a0,local_a8,CONCAT71(uStack_b7,local_b8) & 0xfffffffffffffffe,1);
    }
  }
  return;
}


