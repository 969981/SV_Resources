/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00871c8c; name: FUN_00871c8c
 */


void FUN_00871c8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_38;
  
  puVar1 = PTR_DAT_047d1a08;
  local_38 = 0x50;
  plVar3 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(plVar3,&DAT_03c41cd3);
  }
  plVar3[2] = 1;
  puVar2 = PTR_DAT_047d1d08;
  puVar1 = PTR_DAT_047d19b0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  lVar6 = *(long *)(puVar1 + 0x248);
  lVar4 = *(long *)(puVar1 + 0x240);
  plVar3[7] = lVar6;
  plVar3[6] = lVar4;
  plVar3[9] = CONCAT44(-(float)((ulong)lVar6 >> 0x20),-(float)lVar6);
  plVar3[8] = CONCAT44(-(float)((ulong)lVar4 >> 0x20),-(float)lVar4);
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[1] = 0xffffffff;
  lVar4 = *(long *)(param_1 + 0x18);
  *(long **)(param_1 + 0x18) = plVar3;
  if (lVar4 != 0) {
    FUN_012c4338();
  }
  uVar5 = FUN_008702a4(param_2);
  FUN_00871d60(uVar5,*(long *)(param_1 + 0x18) + 0x20);
  return;
}


