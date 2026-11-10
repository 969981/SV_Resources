/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02154ccc; name: FUN_02154ccc
 */


undefined8 FUN_02154ccc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *plStack_70;
  long *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  long local_28;
  
  uVar1 = FUN_021545c4(*(undefined8 *)(param_1 + 0x458));
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x480);
    local_68 = *(long **)(lVar3 + 0x88);
    uStack_60 = *(undefined8 *)(lVar3 + 0x90);
    plVar4 = *(long **)(param_1 + 200);
    local_58 = *(undefined8 *)(lVar3 + 0x98);
    local_50 = *(long **)(lVar3 + 0xa0);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x18))();
    }
    (**(code **)(*plVar4 + 0x70))(plVar4,&local_68,0);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    FUN_0111e884(&local_88,*(undefined8 *)(param_1 + 0x4a8),*(undefined4 *)(param_1 + 0x44c));
    if (plStack_70 != (long *)0x0) {
      (**(code **)(*plStack_70 + 0x18))(plStack_70);
    }
    local_68 = &local_28;
    local_28 = 0;
    local_48 = plStack_70;
    uStack_60 = local_88;
    local_58 = uStack_80;
    local_50 = (long *)local_78;
    if (plStack_70 != (long *)0x0) {
      (**(code **)(*plStack_70 + 0x18))(plStack_70);
    }
    FUN_0116c820(param_1,&local_68,0);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    lVar3 = local_28;
    if (plStack_70 != (long *)0x0) {
      (**(code **)(*plStack_70 + 0x20))(plStack_70);
      (**(code **)(*plStack_70 + 0x20))(plStack_70);
    }
    local_68 = *(long **)(lVar3 + 0x88);
    uStack_60 = *(undefined8 *)(lVar3 + 0x90);
    plVar4 = *(long **)(param_1 + 200);
    local_58 = *(undefined8 *)(lVar3 + 0x98);
    local_50 = *(long **)(lVar3 + 0xa0);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x18))();
    }
    (**(code **)(*plVar4 + 0x70))(plVar4,&local_68,1);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    FUN_02154e7c(param_1);
    uVar2 = 1;
  }
  return uVar2;
}


