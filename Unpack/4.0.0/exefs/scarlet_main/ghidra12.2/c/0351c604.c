/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0351c604; name: FUN_0351c604
 */


void FUN_0351c604(undefined4 param_1,long param_2,int param_3,ulong param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  
  uVar1 = param_3 - 0x1000000U >> 0x18 | param_3 << 8;
  if (uVar1 < 8) {
    bVar2 = false;
    bVar3 = false;
    plVar4 = (long *)(param_2 + -0x28);
    switch(uVar1) {
    case 1:
      bVar2 = true;
    case 0:
      *(undefined4 *)(param_2 + 0x24) = param_1;
      (**(code **)(*plVar4 + 0x28))(plVar4);
      if (((param_4 & 1) != 0) && (*(undefined8 *)(param_2 + 0x10) = 0, bVar2)) {
                    /* WARNING: Could not recover jumptable at 0x0351c694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4,0xffffffff);
        return;
      }
      break;
    case 3:
      bVar3 = true;
    case 7:
      *(undefined4 *)(param_2 + 0x28) = param_1;
      (**(code **)(*plVar4 + 0x28))(plVar4);
      if (((param_4 & 1) != 0) && (*(undefined8 *)(param_2 + 0x18) = 0, bVar3)) {
                    /* WARNING: Could not recover jumptable at 0x0351c6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x18))(plVar4);
        return;
      }
    }
  }
  return;
}


