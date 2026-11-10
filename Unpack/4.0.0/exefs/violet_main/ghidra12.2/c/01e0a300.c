/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e0a300; name: FUN_01e0a300
 */


undefined8 FUN_01e0a300(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_00c646d0(param_1,1,0);
  if (lVar3 == 0) {
    iVar1 = FUN_01b2cc30(param_1,1,"__tostring");
    if ((iVar1 != 0) && (iVar1 = FUN_00d34290(param_1,0xffffffff), iVar1 == 4)) {
      return 1;
    }
    uVar2 = FUN_00d34290(param_1,1);
    uVar4 = FUN_01b2ccf0(param_1,uVar2);
    lVar3 = FUN_01b2cd10(param_1,"(error object is a %s value)",uVar4);
  }
  FUN_01b2cdb0(param_1,param_1,lVar3,1);
  return 1;
}


