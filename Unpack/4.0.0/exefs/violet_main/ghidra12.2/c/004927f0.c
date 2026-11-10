/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004927f0; name: FUN_004927f0
 */


void FUN_004927f0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  
  iVar3 = FUN_0047e430(param_2);
  if (0 < iVar3) {
    iVar11 = 0;
    iVar3 = param_3 + 2;
    do {
      puVar6 = (undefined8 *)FUN_0047e450(param_2,iVar11);
      iVar4 = FUN_0045bea0(*puVar6);
      if (iVar4 == 0xa5) {
        FUN_003e6880(param_1,"%*sUser Notice:\n",param_3,&DAT_03c886bc);
        puVar6 = (undefined8 *)puVar6[1];
        puVar12 = (undefined8 *)*puVar6;
        if (puVar12 != (undefined8 *)0x0) {
          FUN_003e6880(param_1,"%*sOrganization: %.*s\n",iVar3,&DAT_03c886bc,*(undefined4 *)*puVar12
                       ,*(undefined8 *)((undefined4 *)*puVar12 + 2));
          iVar4 = FUN_0047e430(puVar12[1]);
          puVar1 = &DAT_03c019c9;
          if (iVar4 < 2) {
            puVar1 = &DAT_03c886bc;
          }
          FUN_003e6880(param_1,"%*sNumber%s: ",iVar3,&DAT_03c886bc,puVar1);
          iVar4 = FUN_0047e430(puVar12[1]);
          if (0 < iVar4) {
            iVar4 = 0;
            do {
              lVar7 = FUN_0047e450(puVar12[1],iVar4);
              if (iVar4 != 0) {
                FUN_003e9110(param_1,&DAT_03c82382);
              }
              if (lVar7 == 0) {
                FUN_003e9110(param_1,"(null)");
              }
              else {
                lVar7 = FUN_0049ac20(0,lVar7);
                if (lVar7 == 0) goto LAB_00492880;
                FUN_003e9110(param_1,lVar7);
                FUN_00452f80(lVar7,"external/openssl/crypto/x509v3/v3_cpols.c",0x1d5);
              }
              iVar4 = iVar4 + 1;
              iVar5 = FUN_0047e430(puVar12[1]);
            } while (iVar4 < iVar5);
          }
          FUN_003e9110(param_1,&DAT_03c67c74);
        }
        puVar10 = (undefined4 *)puVar6[1];
        if (puVar10 != (undefined4 *)0x0) {
          uVar2 = *puVar10;
          pcVar8 = "%*sExplicit Text: %.*s\n";
          uVar9 = *(undefined8 *)(puVar10 + 2);
          iVar4 = iVar3;
          goto LAB_00492a1c;
        }
      }
      else if (iVar4 == 0xa4) {
        pcVar8 = "%*sCPS: %.*s\n";
        uVar2 = *(undefined4 *)puVar6[1];
        uVar9 = *(undefined8 *)((undefined4 *)puVar6[1] + 2);
        iVar4 = param_3;
LAB_00492a1c:
        FUN_003e6880(param_1,pcVar8,iVar4,&DAT_03c886bc,uVar2,uVar9);
      }
      else {
        FUN_003e6880(param_1,"%*sUnknown Qualifier: ",iVar3,&DAT_03c886bc);
        FUN_003dfa30(param_1,*puVar6);
        FUN_003e9110(param_1,&DAT_03c67c74);
      }
LAB_00492880:
      iVar11 = iVar11 + 1;
      iVar4 = FUN_0047e430(param_2);
    } while (iVar11 < iVar4);
  }
  return;
}


