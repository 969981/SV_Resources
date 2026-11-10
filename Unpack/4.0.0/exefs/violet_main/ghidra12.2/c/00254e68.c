/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00254e68; name: FUN_00254e68
 */


void FUN_00254e68(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  
  lVar8 = *param_1;
  if (lVar8 == 0) {
    lVar8 = FUN_0049e770(PTR_FUN_047cba38,0x30);
    if (lVar8 != 0) {
                    /* try { // try from 00254e98 to 00254ea3 has its CatchHandler @ 00254f60 */
      FUN_0026972c(lVar8,0);
    }
    *param_1 = lVar8;
  }
  puVar1 = (ulong *)(lVar8 + 0x10);
  lVar4 = FUN_00263a2c(param_2);
  uVar6 = *(ulong *)(lVar4 + 8);
  puVar5 = (ulong *)(uVar6 & 0xfffffffffffffffe);
  if ((uVar6 & 1) == 0) {
    if ((ulong *)*puVar1 != puVar5) goto LAB_00254ed4;
  }
  else if (*puVar1 != *puVar5) goto LAB_00254ed4;
  piVar7 = *(int **)(lVar8 + 0x20);
  if (piVar7 != (int *)0x0) {
    iVar2 = *piVar7;
    if (iVar2 < *(int *)(lVar8 + 0x1c)) {
      iVar3 = *(int *)(lVar8 + 0x18);
      if (iVar3 < iVar2) {
        *(undefined8 *)(piVar7 + (long)iVar2 * 2 + 2) =
             *(undefined8 *)(piVar7 + (long)iVar3 * 2 + 2);
      }
      *(long *)(piVar7 + (long)iVar3 * 2 + 2) = lVar4;
      *(int *)(lVar8 + 0x18) = iVar3 + 1;
      **(int **)(lVar8 + 0x20) = **(int **)(lVar8 + 0x20) + 1;
      return;
    }
  }
LAB_00254ed4:
  if ((uVar6 & 1) != 0) {
    puVar5 = (ulong *)*puVar5;
  }
                    /* try { // try from 00254ed8 to 00254edf has its CatchHandler @ 00254f64 */
  FUN_00254fbc(puVar1,lVar4,puVar5);
  return;
}


