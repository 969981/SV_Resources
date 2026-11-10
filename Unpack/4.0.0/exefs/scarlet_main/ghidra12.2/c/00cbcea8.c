/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cbcea8; name: FUN_00cbcea8
 */


void FUN_00cbcea8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long local_58;
  undefined **ppuStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 uStack_38;
  
  pcVar3 = *(code **)(param_1 + 0x98);
  plVar1 = (long *)(param_1 + ((long)*(ulong *)(param_1 + 0xa0) >> 1));
  if ((*(ulong *)(param_1 + 0xa0) & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  (*pcVar3)(plVar1,param_2);
  local_58 = param_1 + 0xb8;
  local_40 = PTR_FUN_047e24e8;
  uStack_38 = 0;
  ppuStack_50 = &local_40;
  uVar4 = *(long *)(param_1 + 200) - *(long *)(param_1 + 0xc0) >> 3;
  local_48 = param_2;
  if (uVar4 < 0x80) {
    (*(code *)(&PTR_LAB_045ea030)[uVar4])(&local_58);
  }
  else {
    puVar6 = (undefined *)0x0;
    lVar7 = 0;
    pcVar3 = (code *)PTR_FUN_047e24e8;
    while( true ) {
      lVar5 = *(long *)(*(long *)(local_58 + 8) + lVar7 * 8);
      lVar2 = 0;
      if (lVar5 != 0) {
        lVar2 = lVar5 + -0x38;
      }
      plVar1 = (long *)(lVar2 + ((long)puVar6 >> 1));
      if (((ulong)puVar6 & 1) != 0) {
        pcVar3 = *(code **)(pcVar3 + *plVar1);
      }
      (*pcVar3)(plVar1,local_48);
      if (uVar4 - 1 == lVar7) break;
      lVar7 = lVar7 + 1;
      pcVar3 = (code *)*ppuStack_50;
      puVar6 = ppuStack_50[1];
    }
  }
  pcVar3 = *(code **)(param_1 + 0xa8);
  if ((*(ulong *)(param_1 + 0xb0) & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + ((long)*(ulong *)(param_1 + 0xb0) >> 1)));
  }
  (*pcVar3)();
  return;
}


