/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040dd90; name: FUN_0040dd90
 */


undefined8
FUN_0040dd90(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  lVar4 = *param_1;
  if (*(long *)(lVar4 + 0x90) == 0) {
    uVar2 = 0x42;
    uVar3 = 0x34b;
    goto LAB_0040dde4;
  }
  if (lVar4 != *param_2) {
LAB_0040ddb8:
    uVar2 = 0x65;
    uVar3 = 0x34f;
LAB_0040dde4:
    FUN_004806c0(0x10,0x125,uVar2,"external/openssl/crypto/ec/ec_lib.c",uVar3);
    return 0;
  }
  iVar1 = (int)param_1[4];
  if (iVar1 == 0) {
    pcVar5 = *(code **)(lVar4 + 200);
    if (pcVar5 != (code *)0x0) {
LAB_0040de60:
      iVar1 = (*pcVar5)(param_1,param_2);
      if (iVar1 == 0) goto LAB_0040dea4;
      uVar2 = 0x6a;
      uVar3 = 0x353;
      goto LAB_0040dde4;
    }
LAB_0040de88:
    uVar2 = 0x42;
    uVar3 = 0x399;
  }
  else {
    if (((int)param_2[1] != 0) && (iVar1 != (int)param_2[1])) goto LAB_0040ddb8;
    pcVar5 = *(code **)(lVar4 + 200);
    if (pcVar5 == (code *)0x0) goto LAB_0040de88;
    if (((int)param_2[1] == 0) || (iVar1 == (int)param_2[1])) goto LAB_0040de60;
    uVar2 = 0x65;
    uVar3 = 0x39d;
  }
  FUN_004806c0(0x10,0x76,uVar2,"external/openssl/crypto/ec/ec_lib.c",uVar3);
LAB_0040dea4:
                    /* WARNING: Could not recover jumptable at 0x0040decc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x90))(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}


