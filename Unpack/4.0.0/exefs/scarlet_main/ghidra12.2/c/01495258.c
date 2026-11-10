/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01495258; name: FUN_01495258
 */


void FUN_01495258(long param_1,uint param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 < *(uint *)(param_1 + 0x248)) {
    lVar3 = *(long *)(param_1 + 0x228) + (ulong)param_2 * 0x48;
    if (*(char *)(lVar3 + 8) != '\0') {
      FUN_0216bc24(lVar3);
      plVar1 = (long *)FUN_0216bc60(lVar3);
      uVar2 = FUN_0216bc68(lVar3);
      (**(code **)(*plVar1 + 0x18))(plVar1,uVar2);
      FUN_0216bc70(lVar3);
      return;
    }
  }
  return;
}


