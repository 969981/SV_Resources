/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00894908; name: FUN_00894908
 */


void FUN_00894908(long *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_047d2130 + 0x10;
  plVar2 = param_1 + 3;
  param_1[4] = (long)plVar2;
  *param_1 = (long)puVar1;
  param_1[1] = (long)(param_1 + 1);
  lVar3 = param_2 + 0x18;
  param_1[2] = (long)(param_1 + 1);
  param_1[3] = (long)plVar2;
  param_1[5] = *(long *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 6) = 0;
  lVar7 = *(long *)(param_2 + 0x20);
  bVar4 = lVar3 != lVar7;
  if (param_3 == (long *)0x0) {
    while (bVar4) {
      lVar5 = *(long *)(lVar7 + 0x10);
      plVar6 = (long *)FUN_00896e78(0x18);
      if (plVar6 != (long *)0x0) {
        *plVar6 = (long)plVar6;
        plVar6[1] = (long)plVar6;
        plVar6[2] = lVar5;
        *plVar6 = *plVar2;
        plVar6[1] = (long)plVar2;
        *(long **)(*plVar2 + 8) = plVar6;
        *plVar2 = (long)plVar6;
      }
      lVar7 = *(long *)(lVar7 + 8);
      bVar4 = lVar3 != lVar7;
    }
  }
  else {
    while (bVar4) {
      lVar5 = (**(code **)(*param_3 + 0x78))(param_3,*(long *)(lVar7 + 0x10) + 0xb0,1);
      plVar6 = (long *)FUN_00896e78(0x18);
      if (plVar6 != (long *)0x0) {
        *plVar6 = (long)plVar6;
        plVar6[1] = (long)plVar6;
        plVar6[2] = lVar5;
        *plVar6 = *plVar2;
        plVar6[1] = (long)plVar2;
        *(long **)(*plVar2 + 8) = plVar6;
        *plVar2 = (long)plVar6;
      }
      lVar7 = *(long *)(lVar7 + 8);
      bVar4 = lVar3 != lVar7;
    }
  }
  return;
}


