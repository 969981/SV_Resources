/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297d8e8; name: FUN_0297d8e8
 */


undefined8 FUN_0297d8e8(long param_1,long *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x38);
  if (((*(byte *)(lVar4 + 0x499) >> 2 & 1) == 0) && (*(uint *)(lVar4 + 0x30) < 2)) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x290);
    uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
    piVar2 = (int *)FUN_011e2dd4(*(undefined8 *)(*(long *)(lVar4 + 8) + 0x50),uVar1);
    if ((piVar2 == (int *)0x0) || (4 < *piVar2 || *piVar2 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0297d964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_2 + 0x460))(param_2);
      return uVar3;
    }
  }
  return 0;
}


