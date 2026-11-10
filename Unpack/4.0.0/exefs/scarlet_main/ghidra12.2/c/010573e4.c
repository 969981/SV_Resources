/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010573e4; name: FUN_010573e4
 */


int FUN_010573e4(long param_1)

{
  int iVar1;
  void *pvVar2;
  uint *puVar3;
  char cVar4;
  int *piVar5;
  ulong uVar6;
  char *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  piVar5 = *(int **)(param_1 + 8);
  if (piVar5 != (int *)0x0) {
    if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
       (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar6 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar5 + uVar6);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_40 = "i_biome";
    pvVar2 = bsearch(&local_40,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (pvVar2 != (void *)0x0) {
      local_40 = (char *)0xa3fb26e549b4013f;
      pcStack_38 = "i_biome";
      local_30 = 7;
      local_28 = (long *)0x0;
      iVar1 = FUN_01f9cec4(param_1,&local_40);
      goto LAB_01057458;
    }
  }
  local_40 = (char *)0x942784d52957c1a3;
  pcStack_38 = "biome";
  local_30 = 5;
  local_28 = (long *)0x0;
  piVar5 = (int *)FUN_00f73598(param_1,&local_40);
  if ((piVar5 == (int *)0x0) || (*(ushort *)((long)piVar5 - (long)*piVar5) < 7)) {
    cVar4 = '\0';
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3];
    cVar4 = '\0';
    if (uVar6 != 0) {
      cVar4 = *(char *)((long)piVar5 + uVar6);
    }
  }
  iVar1 = (int)cVar4;
LAB_01057458:
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return iVar1;
}


