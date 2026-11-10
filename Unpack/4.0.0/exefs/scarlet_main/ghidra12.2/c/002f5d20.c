/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f5d20; name: FUN_002f5d20
 */


void FUN_002f5d20(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  char *__s1;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  long local_f8;
  long local_e8;
  int local_dc;
  ulong local_d8 [3];
  long *plStack_c0;
  ulong local_b8;
  byte local_b0 [16];
  undefined8 local_a0;
  long local_80;
  long local_78;
  undefined1 auStack_68 [8];
  
  if (param_2[1] == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x30);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[5] = 0;
    *puVar4 = 1;
    puVar4[2] = 0;
    puVar4[1] = 0;
    puVar4[4] = 0;
    puVar4[3] = 0;
  }
  *param_1 = puVar4;
                    /* try { // try from 002f5d84 to 002f5d97 has its CatchHandler @ 002f613c */
  FUN_002ebd00(puVar4,"transport_security_type",param_3);
  if (param_2[1] != 0) {
    lVar11 = 0;
    uVar7 = 0;
    bVar1 = 0;
    pcVar8 = (char *)0x0;
    local_dc = 0;
    local_f8 = 0;
    local_e8 = 0;
    do {
      lVar10 = *param_2;
      __s1 = *(char **)(lVar10 + lVar11);
      if (__s1 != (char *)0x0) {
        iVar3 = strcmp(__s1,"x509_subject_common_name");
        pcVar9 = pcVar8;
        if (iVar3 == 0) {
          pcVar9 = "x509_common_name";
          if (pcVar8 != (char *)0x0) {
            pcVar9 = pcVar8;
          }
                    /* try { // try from 002f5fa0 to 002f6013 has its CatchHandler @ 002f6140 */
          FUN_002ebc40(puVar4,"x509_common_name",*(undefined8 *)(lVar10 + lVar11 + 8),
                       *(undefined8 *)(lVar10 + lVar11 + 0x10));
          goto LAB_002f5fa8;
        }
        iVar3 = strcmp(__s1,"x509_subject_alternative_name");
        if (iVar3 == 0) {
                    /* try { // try from 002f5de0 to 002f5deb has its CatchHandler @ 002f6140 */
          FUN_002ebc40(puVar4,"x509_subject_alternative_name",*(undefined8 *)(lVar10 + lVar11 + 8),
                       *(undefined8 *)(lVar10 + lVar11 + 0x10));
          pcVar8 = "x509_subject_alternative_name";
        }
        else {
          iVar3 = strcmp(__s1,"x509_pem_cert");
          if (iVar3 == 0) {
            FUN_002ebc40(puVar4,"x509_pem_cert",*(undefined8 *)(lVar10 + lVar11 + 8),
                         *(undefined8 *)(lVar10 + lVar11 + 0x10));
          }
          else {
            iVar3 = strcmp(__s1,"x509_pem_cert_chain");
            if (iVar3 == 0) {
              FUN_002ebc40(puVar4,"x509_pem_cert_chain",*(undefined8 *)(lVar10 + lVar11 + 8),
                           *(undefined8 *)(lVar10 + lVar11 + 0x10));
            }
            else {
              iVar3 = strcmp(__s1,"ssl_session_reused");
              if (iVar3 == 0) {
                FUN_002ebc40(puVar4,"ssl_session_reused",*(undefined8 *)(lVar10 + lVar11 + 8),
                             *(undefined8 *)(lVar10 + lVar11 + 0x10));
              }
              else {
                iVar3 = strcmp(__s1,"security_level");
                if (iVar3 == 0) {
                  FUN_002ebc40(puVar4,"security_level",*(undefined8 *)(lVar10 + lVar11 + 8),
                               *(undefined8 *)(lVar10 + lVar11 + 0x10));
                }
                else {
                  iVar3 = strcmp(__s1,"x509_uri");
                  if (iVar3 == 0) {
                    local_dc = local_dc + 1;
                    lVar10 = lVar10 + lVar11;
                    uVar5 = *(ulong *)(lVar10 + 0x10);
                    if (((uVar5 < 9) || (0x800 < uVar5)) ||
                       (plVar6 = *(long **)(lVar10 + 8),
                       *plVar6 != 0x2f3a656666697073 || (char)plVar6[1] != '/')) goto LAB_002f5df4;
                    local_d8[0] = 0;
                    local_d8[1] = 0;
                    local_d8[2] = 0;
                    /* try { // try from 002f5f0c to 002f5f1b has its CatchHandler @ 002f6114 */
                    plStack_c0 = plVar6;
                    local_b8 = uVar5;
                    FUN_002f6400(local_b0,local_d8,0x2f);
                    /* try { // try from 002f5f1c to 002f5f2b has its CatchHandler @ 002f60dc */
                    FUN_002f651c(&local_80,auStack_68,local_b0);
                    if ((local_b0[0] & 1) != 0) {
                      FUN_0049e790(PTR_LAB_047cba48,local_a0);
                    }
                    if ((local_d8[0] & 1) != 0) {
                      FUN_0049e790(PTR_LAB_047cba48,local_d8[2]);
                    }
                    if (((ulong)(local_78 - local_80 >> 4) < 4) || (*(long *)(local_80 + 0x38) == 0)
                       ) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = *(ulong *)(local_80 + 0x28) < 0x100;
                    }
                    if (local_80 != 0) {
                      local_78 = local_80;
                      FUN_0049e790(PTR_LAB_047cba48);
                    }
                    if (bVar2) {
                      bVar1 = 1;
                      local_e8 = *(long *)(lVar10 + 8);
                      local_f8 = *(long *)(lVar10 + 0x10);
                    }
                  }
LAB_002f5fa8:
                  pcVar8 = pcVar9;
                }
              }
            }
          }
        }
      }
LAB_002f5df4:
      uVar7 = uVar7 + 1;
      lVar11 = lVar11 + 0x18;
    } while (uVar7 < (ulong)param_2[1]);
                    /* try { // try from 002f605c to 002f60ab has its CatchHandler @ 002f6138 */
    if ((pcVar8 != (char *)0x0) && (iVar3 = FUN_002eba00(puVar4,pcVar8), iVar3 != 1)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002f60d0 to 002f60db has its CatchHandler @ 002f6138 */
      abort();
    }
    if (local_dc == 1 && !(bool)(bVar1 ^ 1)) {
      if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (local_e8 == 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_002ebc40(puVar4,"peer_spiffe_id",local_e8,local_f8);
    }
  }
  return;
}


