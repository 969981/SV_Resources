/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008af6d8; name: FUN_008af6d8
 */


long * FUN_008af6d8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long local_18;
  
  local_18 = 0;
  lVar1 = (**(code **)(*param_1 + 0x40))(param_1,&local_18,0x666f6e74,param_3);
  plVar3 = (long *)0x0;
  if ((lVar1 != 0 && local_18 != 0) && (plVar3 = (long *)FUN_00896e78(0x108), plVar3 != (long *)0x0)
     ) {
    FUN_01661eb0(plVar3);
    uVar2 = FUN_014c14f0(plVar3,param_2,lVar1,0,0,0);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
      FUN_00896e98(plVar3);
      plVar3 = (long *)0x0;
    }
  }
  return plVar3;
}


