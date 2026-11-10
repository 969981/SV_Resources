/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294d000; name: FUN_0294d000
 */


long FUN_0294d000(undefined8 param_1,uint param_2,undefined1 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_0124c158();
  lVar3 = FUN_0129b478(uVar2,1,param_3);
  while ((lVar3 != 0 && (uVar1 = FUN_0107bb74(lVar3), param_2 != (uVar1 & 0xffff)))) {
    lVar3 = FUN_01255bdc(uVar2,lVar3,0);
  }
  return lVar3;
}


