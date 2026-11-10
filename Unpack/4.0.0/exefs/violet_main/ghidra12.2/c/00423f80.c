/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00423f80; name: FUN_00423f80
 */


int FUN_00423f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_0042bbc0();
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    uVar3 = FUN_0043c8f0();
    iVar1 = FUN_0042bc40(lVar2,uVar3,0);
    if ((iVar1 == 0) || (iVar1 = FUN_0042bd60(lVar2,param_3,0x39), iVar1 == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0042beb0(lVar2,param_1,param_2);
      iVar1 = -(uint)(iVar1 != 0);
    }
    FUN_0042bbe0(lVar2);
  }
  return iVar1;
}


