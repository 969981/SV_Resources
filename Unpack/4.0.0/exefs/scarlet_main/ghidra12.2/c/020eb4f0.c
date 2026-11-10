/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020eb4f0; name: FUN_020eb4f0
 */


undefined8 FUN_020eb4f0(undefined8 *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  iVar3 = FUN_00d75408(*param_1);
  iVar4 = FUN_00ddf318(*param_1);
  if ((iVar3 == iVar4) && (uVar6 = FUN_00c801e8(*param_1), (uVar6 & 1) == 0)) {
    cVar1 = FUN_020eb594(*param_1);
    if (cVar1 != '\0') {
      uVar8 = 0;
      do {
        cVar1 = FUN_020eb60c(*param_1,uVar8);
        cVar2 = FUN_00cf5f98(*param_1,uVar8);
        if (cVar1 != cVar2) goto LAB_020eb52c;
        uVar8 = uVar8 + 1;
        uVar5 = FUN_020eb594(*param_1);
      } while (uVar8 < (uVar5 & 0xff));
    }
    uVar7 = 0;
  }
  else {
LAB_020eb52c:
    uVar7 = 1;
  }
  return uVar7;
}


