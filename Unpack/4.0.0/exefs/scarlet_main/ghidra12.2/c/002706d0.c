/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002706d0; name: FUN_002706d0
 */


void FUN_002706d0(undefined8 *param_1,byte *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  byte **ppbVar3;
  byte bVar4;
  undefined *puVar5;
  byte *pbVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  byte *local_40;
  byte *pbStack_38;
  
  puVar5 = PTR_DAT_047cbe70;
  if (*(long **)PTR_DAT_047cbe70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  (**(code **)(**(long **)PTR_DAT_047cbe70 + 0x10))();
  bVar4 = param_2[0x18];
  local_40 = param_2 + 0x19;
  if ((bVar4 & 1) != 0) {
    local_40 = *(byte **)(param_2 + 0x28);
  }
  pbStack_38 = param_2 + 0x31;
  if ((param_2[0x30] & 1) != 0) {
    pbStack_38 = *(byte **)(param_2 + 0x40);
  }
  if ((*param_2 & 1) == 0) {
    if (1 < *param_2) {
      pbVar6 = param_2 + 1;
      goto LAB_0027075c;
    }
  }
  else if (*(long *)(param_2 + 8) != 0) {
    pbVar6 = *(byte **)(param_2 + 0x10);
    goto LAB_0027075c;
  }
  pbVar6 = (byte *)0x0;
LAB_0027075c:
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 0x20);
  }
  ppbVar3 = (byte **)(undefined1 *)0x0;
  if (uVar2 != 0) {
    ppbVar3 = &local_40;
  }
                    /* try { // try from 00270778 to 002707ab has its CatchHandler @ 0027082c */
  lVar7 = FUN_002f3500(pbVar6,ppbVar3,0,0);
  if (lVar7 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    plVar8 = *(long **)puVar5;
  }
  else {
    plVar8 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (plVar8 != (long *)0x0) {
      FUN_0027310c(plVar8);
      puVar1 = PTR_DAT_047cc318;
      plVar8[2] = lVar7;
      *plVar8 = (long)(puVar1 + 0x10);
    }
    *param_1 = plVar8;
    plVar9 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x20);
    puVar1 = PTR_DAT_047cc310 + 0x10;
    plVar9[2] = 0;
    plVar9[3] = (long)plVar8;
    *plVar9 = (long)puVar1;
    plVar9[1] = 0;
    param_1[1] = plVar9;
    plVar8 = *(long **)puVar5;
  }
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 002707fc to 00270823 has its CatchHandler @ 00270828 */
  (**(code **)(*plVar8 + 0x18))();
  return;
}


