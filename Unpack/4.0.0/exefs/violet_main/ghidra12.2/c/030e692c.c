/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030e692c; name: FUN_030e692c
 */


void FUN_030e692c(long param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  long local_60;
  undefined8 local_58;
  undefined4 local_38 [2];
  
  local_60 = 0;
  local_58 = -0x8000000000000000;
  iVar3 = FUN_030e62e8((long *)(param_1 + 0x50),param_2,&local_60);
  lVar9 = local_58;
  uVar4 = (ulong)local_58._4_4_;
  local_58 = (ulong)local_58._4_4_ << 0x20;
  if ((-1 < lVar9) && (local_60 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_60,uVar4 << 3);
  }
  lVar6 = *(long *)(param_1 + 0x50);
  lVar9 = lVar6 + (long)iVar3 * 0x18;
  puVar10 = (undefined8 *)(lVar9 + 8);
  piVar5 = (int *)*puVar10;
  piVar11 = (int *)(lVar9 + 0x10);
  iVar1 = *piVar11;
  lVar9 = (long)iVar1;
  if (iVar1 != 0) {
    lVar7 = lVar9 << 3;
    piVar8 = piVar5;
    do {
      if (*piVar8 != -2) {
        bVar2 = false;
        goto LAB_030e69e0;
      }
      lVar7 = lVar7 + -8;
      piVar8 = piVar8 + 2;
    } while (lVar7 != 0);
  }
  bVar2 = true;
LAB_030e69e0:
  if (param_3 < iVar1) {
    piVar5 = piVar5 + (long)param_3 * 2;
  }
  else {
    if ((int)(*(uint *)(lVar6 + (long)iVar3 * 0x18 + 0x14) & 0x7fffffff) <= iVar1) {
      FUN_030e93a4(puVar10,PTR_PTR_047d1a50,(long)(iVar1 + 1));
      lVar9 = (long)*piVar11;
      piVar5 = (int *)*puVar10;
    }
    piVar5 = piVar5 + lVar9 * 2;
    *piVar11 = iVar1 + 1;
  }
  piVar5[0] = -1;
  piVar5[1] = -1;
  if (bVar2) {
    local_38[0] = *param_2;
    FUN_030e643c(param_1,local_38);
  }
  return;
}


