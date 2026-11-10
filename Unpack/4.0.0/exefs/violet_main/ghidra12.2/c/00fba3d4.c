/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fba3d4; name: FUN_00fba3d4
 */


undefined4 FUN_00fba3d4(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  id aiStack_8 [8];
  
  std::ios_base::getloc();
  plVar2 = (long *)std::locale::use_facet(aiStack_8);
  uVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
  std::locale::~locale((locale *)aiStack_8);
  return uVar1;
}


