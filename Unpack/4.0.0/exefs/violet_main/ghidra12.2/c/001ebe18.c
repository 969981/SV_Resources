/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ebe18; name: FUN_001ebe18
 */


undefined8 FUN_001ebe18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_001ea520(PTR_PTR_047cb9c8);
  if (lVar2 == 0) {
    uVar3 = 0x1b;
  }
  else {
    uVar1 = FUN_001ec18c(param_2);
    FUN_001ea57c(lVar2,param_1,uVar1);
    FUN_001ea59c(lVar2,param_3);
    uVar3 = 0;
  }
  return uVar3;
}


