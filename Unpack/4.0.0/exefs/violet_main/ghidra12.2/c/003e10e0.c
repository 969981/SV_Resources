/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e10e0; name: FUN_003e10e0
 */


int * FUN_003e10e0(undefined8 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 == (int *)0x0) {
    piVar2 = (int *)FUN_003df380(2);
    if (piVar2 == (int *)0x0) {
      FUN_004806c0(0xd,0xe5,0x3a,"external/openssl/crypto/asn1/a_int.c",0x1cf);
      return (int *)0x0;
    }
  }
  else {
    param_2[1] = 2;
    piVar2 = param_2;
  }
  iVar1 = FUN_003ec670(param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_003eb480(param_1), iVar1 == 0)) {
    piVar2[1] = piVar2[1] | 0x102;
  }
  iVar1 = FUN_003eb2b0(param_1);
  if (iVar1 + 0xeU < 0xf) {
    iVar3 = 1;
  }
  else {
    iVar3 = iVar1 + 0xe;
    if (-1 < iVar1 + 7) {
      iVar3 = iVar1 + 7;
    }
    iVar3 = iVar3 >> 3;
  }
  iVar1 = FUN_003df070(piVar2,0,iVar3);
  if (iVar1 != 0) {
    iVar1 = FUN_003eb480(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_003ebe40(param_1);
      *piVar2 = iVar1;
      return piVar2;
    }
    **(undefined1 **)(piVar2 + 2) = 0;
    *piVar2 = iVar3;
    return piVar2;
  }
  FUN_004806c0(0xd,0xe5,0x41,"external/openssl/crypto/asn1/a_int.c",0x1dc);
  if (piVar2 != param_2) {
    thunk_FUN_003df2e0(piVar2);
  }
  return (int *)0x0;
}


