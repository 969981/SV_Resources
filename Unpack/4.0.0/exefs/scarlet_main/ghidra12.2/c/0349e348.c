/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0349e348; name: FUN_0349e348
 */


void FUN_0349e348(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_DAT_047e2fd0;
  uVar1 = *(uint *)PTR_DAT_047e6fc0;
  if (*(code **)PTR_DAT_047e2fd0 != (code *)0x0) {
    (**(code **)PTR_DAT_047e2fd0)();
  }
  puVar4 = PTR_DAT_047e6fe8;
  puVar3 = PTR_DAT_047e2fe8;
  if ((DAT_048b00d0 & 1) == 0) {
    do {
      nn::os::WaitEvent((EventType *)&DAT_048b00d8);
      if (DAT_048afef4 != '\0' && DAT_048b00d0 == 0) {
        do {
          if (*(long *)puVar3 != 0 && (DAT_048b0100 != 2 || (DAT_047c3898 & 1) != 0)) {
            nn::os::SignalEvent((EventType *)puVar4);
          }
          nn::os::SleepThread((ulong)uVar1 * 1000000);
        } while ((DAT_048afef4 != '\0') && (DAT_048b00d0 == 0));
      }
    } while ((DAT_048b00d0 & 1) == 0);
  }
  if (*(code **)(puVar2 + 8) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349e448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar2 + 8))();
  return;
}


