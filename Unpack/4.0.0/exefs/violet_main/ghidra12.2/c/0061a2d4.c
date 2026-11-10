/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0061a2d4; name: FUN_0061a2d4
 */


long FUN_0061a2d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = FUN_0049e770(PTR_FUN_047cba38,0xa0);
  if (lVar1 != 0) {
    FUN_00624000(lVar1,uVar2,param_1 + 0x40,param_2,param_3);
  }
  return lVar1;
}


