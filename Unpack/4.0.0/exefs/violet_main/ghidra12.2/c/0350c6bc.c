/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0350c6bc; name: FUN_0350c6bc
 */


void FUN_0350c6bc(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *local_30;
  undefined2 local_28;
  
  if (*(long *)(param_1 + 0x118) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x118) + 0x18);
    lVar3 = *(long *)(param_1 + 0xe0);
    plVar1 = *(long **)(lVar2 + 0x188);
    if (lVar3 != 0) {
      local_30 = (long *)0x0;
      (**(code **)(*plVar1 + 0x1c8))(plVar1,0,&local_30,*(undefined8 *)(lVar2 + 0x28));
      *(undefined2 *)(lVar3 + 0xa2) = local_28;
      if (local_30 != (long *)0x0) {
        (**(code **)(*local_30 + 0x18))();
      }
      if (*(long *)(param_1 + 0x118) == 0) {
        return;
      }
      lVar2 = *(long *)(*(long *)(param_1 + 0x118) + 0x18);
      plVar1 = *(long **)(lVar2 + 0x188);
    }
    lVar3 = *(long *)(param_1 + 0xe8);
    if (lVar3 != 0) {
      local_30 = (long *)0x0;
      (**(code **)(*plVar1 + 0x1c8))(plVar1,1,&local_30,*(undefined8 *)(lVar2 + 0x28));
      *(undefined2 *)(lVar3 + 0xa2) = local_28;
      if (local_30 != (long *)0x0) {
        (**(code **)(*local_30 + 0x18))();
      }
      if (*(long *)(param_1 + 0x118) == 0) {
        return;
      }
      lVar2 = *(long *)(*(long *)(param_1 + 0x118) + 0x18);
      plVar1 = *(long **)(lVar2 + 0x188);
    }
    lVar3 = *(long *)(param_1 + 0xf0);
    if (lVar3 != 0) {
      local_30 = (long *)0x0;
      (**(code **)(*plVar1 + 0x1c8))(plVar1,2,&local_30,*(undefined8 *)(lVar2 + 0x28));
      *(undefined2 *)(lVar3 + 0xa2) = local_28;
      if (local_30 != (long *)0x0) {
        (**(code **)(*local_30 + 0x18))();
      }
      if (*(long *)(param_1 + 0x118) == 0) {
        return;
      }
      lVar2 = *(long *)(*(long *)(param_1 + 0x118) + 0x18);
      plVar1 = *(long **)(lVar2 + 0x188);
    }
    lVar3 = *(long *)(param_1 + 0xf8);
    if (lVar3 != 0) {
      local_30 = (long *)0x0;
      (**(code **)(*plVar1 + 0x1c8))(plVar1,3,&local_30,*(undefined8 *)(lVar2 + 0x28));
      *(undefined2 *)(lVar3 + 0xa2) = local_28;
      if (local_30 != (long *)0x0) {
        (**(code **)(*local_30 + 0x18))();
      }
    }
  }
  return;
}


