/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f71210; name: FUN_01f71210
 */


void FUN_01f71210(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [8];
  long *local_70;
  undefined8 local_68;
  undefined **local_60;
  byte local_58;
  undefined7 uStack_57;
  undefined8 local_48;
  long *plStack_40;
  undefined8 local_38;
  
  if (((*(long **)(param_2 + 0x70) == (long *)0x0) ||
      (uVar4 = (**(code **)(**(long **)(param_2 + 0x70) + 0x70))(), (uVar4 & 1) != 0)) &&
     (param_3 != 0)) {
    local_60 = &PTR_FUN_0455cbf8;
    FUN_01f7135c(&local_58,param_3);
    uVar6 = *(undefined8 *)(param_2 + 0x40);
    FUN_01f71398(auStack_78,param_2 + 0x48,&local_60);
    FUN_01f71708(&local_68,uVar6,auStack_78);
    local_38 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x70) = 0;
    FUN_01f710f0(&local_38);
    uVar6 = local_68;
    local_68 = 0;
    *(undefined8 *)(param_2 + 0x70) = uVar6;
    FUN_01cfd7c8(&local_68);
    if (local_70 != (long *)0x0) {
      plVar1 = local_70 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (*(long *)(param_2 + 0x70) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      FUN_01f717cc(auStack_78);
      FUN_01f71934(param_1,auStack_78);
      FUN_01d0fcc8(auStack_78);
    }
    local_60 = &PTR_FUN_0455cbf8;
    if ((local_58 & 1) != 0) {
      (**(code **)(*plStack_40 + 0x18))
                (plStack_40,local_48,CONCAT71(uStack_57,local_58) & 0xfffffffffffffffe,1);
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


