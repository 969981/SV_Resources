/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c40ca0; name: FUN_00c40ca0
 */


void FUN_00c40ca0(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  code *pcVar4;
  code *pcVar5;
  long lVar6;
  long local_68;
  code **ppcStack_60;
  undefined8 local_58;
  code *local_50;
  undefined8 uStack_48;
  
  local_50 = FUN_02c815e8;
  uStack_48 = 0;
  ppcStack_60 = &local_50;
  uVar3 = *(long *)(param_1 + 0x170) - *(long *)(param_1 + 0x168) >> 3;
  lVar1 = param_1 + 0xb8;
  local_68 = lVar1;
  local_58 = param_2;
  if (uVar3 < 0x80) {
    (*(code *)(&PTR_LAB_045e9830)[uVar3])(&local_68);
  }
  else {
    pcVar5 = (code *)0x0;
    lVar6 = 0;
    pcVar4 = FUN_02c815e8;
    while( true ) {
      plVar2 = (long *)(*(long *)(*(long *)(local_68 + 0xb0) + lVar6 * 8) + ((long)pcVar5 >> 1));
      if (((ulong)pcVar5 & 1) != 0) {
        pcVar4 = *(code **)(pcVar4 + *plVar2);
      }
      (*pcVar4)(plVar2,local_58);
      if (uVar3 - 1 == lVar6) break;
      lVar6 = lVar6 + 1;
      pcVar4 = *ppcStack_60;
      pcVar5 = ppcStack_60[1];
    }
  }
  local_50 = (code *)PTR_FUN_047e24d8;
  uStack_48 = 0;
  ppcStack_60 = &local_50;
  uVar3 = (*(long **)(param_1 + 0x1d8))[1] - **(long **)(param_1 + 0x1d8) >> 3;
  if (uVar3 < 0x80) {
    local_68 = lVar1;
    local_58 = param_2;
    (*(code *)(&PTR_LAB_045e9c30)[uVar3])(&local_68);
  }
  else {
    pcVar5 = (code *)0x0;
    lVar6 = 0;
    pcVar4 = (code *)PTR_FUN_047e24d8;
    local_68 = lVar1;
    local_58 = param_2;
    while( true ) {
      plVar2 = (long *)(*(long *)(**(long **)(local_68 + 0x120) + lVar6 * 8) + ((long)pcVar5 >> 1));
      if (((ulong)pcVar5 & 1) != 0) {
        pcVar4 = *(code **)(pcVar4 + *plVar2);
      }
      (*pcVar4)(plVar2,local_58);
      if (uVar3 - 1 == lVar6) break;
      lVar6 = lVar6 + 1;
      pcVar4 = *ppcStack_60;
      pcVar5 = ppcStack_60[1];
    }
  }
  return;
}


