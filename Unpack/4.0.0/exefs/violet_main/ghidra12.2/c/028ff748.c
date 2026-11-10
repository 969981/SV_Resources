/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ff748; name: FUN_028ff748
 */


undefined4 FUN_028ff748(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  FUN_0157190c(param_1,param_3,4);
  if (param_3 != 0) {
    uVar8 = param_3;
    do {
      uVar8 = uVar8 - 1;
      iVar2 = *(int *)(param_2 + uVar8 * 4);
      if (*(ulong *)(param_1 + 0x48) < 4) {
        *(undefined8 *)(param_1 + 0x48) = 4;
      }
      lVar1 = *(long *)(param_1 + 0x30);
      uVar3 = -((*(int *)(param_1 + 0x20) - (int)lVar1) + *(int *)(param_1 + 0x28));
      uVar7 = (ulong)uVar3 & 3;
      if ((ulong)(lVar1 - *(long *)(param_1 + 0x38)) < uVar7) {
        FUN_0157184c(param_1,uVar7);
        puVar5 = (undefined1 *)(*(long *)(param_1 + 0x30) - uVar7);
        *(undefined1 **)(param_1 + 0x30) = puVar5;
LAB_028ff824:
        *puVar5 = 0;
        if ((uVar7 != 1) && (*(undefined1 *)(*(long *)(param_1 + 0x30) + 1) = 0, uVar7 != 2)) {
          uVar6 = 2;
          do {
            *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar6) = 0;
            uVar6 = uVar6 + 1;
          } while (uVar7 != uVar6);
        }
      }
      else {
        puVar5 = (undefined1 *)(lVar1 - uVar7);
        *(undefined1 **)(param_1 + 0x30) = puVar5;
        if ((uVar3 & 3) != 0) goto LAB_028ff824;
      }
      FUN_015713f8(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                            *(int *)(param_1 + 0x28)) - iVar2) + 4);
    } while (uVar8 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar4 = FUN_015713f8(param_1,param_3 & 0xffffffff);
  return uVar4;
}


