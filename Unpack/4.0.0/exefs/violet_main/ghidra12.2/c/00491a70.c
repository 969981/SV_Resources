/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00491a70; name: FUN_00491a70
 */


undefined8 FUN_00491a70(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (param_2 != (int *)0x0) {
    FUN_003e6880(param_1,"%*s%s:\n",param_3,&DAT_03c886bc,param_4);
    if (*param_2 == 0) {
      FUN_003e6880(param_1,"%*sinherit\n",(int)param_3 + 2,&DAT_03c886bc);
    }
    else {
      if (*param_2 != 1) {
        return 0;
      }
      iVar1 = FUN_0047e430(*(undefined8 *)(param_2 + 2));
      if (0 < iVar1) {
        iVar6 = 0;
        iVar1 = (int)param_3 + 2;
        do {
          piVar3 = (int *)FUN_0047e450(*(undefined8 *)(param_2 + 2),iVar6);
          if (*piVar3 == 1) {
            lVar4 = FUN_0049ac20(0,**(undefined8 **)(piVar3 + 2));
            if (lVar4 == 0) {
              return 0;
            }
            FUN_003e6880(param_1,"%*s%s-",iVar1,&DAT_03c886bc,lVar4);
            FUN_00452f80(lVar4,"external/openssl/crypto/x509v3/v3_asid.c",0x59);
            lVar4 = FUN_0049ac20(0,*(undefined8 *)(*(long *)(piVar3 + 2) + 8));
            if (lVar4 == 0) {
              return 0;
            }
            FUN_003e6880(param_1,&DAT_03c9c9c7,lVar4);
            uVar5 = 0x5d;
          }
          else {
            if (*piVar3 != 0) {
              return 0;
            }
            lVar4 = FUN_0049ac20(0,*(undefined8 *)(piVar3 + 2));
            if (lVar4 == 0) {
              return 0;
            }
            FUN_003e6880(param_1,"%*s%s\n",iVar1,&DAT_03c886bc,lVar4);
            uVar5 = 0x53;
          }
          FUN_00452f80(lVar4,"external/openssl/crypto/x509v3/v3_asid.c",uVar5);
          iVar6 = iVar6 + 1;
          iVar2 = FUN_0047e430(*(undefined8 *)(param_2 + 2));
        } while (iVar6 < iVar2);
      }
    }
  }
  return 1;
}


