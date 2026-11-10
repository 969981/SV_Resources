/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00898d98; name: FUN_00898d98
 */


long * FUN_00898d98(long param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_4 + 8);
  if (lVar6 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)(**(code **)PTR_DAT_047d2258)(0x50,4,*(undefined8 *)PTR_DAT_047d2268);
    if (plVar2 != (long *)0x0) {
      FUN_0089da30(plVar2);
      puVar1 = PTR_DAT_047d22a0;
      plVar2[9] = 0;
      *plVar2 = (long)(puVar1 + 0x10);
      plVar3 = plVar2 + 1;
      lVar4 = *plVar3;
      plVar5 = (long *)(param_1 + 8);
      *plVar3 = *plVar5;
      *(long **)(lVar4 + 8) = plVar5;
      *(long **)(*plVar5 + 8) = plVar3;
      *plVar5 = lVar4;
      (**(code **)(*plVar2 + 0x40))(plVar2,param_2,*(undefined8 *)(param_1 + 0x40),lVar6);
    }
  }
  FUN_0089ddfc(plVar2,param_4,*(undefined8 *)(param_1 + 0x20),0,param_5 & 1);
  return plVar2;
}


