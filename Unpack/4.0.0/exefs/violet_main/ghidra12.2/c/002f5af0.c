/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f5af0; name: FUN_002f5af0
 */


undefined1  [16] FUN_002f5af0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  FUN_002ebc20(&local_98);
  lVar5 = -0x18;
  lVar6 = 1;
  local_70 = local_88;
  uStack_78 = uStack_90;
  local_80 = local_98;
  do {
    lVar2 = FUN_002ebb30(&local_80);
    lVar6 = lVar6 + -1;
    lVar5 = lVar5 + 0x18;
  } while (lVar2 != 0);
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_0038c780(lVar5);
    FUN_002ebc20(&local_98,param_1);
    local_70 = local_88;
    uStack_78 = uStack_90;
    local_80 = local_98;
    puVar3 = (undefined8 *)FUN_002ebb30(&local_80);
    if (puVar3 != (undefined8 *)0x0) {
      lVar6 = 0;
      do {
        while( true ) {
          pcVar7 = (char *)*puVar3;
          iVar1 = strcmp(pcVar7,"x509_subject_alternative_name");
          if (iVar1 != 0) break;
          pcVar7 = "x509_subject_alternative_name";
LAB_002f5c64:
          puVar4 = (undefined8 *)(lVar5 + lVar6 * 0x18);
          lVar6 = lVar6 + 1;
          *puVar4 = pcVar7;
          uVar8 = puVar3[1];
          puVar4[2] = puVar3[2];
          puVar4[1] = uVar8;
          puVar3 = (undefined8 *)FUN_002ebb30(&local_80);
          if (puVar3 == (undefined8 *)0x0) goto LAB_002f5c94;
        }
        iVar1 = strcmp(pcVar7,"x509_common_name");
        if (iVar1 == 0) {
          pcVar7 = "x509_subject_common_name";
          goto LAB_002f5c64;
        }
        iVar1 = strcmp(pcVar7,"x509_pem_cert");
        if (iVar1 == 0) {
          pcVar7 = "x509_pem_cert";
          goto LAB_002f5c64;
        }
        iVar1 = strcmp(pcVar7,"security_level");
        if (iVar1 == 0) {
          pcVar7 = "security_level";
          goto LAB_002f5c64;
        }
        iVar1 = strcmp(pcVar7,"x509_pem_cert_chain");
        if (iVar1 == 0) {
          pcVar7 = "x509_pem_cert_chain";
          goto LAB_002f5c64;
        }
        iVar1 = strcmp(pcVar7,"peer_spiffe_id");
        if (iVar1 == 0) {
          pcVar7 = "x509_uri";
          goto LAB_002f5c64;
        }
        puVar3 = (undefined8 *)FUN_002ebb30(&local_80);
      } while (puVar3 != (undefined8 *)0x0);
      goto LAB_002f5c94;
    }
  }
  lVar6 = 0;
LAB_002f5c94:
  auVar9._8_8_ = lVar6;
  auVar9._0_8_ = lVar5;
  return auVar9;
}


