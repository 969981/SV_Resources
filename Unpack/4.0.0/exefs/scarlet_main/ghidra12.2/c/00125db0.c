/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00125db0; name: FUN_00125db0
 */


undefined1 * FUN_00125db0(long param_1,long *param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined *local_8;
  
  local_8 = (undefined *)0x0;
  puVar3 = *(ulong **)(param_1 + 0x20);
  if ((*(byte *)((long)puVar3 + 0x3e) >> 1 & 1) == 0) {
    plVar4 = (long *)*puVar3;
    lVar5 = *plVar4;
    if ((ulong)*(byte *)(lVar5 + 10) != 0) {
      lVar6 = 0;
      plVar7 = (long *)(lVar5 + 0x20);
      do {
        if (*(long **)(*plVar7 + 0x10) == param_2) {
          lVar5 = *(long *)(*(long *)(*(long *)(lVar5 + 0x18) + 0x50) + lVar6);
          local_8 = &DAT_03c1ceec;
          if (lVar5 != 0) {
            local_8 = (undefined *)(lVar5 + 0x18);
          }
          pcVar1 = "upvalue";
          goto LAB_00125eb0;
        }
        lVar6 = lVar6 + 0x10;
        plVar7 = plVar7 + 1;
      } while ((ulong)*(byte *)(lVar5 + 10) * 0x10 != lVar6);
    }
    plVar7 = plVar4;
    while (plVar7 = plVar7 + 2, plVar7 < (long *)puVar3[1]) {
      if (param_2 == plVar7) {
        pcVar1 = (char *)FUN_00126750(*(long *)(lVar5 + 0x18),
                                      (int)(puVar3[4] - *(long *)(*(long *)(lVar5 + 0x18) + 0x40) >>
                                           2) + -1,
                                      (ulong)((long)param_2 + (-0x10 - (long)plVar4)) >> 4,&local_8)
        ;
        if (pcVar1 == (char *)0x0) {
          return &DAT_03c886bc;
        }
LAB_00125eb0:
        puVar2 = (undefined1 *)FUN_0012e860(param_1," (%s \'%s\')",pcVar1,local_8);
        return puVar2;
      }
    }
  }
  return &DAT_03c886bc;
}


