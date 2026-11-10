/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0042beb0; name: FUN_0042beb0
 */


undefined4 FUN_0042beb0(long *param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (((param_3 >> 0x1f != 0) || (((uint)*(undefined8 *)(*param_1 + 0x10) >> 1 & 1) == 0)) ||
     (iVar1 = (**(code **)(*param_1 + 0x48))(param_1,3,param_3,0), iVar1 == 0)) {
    FUN_004806c0(6,0xae,0xb2,"external/openssl/crypto/evp/digest.c",200);
    return 0;
  }
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
  lVar3 = *param_1;
  if (*(code **)(lVar3 + 0x38) != (code *)0x0) {
    (**(code **)(lVar3 + 0x38))(param_1);
    FUN_0043b7a0(param_1,2);
    lVar3 = *param_1;
  }
  FUN_00453300(param_1[3],(long)*(int *)(lVar3 + 0x44));
  return uVar2;
}


