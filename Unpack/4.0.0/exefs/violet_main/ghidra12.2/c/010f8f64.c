/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010f8f64; name: FUN_010f8f64
 */


void FUN_010f8f64(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  
  FUN_010f9510(param_2);
  iVar2 = FUN_010f9114(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),param_3);
  if (0 < iVar2) {
    lVar1 = 0;
    if (param_3 < 5) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x50) + 0x30) + (ulong)param_3 * 0x38 + 0x28;
    }
    plVar3 = (long *)FUN_0124c614(lVar1,0);
    if ((plVar3 != (long *)0x0) && (uVar4 = (**(code **)(*plVar3 + 0x208))(), (uVar4 & 1) != 0)) {
      FUN_01247a58(param_2,plVar3);
    }
    if (iVar2 != 1) {
      uVar4 = (ulong)param_3;
      lVar1 = 0;
      if (param_3 < 5) {
        lVar1 = *(long *)(*(long *)(param_1 + 0x50) + 0x30) + uVar4 * 0x38 + 0x28;
      }
      plVar3 = (long *)FUN_0124c614(lVar1,1);
      if ((plVar3 != (long *)0x0) && (uVar5 = (**(code **)(*plVar3 + 0x208))(), (uVar5 & 1) != 0)) {
        FUN_01247a58(param_2,plVar3);
      }
      if (iVar2 != 2) {
        lVar1 = 0;
        if (param_3 < 5) {
          lVar1 = *(long *)(*(long *)(param_1 + 0x50) + 0x30) + uVar4 * 0x38 + 0x28;
        }
        plVar3 = (long *)FUN_0124c614(lVar1,2);
        if ((plVar3 != (long *)0x0) && (uVar5 = (**(code **)(*plVar3 + 0x208))(), (uVar5 & 1) != 0))
        {
          FUN_01247a58(param_2,plVar3);
        }
        if (iVar2 != 3) {
          iVar6 = 3;
          do {
            lVar1 = 0;
            if (param_3 < 5) {
              lVar1 = *(long *)(*(long *)(param_1 + 0x50) + 0x30) + uVar4 * 0x38 + 0x28;
            }
            plVar3 = (long *)FUN_0124c614(lVar1,iVar6);
            if ((plVar3 != (long *)0x0) &&
               (uVar5 = (**(code **)(*plVar3 + 0x208))(), (uVar5 & 1) != 0)) {
              FUN_01247a58(param_2,plVar3);
            }
            iVar6 = iVar6 + 1;
          } while (iVar2 != iVar6);
        }
      }
    }
  }
  return;
}


