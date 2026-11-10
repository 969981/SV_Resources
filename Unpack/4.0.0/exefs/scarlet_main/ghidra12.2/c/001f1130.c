/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f1130; name: FUN_001f1130
 */


undefined8 FUN_001f1130(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(lVar3 + 8);
  if (*(int *)(param_2 + 8) == 0) {
    if (lVar2 != 0) goto LAB_001f117c;
  }
  else if (lVar2 == 0) {
    lVar2 = FUN_001edb18(param_1);
    if (lVar2 == 0) {
      return 0;
    }
    if (*(int *)(lVar2 + 0xdc) == 3) {
      return 0;
    }
LAB_001f117c:
    if (*(long *)(lVar3 + 0x18) != 0) {
      if (*(code **)(param_1 + 0x7e8) == (code *)0x0) {
        return 0;
      }
      iVar1 = (**(code **)(param_1 + 0x7e8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8));
      goto joined_r0x001f119c;
    }
  }
  if (*(code **)(param_1 + 0x7f0) == (code *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(param_1 + 0x7f0))
                    (param_1,param_2,0xfffffe07,*(undefined8 *)(param_1 + 0x8b8));
joined_r0x001f119c:
  if (iVar1 == 0) {
    return 0;
  }
  return 0xfffffc7a;
}


