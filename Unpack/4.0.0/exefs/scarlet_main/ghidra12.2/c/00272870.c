/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00272870; name: FUN_00272870
 */


void FUN_00272870(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_28;
  
  puVar1 = PTR_DAT_047cbb08;
  (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x80))(*(long **)PTR_DAT_047cbb08,param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 == 0) {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  else {
    local_28 = PTR_DAT_047cc380 + 0x10;
    lVar4 = *(long *)(param_1 + 0x170);
    lVar5 = *(long *)(param_1 + 0x178);
    if (lVar5 != lVar4) {
      uVar6 = 0;
      do {
        if ((ulong)(lVar5 - lVar4 >> 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00272938 to 0027293b has its CatchHandler @ 0027293c */
          abort();
        }
        plVar3 = *(long **)(lVar4 + uVar6 * 8);
                    /* try { // try from 002728e0 to 002728e7 has its CatchHandler @ 00272944 */
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_28);
        lVar4 = *(long *)(param_1 + 0x170);
        lVar5 = *(long *)(param_1 + 0x178);
        uVar6 = uVar6 + 1;
      } while (uVar6 < (ulong)(lVar5 - lVar4 >> 3));
      lVar2 = *(long *)(param_1 + 0x38);
    }
                    /* try { // try from 00272900 to 00272907 has its CatchHandler @ 0027293c */
    FUN_0036bc40(lVar2,0);
  }
                    /* try { // try from 00272920 to 00272927 has its CatchHandler @ 00272940 */
  (**(code **)(**(long **)puVar1 + 0x88))(*(long **)puVar1,param_1 + 0x18);
  return;
}


