/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00125b40; name: FUN_00125b40
 */


void FUN_00125b40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0013dfa0();
  uVar2 = FUN_00125db0(param_1,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_00125b90(param_1,"attempt to %s a %s value%s",param_3,uVar1,uVar2);
}


