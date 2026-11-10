/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02c815e8; name: FUN_02c815e8
 */


void FUN_02c815e8(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long local_48;
  undefined **ppuStack_40;
  long local_38;
  undefined *local_30;
  undefined8 uStack_28;
  
  lVar7 = param_1[10];
  (**(code **)(*param_1 + 0xb0))(param_1,lVar7);
  lVar2 = param_1[0x19];
  if (lVar2 != 0) {
    local_48 = lVar2 + 0xb8;
    local_30 = PTR_FUN_047e24e0;
    uStack_28 = 0;
    ppuStack_40 = &local_30;
    uVar3 = *(long *)(lVar2 + 200) - *(long *)(lVar2 + 0xc0) >> 3;
    local_38 = lVar7;
    if (uVar3 < 0x80) {
      (*(code *)(&PTR_LAB_045ea030)[uVar3])(&local_48);
    }
    else {
      puVar6 = (undefined *)0x0;
      lVar2 = 0;
      pcVar4 = (code *)PTR_FUN_047e24e0;
      while( true ) {
        lVar5 = *(long *)(*(long *)(local_48 + 8) + lVar2 * 8);
        lVar7 = 0;
        if (lVar5 != 0) {
          lVar7 = lVar5 + -0x38;
        }
        plVar1 = (long *)(lVar7 + ((long)puVar6 >> 1));
        if (((ulong)puVar6 & 1) != 0) {
          pcVar4 = *(code **)(pcVar4 + *plVar1);
        }
        (*pcVar4)(plVar1,local_38);
        if (uVar3 - 1 == lVar2) break;
        lVar2 = lVar2 + 1;
        pcVar4 = (code *)*ppuStack_40;
        puVar6 = ppuStack_40[1];
      }
    }
  }
  return;
}


