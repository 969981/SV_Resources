/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00484b70; name: FUN_00484b70
 */


bool FUN_00484b70(long param_1,long param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  
  bVar1 = false;
  if (param_2 != 0) {
    piVar3 = (int *)FUN_00452ce0(0x10,"external/openssl/crypto/x509/x509_lu.c",0x1ba);
    if (piVar3 == (int *)0x0) {
      FUN_004806c0(0xb,0x96,0x41,"external/openssl/crypto/x509/x509_lu.c",0x1bd);
      bVar1 = false;
    }
    else {
      *piVar3 = 0;
      if (param_3 == 0) {
        *(long *)(piVar3 + 2) = param_2;
        *piVar3 = 1;
        iVar2 = FUN_00485cf0(param_2);
      }
      else {
        *(long *)(piVar3 + 2) = param_2;
        *piVar3 = 2;
        iVar2 = FUN_0048a320(param_2);
      }
      if (iVar2 == 0) {
        *piVar3 = 0;
        FUN_00452f80(piVar3,"external/openssl/crypto/x509/x509_lu.c",0x1ed);
        bVar1 = false;
      }
      else {
        FUN_0047e5e0(*(undefined8 *)(param_1 + 0x90));
        lVar4 = FUN_00485280(*(undefined8 *)(param_1 + 8),piVar3);
        if (lVar4 == 0) {
          iVar2 = FUN_0047e2f0(*(undefined8 *)(param_1 + 8),piVar3);
          bVar1 = iVar2 != 0;
          FUN_0047e600(*(undefined8 *)(param_1 + 0x90));
          if (iVar2 != 0) {
            return bVar1;
          }
        }
        else {
          FUN_0047e600(*(undefined8 *)(param_1 + 0x90));
          bVar1 = true;
        }
        if (*piVar3 == 2) {
          FUN_0048b0c0(*(undefined8 *)(piVar3 + 2));
        }
        else if (*piVar3 == 1) {
          FUN_0048c830(*(undefined8 *)(piVar3 + 2));
        }
        FUN_00452f80(piVar3,"external/openssl/crypto/x509/x509_lu.c",0x1ed);
      }
    }
  }
  return bVar1;
}


