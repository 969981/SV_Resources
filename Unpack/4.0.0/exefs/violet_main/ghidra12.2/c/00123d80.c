/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00123d80; name: FUN_00123d80
 */


int FUN_00123d80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00122c30();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_00c85bd0(param_1,param_3);
    iVar1 = FUN_00122b20(param_1,0xfffffffe);
    if (iVar1 == 0) {
      uVar2 = 0xfffffffd;
    }
    else {
      uVar2 = 0xfffffffe;
      FUN_00c5dcd0(param_1,0xfffffffe,0xffffffff);
    }
    FUN_00c5db00(param_1,uVar2);
  }
  return iVar1;
}


