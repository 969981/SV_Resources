/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017eeb98; name: FUN_017eeb98
 */


undefined8 FUN_017eeb98(long param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (((*(byte *)(*(long *)(param_1 + 0x38) + 0x499) >> 2 & 1) == 0) &&
     (*(uint *)(*(long *)(param_1 + 0x38) + 0x30) < 2)) {
    lVar4 = *(long *)(param_2 + 0x290);
    uVar1 = (**(code **)(*param_3 + 0x98))(param_3);
    piVar2 = (int *)FUN_011e2dd4(*(undefined8 *)(*(long *)(lVar4 + 8) + 0x50),uVar1);
    if ((piVar2 == (int *)0x0) || (4 < *piVar2 || *piVar2 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x017eec0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_3 + 0x460))(param_3);
      return uVar3;
    }
  }
  return 0;
}


