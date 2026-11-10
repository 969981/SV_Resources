/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e1ab00; name: FUN_02e1ab00
 */


undefined8 FUN_02e1ab00(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  if ((*(byte *)(*(long *)(*param_1 + 0x38) + 0x499) >> 2 & 1) == 0) {
    uVar4 = FUN_02942230(param_1);
    return uVar4;
  }
  lVar6 = param_1[2];
  uVar7 = (ulong)*(byte *)(lVar6 + 0x2420);
  if (*(byte *)(lVar6 + 0x2420) != 0) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      if (((uint)uVar9 & 0xff) < (uint)uVar7) {
        lVar1 = lVar6 + lVar8;
        iVar2 = *(int *)(lVar1 + 8);
        if ((iVar2 != 0) && ((*(byte *)(lVar1 + 0x60) >> 5 & 1) != 0)) {
          lVar6 = *(long *)(param_1[1] + 0x310);
          if (((*(byte *)(*(long *)(*(long *)(lVar6 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
             (*(int *)(lVar6 + 0x18) == 0)) {
            uVar4 = FUN_015b5634(*(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x30),1);
            plVar5 = (long *)FUN_0124c614(uVar4,0);
            if (plVar5 != (long *)0x0) {
              uVar3 = (**(code **)(*plVar5 + 0x98))();
              *(undefined4 *)(lVar6 + 0x18) = uVar3;
            }
          }
          if (*(int *)(lVar6 + 0x18) != iVar2) {
            iVar2 = *(int *)(lVar1 + 8);
            if (iVar2 == 0) {
              return 10;
            }
            uVar4 = FUN_014813ec(param_1[1]);
            uVar4 = FUN_010e161c(uVar4,iVar2);
            return uVar4;
          }
          lVar6 = param_1[2];
        }
      }
      uVar7 = (ulong)*(byte *)(lVar6 + 0x2420);
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x8c;
    } while (uVar9 < uVar7);
  }
  return 10;
}


