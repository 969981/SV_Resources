/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00132990; name: FUN_00132990
 */


void FUN_00132990(long param_1,long param_2,undefined4 param_3,uint param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0012e860(*(undefined8 *)(param_1 + 0x38),
                       "<goto %s> at line %d jumps into the scope of local \'%s\'",param_2 + 0x18,
                       param_3,*(long *)(**(long **)(*(long *)(*(long *)(param_1 + 0x30) + 0x10) +
                                                    0x58) +
                                         (long)(int)(*(int *)(*(long *)(param_1 + 0x30) + 0x38) +
                                                    (param_4 & 0xff)) * 0x18 + 0x10) + 0x18);
  FUN_00133030(param_1,uVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x1329ec);
  (*pcVar1)();
}


