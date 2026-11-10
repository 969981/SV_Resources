/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e00a0; name: FUN_003e00a0
 */


int * FUN_003e00a0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  
  if (((param_3 == (long *)0x0) || (piVar2 = (int *)*param_3, piVar2 == (int *)0x0)) &&
     (piVar2 = (int *)FUN_003df280(), piVar2 == (int *)0x0)) {
    FUN_004806c0(0xd,0xc6,0x41,"external/openssl/crypto/asn1/asn_pack.c",0x16);
    return (int *)0x0;
  }
  plVar3 = (long *)(piVar2 + 2);
  FUN_00452f80(*plVar3,"external/openssl/crypto/asn1/asn_pack.c",0x1d);
  *plVar3 = 0;
  iVar1 = FUN_003e3920(param_1,plVar3,param_2);
  *piVar2 = iVar1;
  if (iVar1 == 0) {
    FUN_004806c0(0xd,0xc6,0x70,"external/openssl/crypto/asn1/asn_pack.c",0x21);
  }
  else {
    if (*plVar3 != 0) {
      if (param_3 == (long *)0x0) {
        return piVar2;
      }
      if (*param_3 == 0) {
        *param_3 = (long)piVar2;
        return piVar2;
      }
      return piVar2;
    }
    FUN_004806c0(0xd,0xc6,0x41,"external/openssl/crypto/asn1/asn_pack.c",0x25);
  }
  if ((param_3 == (long *)0x0) || (*param_3 == 0)) {
    FUN_003df2e0(piVar2);
  }
  return (int *)0x0;
}


