/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00490830; name: FUN_00490830
 */


undefined8 FUN_00490830(long *param_1,int param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (param_2 == 1) {
    param_1 = param_1 + 1;
    piVar6 = (int *)*param_1;
    if (piVar6 == (int *)0x0) goto LAB_004908cc;
LAB_00490860:
    if (*piVar6 == 0) {
      return 0;
    }
    puVar2 = (undefined4 *)FUN_003e49a0(PTR_DAT_047cd618);
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    piVar6 = (int *)*param_1;
    if (piVar6 != (int *)0x0) goto LAB_00490860;
LAB_004908cc:
    lVar4 = FUN_003e49a0(PTR_DAT_047cd628);
    *param_1 = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
    uVar5 = FUN_0047de20(FUN_00490970);
    *(undefined8 *)(*param_1 + 8) = uVar5;
    if (*(long *)((undefined4 *)*param_1 + 2) == 0) {
      return 0;
    }
    *(undefined4 *)*param_1 = 1;
    puVar2 = (undefined4 *)FUN_003e49a0(PTR_DAT_047cd618);
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
  }
  if (param_4 == 0) {
    *puVar2 = 0;
    *(undefined8 *)(puVar2 + 2) = param_3;
  }
  else {
    *puVar2 = 1;
    puVar3 = (undefined8 *)FUN_003e49a0(PTR_DAT_047cd620);
    *(undefined8 **)(puVar2 + 2) = puVar3;
    if (puVar3 == (undefined8 *)0x0) goto LAB_0049094c;
    thunk_FUN_003df2e0(*puVar3);
    **(undefined8 **)(puVar2 + 2) = param_3;
    thunk_FUN_003df2e0(*(undefined8 *)(*(long *)(puVar2 + 2) + 8));
    *(long *)(*(long *)(puVar2 + 2) + 8) = param_4;
  }
  iVar1 = FUN_0047e2f0(*(undefined8 *)(*param_1 + 8),puVar2);
  if (iVar1 != 0) {
    return 1;
  }
LAB_0049094c:
  FUN_003e4550(puVar2,PTR_DAT_047cd618);
  return 0;
}


