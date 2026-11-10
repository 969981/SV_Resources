/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01461c58; name: FUN_01461c58
 */


void FUN_01461c58(long param_1,ulong param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  
  if (8 < param_3 - 1U) {
switchD_01461c90_caseD_3:
    return;
  }
  uVar2 = 0x267;
  switch(param_3) {
  case 1:
    break;
  case 2:
    uVar2 = 0x269;
    break;
  default:
    goto switchD_01461c90_caseD_3;
  case 4:
    uVar2 = 0x2aa;
    break;
  case 5:
    uVar2 = 0x2ac;
    break;
  case 8:
    iVar1 = FUN_014616dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x70),param_2,0x267);
    if (3 < (iVar1 - 1U & 0xff)) {
      return;
    }
    uVar2 = 0x33d02c502c302c1 >> (((ulong)(iVar1 - 1U) & 3) << 4);
    break;
  case 9:
    uVar2 = 0x37a;
  }
  FUN_0297ee68(*(undefined8 *)(param_1 + 0x20),param_2 & 0xffffffff,uVar2);
  return;
}


