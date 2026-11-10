/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c7e10; name: FUN_008c7e10
 */


uint FUN_008c7e10(long *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *param_1;
  lVar6 = *(long *)(lVar5 + 0x3e0);
  lVar7 = *(long *)(lVar5 + 1000);
  if ((*(long *)(lVar5 + 0x3f0) == 0) ||
     (pcVar4 = *(code **)(*(long *)(lVar5 + 0x3f0) + 8), pcVar4 == (code *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (*pcVar4)(param_1);
    uVar3 = uVar3 & 0xffffffff;
  }
  if ((lVar6 == 0) || (pcVar4 = *(code **)(lVar6 + 8), pcVar4 == (code *)0x0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*pcVar4)(param_1);
  }
  if ((lVar7 == 0) || (pcVar4 = *(code **)(lVar7 + 8), pcVar4 == (code *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*pcVar4)(param_1);
  }
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  return uVar1 & uVar2 & 1;
}


