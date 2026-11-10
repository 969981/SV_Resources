/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023281f0; name: FUN_023281f0
 */


int FUN_023281f0(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = FUN_00cf8198();
  }
  plVar3 = *(long **)(*(long *)(param_1 + 0x200) + 0x60);
  iVar1 = (**(code **)(*plVar3 + 0xd0))
                    (plVar3,*(undefined8 *)(param_2 + 8),uVar2,1,&LAB_01080c70,param_1,0,0,0);
  if (iVar1 != 0) {
    FUN_0173ba88(*(undefined8 *)(param_1 + 0x220),param_2,iVar1,uVar2,0,param_3,0);
  }
  return iVar1;
}


