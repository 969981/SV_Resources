/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d54b4; name: FUN_007d54b4
 */


void FUN_007d54b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  FUN_00796868(auStack_40,param_2);
  lVar2 = FUN_007e3b50(uVar1,auStack_40);
  FUN_0284e3d4(auStack_40);
  if (lVar2 != 0) {
    FUN_007d5240(param_1,lVar2);
  }
  return;
}


