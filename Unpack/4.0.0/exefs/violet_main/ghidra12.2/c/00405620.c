/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00405620; name: FUN_00405620
 */


long FUN_00405620(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = *param_2;
  piVar1 = (int *)FUN_003e1880(0,&local_28,param_3,PTR_DAT_047cd290);
  if (piVar1 == (int *)0x0) {
    FUN_004806c0(0x10,0x91,0x75,"external/openssl/crypto/ec/ec_asn1.c",0x3b7);
    FUN_003e4550(0,PTR_DAT_047cd290);
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_00405510();
    if (lVar2 == 0) {
      FUN_004806c0(0x10,0x91,0x7f,"external/openssl/crypto/ec/ec_asn1.c",0x3bd);
      FUN_003e4550(piVar1,PTR_DAT_047cd290);
    }
    else {
      if (*piVar1 == 1) {
        *(undefined4 *)(lVar2 + 0x28) = 1;
      }
      if (param_1 != (long *)0x0) {
        FUN_0040ca30(*param_1);
        *param_1 = lVar2;
      }
      FUN_003e4550(piVar1,PTR_DAT_047cd290);
      *param_2 = local_28;
    }
  }
  return lVar2;
}


