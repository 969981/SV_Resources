/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0351b668; name: FUN_0351b668
 */


void FUN_0351b668(long param_1,byte param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_3 == 0xd) {
    *PTR_DAT_047e74f8 = 1;
    *PTR_DAT_047e7500 = param_2 & 1;
  }
  else if (*(long *)(param_1 + 0x90) != 0) {
    uVar2 = *(uint *)(param_1 + 0x108);
    if (uVar2 != 0) {
      plVar3 = *(long **)(param_1 + 0x100);
      plVar4 = plVar3;
      do {
        plVar1 = (long *)*plVar4;
        if ((plVar1[0x12] != 0) && (0 < *(short *)(plVar1[0x12] + 0x90))) {
          (**(code **)(*plVar1 + 0x180))(plVar1,param_2 & 1,0);
          plVar3 = *(long **)(param_1 + 0x100);
          uVar2 = *(uint *)(param_1 + 0x108);
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar3 + uVar2);
    }
  }
  return;
}


