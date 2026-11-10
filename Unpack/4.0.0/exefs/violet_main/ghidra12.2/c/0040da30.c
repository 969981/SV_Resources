/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040da30; name: FUN_0040da30
 */


undefined8 FUN_0040da30(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (*(code **)(lVar3 + 0xd8) == (code *)0x0) {
    FUN_004806c0(0x10,0x71,0x42,"external/openssl/crypto/ec/ec_lib.c",0x3bc);
    return 0xffffffff;
  }
  if (lVar3 == *param_2) {
    iVar1 = (int)param_1[4];
    if (iVar1 == 0) {
      if (lVar3 == *param_3) goto LAB_0040dae0;
    }
    else if (((((int)param_2[1] == 0) || (iVar1 == (int)param_2[1])) && (lVar3 == *param_3)) &&
            (((int)param_3[1] == 0 || (iVar1 == (int)param_3[1])))) {
LAB_0040dae0:
                    /* WARNING: Could not recover jumptable at 0x0040dae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(lVar3 + 0xd8))();
      return uVar2;
    }
  }
  FUN_004806c0(0x10,0x71,0x65,"external/openssl/crypto/ec/ec_lib.c",0x3c0);
  return 0xffffffff;
}


