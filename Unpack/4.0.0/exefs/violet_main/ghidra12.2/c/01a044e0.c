/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a044e0; name: FUN_01a044e0
 */


undefined8 FUN_01a044e0(long param_1,int *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  ulong uVar10;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 7) {
    iVar9 = 0;
  }
  else {
    uVar10 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3];
    iVar9 = 0;
    if (uVar10 != 0) {
      iVar9 = *(int *)((long)param_2 + uVar10);
    }
  }
  if (iVar9 == param_3) {
    uVar7 = FUN_0123f5b0(*(undefined8 *)(param_1 + 0x50));
    bVar2 = FUN_0123f5c8(uVar7,0);
    uVar1 = (uint)bVar2;
    if (bVar2 != 0) {
      uVar7 = FUN_0123f5b0(*(undefined8 *)(param_1 + 0x50));
      uVar3 = FUN_01a046d4(uVar7,0,0);
      piVar8 = (int *)FUN_011e2dd4(*(undefined8 *)
                                    (*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x290) + 8) +
                                    0x50),uVar3);
      if (piVar8 == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *piVar8;
        if (4 < iVar9) {
          iVar9 = 0;
        }
      }
      uVar4 = FUN_01242ecc(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),iVar9,param_3);
      uVar4 = ~uVar4 & 1;
      if (uVar1 != 1) {
        uVar7 = FUN_0123f5b0(*(undefined8 *)(param_1 + 0x50));
        uVar3 = FUN_01a046d4(uVar7,0,1);
        piVar8 = (int *)FUN_011e2dd4(*(undefined8 *)
                                      (*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x290) + 8) +
                                      0x50),uVar3);
        if (piVar8 == (int *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *piVar8;
          if (4 < iVar9) {
            iVar9 = 0;
          }
        }
        uVar5 = FUN_01242ecc(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),iVar9,param_3);
        uVar4 = uVar4 + (~uVar5 & 1);
        if (uVar1 != 2) {
          uVar5 = 2;
          do {
            uVar7 = FUN_0123f5b0(*(undefined8 *)(param_1 + 0x50));
            uVar3 = FUN_01a046d4(uVar7,0,uVar5);
            piVar8 = (int *)FUN_011e2dd4(*(undefined8 *)
                                          (*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x290) +
                                                    8) + 0x50),uVar3);
            if (piVar8 == (int *)0x0) {
              iVar9 = 0;
            }
            else {
              iVar9 = *piVar8;
              if (4 < iVar9) {
                iVar9 = 0;
              }
            }
            uVar6 = FUN_01242ecc(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),iVar9,param_3);
            uVar5 = uVar5 + 1;
            uVar4 = uVar4 + (~uVar6 & 1);
          } while (uVar1 != uVar5);
        }
      }
      if ((uVar4 != 0) &&
         (((*(ushort *)((long)param_2 - (long)*param_2) < 9 ||
           (uVar10 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar10 == 0)) ||
          (*(uint *)((long)param_2 + uVar10) <= uVar4)))) {
        return 1;
      }
    }
  }
  return 0;
}


