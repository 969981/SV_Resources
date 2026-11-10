/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027b86cc; name: FUN_027b86cc
 */


void FUN_027b86cc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [8];
  long *local_98;
  undefined8 local_90;
  undefined1 auStack_88 [16];
  byte local_78;
  undefined7 uStack_77;
  undefined8 local_68;
  long *plStack_60;
  byte local_58;
  undefined7 uStack_57;
  undefined8 local_48;
  long *plStack_40;
  undefined8 local_38;
  
  uVar5 = *(undefined8 *)PTR_PTR_047e20d8;
  FUN_027b8448(auStack_88);
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  FUN_027b8804(auStack_a0,auStack_88,uVar5);
  FUN_027b8c94(&local_90,uVar6,auStack_a0);
  local_38 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_2 + 0x78) = 0;
  FUN_01f710f0(&local_38);
  uVar5 = local_90;
  local_90 = 0;
  *(undefined8 *)(param_2 + 0x78) = uVar5;
  if (local_98 != (long *)0x0) {
    plVar1 = local_98 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*local_98 + 0x10))(local_98);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)(param_2 + 0x78) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_01f717cc(auStack_a0);
    FUN_027b8d28(param_1,auStack_a0);
    FUN_01d0fcc8(auStack_a0);
  }
  if ((local_58 & 1) != 0) {
    (**(code **)(*plStack_40 + 0x18))
              (plStack_40,local_48,CONCAT71(uStack_57,local_58) & 0xfffffffffffffffe,1);
  }
  if ((local_78 & 1) != 0) {
    (**(code **)(*plStack_60 + 0x18))
              (plStack_60,local_68,CONCAT71(uStack_77,local_78) & 0xfffffffffffffffe,1);
  }
  FUN_01e73724(auStack_88);
  return;
}


