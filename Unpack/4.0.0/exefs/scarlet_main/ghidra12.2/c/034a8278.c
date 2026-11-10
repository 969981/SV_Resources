/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a8278; name: FUN_034a8278
 */


void FUN_034a8278(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long local_58;
  long local_50;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_047e7048;
  local_58 = param_1 + 0x38;
  local_48 = 2;
  local_50 = param_1;
  FUN_03497f00(*(undefined8 *)PTR_DAT_047e7048,&local_58,param_2,param_3);
  plVar2 = *(long **)(param_1 + 0x98);
  if (((param_4 & 1) == 0) || (plVar3 = *(long **)(param_1 + 0xa0), plVar3 == (long *)0x0)) {
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x148))(plVar2,param_2,param_3,param_4 & 1);
    }
  }
  else {
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x148))(plVar2,param_2,param_3,0);
      plVar3 = *(long **)(param_1 + 0xa0);
    }
    (**(code **)(*plVar3 + 0x148))(plVar3,param_2,param_3,0);
  }
  puVar4 = *(undefined8 **)(param_1 + 0xe8);
  if ((puVar4 != (undefined8 *)0x0) && (*(uint *)(puVar4 + 1) != 0)) {
    plVar2 = (long *)*puVar4;
    lVar5 = (ulong)*(uint *)(puVar4 + 1) << 3;
    do {
      local_58 = *plVar2;
      local_50 = *(long *)(local_58 + 0x30);
      if (*(char *)(local_50 + 0x138) == '\0') {
        local_48 = 4;
        FUN_03497f00(*(undefined8 *)puVar1,&local_58,param_2,param_3);
      }
      plVar2 = plVar2 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return;
}


