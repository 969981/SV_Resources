/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00461890; name: FUN_00461890
 */


bool FUN_00461890(long param_1,long param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_004806c0(0x24,0x66,0x44,"external/openssl/crypto/rand/drbg_lib.c",0x1e8);
    *(undefined4 *)(param_1 + 0x98) = 2;
    FUN_00464890(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
    return false;
  }
  if (param_2 != 0) {
    if (param_4 == 0) {
      if (*(ulong *)(param_1 + 0x68) < param_3) {
        uVar5 = 0x205;
        uVar4 = 0x66;
        goto LAB_00461964;
      }
      goto LAB_004619a0;
    }
    if (*(ulong *)(param_1 + 0x48) < param_3) {
      uVar4 = 0x6a;
      uVar5 = 499;
LAB_00461964:
      FUN_004806c0(0x24,0x66,uVar4,"external/openssl/crypto/rand/drbg_lib.c",uVar5);
      *(undefined4 *)(param_1 + 0x98) = 2;
      return false;
    }
    if (param_3 * 8 < param_4) {
      uVar5 = 0x1f9;
      uVar4 = 0x7c;
      goto LAB_00461964;
    }
    lVar3 = FUN_00464c70(param_2,param_3,param_4);
    *(long *)(param_1 + 0x20) = lVar3;
    if (lVar3 == 0) {
      return false;
    }
    param_2 = 0;
  }
  param_3 = 0;
LAB_004619a0:
  iVar2 = *(int *)(param_1 + 0x98);
  if (iVar2 == 2) {
    if (*(long *)(param_1 + 0x150) == 0) {
      *(undefined4 *)(param_1 + 0x98) = 2;
      FUN_004806c0(0x24,0x76,0x80,"external/openssl/crypto/rand/drbg_lib.c",0x183);
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x150) + 0x18))(param_1);
      FUN_00461100(param_1,*(undefined4 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x1c));
    }
    iVar2 = *(int *)(param_1 + 0x98);
  }
  if (iVar2 == 0) {
    FUN_00461410(param_1,"OpenSSL NIST SP 800-90A DRBG",0x1c);
    iVar2 = *(int *)(param_1 + 0x98);
    bVar1 = iVar2 == 1;
  }
  else {
    bVar1 = false;
  }
  if (iVar2 == 1) {
    if (param_2 == 0) {
      if ((!bVar1) && (iVar2 = FUN_004616c0(param_1,0,0,0), iVar2 == 0)) {
        FUN_004806c0(0x24,0x66,0x76,"external/openssl/crypto/rand/drbg_lib.c",0x22b);
      }
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x150) + 8))(param_1,param_2,param_3,0,0);
    }
  }
  FUN_00464890(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  return *(int *)(param_1 + 0x98) == 1;
}


