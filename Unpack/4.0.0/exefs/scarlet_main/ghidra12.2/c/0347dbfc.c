/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0347dbfc; name: FUN_0347dbfc
 */


undefined8 FUN_0347dbfc(char *param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  size_t sVar5;
  char *pcVar6;
  size_t sVar7;
  long *plVar8;
  code *pcVar9;
  
  if (param_1 != (char *)0x0) {
    sVar5 = strlen(param_1);
    iVar4 = (int)sVar5;
    uVar1 = iVar4 + 2;
    pcVar6 = (char *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(ulong)uVar1);
    if (pcVar6 == (char *)0x0) {
      DAT_048afd70 = pcVar6;
      return 0x34;
    }
    sVar5 = (ulong)(iVar4 + 1) - 1;
    DAT_048afd70 = pcVar6;
    sVar7 = strlen(param_1);
    if (sVar7 + 1 <= sVar5) {
      sVar5 = sVar7 + 1;
    }
    strncpy(pcVar6,param_1,sVar5);
    pcVar6[sVar5] = '\0';
    pcVar6 = DAT_048afd70;
    if ((2 < uVar1) && (DAT_048afd70[iVar4 - 1] != '/')) {
      sVar5 = strlen(DAT_048afd70);
      uVar3 = (sVar5 ^ 0xffffffff) + (ulong)uVar1;
      sVar5 = (size_t)(int)uVar3;
      if ((uVar3 & 0xffffffff) != 0) {
        sVar5 = 1;
      }
      strncat(pcVar6,"/",sVar5);
    }
  }
  FUN_0347ddb4(0,1,&PTR_LAB_047c2618);
  if (DAT_048afd78 != (long *)0x0) {
    puVar2 = PTR_DAT_047e6ff0 + 0x10;
    plVar8 = DAT_048afd78;
    do {
      if ((int)plVar8[1] == 1) {
        iVar4 = FUN_0347ddb4(*(undefined4 *)((long)plVar8 + 0xc),(int)plVar8[2],plVar8 + 10);
      }
      else {
        iVar4 = FUN_0347df74((int)plVar8[1],*(undefined4 *)((long)plVar8 + 0xc),(int)plVar8[2],
                             plVar8[3],plVar8[4],plVar8[9]);
      }
      if ((iVar4 == 1) && (pcVar9 = (code *)plVar8[7], pcVar9 != (code *)0x0)) {
        if (((DAT_048afc00 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_048afc00), iVar4 != 0)) {
          DAT_048afbf8 = puVar2;
          __cxa_guard_release(&DAT_048afc00);
        }
        (*pcVar9)(&DAT_048afbf8,1,plVar8[8]);
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  return 1;
}


