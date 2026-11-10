/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0085ab84; name: FUN_0085ab84
 */


void FUN_0085ab84(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *local_50;
  undefined8 local_48;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar6 + 0xa8) == 0) {
    local_50 = (long *)0x0;
    local_48 = 0x8000000000000000;
    iVar1 = *(int *)(lVar6 + 0x60);
    if (iVar1 < 1) {
      local_48._4_4_ = 0x80000000;
      plVar5 = *(long **)(lVar6 + 0x58);
      plVar2 = (long *)0x0;
    }
    else {
      FUN_02e8df28(&local_50,PTR_PTR_047d1a50,iVar1);
      plVar5 = *(long **)(lVar6 + 0x58);
      plVar2 = local_50;
    }
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      lVar7 = plVar5[2];
      plVar2[1] = plVar5[3];
      *plVar2 = lVar7;
      plVar2 = plVar2 + 2;
    }
    local_48._0_4_ = iVar1;
    FUN_00862074(&local_50,lVar6 + 0xa0);
    uVar3 = local_48._4_4_;
    uVar4 = (ulong)local_48._4_4_;
    local_48 = (ulong)local_48._4_4_ << 0x20;
    if ((-1 < (int)uVar3) && (local_50 != (long *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_50,uVar4 << 4);
    }
  }
  FUN_008621fc(lVar6 + 0xa0,param_2,param_3);
  return;
}


