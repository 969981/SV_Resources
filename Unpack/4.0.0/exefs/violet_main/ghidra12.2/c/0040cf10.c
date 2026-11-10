/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040cf10; name: FUN_0040cf10
 */


long * FUN_0040cf10(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1 == (long *)0x0) {
    uVar3 = 0x43;
    uVar4 = 0x28f;
  }
  else {
    if (*(long *)(*param_1 + 0x50) != 0) {
      plVar2 = (long *)FUN_00452ce0(0x30,"external/openssl/crypto/ec/ec_lib.c",0x297);
      if (plVar2 == (long *)0x0) {
        FUN_004806c0(0x10,0x79,0x41,"external/openssl/crypto/ec/ec_lib.c",0x299);
        return (long *)0x0;
      }
      lVar5 = *param_1;
      *plVar2 = lVar5;
      *(int *)(plVar2 + 1) = (int)param_1[4];
      iVar1 = (**(code **)(lVar5 + 0x50))(plVar2);
      if (iVar1 == 0) {
        FUN_00452f80(plVar2,"external/openssl/crypto/ec/ec_lib.c",0x2a1);
        return (long *)0x0;
      }
      return plVar2;
    }
    uVar3 = 0x42;
    uVar4 = 0x293;
  }
  FUN_004806c0(0x10,0x79,uVar3,"external/openssl/crypto/ec/ec_lib.c",uVar4);
  return (long *)0x0;
}


