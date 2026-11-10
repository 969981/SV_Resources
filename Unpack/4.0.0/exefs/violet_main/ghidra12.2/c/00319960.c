/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00319960; name: FUN_00319960
 */


undefined8 FUN_00319960(long *param_1)

{
  undefined4 *puVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 *puVar9;
  long lVar10;
  
  lVar5 = param_1[2];
  if (lVar5 == param_1[3]) {
    return 0;
  }
  if (param_1[3] == 0) {
LAB_003199e0:
    lVar5 = param_1[1];
    iVar4 = rand();
    uVar7 = param_1[2];
    uVar3 = 0;
    if (uVar7 != 0) {
      uVar3 = (ulong)(long)iVar4 / uVar7;
    }
    return *(undefined8 *)(lVar5 + ((long)iVar4 - uVar3 * uVar7) * 8);
  }
  if (lVar5 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    puVar1 = (undefined4 *)*param_1;
    plVar2 = (long *)param_1[1];
    lVar6 = 0;
    plVar8 = plVar2;
    puVar9 = puVar1;
    do {
      lVar10 = *plVar8;
      if (lVar10 != 0) {
        puVar1[lVar6] = *puVar9;
        plVar2[lVar6] = lVar10;
        lVar6 = lVar6 + 1;
      }
      lVar5 = lVar5 + -1;
      puVar9 = puVar9 + 1;
      plVar8 = plVar8 + 1;
    } while (lVar5 != 0);
    param_1[2] = lVar6;
    param_1[3] = 0;
    if (lVar6 != 0) goto LAB_003199e0;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


