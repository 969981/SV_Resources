/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123ecdc; name: FUN_0123ecdc
 */


void FUN_0123ecdc(long param_1,uint *param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  uint uVar8;
  long lVar9;
  
  lVar9 = *param_3;
  iVar5 = *(int *)(lVar9 + 4);
  if (iVar5 == 8) {
    uVar8 = 0;
    goto LAB_0123ed98;
  }
  if (iVar5 == 0) {
    uVar8 = 0x5402000;
    goto LAB_0123ed98;
  }
  bVar1 = *(byte *)(param_3 + 1);
  uVar8 = 0x1400000;
  switch(iVar5) {
  default:
switchD_0123ed38_caseD_1:
    uVar8 = 0x400000;
    break;
  case 2:
  case 10:
  case 0xb:
  case 0xe:
  case 0xf:
    uVar8 = 0x1000000;
    break;
  case 3:
    break;
  case 4:
    iVar5 = FUN_0123ee04(param_1);
    if ((iVar5 == 0) && (*(char *)(lVar9 + 0x88) == '\x01')) goto switchD_0123ed38_caseD_1;
    uVar8 = 0x1c00000;
    break;
  case 6:
    uVar8 = 0x1800000;
    break;
  case 7:
  case 0xd:
    uVar8 = 0x800000;
  }
  piVar7 = (int *)*param_3;
  bVar2 = *(byte *)((long)param_3 + 9);
  if (*piVar7 == 0) {
    uVar3 = 0;
  }
  else {
    uVar6 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),*piVar7);
    uVar3 = FUN_01244194(*(undefined8 *)(param_1 + 0x38),uVar6,1);
    piVar7 = (int *)*param_3;
    uVar3 = uVar3 & 0x1fff;
  }
  uVar4 = FUN_0123ee0c(param_1,piVar7);
  uVar8 = uVar8 | (bVar1 & 7) << 0x19 | (bVar2 & 7) << 0xd | uVar3 | (uVar4 & 0x3f) << 0x10;
LAB_0123ed98:
  *param_2 = uVar8;
  return;
}


