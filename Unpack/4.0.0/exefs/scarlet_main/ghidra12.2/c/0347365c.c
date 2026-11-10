/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0347365c; name: FUN_0347365c
 */


void FUN_0347365c(long param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x150);
  do {
    if (plVar1 == (long *)0x0) {
LAB_034736d8:
      plVar1 = *(long **)(param_1 + 0x178);
      while( true ) {
        if (plVar1 == (long *)0x0) {
          return;
        }
        if (*(int *)(plVar1 + 1) == param_2) break;
        plVar1 = (long *)*plVar1;
      }
      *(undefined1 *)((long)plVar1 + 0x2c) = 0;
      if (plVar1[4] == 0) {
                    /* WARNING: Could not recover jumptable at 0x03473754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)plVar1[2])(*(undefined4 *)(plVar1 + 5),plVar1 + 2,5,1);
        return;
      }
      FUN_034e6c0c(*(undefined8 *)PTR_DAT_047e7038,plVar1[4],5,0,4,1);
      return;
    }
    if (*(int *)(plVar1 + 1) == param_2) {
      *(undefined1 *)((long)plVar1 + 0x2c) = 0;
      if (plVar1[4] == 0) {
        (**(code **)plVar1[2])(*(undefined4 *)(plVar1 + 5),plVar1 + 2,0,1);
      }
      else {
        FUN_034e6c0c(*(undefined8 *)PTR_DAT_047e7038,plVar1[4],0,0,4,1);
      }
      goto LAB_034736d8;
    }
    plVar1 = (long *)*plVar1;
  } while( true );
}


