/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03371070; name: FUN_03371070
 */


undefined8 FUN_03371070(int *param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 *local_260;
  undefined8 local_258;
  undefined8 local_250 [64];
  
  local_260 = local_250;
  local_258 = -0x7fffffe000000000;
  uVar5 = FUN_033714e0(param_1,param_2,&local_260);
  if (*param_1 < 0) {
    uVar5 = 0;
    *param_1 = 0;
  }
  else {
    iVar9 = (int)local_258;
    if (0 < (int)local_258) {
      lVar10 = 0;
      lVar11 = 0;
      do {
        FUN_031d9d10(*(undefined8 *)((long)local_260 + lVar10),param_1 + 2);
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 0x10;
        iVar9 = (int)local_258;
      } while (lVar11 < (int)local_258);
    }
    puVar4 = local_260;
    if (param_3 != (long *)0x0) {
      lVar11 = param_3[1];
      iVar2 = (int)lVar11 + iVar9;
      if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) < iVar2) {
        FUN_0337309c(param_3,(long)iVar2);
      }
      if (iVar9 != 0) {
        lVar10 = (long)iVar9 * 0x10 + -0x10;
        puVar6 = (undefined8 *)(*param_3 + (long)(int)lVar11 * 0x10);
        puVar8 = puVar4;
        if (((uint)lVar10 >> 4 & 1) == 0) {
          uVar3 = puVar4[1];
          *puVar6 = *puVar4;
          puVar6[1] = uVar3;
          puVar6 = puVar6 + 2;
          puVar8 = puVar4 + 2;
        }
        if (lVar10 != 0) {
          do {
            uVar3 = puVar8[1];
            *puVar6 = *puVar8;
            puVar6[1] = uVar3;
            puVar1 = puVar8 + 2;
            uVar3 = puVar8[3];
            puVar8 = puVar8 + 4;
            puVar6[2] = *puVar1;
            puVar6[3] = uVar3;
            puVar6 = puVar6 + 4;
          } while (puVar8 != puVar4 + (long)iVar9 * 2);
        }
      }
      *(int *)(param_3 + 1) = iVar2;
    }
  }
  lVar11 = local_258;
  uVar7 = (ulong)local_258._4_4_;
  local_258 = (ulong)local_258._4_4_ << 0x20;
  if ((-1 < lVar11) && (local_260 != (undefined8 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_260,uVar7 << 4);
  }
  return uVar5;
}


