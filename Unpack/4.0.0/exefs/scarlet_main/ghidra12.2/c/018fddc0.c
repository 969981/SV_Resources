/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018fddc0; name: FUN_018fddc0
 */


void FUN_018fddc0(int param_1)

{
  if ((param_1 != 0) && (DAT_0485ea40 == 0)) {
    DAT_0485ea40 = param_1;
    FUN_018fe290();
    FUN_018fde60(param_1);
    FUN_018ff030();
    FUN_018fe440();
    FUN_018fde90();
    if (((DAT_0485ea30 != '\0') || ((DAT_0485ea18 != 0 && (*(short *)(DAT_0485ea18 + 0x1a) != 0))))
       && (DAT_0485ea28 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x018fde28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*DAT_0485ea28)(DAT_0485ea28,param_1);
      return;
    }
  }
  return;
}


