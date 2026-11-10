/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00369340; name: FUN_00369340
 */


void FUN_00369340(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar1 = *(long **)(param_1 + 8);
  if (*plVar1 == 0) {
    uVar3 = (ulong)*(byte *)(plVar1 + 1);
  }
  else {
    uVar3 = plVar1[1];
  }
  *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - uVar3;
  lStack_58 = plVar1[1];
  local_60 = *plVar1;
  lStack_48 = plVar1[3];
  lStack_50 = plVar1[2];
  FUN_00367b10(&local_40,&local_60,param_2,param_3);
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar2[1] = uStack_38;
  *puVar2 = local_40;
  puVar2[3] = uStack_28;
  puVar2[2] = uStack_30;
  *(long *)(param_1 + 0x20) = (param_3 - param_2) + *(long *)(param_1 + 0x20);
  return;
}


