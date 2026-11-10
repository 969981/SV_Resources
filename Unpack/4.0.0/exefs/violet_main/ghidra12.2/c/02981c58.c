/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02981c58; name: FUN_02981c58
 */


void FUN_02981c58(long param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0x30))
  ;
  (**(code **)(*plVar1 + 0x550))(plVar1,param_3,param_4);
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x37,param_2,param_3 & 0xff,param_4);
  return;
}


