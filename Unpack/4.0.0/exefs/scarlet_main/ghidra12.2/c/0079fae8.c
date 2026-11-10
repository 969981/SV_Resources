/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079fae8; name: FUN_0079fae8
 */


void FUN_0079fae8(long *param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  
  lVar2 = FUN_007ec544();
  if ((*(char *)(lVar2 + 0x38) != '\0') && ((char)param_1[0x232] != '\0')) {
    plVar6 = param_1 + 0xd;
    uVar3 = FUN_00796784(plVar6);
    if ((uVar3 & 1) != 0) goto LAB_0079fbb4;
  }
  uVar1 = FUN_007a8280(param_1[0x24]);
  if (1 < uVar1) {
    if (*(short *)((long)param_1 + 0x114e) == 0) {
      iVar5 = 0;
    }
    else {
      uVar3 = 0;
      iVar5 = 0;
      do {
        uVar4 = FUN_00796784(*(long *)(param_1[0x11] + uVar3 * 8) + 0x10);
        if ((uVar4 & 1) != 0) {
          uVar4 = FUN_007967e8(*(long *)(param_1[0x11] + uVar3 * 8) + 0x10,param_1 + 0x13);
          if ((uVar4 & 1) == 0) {
            iVar5 = (1 << (ulong)((uint)uVar3 & 0x1f)) + iVar5;
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)((long)param_1 + 0x114e));
    }
                    /* WARNING: Could not recover jumptable at 0x0079fc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x148))(param_1,param_2,iVar5,0);
    return;
  }
  plVar6 = param_1 + 0x13;
  uVar3 = FUN_00796784(plVar6);
  if ((uVar3 & 1) == 0) {
    return;
  }
LAB_0079fbb4:
                    /* WARNING: Could not recover jumptable at 0x0079fbdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))(param_1,param_2,plVar6,0);
  return;
}


