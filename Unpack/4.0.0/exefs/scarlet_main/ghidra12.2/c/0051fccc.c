/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0051fccc; name: FUN_0051fccc
 */


void FUN_0051fccc(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,
                 undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  long *plVar5;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined *local_a0;
  undefined8 uStack_98;
  long local_70;
  long lStack_68;
  
  plVar5 = (long *)*param_1;
  FUN_0052b030();
  local_70 = param_3;
  lStack_68 = param_4;
  if ((param_4 == 0) || (*(char *)(param_4 + param_3 + -1) != '/')) {
    local_a0 = &DAT_03bdfb3b;
    uStack_98 = 1;
    local_d0 = param_5;
    uStack_c8 = param_6;
    FUN_00533f60(&local_e8,&local_70,&local_a0,&local_d0);
  }
  else {
    local_a0 = param_5;
    uStack_98 = param_6;
    FUN_00533e80(&local_e8,&local_70,&local_a0);
  }
  puVar1 = PTR_DAT_047cba80;
  puVar4 = (ulong *)*plVar5;
  if (puVar4 == (ulong *)PTR_DAT_047cba80) {
    puVar4 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (puVar4 != (ulong *)0x0) {
      puVar4[2] = local_d8;
      puVar4[1] = uStack_e0;
      *puVar4 = local_e8;
      uStack_e0 = 0;
      local_d8 = 0;
      local_e8 = 0;
    }
    *plVar5 = (long)puVar4;
    if ((local_e8 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_d8);
    }
  }
  else {
    if ((*puVar4 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,puVar4[2]);
    }
    puVar4[2] = local_d8;
    puVar4[1] = uStack_e0;
    *puVar4 = local_e8;
    local_e8 = local_e8 & 0xffffffffffff0000;
  }
  puVar3 = (undefined8 *)param_1[1];
  puVar2 = (undefined *)*puVar3;
  if (puVar2 == puVar1) {
    FUN_0049f5d4(puVar3,PTR_DAT_047cba80);
    puVar2 = (undefined *)*puVar3;
  }
  FUN_0052d77c(param_2,puVar2);
  return;
}


