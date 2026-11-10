/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040ca30; name: FUN_0040ca30
 */


void FUN_0040ca30(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if (*(code **)(*param_1 + 0x10) != (code *)0x0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  if ((int)param_1[0x13] == 5) {
    FUN_0040e5d0(param_1[0x14]);
  }
  param_1[0x14] = 0;
  FUN_003eccf0(param_1[0x12]);
  plVar1 = (long *)param_1[1];
  if (plVar1 != (long *)0x0) {
    if (*(code **)(*plVar1 + 0x58) != (code *)0x0) {
      (**(code **)(*plVar1 + 0x58))(plVar1);
    }
    FUN_00452f80(plVar1,"external/openssl/crypto/ec/ec_lib.c",0x2af);
  }
  FUN_003eb520(param_1[2]);
  FUN_003eb520(param_1[3]);
  FUN_00452f80(param_1[6],"external/openssl/crypto/ec/ec_lib.c",0x6b);
  FUN_00452f80(param_1,"external/openssl/crypto/ec/ec_lib.c",0x6c);
  return;
}


