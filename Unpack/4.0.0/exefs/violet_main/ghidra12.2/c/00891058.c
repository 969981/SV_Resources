/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00891058; name: FUN_00891058
 */


undefined1  [16] FUN_00891058(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  plVar3 = *(long **)(param_1 + 0x10);
  while ((long *)(param_1 + 8) != plVar3) {
    plVar1 = (long *)plVar3[1];
    lVar4 = plVar3[2];
    *(undefined8 *)(lVar4 + 0xb8) = 0;
    *(undefined8 *)(lVar4 + 0xc0) = 0;
    FUN_00892f70(lVar4 + 0x80,param_2);
    FUN_008b379c(lVar4 + 0x90,param_2);
    FUN_008afa00(lVar4 + 0xa0,param_2);
    lVar5 = *(long *)(lVar4 + 0xb0);
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x48) == *(long *)(lVar5 + 0x40)) {
        FUN_00e5c07c(*(long *)(lVar5 + 0x48),param_2);
      }
      *(undefined8 *)(lVar5 + 0x48) = 0;
      *(undefined8 *)(lVar4 + 0xb0) = 0;
    }
    if ((long *)(param_1 + 8) != plVar3) {
      plVar2 = (long *)plVar3[1];
      lVar4 = *plVar2;
      *(long **)(*plVar3 + 8) = plVar2;
      *plVar2 = *plVar3;
      *(long **)(lVar4 + 8) = plVar3;
      *plVar3 = lVar4;
    }
    FUN_00896e98(plVar3);
    plVar3 = plVar1;
  }
  FUN_00892f70(param_1 + 0x18,param_2);
  FUN_008b379c(param_1 + 0x28,param_2);
  FUN_008afa00(param_1 + 0x38,param_2);
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}


