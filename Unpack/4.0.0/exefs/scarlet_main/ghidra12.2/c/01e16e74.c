/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e16e74; name: FUN_01e16e74
 */


void FUN_01e16e74(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  for (plVar1 = *(long **)(param_1 + 0xd0); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar4 = *plVar1;
    for (lVar5 = *(long *)(lVar4 + 0x70); lVar5 != lVar4 + 0x68; lVar5 = *(long *)(lVar5 + 8)) {
      if ((*(char *)param_4[1] == '\0') || (*(long *)(*(long *)(lVar5 + 0x10) + 0x30) == *param_4))
      {
        plVar3 = (long *)(*(long *)(*(long *)(lVar5 + 0x10) + 0x100) + 0x30);
        (**(code **)(*plVar3 + 0x48))(plVar3,param_2,param_3);
      }
    }
  }
  return;
}


