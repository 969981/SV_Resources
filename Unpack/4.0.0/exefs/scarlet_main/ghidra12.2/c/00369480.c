/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00369480; name: FUN_00369480
 */


void FUN_00369480(long *param_1,long *param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  
  lVar6 = *param_2;
  if (lVar6 == 0) {
    uVar5 = (ulong)*(byte *)(param_2 + 1);
    lVar6 = (long)param_2 + 9;
LAB_003694dc:
    uVar3 = FUN_0038cbd0(lVar6,uVar5,*(undefined4 *)PTR_DAT_047cc650);
  }
  else {
    if (*(int *)(lVar6 + 8) == 0) goto LAB_0036959c;
    if (*(int *)(lVar6 + 8) != 1) {
      uVar5 = param_2[1];
      lVar6 = param_2[2];
      goto LAB_003694dc;
    }
    uVar3 = *(uint *)(lVar6 + 0x60);
  }
  puVar2 = PTR_DAT_047cc628;
  uVar7 = 0;
  uVar8 = uVar3;
  do {
    lVar6 = (ulong)(uVar7 + uVar3 + (uVar8 / 0x1b0) * -0x1b0) * 8;
    if (((*(uint *)(&DAT_047efa5c + lVar6) == uVar3) && (*(uint *)(&DAT_047efa60 + lVar6) < 0x6c))
       && ((plVar1 = (long *)(*(long *)puVar2 + (ulong)*(uint *)(&DAT_047efa60 + lVar6) * 0x20),
           *param_2 == *plVar1 || (iVar4 = FUN_00368130(param_2,plVar1), iVar4 == 0)))) {
      *param_3 = 1;
      param_2 = plVar1;
      break;
    }
    uVar7 = uVar7 + 1;
    uVar8 = uVar8 + 1;
  } while (uVar7 <= DAT_047f07e4);
LAB_0036959c:
  lVar6 = *param_2;
  lVar10 = param_2[3];
  lVar9 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = lVar6;
  param_1[3] = lVar10;
  param_1[2] = lVar9;
  return;
}


