/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003533a0; name: FUN_003533a0
 */


undefined8 FUN_003533a0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar4 = 0;
  uVar5 = 0;
  do {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 == (long *)0x0) {
      uVar2 = FUN_00350840();
      if ((uVar2 & 1) == 0) {
        if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        return uVar5;
      }
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      do {
        uVar2 = plVar3[3];
        plVar1 = (long *)*plVar3;
        (*(code *)plVar3[1])(plVar3[2],uVar2);
        if (4 < uVar2) {
          FUN_00350fd0(uVar2);
        }
        plVar3 = plVar1;
      } while (plVar1 != (long *)0x0);
      uVar5 = 1;
    }
    if ((~uVar4 & 0x1ff) == 0) {
      auVar6 = FUN_0038e500(0);
      auVar7 = FUN_0038de20(5,3);
      FUN_0038dee0(auVar6._0_8_,auVar6._8_8_,auVar7._0_8_,auVar7._8_8_);
      FUN_0038e540();
    }
    uVar4 = uVar4 + 1;
  } while( true );
}


