/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00461100; name: FUN_00461100
 */


undefined8 FUN_00461100(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = DAT_047f1a58;
  iVar2 = DAT_044b6238;
  if (param_3 != 0 || param_2 != 0) {
    uVar1 = param_3;
    iVar2 = param_2;
  }
  if ((*(int *)(param_1 + 0x14) != 0) &&
     ((iVar2 != *(int *)(param_1 + 0x14) || (uVar1 != *(ushort *)(param_1 + 0x1c))))) {
    (**(code **)(*(long *)(param_1 + 0x150) + 0x18))(param_1);
    FUN_00464890(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(short *)(param_1 + 0x1c) = (short)uVar1;
  *(int *)(param_1 + 0x14) = iVar2;
  if (iVar2 - 0x388U < 3) {
    uVar3 = FUN_004626c0(param_1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    *(undefined4 *)(param_1 + 0x98) = 2;
    uVar3 = 0x6b;
    uVar4 = 0x8f;
  }
  else {
    if (iVar2 == 0) {
      *(undefined8 *)(param_1 + 0x150) = 0;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined2 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    uVar3 = 0x78;
    uVar4 = 0x80;
  }
  FUN_004806c0(0x24,0x68,uVar3,"external/openssl/crypto/rand/drbg_lib.c",uVar4);
  return 0;
}


