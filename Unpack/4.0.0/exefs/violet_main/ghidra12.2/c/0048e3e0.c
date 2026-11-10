/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048e3e0; name: FUN_0048e3e0
 */


undefined8
FUN_0048e3e0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
            )

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 local_38;
  
  lVar2 = FUN_0048e090();
  if (lVar2 == 0) {
    return 0;
  }
  piVar6 = *(int **)(lVar2 + 8);
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  if (*piVar6 == 1) {
    lVar3 = *(long *)(piVar6 + 2);
    if (lVar3 != 0) goto LAB_0048e47c;
  }
  else if ((*piVar6 == 0) && (*(long *)(piVar6 + 2) != 0)) {
    return 0;
  }
  lVar3 = FUN_0047dcc0();
  if (lVar3 == 0) {
    return 0;
  }
  if (param_2 == 1) {
    puVar5 = &LAB_00490220;
LAB_0048e464:
    FUN_0047d9e0(lVar3,puVar5);
  }
  else if (param_2 == 2) {
    puVar5 = &LAB_00490230;
    goto LAB_0048e464;
  }
  puVar7 = *(undefined4 **)(lVar2 + 8);
  *puVar7 = 1;
  *(long *)(puVar7 + 2) = lVar3;
LAB_0048e47c:
  iVar1 = 4;
  if (param_2 != 1) {
    iVar1 = (uint)(param_2 == 2) << 4;
  }
  uVar4 = FUN_0048e4f0(&local_38,param_4,param_5,iVar1);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  iVar1 = FUN_0047e2f0(lVar3,local_38);
  if (iVar1 == 0) {
    FUN_003e4550(local_38,PTR_DAT_047cd5f8);
    return 0;
  }
  return 1;
}


