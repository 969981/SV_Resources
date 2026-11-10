/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043fca0; name: FUN_0043fca0
 */


int FUN_0043fca0(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  if (((param_1 == (long *)0x0) || (*param_1 == 0)) ||
     (pcVar5 = *(code **)(*param_1 + 0x28), pcVar5 == (code *)0x0)) {
    FUN_004806c0(6,0x94,0x96,"external/openssl/crypto/evp/pmeth_gn.c",0x29);
    return -2;
  }
  if ((int)param_1[4] != 2) {
    uVar3 = 0x97;
    uVar4 = 0x2e;
LAB_0043fd68:
    FUN_004806c0(6,0x94,uVar3,"external/openssl/crypto/evp/pmeth_gn.c",uVar4);
    return -1;
  }
  if (param_2 == (long *)0x0) {
    return -1;
  }
  lVar2 = *param_2;
  if (lVar2 == 0) {
    lVar2 = FUN_0043def0();
    *param_2 = lVar2;
    if (lVar2 == 0) {
      uVar3 = 0x41;
      uVar4 = 0x39;
      goto LAB_0043fd68;
    }
    pcVar5 = *(code **)(*param_1 + 0x28);
  }
  iVar1 = (*pcVar5)(param_1,lVar2);
  if (iVar1 < 1) {
    FUN_0043e1f0(*param_2);
    *param_2 = 0;
  }
  return iVar1;
}


