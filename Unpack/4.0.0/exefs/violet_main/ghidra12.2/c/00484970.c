/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00484970; name: FUN_00484970
 */


undefined8 FUN_00484970(long *param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  int local_1c0 [2];
  undefined8 local_1b8;
  undefined1 auStack_1b0 [24];
  undefined8 auStack_198 [6];
  undefined8 local_168 [35];
  int local_50 [2];
  undefined1 *local_48;
  
  lVar8 = *param_1;
  if (lVar8 == 0) {
    return 0;
  }
  local_1c0[0] = 0;
  local_1b8 = 0;
  FUN_0047e5e0(*(undefined8 *)(lVar8 + 0x90));
  uVar7 = *(undefined8 *)(lVar8 + 8);
  local_50[0] = param_2;
  if (param_2 == 0) {
LAB_004849e0:
    piVar3 = (int *)0x0;
    FUN_0047e600(*(undefined8 *)(lVar8 + 0x90));
    if (param_2 == 2) goto LAB_00484a40;
LAB_00484a3c:
    if (piVar3 == (int *)0x0) goto LAB_00484a40;
  }
  else {
    if (param_2 == 2) {
      puVar5 = auStack_198;
LAB_00484a04:
      local_48 = auStack_1b0;
      *puVar5 = param_3;
    }
    else if (param_2 == 1) {
      puVar5 = local_168;
      goto LAB_00484a04;
    }
    iVar1 = FUN_0047e200(uVar7,local_50);
    if (iVar1 == -1) goto LAB_004849e0;
    piVar3 = (int *)FUN_0047e450(uVar7);
    FUN_0047e600(*(undefined8 *)(lVar8 + 0x90));
    if (param_2 != 2) goto LAB_00484a3c;
LAB_00484a40:
    iVar1 = FUN_0047e430(*(undefined8 *)(lVar8 + 0x10));
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar4 = FUN_0047e450(*(undefined8 *)(lVar8 + 0x10),iVar1);
        if ((((*(long *)(lVar4 + 8) != 0) &&
             (pcVar6 = *(code **)(*(long *)(lVar4 + 8) + 0x30), pcVar6 != (code *)0x0)) &&
            (*(int *)(lVar4 + 4) == 0)) &&
           (iVar2 = (*pcVar6)(lVar4,param_2,param_3,local_1c0), iVar2 != 0)) {
          piVar3 = local_1c0;
          goto LAB_00484ab0;
        }
        iVar1 = iVar1 + 1;
        iVar2 = FUN_0047e430(*(undefined8 *)(lVar8 + 0x10));
      } while (iVar1 < iVar2);
    }
    if (piVar3 == (int *)0x0) {
      return 0;
    }
  }
LAB_00484ab0:
  iVar1 = *piVar3;
  if (iVar1 == 2) {
    uVar7 = FUN_0048a320(*(undefined8 *)(piVar3 + 2));
    iVar1 = (int)uVar7;
  }
  else {
    if (iVar1 != 1) goto LAB_00484aec;
    uVar7 = FUN_00485cf0(*(undefined8 *)(piVar3 + 2));
    iVar1 = (int)uVar7;
  }
  if (iVar1 == 0) {
    return uVar7;
  }
  iVar1 = *piVar3;
LAB_00484aec:
  *param_4 = iVar1;
  *(undefined8 *)(param_4 + 2) = *(undefined8 *)(piVar3 + 2);
  return 1;
}


