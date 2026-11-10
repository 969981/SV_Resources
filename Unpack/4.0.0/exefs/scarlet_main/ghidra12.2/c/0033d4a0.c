/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033d4a0; name: FUN_0033d4a0
 */


void FUN_0033d4a0(long *param_1,long param_2,long *param_3,int param_4)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(PTR_DAT_047cccc0 + 0x10);
  param_1[1] = 1;
  param_1[4] = param_2;
  lVar5 = *param_3;
  *param_3 = 0;
  param_1[9] = 0;
  param_1[8] = (long)(param_1 + 9);
  param_1[10] = 0;
  param_1[5] = lVar5;
  param_1[6] = 0;
  iVar2 = param_4;
  if (param_4 == 2) {
    iVar2 = 1;
  }
  *(int *)(param_1 + 7) = iVar2;
  plVar1 = (long *)(param_1[4] + 0x40);
  do {
    lVar5 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_4 == 2) {
                    /* try { // try from 0033d518 to 0033d52f has its CatchHandler @ 0033d530 */
    FUN_0033cd08(param_1);
  }
  return;
}


