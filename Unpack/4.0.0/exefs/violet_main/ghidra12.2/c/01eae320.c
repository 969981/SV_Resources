/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eae320; name: FUN_01eae320
 */


void FUN_01eae320(long param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  long *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  long *local_50;
  long *local_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  char *local_28;
  
  if (*(long *)(param_1 + 0x170) != 0) {
    return;
  }
  local_40 = 0xe3f3de051903194b;
  pcStack_38 = "network_pokemon";
  local_30 = 0xf;
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar3 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar3;
  if (lVar3 == 0) {
    return;
  }
  local_80 = (long *)&DAT_b1686d3e6def5684;
  pcStack_78 = "playables";
  local_70 = 9;
  local_68 = (long *)0x0;
  FUN_00f7176c(&local_48,lVar3,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  plVar5 = local_48;
  if (local_48 == (long *)0x0) {
    return;
  }
  FUN_00d8fb98(&local_80,&local_40);
  FUN_00c5cf04(&local_50,plVar5,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  plVar4 = local_48;
  plVar5 = local_50;
  if (local_50 == (long *)0x0) {
    local_28 = "world/scene/parts/network/network_pokemon_/network_pokemon.trscn";
    FUN_00e52f24(&local_80,&local_28);
    FUN_00e53d00(&local_28,plVar4,&local_80);
    plVar5 = *(long **)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x170) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x60))();
    }
    pcVar1 = local_28;
    local_28 = (char *)0x0;
    *(char **)(param_1 + 0x170) = pcVar1;
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    if (local_80 == (long *)0x0) goto LAB_01eae424;
    pcVar6 = *(code **)(*local_80 + 0x20);
  }
  else {
    (**(code **)(*local_50 + 0x58))(local_50);
    plVar4 = *(long **)(param_1 + 0x170);
    *(long **)(param_1 + 0x170) = plVar5;
    if (plVar4 == (long *)0x0) goto LAB_01eae424;
    pcVar6 = *(code **)(*plVar4 + 0x60);
  }
  (*pcVar6)();
LAB_01eae424:
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x60))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x60))();
  }
  return;
}


