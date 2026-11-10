/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002bc68c; name: FUN_002bc68c
 */


void FUN_002bc68c(long *param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  char *pcVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  void *__s1;
  char *__s2;
  long *plVar16;
  long *local_e0;
  long local_d8;
  long *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 *local_90 [4];
  undefined1 auStack_70 [24];
  long local_58;
  char local_44 [4];
  
  lVar9 = *(long *)(*(long *)(param_1[2] + 0x18) + 0x38);
  if (((lVar9 == 0) || (*(long **)(lVar9 + 0x10) != param_1)) ||
     (plVar16 = param_1 + 0xd, *plVar16 == 0)) {
    plVar16 = param_1 + 1;
    do {
      lVar9 = *plVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      FUN_0049e790(PTR_LAB_047cba48,param_1);
      return;
    }
    return;
  }
  FUN_0036a9d0(auStack_70);
  FUN_0036aad0(local_90,auStack_70);
  FUN_0036aa00(auStack_70);
  FUN_0036a810(param_1[0xd]);
  param_1[0xd] = 0;
  local_44[0] = '\0';
  local_d8 = 0;
  local_d0 = (long *)0x0;
                    /* try { // try from 002bc750 to 002bc773 has its CatchHandler @ 002bcae4 */
  local_e0 = &local_d8;
  uVar7 = FUN_002abb24(*(long *)(*(long *)(param_1[2] + 0x18) + 0x10) + 0x38,local_90,local_44,
                       &local_e0,&local_58);
  cVar4 = local_44[0];
  if (uVar7 == 0) {
    *(undefined1 *)(param_1 + 3) = 1;
    if (PTR_DAT_047cc7c8[0x10] != '\0') {
      plVar14 = local_e0;
      while (plVar14 != &local_d8) {
        plVar15 = (long *)plVar14[1];
        if ((long *)plVar14[1] == (long *)0x0) {
          plVar15 = plVar14 + 2;
          if (*(long **)*plVar15 == plVar14) {
            plVar14 = (long *)*plVar15;
          }
          else {
            do {
              lVar9 = *plVar15;
              plVar15 = (long *)(lVar9 + 0x10);
              plVar14 = (long *)*plVar15;
            } while (*plVar14 != lVar9);
          }
        }
        else {
          do {
            plVar14 = plVar15;
            plVar15 = (long *)*plVar14;
          } while ((long *)*plVar14 != (long *)0x0);
        }
      }
    }
    if (local_58 < 1000) {
      local_58 = 1000;
    }
    lVar9 = local_58;
    if ((local_44[0] == (char)param_1[0x1e]) && ((long *)param_1[0x21] == local_d0)) {
      if ((long *)param_1[0x1f] != param_1 + 0x20) {
        plVar14 = (long *)param_1[0x1f];
        plVar15 = local_e0;
        do {
          bVar2 = *(byte *)(plVar14 + 4);
          bVar3 = *(byte *)(plVar15 + 4);
          uVar7 = (ulong)(bVar2 >> 1);
          __n = uVar7;
          if ((bVar2 & 1) != 0) {
            __n = plVar14[5];
          }
          sVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar15[5];
          }
          if (__n != sVar1) goto LAB_002bc914;
          __s1 = (void *)plVar14[6];
          if ((bVar2 & 1) == 0) {
            __s1 = (void *)((long)plVar14 + 0x21);
          }
          __s2 = (char *)plVar15[6];
          if ((bVar3 & 1) == 0) {
            __s2 = (char *)((long)plVar15 + 0x21);
          }
          if ((bVar2 & 1) == 0) {
            if (__n != 0) {
              pcVar10 = (char *)((long)plVar14 + 0x21);
              do {
                if (*pcVar10 != *__s2) goto LAB_002bc914;
                uVar7 = uVar7 - 1;
                pcVar10 = pcVar10 + 1;
                __s2 = __s2 + 1;
              } while (uVar7 != 0);
            }
          }
          else if ((__n != 0) && (iVar6 = memcmp(__s1,__s2,__n), iVar6 != 0)) goto LAB_002bc914;
          plVar12 = (long *)plVar14[1];
          if ((long *)plVar14[1] == (long *)0x0) {
            plVar12 = plVar14 + 2;
            plVar11 = (long *)*plVar12;
            if ((long *)*plVar11 != plVar14) {
              do {
                lVar13 = *plVar12;
                plVar12 = (long *)(lVar13 + 0x10);
                plVar11 = (long *)*plVar12;
              } while (*plVar11 != lVar13);
            }
          }
          else {
            do {
              plVar11 = plVar12;
              plVar12 = (long *)*plVar11;
            } while ((long *)*plVar11 != (long *)0x0);
          }
          plVar14 = (long *)plVar15[1];
          if ((long *)plVar15[1] == (long *)0x0) {
            plVar14 = plVar15 + 2;
            plVar12 = (long *)*plVar14;
            if ((long *)*plVar12 != plVar15) {
              do {
                lVar13 = *plVar14;
                plVar14 = (long *)(lVar13 + 0x10);
                plVar12 = (long *)*plVar14;
              } while (*plVar12 != lVar13);
            }
          }
          else {
            do {
              plVar12 = plVar14;
              plVar14 = (long *)*plVar12;
            } while ((long *)*plVar12 != (long *)0x0);
          }
          plVar14 = plVar11;
          plVar15 = plVar12;
        } while (plVar11 != param_1 + 0x20);
      }
      if (param_1[0x22] == lVar9) goto LAB_002bc980;
    }
LAB_002bc914:
    puVar8 = (undefined8 *)param_1[0x23];
    param_1[0x23] = 0;
    if (puVar8 != (undefined8 *)0x0) {
                    /* try { // try from 002bc928 to 002bc92b has its CatchHandler @ 002bcae0 */
      (**(code **)*puVar8)();
      cVar4 = local_44[0];
    }
    *(char *)(param_1 + 0x1e) = cVar4;
    FUN_002a515c(param_1 + 0x1f,param_1[0x20]);
    param_1[0x1f] = (long)local_e0;
    param_1[0x20] = local_d8;
    param_1[0x21] = (long)local_d0;
    if (local_d0 == (long *)0x0) {
      param_1[0x1f] = (long)(param_1 + 0x20);
    }
    else {
      *(long **)(local_d8 + 0x10) = param_1 + 0x20;
      local_d8 = 0;
      local_d0 = (long *)0x0;
      local_e0 = &local_d8;
    }
    param_1[0x22] = local_58;
                    /* try { // try from 002bc978 to 002bc97f has its CatchHandler @ 002bcae4 */
    FUN_002ba9b8(param_1);
  }
  else if (4 < uVar7) {
    FUN_00350fd0();
  }
LAB_002bc980:
  FUN_002a515c(&local_e0,local_d8);
  if ((local_90[0] != (undefined8 *)0x0) && (plVar14 = (long *)*local_90[0], plVar14 != (long *)0x0)
     ) {
    do {
      lVar9 = *plVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *plVar14 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 + -1 == 0) {
      (*(code *)local_90[0][3])(local_90[0][4]);
    }
  }
  if (*(char *)(*(long *)(*(long *)(param_1[2] + 0x18) + 0x10) + 0x168) == '\0') {
    local_d8 = 0;
    local_98 = 0;
    local_e0 = DAT_03cb5678;
    uStack_a0 = 0;
    local_a8 = 0;
    uStack_b0 = 0;
    local_b8 = 0;
    uStack_c0 = 0;
    local_c8 = 0;
    local_d0 = plVar16;
    if ((param_1[4] == 0) ||
       (iVar6 = FUN_0036cee0(param_1[4],&local_e0,1,param_1 + 0xe), iVar6 != 0)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    plVar16 = param_1 + 1;
    do {
      lVar9 = *plVar16;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*param_1 + 8))(param_1);
      FUN_0049e790(PTR_LAB_047cba48,param_1);
    }
  }
  return;
}


