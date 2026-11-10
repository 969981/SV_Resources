/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015615b8; name: FUN_015615b8
 */


void FUN_015615b8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  long local_28;
  
  lVar1 = FUN_0215afe4(param_1 + 0x8c0);
  if (lVar1 == 0) {
    lVar1 = FUN_014539d4(param_1 + 0x8c0,param_2);
  }
  FUN_0215d9a8(lVar1,0xffffffff);
  uStack_60 = *param_2;
  local_58 = param_2[1];
  local_50 = (long *)param_2[2];
  plVar2 = (long *)param_2[3];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  local_68 = &local_28;
  local_28 = 0;
  local_48 = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  FUN_0116c820(param_1,&local_68,0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  lVar1 = local_28;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  if (lVar1 != 0) {
    local_68 = *(long **)(lVar1 + 0x88);
    uStack_60 = *(undefined8 *)(lVar1 + 0x90);
    plVar2 = *(long **)(param_1 + 200);
    local_58 = *(undefined8 *)(lVar1 + 0x98);
    local_50 = *(long **)(lVar1 + 0xa0);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x18))();
    }
    (**(code **)(*plVar2 + 0x70))(plVar2,&local_68,0);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
  }
  return;
}


