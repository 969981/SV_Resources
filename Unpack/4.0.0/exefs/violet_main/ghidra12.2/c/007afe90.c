/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007afe90; name: FUN_007afe90
 */


long * FUN_007afe90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  
  uVar1 = FUN_0078a12c();
  plVar2 = (long *)FUN_007bf9f0(0x528,uVar1);
  if (plVar2 != (long *)0x0) {
    FUN_007a7d64(plVar2,param_1,param_2);
    *plVar2 = (long)(PTR_DAT_047d0de8 + 0x10);
    FUN_0284e338(plVar2 + 0x10);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    pcVar3 = *(code **)(PTR_DAT_047d0df0 + 0x20);
    *plVar2 = (long)(PTR_DAT_047d0df0 + 0x10);
    plVar2[0xa4] = 0xffffffff;
    (*pcVar3)(plVar2);
  }
  return plVar2;
}


