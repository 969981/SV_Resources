/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f44c0; name: FUN_002f44c0
 */


void FUN_002f44c0(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  char *local_d8;
  size_t local_d0;
  char *local_a8;
  undefined8 uStack_a0;
  byte local_78 [16];
  ulong local_68;
  undefined1 auStack_60 [32];
  undefined8 *local_40;
  long local_38;
  
  plVar8 = (long *)*param_3;
  local_40 = param_1;
  local_38 = param_2;
  if (plVar8 != (long *)0x0) {
    do {
      lVar7 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      FUN_00270ba4(plVar8);
      FUN_0049e790(PTR_LAB_047cba48,plVar8);
    }
  }
  puVar5 = local_40;
  *param_3 = 0;
  if (local_38 != 2) {
    FUN_003673f0(&local_a8,"Fake peers should only have 2 properties.");
    uVar6 = 0xe2;
    goto LAB_002f457c;
  }
  pcVar9 = (char *)*local_40;
  if (pcVar9 == (char *)0x0) {
    pcVar9 = "<EMPTY>";
LAB_002f4598:
    local_a8 = "Unexpected property in fake peer: ";
    uStack_a0 = 0x22;
    local_d8 = pcVar9;
    local_d0 = strlen(pcVar9);
    FUN_003959c0(local_78,&local_a8,&local_d8);
    uVar1 = (ulong)local_78 | 1;
    if ((local_78[0] & 1) != 0) {
      uVar1 = local_68;
    }
                    /* try { // try from 002f45e0 to 002f4603 has its CatchHandler @ 002f47dc */
    FUN_00367770(auStack_60,uVar1);
    uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/security_connector/fake/fake_security_connector.cc"
                         ,0xeb,auStack_60,0,0);
  }
  else {
    iVar4 = strcmp(pcVar9,"certificate_type");
    if (iVar4 != 0) goto LAB_002f4598;
    iVar4 = strncmp((char *)puVar5[1],"FAKE",puVar5[2]);
    if (iVar4 != 0) {
      FUN_003673f0(&local_a8,"Invalid value for cert type property.");
      uVar6 = 0xf1;
LAB_002f457c:
      uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/security_connector/fake/fake_security_connector.cc"
                           ,uVar6,&local_a8,0,0);
      goto LAB_002f4620;
    }
    pcVar9 = (char *)puVar5[3];
    if (pcVar9 == (char *)0x0) {
      pcVar9 = "<EMPTY>";
    }
    else {
      iVar4 = strcmp(pcVar9,"security_level");
      if (iVar4 == 0) {
        iVar4 = strncmp((char *)puVar5[4],"TSI_SECURITY_NONE",puVar5[5]);
        if (iVar4 == 0) {
          puVar5 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x30);
          if (puVar5 != (undefined8 *)0x0) {
            puVar5[5] = 0;
            *puVar5 = 1;
            puVar5[2] = 0;
            puVar5[1] = 0;
            puVar5[4] = 0;
            puVar5[3] = 0;
          }
          plVar8 = (long *)*param_3;
          if (plVar8 != (long *)0x0) {
            do {
              lVar7 = *plVar8;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar3) {
                *plVar8 = lVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar7 + -1 == 0) {
              FUN_00270ba4(plVar8);
              FUN_0049e790(PTR_LAB_047cba48,plVar8);
            }
          }
          *param_3 = puVar5;
          FUN_002ebd00(puVar5,"transport_security_type",&DAT_03c6e5e3);
          FUN_002ebd00(*param_3,"security_level","TSI_SECURITY_NONE");
          uVar6 = 0;
          goto LAB_002f4620;
        }
        FUN_003673f0(&local_a8,"Invalid value for security level property.");
        uVar6 = 0x100;
        goto LAB_002f457c;
      }
    }
    local_a8 = "Unexpected property in fake peer: ";
    uStack_a0 = 0x22;
    local_d8 = pcVar9;
    local_d0 = strlen(pcVar9);
    FUN_003959c0(local_78,&local_a8,&local_d8);
    uVar1 = (ulong)local_78 | 1;
    if ((local_78[0] & 1) != 0) {
      uVar1 = local_68;
    }
                    /* try { // try from 002f46f0 to 002f4713 has its CatchHandler @ 002f47d8 */
    FUN_00367770(auStack_60,uVar1);
    uVar6 = FUN_00351340("external/com_google_grpc_base/src/core/lib/security/security_connector/fake/fake_security_connector.cc"
                         ,0xfa,auStack_60,0,0);
  }
  if ((local_78[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_68);
  }
LAB_002f4620:
  FUN_0035351c(&local_a8,param_4,uVar6);
  FUN_0038c190(&local_40);
  return;
}


