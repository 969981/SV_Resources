/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00898ca0; name: FUN_00898ca0
 */


long * FUN_00898ca0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_4 + 8);
  if (lVar7 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    uVar2 = FUN_0088f738(param_4);
    plVar3 = (long *)(**(code **)PTR_DAT_047d2258)
                               ((uVar2 & 0xffff) * 8 + 0x58,4,*(undefined8 *)PTR_DAT_047d2268);
    if (plVar3 != (long *)0x0) {
      FUN_0089da30(plVar3);
      puVar1 = PTR_DAT_047d2298;
      plVar3[9] = 0;
      *(undefined4 *)(plVar3 + 10) = 0;
      pcVar4 = *(code **)(puVar1 + 0x50);
      *plVar3 = (long)(puVar1 + 0x10);
      (*pcVar4)(plVar3,param_2,*(undefined8 *)(param_1 + 0x40),lVar7);
      plVar5 = plVar3 + 1;
      lVar7 = *plVar5;
      plVar6 = (long *)(param_1 + 8);
      *plVar5 = *plVar6;
      *(long **)(lVar7 + 8) = plVar6;
      *(long **)(*plVar6 + 8) = plVar5;
      *plVar6 = lVar7;
      FUN_0089deac(plVar3,param_4,*(undefined8 *)(param_1 + 0x20),plVar3 + 0xb,param_5 & 1);
    }
  }
  return plVar3;
}


