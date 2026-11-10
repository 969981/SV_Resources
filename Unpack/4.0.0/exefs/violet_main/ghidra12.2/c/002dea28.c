/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002dea28; name: FUN_002dea28
 */


undefined8 FUN_002dea28(uint *param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *param_1;
  if ((uVar1 >> 4 & 1) == 0) {
    lVar2 = FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (lVar2 != 0) {
      FUN_002e4418(lVar2,0xf,*param_1);
    }
    FUN_002de558(param_1,lVar2);
    return 1;
  }
  *param_1 = uVar1 | 0x2000;
  lVar2 = FUN_0049e770(PTR_FUN_047cba38,0x28);
  if (lVar2 != 0) {
    FUN_002e4418(lVar2,0x13,*param_1);
  }
  FUN_002de558(param_1,lVar2);
  *param_1 = uVar1;
  return 1;
}


