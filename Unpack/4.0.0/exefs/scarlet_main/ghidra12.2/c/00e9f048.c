/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e9f048; name: FUN_00e9f048
 */


void FUN_00e9f048(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x1f0) == *(long *)(param_2 + 0x58)) {
    for (plVar3 = *(long **)(param_2 + 0x30); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      uVar1 = *(undefined4 *)(plVar3 + 6);
      puVar2 = (undefined4 *)FUN_00c42268(param_1 + 0x198,plVar3 + 2);
      *puVar2 = uVar1;
    }
  }
  else {
    FUN_00e9f0ac(param_1 + 0x198);
  }
  return;
}


