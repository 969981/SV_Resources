/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089e4f4; name: FUN_0089e4f4
 */


long * FUN_0089e4f4(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = FUN_00898c44(param_1,param_3);
  if (lVar1 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    FUN_00d358ac(auStack_60,lVar1);
    if (local_58 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = (long *)FUN_00896e78(0x70);
      if (plVar2 != (long *)0x0) {
        FUN_0089e868(plVar2);
        plVar3 = plVar2 + 1;
        lVar1 = *plVar3;
        plVar4 = (long *)(param_1 + 8);
        *plVar3 = *plVar4;
        *(long **)(lVar1 + 8) = plVar4;
        *(long **)(*plVar4 + 8) = plVar3;
        *plVar4 = lVar1;
        (**(code **)(*plVar2 + 0x40))(plVar2,param_2,*(undefined8 *)(param_1 + 0x40),local_58);
      }
    }
    FUN_0089e934(plVar2,auStack_60,param_1,*(undefined8 *)(param_1 + 0x20),param_4 & 1);
  }
  return plVar2;
}


