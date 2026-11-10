/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048a390; name: FUN_0048a390
 */


undefined8 FUN_0048a390(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    iVar1 = FUN_0047e430(*param_1);
    if ((-1 < param_2) && (param_2 < iVar1)) {
      uVar2 = FUN_0047e450(*param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}


