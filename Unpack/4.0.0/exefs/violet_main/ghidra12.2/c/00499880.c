/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00499880; name: FUN_00499880
 */


undefined8 FUN_00499880(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  
  if (param_2 != (long *)0x0) {
    if (((*param_2 != 0) && (*(long *)(param_1 + 0xf0) != 0)) &&
       (iVar1 = thunk_FUN_003df4b0(), iVar1 != 0)) {
      return 0x1e;
    }
    if (param_2[2] != 0) {
      uVar3 = FUN_00483b50(param_1);
      iVar1 = FUN_003e0620(uVar3,param_2[2]);
      if (iVar1 != 0) {
        return 0x1f;
      }
    }
    lVar5 = param_2[1];
    if ((lVar5 != 0) && (iVar1 = FUN_0047e430(lVar5), 0 < iVar1)) {
      iVar1 = 0;
      do {
        piVar4 = (int *)FUN_0047e450(lVar5,iVar1);
        if (*piVar4 == 4) {
          lVar5 = *(long *)(piVar4 + 2);
          if (lVar5 == 0) {
            return 0;
          }
          uVar3 = FUN_00483ac0(param_1);
          iVar1 = FUN_00483880(lVar5,uVar3);
          if (iVar1 == 0) {
            return 0;
          }
          return 0x1f;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0047e430(lVar5);
      } while (iVar1 < iVar2);
    }
  }
  return 0;
}


