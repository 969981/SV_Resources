/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012bac60; name: FUN_012bac60
 */


long * FUN_012bac60(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long *param_5)

{
  undefined *puVar1;
  long *plVar2;
  
  param_1 = param_1 + (param_3 & 0xffffffff) * 0x20;
  *(undefined8 *)(param_1 + 0x10) = param_5;
  *(undefined8 *)(param_1 + 0x20) = 0x128;
  plVar2 = (long *)(**(code **)(*param_5 + 0x10))(param_5,0x128,8);
  *(long **)(param_1 + 0x18) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0xe8))();
  }
  else {
    FUN_014de418(plVar2,param_4,param_5,1);
    puVar1 = PTR_DAT_047ddc98 + 0x128;
    *plVar2 = (long)(PTR_DAT_047ddc98 + 0x10);
    plVar2[1] = (long)puVar1;
    FUN_014de348(plVar2 + 0xb,param_5);
    plVar2[0x22] = 0;
    *(undefined4 *)((long)plVar2 + 0x124) = 1;
    nn::os::InitializeLightEvent(plVar2 + 0x23,0,1);
    *(long **)(param_1 + 8) = plVar2;
    (**(code **)(*plVar2 + 0xe0))(plVar2,param_2);
  }
  return plVar2;
}


