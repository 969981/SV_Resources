/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034be24c; name: FUN_034be24c
 */


void FUN_034be24c(void)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 local_28;
  
  if (DAT_048b02a8 == 0) {
    return;
  }
  plVar5 = (long *)*DAT_048b02a0;
  if (plVar5 == (long *)0x0) {
    uVar4 = 0;
    do {
      if (DAT_048b02a8 - 1 == uVar4) {
        return;
      }
      uVar4 = uVar4 + 1;
      plVar5 = (long *)DAT_048b02a0[uVar4 & 0xffffffff];
    } while (plVar5 == (long *)0x0);
  }
  else {
    uVar4 = 0;
  }
  do {
    do {
      for (plVar2 = (long *)plVar5[2]; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
        lVar3 = plVar2[8];
        local_28 = (**(code **)(*plVar2 + 0x28))(plVar2);
        uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);
        if (lVar3 != 0) {
          FUN_034af64c(lVar3,plVar2,&local_28,uVar1 & 1);
          FUN_034be3a4(plVar2,lVar3);
        }
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
    do {
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar1;
      if (DAT_048b02a8 <= uVar1) {
        return;
      }
      plVar5 = (long *)DAT_048b02a0[uVar1];
    } while (plVar5 == (long *)0x0);
  } while( true );
}


