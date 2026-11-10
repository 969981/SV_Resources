/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034c280; name: FUN_0034c280
 */


void FUN_0034c280(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  
  if (DAT_047ef590 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar4 = (ulong *)(DAT_047ef590 + (param_1 & 0xffffffff) * 0x18);
  uVar2 = *puVar4;
  if (1 < uVar2) {
    uVar5 = 0;
    plVar1 = (long *)(DAT_047ef590 + (param_1 & 0xffffffff) * 0x18 + 8);
    do {
      plVar3 = plVar1;
      if ((uVar2 & 1) != 0) {
        plVar3 = (long *)*plVar1;
      }
      (*(code *)**(undefined8 **)plVar3[uVar5])((undefined8 *)plVar3[uVar5],param_2,param_3,param_4)
      ;
      uVar2 = *puVar4;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2 >> 1);
  }
  return;
}


