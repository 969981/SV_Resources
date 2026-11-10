/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002fe860; name: FUN_002fe860
 */


undefined4 FUN_002fe860(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  undefined8 local_38;
  
  FUN_003eaa20();
  uVar4 = FUN_003e8a30();
  iVar1 = FUN_0047e430(param_1);
  if (0 < iVar1) {
    iVar7 = 0;
    do {
      uVar5 = FUN_0047e450(param_1,iVar7);
      iVar2 = FUN_0045f880(uVar4,uVar5);
      if (iVar2 == 0) {
        FUN_003e8b90(uVar4);
        return 7;
      }
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
  }
  lVar6 = FUN_003e9560(uVar4,3,0,&local_38);
  if (lVar6 < 1) {
    uVar3 = 7;
  }
  else {
    uVar3 = FUN_0038c280("x509_pem_cert_chain",local_38,lVar6,param_2);
  }
  FUN_003e8b90(uVar4);
  return uVar3;
}


