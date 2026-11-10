/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a27748; name: FUN_02a27748
 */


void FUN_02a27748(long param_1,long *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  if ((DAT_0483ad98 & 1) == 0) {
    param_3 = param_3 & 0xffffffff;
    iVar3 = __cxa_guard_acquire(&DAT_0483ad98);
    if (iVar3 != 0) {
      FUN_00100190(&LAB_02a273f0,0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483ad98);
    }
  }
  puVar2 = PTR_DAT_047d8b70;
  if ((param_3 & 1) == 0) {
    lVar5 = -0x1fe0;
    do {
      local_68 = *(undefined4 *)(lVar5 + 0x45671a0);
      uStack_64 = *(undefined4 *)(lVar5 + 0x45671a4);
      local_78 = 0;
      local_70 = 0;
      uVar6 = *(undefined8 *)(lVar5 + 0x4567160);
      plVar4 = *(long **)(lVar5 + 0x4567178);
      if (plVar4 == (long *)0x0) {
        local_78 = uVar6;
      }
      else {
        (**(code **)(*plVar4 + 0x18))(plVar4);
        local_78 = uVar6;
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      uVar6 = *(undefined8 *)(lVar5 + 0x4567180);
      plVar4 = *(long **)(lVar5 + 0x4567198);
      if (plVar4 == (long *)0x0) {
        local_70 = uVar6;
      }
      else {
        (**(code **)(*plVar4 + 0x18))(plVar4);
        local_70 = uVar6;
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      puVar1 = puVar2;
      if (*param_2 != 0) {
        puVar1 = (undefined *)(*param_2 + 0x30);
      }
      FUN_012a70a8(*(undefined8 *)(param_1 + 0x198),puVar1,&local_70,&local_78);
      lVar5 = lVar5 + 0x50;
    } while (lVar5 != 0);
  }
  else {
    lVar5 = -0x1fe0;
    do {
      if ((*(byte *)(lVar5 + 0x45671a8) & 1) == 0) {
        local_68 = *(undefined4 *)(lVar5 + 0x45671a0);
        local_78 = 0;
        local_70 = 0;
        uStack_64 = *(undefined4 *)(lVar5 + 0x45671a4);
        uVar6 = *(undefined8 *)(lVar5 + 0x4567160);
        plVar4 = *(long **)(lVar5 + 0x4567178);
        if (plVar4 == (long *)0x0) {
          local_78 = uVar6;
        }
        else {
          (**(code **)(*plVar4 + 0x18))(plVar4);
          local_78 = uVar6;
          (**(code **)(*plVar4 + 0x20))(plVar4);
        }
        uVar6 = *(undefined8 *)(lVar5 + 0x4567180);
        plVar4 = *(long **)(lVar5 + 0x4567198);
        if (plVar4 == (long *)0x0) {
          local_70 = uVar6;
        }
        else {
          (**(code **)(*plVar4 + 0x18))(plVar4);
          local_70 = uVar6;
          (**(code **)(*plVar4 + 0x20))(plVar4);
        }
        puVar1 = puVar2;
        if (*param_2 != 0) {
          puVar1 = (undefined *)(*param_2 + 0x30);
        }
        FUN_012a70a8(*(undefined8 *)(param_1 + 0x198),puVar1,&local_70,&local_78);
      }
      lVar5 = lVar5 + 0x50;
    } while (lVar5 != 0);
  }
  return;
}


