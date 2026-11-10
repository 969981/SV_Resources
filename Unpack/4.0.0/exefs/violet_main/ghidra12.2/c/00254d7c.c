/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00254d7c; name: FUN_00254d7c
 */


void FUN_00254d7c(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  
  if (*param_1 == 0) {
    lVar2 = FUN_0049e770(PTR_FUN_047cba38,0x30);
    if (lVar2 != 0) {
                    /* try { // try from 00254dac to 00254db7 has its CatchHandler @ 00254e60 */
      FUN_0026972c(lVar2,0);
    }
    *param_1 = lVar2;
  }
  uVar3 = FUN_00263770(param_2);
  lVar2 = *param_1;
  piVar5 = *(int **)(lVar2 + 0x20);
  if (piVar5 == (int *)0x0) {
    iVar6 = *(int *)(lVar2 + 0x1c);
LAB_00254e10:
                    /* try { // try from 00254e14 to 00254e53 has its CatchHandler @ 00254e64 */
    FUN_00532334((undefined8 *)(lVar2 + 0x10),iVar6 + 1);
    piVar5 = *(int **)(lVar2 + 0x20);
    iVar6 = *piVar5;
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x18);
    iVar6 = *piVar5;
    if (iVar1 < iVar6) {
      *(int *)(lVar2 + 0x18) = iVar1 + 1;
      uVar4 = *(undefined8 *)(piVar5 + (long)iVar1 * 2 + 2);
      goto LAB_00254e4c;
    }
    if (iVar6 == *(int *)(lVar2 + 0x1c)) goto LAB_00254e10;
  }
  *piVar5 = iVar6 + 1;
  uVar4 = FUN_0026ae18(*(undefined8 *)(lVar2 + 0x10));
  iVar6 = *(int *)(lVar2 + 0x18);
  *(int *)(lVar2 + 0x18) = iVar6 + 1;
  *(undefined8 *)(*(long *)(lVar2 + 0x20) + (long)iVar6 * 8 + 8) = uVar4;
LAB_00254e4c:
  FUN_002696a0(uVar4,uVar3);
  return;
}


