/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00224a64; name: FUN_00224a64
 */


undefined8 FUN_00224a64(long param_1,long *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (0 < lVar2) {
      plVar5 = *(long **)(param_1 + 0x30);
      if (*plVar5 == 0) {
        lVar4 = (long)plVar5 + 9;
        uVar6 = (ulong)*(byte *)(plVar5 + 1);
      }
      else {
        uVar6 = plVar5[1];
        lVar4 = plVar5[2];
      }
      *param_2 = (lVar4 + uVar6) - lVar2;
      if (lVar2 < 0x80000000) {
        *param_3 = (int)lVar2;
        *(undefined8 *)(param_1 + 0x10) = 0;
        return 1;
      }
LAB_00224b88:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar5 = (long *)(param_1 + 0x30);
    uVar1 = (**(code **)(**(long **)PTR_DAT_047cbb08 + 0xe8))
                      (*(long **)PTR_DAT_047cbb08,param_1 + 0x18,plVar5);
    if ((int)uVar1 != 0) {
      plVar3 = (long *)*plVar5;
      if (*plVar3 == 0) {
        *param_2 = (long)plVar3 + 9;
        plVar5 = (long *)*plVar5;
        lVar2 = *plVar5;
      }
      else {
        *param_2 = plVar3[2];
        plVar5 = (long *)*plVar5;
        lVar2 = *plVar5;
      }
      if (lVar2 == 0) {
        uVar6 = (ulong)*(byte *)(plVar5 + 1);
      }
      else {
        uVar6 = plVar5[1];
        if (uVar6 >> 0x1f != 0) goto LAB_00224b88;
      }
      *param_3 = (int)uVar6;
      *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + uVar6;
      return 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


