/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00681630; name: FUN_00681630
 */


int FUN_00681630(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_4c;
  int local_48;
  int local_44;
  
                    /* try { // try from 0068164c to 0068164f has its CatchHandler @ 0068176c */
  lVar2 = FUN_001ce80c();
  iVar5 = 0x1b;
  if (lVar2 != 0) {
                    /* try { // try from 0068165c to 00681667 has its CatchHandler @ 00681764 */
    iVar1 = FUN_001ce818(lVar2,param_1);
    if (iVar1 == 0) {
      local_44 = 0;
      do {
                    /* try { // try from 00681690 to 0068169b has its CatchHandler @ 0068177c */
        FUN_001cfa94(lVar2,&local_44);
        local_48 = 0;
                    /* try { // try from 006816a0 to 006816b7 has its CatchHandler @ 00681778 */
        iVar1 = FUN_001cfa20(lVar2,0,0,10,&local_48);
        if (iVar1 != 0) {
          iVar5 = 0x1b;
          if (iVar1 != 3) {
            iVar5 = 0x2b;
          }
          goto LAB_0068172c;
        }
        if (local_48 == 0) {
          nn::os::SleepThread(5000000);
        }
        uVar3 = FUN_006c50c4(param_2);
        if ((uVar3 & 1) != 0) {
          iVar5 = 0x2a;
          goto LAB_0068172c;
        }
      } while (0 < local_44);
      do {
        local_4c = 0;
                    /* try { // try from 006816f8 to 00681703 has its CatchHandler @ 00681774 */
        piVar4 = (int *)FUN_001d0dd4(lVar2,&local_4c);
        if (piVar4 == (int *)0x0) {
          iVar5 = 0;
          goto LAB_0068172c;
        }
      } while (*piVar4 != 1);
      iVar5 = piVar4[4];
LAB_0068172c:
                    /* try { // try from 0068172c to 00681737 has its CatchHandler @ 0068175c */
      FUN_001cec9c(lVar2,param_1);
    }
    else {
      iVar5 = 0x1b;
      if (iVar1 != 3) {
        iVar5 = 2;
      }
    }
                    /* try { // try from 00681738 to 0068173f has its CatchHandler @ 00681760 */
    FUN_001d0cbc(lVar2);
  }
  return iVar5;
}


