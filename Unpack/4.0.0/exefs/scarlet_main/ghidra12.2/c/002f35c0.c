/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f35c0; name: FUN_002f35c0
 */


void FUN_002f35c0(undefined8 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  char *__s1;
  long lVar7;
  undefined8 *local_a0 [4];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  if ((((param_2 != (long *)0x0) && (lVar4 = FUN_0038c320(param_2,"certificate_type"), lVar4 != 0))
      && (iVar3 = strncmp(*(char **)(lVar4 + 8),"ALTS",*(size_t *)(lVar4 + 0x10)), iVar3 == 0)) &&
     ((lVar4 = FUN_0038c320(param_2,"security_level"), lVar4 != 0 &&
      (lVar4 = FUN_0038c320(param_2,"rpc_versions"), lVar4 != 0)))) {
    FUN_003054d0(auStack_70,2,1);
    FUN_003054f0(auStack_70,2,1);
    FUN_003676d0(local_a0,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
    uVar5 = FUN_00305600(local_a0,auStack_80);
    if ((local_a0[0] != (undefined8 *)0x0) && (plVar6 = (long *)*local_a0[0], plVar6 != (long *)0x0)
       ) {
      do {
        lVar4 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 + -1 == 0) {
        (*(code *)local_a0[0][3])(local_a0[0][4]);
      }
    }
    if ((((uVar5 & 1) != 0) && (uVar5 = FUN_00305760(auStack_70,auStack_80,0), (uVar5 & 1) != 0)) &&
       (lVar4 = FUN_0038c320(param_2,"alts_context"), lVar4 != 0)) {
      plVar6 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x30);
      if (plVar6 != (long *)0x0) {
        plVar6[5] = 0;
        *plVar6 = 1;
        plVar6[2] = 0;
        plVar6[1] = 0;
        plVar6[4] = 0;
        plVar6[3] = 0;
      }
                    /* try { // try from 002f3724 to 002f373b has its CatchHandler @ 002f3888 */
      FUN_002ebd00(plVar6,"transport_security_type",&DAT_03bfac25);
      if (param_2[1] != 0) {
        lVar4 = 0;
        uVar5 = 0;
        do {
          lVar7 = *param_2;
          __s1 = *(char **)(lVar7 + lVar4);
          iVar3 = strcmp(__s1,"service_account");
          if (iVar3 == 0) {
                    /* try { // try from 002f37c0 to 002f382f has its CatchHandler @ 002f388c */
            FUN_002ebc40(plVar6,"service_account",*(undefined8 *)(lVar7 + lVar4 + 8),
                         *(undefined8 *)(lVar7 + lVar4 + 0x10));
            iVar3 = FUN_002eba00(plVar6,"service_account");
            if (iVar3 != 1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002f387c to 002f387f has its CatchHandler @ 002f3880 */
              abort();
            }
            __s1 = *(char **)(lVar7 + lVar4);
            iVar3 = strcmp(__s1,"alts_context");
            if (iVar3 != 0) goto LAB_002f37a4;
LAB_002f37f4:
            FUN_002ebc40(plVar6,"alts_context",*(undefined8 *)(lVar7 + lVar4 + 8),
                         *(undefined8 *)(lVar7 + lVar4 + 0x10));
            iVar3 = strcmp(*(char **)(lVar7 + lVar4),"security_level");
          }
          else {
            iVar3 = strcmp(__s1,"alts_context");
            if (iVar3 == 0) goto LAB_002f37f4;
LAB_002f37a4:
            iVar3 = strcmp(__s1,"security_level");
          }
          if (iVar3 == 0) {
            FUN_002ebc40(plVar6,"security_level",*(undefined8 *)(lVar7 + lVar4 + 8),
                         *(undefined8 *)(lVar7 + lVar4 + 0x10));
          }
          uVar5 = uVar5 + 1;
          lVar4 = lVar4 + 0x18;
        } while (uVar5 < (ulong)param_2[1]);
      }
                    /* try { // try from 002f3834 to 002f383b has its CatchHandler @ 002f3884 */
      iVar3 = FUN_002ebc10(plVar6);
      if (iVar3 != 0) {
        *param_1 = plVar6;
        return;
      }
      if (plVar6 != (long *)0x0) {
        do {
          lVar4 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar4 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar4 + -1 == 0) {
          FUN_00270ba4(plVar6);
          FUN_0049e790(PTR_LAB_047cba48,plVar6);
        }
      }
    }
  }
  *param_1 = 0;
  return;
}


