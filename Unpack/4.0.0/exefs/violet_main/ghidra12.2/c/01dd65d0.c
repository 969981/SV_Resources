/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd65d0; name: FUN_01dd65d0
 */


void FUN_01dd65d0(long param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar5 = FUN_01195854();
  bVar2 = *(byte *)(lVar5 + 0x570);
  FUN_01195974(param_1);
  iVar1 = *(int *)(param_1 + 0x108);
  iVar3 = FUN_019aeb9c(lVar5,0);
  uVar8 = (uint)bVar2;
  if (1 < iVar1 - 1U) {
    uVar6 = FUN_01dd66b8(param_1);
    uVar7 = uVar8 + param_2;
    if ((uVar6 & 1) != 0) {
      if (-1 < (int)uVar7) {
        if ((int)uVar7 < iVar3) goto LAB_01dd6660;
        if (uVar8 == 0x20) {
          uVar7 = iVar3 - 1U & param_2 >> 0x1f;
          goto LAB_01dd6660;
        }
      }
      uVar7 = 0x20;
      goto LAB_01dd6660;
    }
  }
  if ((int)(uVar8 + param_2) < 0) {
    uVar7 = uVar8 + param_2 + iVar3;
  }
  else {
    iVar1 = 0;
    if (iVar3 <= (int)(uVar8 + param_2)) {
      iVar1 = iVar3;
    }
    uVar7 = (uVar8 + param_2) - iVar1;
  }
LAB_01dd6660:
  FUN_014e7bf0(param_1,uVar7);
  uVar4 = FUN_014e5f3c(lVar5,uVar7);
  FUN_014e799c(param_1,uVar4);
  FUN_01dc0660(lVar5,uVar7);
  return;
}


