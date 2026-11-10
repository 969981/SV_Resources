/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0032ea5c; name: FUN_0032ea5c
 */


void FUN_0032ea5c(undefined8 *param_1,int *param_2,long *param_3)

{
  int *piVar1;
  byte bVar2;
  ulong *puVar3;
  int iVar4;
  char *__s2;
  char *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *puVar9;
  byte *__s1;
  byte *pbVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  ulong *puVar14;
  byte local_a8 [16];
  ulong local_98;
  undefined1 auStack_90 [32];
  byte *local_70;
  undefined *puStack_68;
  
  if (DAT_047ef4b0 == (ulong *)0x0) {
LAB_0032eda4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*param_2 == 6) {
    piVar1 = *(int **)(param_2 + 0x10);
    for (piVar12 = *(int **)(param_2 + 0xe); puVar3 = DAT_047ef4b0, piVar12 != piVar1;
        piVar12 = piVar12 + 0x14) {
      if (*piVar12 != 5) {
        FUN_003673f0(auStack_90,"child entry should be of type object");
        uVar7 = 0x84;
        goto LAB_0032ec28;
      }
      if (*(long *)(piVar12 + 0xc) != 1) {
        if (*(long *)(piVar12 + 0xc) == 0) {
          FUN_003673f0(auStack_90,"no policy found in child entry");
          uVar7 = 0x88;
        }
        else {
          FUN_003673f0(auStack_90,"oneOf violation");
          uVar7 = 0x8b;
        }
        goto LAB_0032ec28;
      }
      lVar11 = *(long *)(piVar12 + 8);
      if (*(int *)(lVar11 + 0x38) != 5) {
        FUN_003673f0(auStack_90,"child entry should be of type object");
        uVar7 = 0x90;
        goto LAB_0032ec28;
      }
      if ((*(byte *)(lVar11 + 0x20) & 1) == 0) {
        pcVar5 = (char *)(lVar11 + 0x21);
      }
      else {
        pcVar5 = *(char **)(lVar11 + 0x30);
      }
      if (DAT_047ef4b0 == (ulong *)0x0) goto LAB_0032eda4;
      uVar8 = *DAT_047ef4b0;
      if (1 < uVar8) {
        uVar13 = 0;
        puVar14 = DAT_047ef4b0 + 1;
        do {
          puVar9 = puVar14;
          if ((uVar8 & 1) != 0) {
            puVar9 = (ulong *)puVar3[1];
          }
          __s2 = (char *)(**(code **)(*(long *)puVar9[uVar13] + 0x18))();
          iVar4 = strcmp(pcVar5,__s2);
          if (iVar4 == 0) {
            if ((*puVar3 & 1) != 0) {
              puVar14 = (ulong *)puVar3[1];
            }
            if (puVar14[uVar13] != 0) {
              *param_3 = 0;
              pbVar10 = (byte *)(lVar11 + 0x20);
              bVar2 = *pbVar10;
              puVar3 = DAT_047ef4b0;
              goto joined_r0x0032ec4c;
            }
            break;
          }
          uVar8 = *puVar3;
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar8 >> 1);
      }
    }
    FUN_003673f0(auStack_90,"No known policy");
    uVar7 = 0x99;
  }
  else {
    FUN_003673f0(auStack_90,"type should be array");
    uVar7 = 0x7e;
  }
LAB_0032ec28:
  lVar11 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy_registry.cc"
                        ,uVar7,auStack_90,0,0);
  *param_3 = lVar11;
  if (lVar11 == 0) {
    lVar11 = 0;
    pbVar10 = &DAT_00000020;
    puVar3 = DAT_047ef4b0;
    bVar2 = DAT_00000020;
joined_r0x0032ec4c:
    if ((bVar2 & 1) == 0) {
      __s1 = pbVar10 + 1;
      uVar8 = *puVar3;
    }
    else {
      __s1 = *(byte **)(lVar11 + 0x30);
      uVar8 = *puVar3;
    }
    DAT_047ef4b0 = puVar3;
    if (1 < uVar8) {
      uVar13 = 0;
      puVar14 = puVar3 + 1;
      do {
        puVar9 = puVar14;
        if ((uVar8 & 1) != 0) {
          puVar9 = (ulong *)puVar3[1];
        }
        pcVar5 = (char *)(**(code **)(*(long *)puVar9[uVar13] + 0x18))();
        iVar4 = strcmp((char *)__s1,pcVar5);
        if (iVar4 == 0) {
          if ((*puVar3 & 1) != 0) {
            puVar14 = (ulong *)puVar3[1];
          }
          plVar6 = (long *)puVar14[uVar13];
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x20))(param_1,plVar6,lVar11 + 0x38,param_3);
            return;
          }
          break;
        }
        uVar8 = *puVar3;
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar8 >> 1);
    }
    puStack_68 = PTR_FUN_047cc5f8;
    local_70 = pbVar10;
    FUN_00391b20(local_a8,"Factory not found for policy \"%s\"",0x21,&local_70,1);
    uVar8 = (ulong)local_a8 | 1;
    if ((local_a8[0] & 1) != 0) {
      uVar8 = local_98;
    }
                    /* try { // try from 0032ed40 to 0032ed63 has its CatchHandler @ 0032eda8 */
    FUN_00367770(auStack_90,uVar8);
    lVar11 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy_registry.cc"
                          ,0xae,auStack_90,0,0);
    *param_3 = lVar11;
    if ((local_a8[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_98);
    }
  }
  *param_1 = 0;
  return;
}


