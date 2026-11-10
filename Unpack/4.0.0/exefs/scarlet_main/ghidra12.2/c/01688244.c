/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01688244; name: FUN_01688244
 */


void FUN_01688244(long param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_28;
  long local_8;
  
  *(long *)(param_1 + 0xe8) = param_2;
  plVar3 = *(long **)(param_1 + 0xb0);
  local_28 = param_2;
  local_8 = param_3;
  if ((plVar3 == (long *)0x0) || (plVar3 == (long *)(param_1 + 0xb0))) {
    FUN_00d28e08(param_1 + 0x18,&local_8,&local_28);
    uVar2 = (*(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x58)) - 1;
    plVar3 = (long *)(*(long *)(*(long *)(param_1 + 0x20) + (uVar2 / 0x38) * 8) +
                     (uVar2 % 0x38) * 0x48);
  }
  else {
    plVar3 = *(long **)(param_1 + 0xb8);
    plVar3[6] = param_3;
    plVar3[7] = param_2;
    plVar4 = *(long **)(param_1 + 0xb8);
    lVar6 = *plVar4;
    plVar1 = (long *)plVar4[1];
    *plVar1 = lVar6;
    *(long **)(lVar6 + 8) = plVar1;
    *(long *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa8) + -1;
    *plVar4 = 0;
    plVar4[1] = 0;
  }
  puVar5 = *(undefined8 **)(param_1 + 0xa0);
  *plVar3 = param_1 + 0x98;
  plVar3[1] = (long)puVar5;
  *(long **)(param_1 + 0xa0) = plVar3;
  *puVar5 = plVar3;
  plVar4 = (long *)(param_1 + 0xd8);
  lVar6 = *plVar4;
  *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
  plVar1 = plVar3 + 2;
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
  if (lVar6 == param_1 + 200) {
    *(long **)(param_1 + 200) = plVar1;
    plVar4 = (long *)(param_1 + 0xd0);
    *(long **)(param_1 + 0xd8) = plVar1;
  }
  else {
    *(long **)(lVar6 + 0x10) = plVar1;
    if (lVar6 != *plVar4) goto LAB_016882f4;
  }
  *plVar4 = (long)plVar1;
LAB_016882f4:
  plVar3[2] = lVar6;
  plVar3[3] = 0;
  plVar3[4] = 0;
  FUN_00d287fc();
  return;
}


