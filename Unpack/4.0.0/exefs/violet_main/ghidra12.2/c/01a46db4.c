/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a46db4; name: FUN_01a46db4
 */


undefined8 FUN_01a46db4(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x30) == 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x50) + 0x30);
    uVar2 = FUN_00f7e274(lVar6 + 0x60);
    uVar3 = FUN_01a46f48(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),1);
    uVar1 = uVar2 & 0xff;
    if (uVar3 <= (uVar2 & 0xff)) {
      uVar1 = uVar3;
    }
    if (uVar1 != 0) {
      if (((*(char *)(lVar6 + 0x90) == '\0') ||
          (plVar5 = *(long **)(lVar6 + 0x60), plVar5 == (long *)0x0)) ||
         (uVar4 = (**(code **)(*plVar5 + 0x200))(plVar5), (uVar4 & 1) != 0)) {
        iVar7 = 0;
        uVar2 = 0;
      }
      else {
        uVar2 = (**(code **)(*plVar5 + 0x308))(plVar5);
        uVar2 = uVar2 & 1;
        iVar7 = 1;
      }
      if (uVar1 != 1) {
        if (((1 < *(byte *)(lVar6 + 0x90)) &&
            (plVar5 = *(long **)(lVar6 + 0x68), plVar5 != (long *)0x0)) &&
           (uVar4 = (**(code **)(*plVar5 + 0x200))(plVar5), (uVar4 & 1) == 0)) {
          iVar7 = iVar7 + 1;
          uVar4 = (**(code **)(*plVar5 + 0x308))(plVar5);
          if ((uVar4 & 1) != 0) {
            uVar2 = 1;
          }
        }
        if (uVar1 != 2) {
          lVar8 = 0;
          do {
            if (((((int)lVar8 + 2U & 0xff) < (uint)*(byte *)(lVar6 + 0x90)) &&
                (plVar5 = *(long **)(lVar6 + 0x70 + lVar8 * 8), plVar5 != (long *)0x0)) &&
               (uVar4 = (**(code **)(*plVar5 + 0x200))(plVar5), (uVar4 & 1) == 0)) {
              iVar7 = iVar7 + 1;
              uVar4 = (**(code **)(*plVar5 + 0x308))(plVar5);
              if ((uVar4 & 1) != 0) {
                uVar2 = 1;
              }
            }
            lVar8 = lVar8 + 1;
          } while ((ulong)uVar1 - 2 != lVar8);
        }
      }
      if ((iVar7 == 1) && (uVar2 != 0)) {
        return 1;
      }
    }
  }
  return 0;
}


