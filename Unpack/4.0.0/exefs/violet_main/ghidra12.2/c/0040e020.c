/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040e020; name: FUN_0040e020
 */


undefined8 FUN_0040e020(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (*(code **)(lVar4 + 0xb8) == (code *)0x0) {
    uVar2 = 0x42;
    uVar3 = 0x37e;
  }
  else {
    if (lVar4 == *param_2) {
      iVar1 = (int)param_1[4];
      if (iVar1 == 0) {
        if (lVar4 == *param_3) goto LAB_0040e0c0;
      }
      else if (((((int)param_2[1] == 0) || (iVar1 == (int)param_2[1])) && (lVar4 == *param_3)) &&
              (((int)param_3[1] == 0 || (iVar1 == (int)param_3[1])))) {
LAB_0040e0c0:
                    /* WARNING: Could not recover jumptable at 0x0040e0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(lVar4 + 0xb8))();
        return uVar2;
      }
    }
    uVar2 = 0x65;
    uVar3 = 0x382;
  }
  FUN_004806c0(0x10,0x73,uVar2,"external/openssl/crypto/ec/ec_lib.c",uVar3);
  return 0;
}


