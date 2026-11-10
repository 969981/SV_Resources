/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01667da8; name: FUN_01667da8
 */


void FUN_01667da8(ulong *param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_50 [8];
  long *local_48;
  
  plVar4 = (long *)param_1[5];
  plVar5 = plVar4;
  if (param_1[6] != 0) {
    plVar5 = plVar4 + param_1[6] * 4;
  }
  while (plVar5 != plVar4) {
    if ((((char)plVar4[3] == '\0') && ((*plVar4 == 0 || (*(short *)(*plVar4 + 0x1a) == 0)))) ||
       (plVar4[2] == 0)) {
      FUN_0284db00(&local_48,param_1 + 1);
      plVar4 = local_48;
    }
    else {
      plVar4 = plVar4 + 4;
    }
    plVar5 = (long *)param_1[5];
    if (param_1[6] != 0) {
      plVar5 = (long *)param_1[5] + param_1[6] * 4;
    }
  }
  if ((((char)param_2[3] != '\0') || ((*param_2 != 0 && (*(short *)(*param_2 + 0x1a) != 0)))) &&
     ((plVar5 = param_2 + 2, *plVar5 != 0 && (uVar6 = param_1[6], uVar6 < *param_1)))) {
    if (uVar6 < param_1[7]) {
      puVar1 = (undefined8 *)(param_1[5] + uVar6 * 0x20);
      uVar6 = param_1[1];
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar3 == 0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        FUN_00c43ef0(puVar1,param_2);
        lVar3 = *plVar5;
        *(char *)(puVar1 + 3) = (char)param_2[3];
        puVar1[2] = lVar3;
      }
      else {
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(ulong *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar6;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        *puVar1 = 0;
        puVar1[1] = 0;
        FUN_00c43ef0(puVar1,param_2);
        lVar7 = *plVar5;
        *(char *)(puVar1 + 3) = (char)param_2[3];
        puVar1[2] = lVar7;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      }
      param_1[6] = param_1[6] + 1;
    }
    else {
      local_48 = (long *)(param_1[5] + uVar6 * 0x20);
      FUN_0284db9c(auStack_50,param_1 + 1,&local_48,param_2);
    }
  }
  return;
}


