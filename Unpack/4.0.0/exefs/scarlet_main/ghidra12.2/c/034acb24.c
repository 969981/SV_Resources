/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034acb24; name: FUN_034acb24
 */


void FUN_034acb24(long *param_1,undefined4 param_2,uint param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar3 = (**(code **)(*param_1 + 0x228))(param_1,param_4);
  if (lVar3 != 0) {
    *(byte *)(lVar3 + 0x20) =
         *(byte *)(lVar3 + 0x20) & ((byte)param_3 ^ 0xff) | (byte)param_3 & (byte)param_2;
  }
  iVar2 = (**(code **)(*param_1 + 0x88))(param_1);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x88))(param_1);
  }
  if (param_4 == 0) {
    (**(code **)(*param_1 + 0x1c0))(param_1,param_2,param_3);
  }
  iVar2 = (**(code **)(*param_1 + 0x88))(param_1);
  plVar5 = param_1;
  if ((iVar2 != 0) && (iVar2 = (**(code **)(*param_1 + 0x88))(param_1), iVar2 != 10)) {
    plVar1 = param_1;
    do {
      plVar5 = plVar1;
      if ((long *)plVar5[0x13] == (long *)0x0) break;
      plVar1 = (long *)plVar5[0x13];
    } while ((*(uint *)(plVar5 + 0x17) & 0x1f000) == 0);
  }
  plVar1 = plVar5 + 4;
  if (((plVar5[8] != 0) && ((*(byte *)(plVar5[8] + 3) >> 5 & 1) != 0)) ||
     (uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0x1d), (uVar4 & 1) != 0)) {
    param_3 = param_3 & 0xfffffffe;
  }
  if (((plVar5[8] != 0) && ((*(byte *)(plVar5[8] + 3) >> 6 & 1) != 0)) ||
     (uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0x1e), (uVar4 & 1) != 0)) {
    param_3 = param_3 & 0xfffffffd;
  }
  if ((((int *)plVar5[8] != (int *)0x0) && (*(int *)plVar5[8] < 0)) ||
     (uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0x1f), (uVar4 & 1) != 0)) {
    param_3 = param_3 & 0xfffffffb;
  }
  if (((plVar5[8] != 0) && ((*(byte *)(plVar5[8] + 4) & 1) != 0)) ||
     (uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0x20), (uVar4 & 1) != 0)) {
    param_3 = param_3 & 0xfffffff7;
  }
  if (((plVar5[8] != 0) && ((*(byte *)(plVar5[8] + 4) >> 1 & 1) != 0)) ||
     (uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0x21), (uVar4 & 1) != 0)) {
    param_3 = param_3 & 0xffffffef;
  }
                    /* WARNING: Could not recover jumptable at 0x034acd0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x100))(param_1,param_2,param_3,param_4,0);
  return;
}


