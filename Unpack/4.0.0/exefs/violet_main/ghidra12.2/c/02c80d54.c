/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02c80d54; name: FUN_02c80d54
 */


void FUN_02c80d54(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  code *pcVar7;
  long local_48;
  code **ppcStack_40;
  undefined8 local_38;
  code *local_30;
  undefined8 uStack_28;
  
  (**(code **)(*param_1 + 0xb0))();
  lVar3 = param_1[0x19];
  if (lVar3 != 0) {
    local_48 = lVar3 + 0xb8;
    local_30 = FUN_02c80d54;
    uStack_28 = 0;
    ppcStack_40 = &local_30;
    uVar4 = *(long *)(lVar3 + 200) - *(long *)(lVar3 + 0xc0) >> 3;
    local_38 = param_2;
    if (uVar4 < 0x80) {
      (*(code *)(&PTR_LAB_045ea030)[uVar4])(&local_48);
    }
    else {
      pcVar7 = (code *)0x0;
      lVar3 = 0;
      pcVar5 = FUN_02c80d54;
      while( true ) {
        lVar6 = *(long *)(*(long *)(local_48 + 8) + lVar3 * 8);
        lVar2 = 0;
        if (lVar6 != 0) {
          lVar2 = lVar6 + -0x38;
        }
        plVar1 = (long *)(lVar2 + ((long)pcVar7 >> 1));
        if (((ulong)pcVar7 & 1) != 0) {
          pcVar5 = *(code **)(pcVar5 + *plVar1);
        }
        (*pcVar5)(plVar1,local_38);
        if (uVar4 - 1 == lVar3) break;
        lVar3 = lVar3 + 1;
        pcVar5 = *ppcStack_40;
        pcVar7 = ppcStack_40[1];
      }
    }
  }
  return;
}


