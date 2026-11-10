/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0215c4f4; name: FUN_0215c4f4
 */


undefined8 FUN_0215c4f4(long param_1)

{
  long lVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  float local_34;
  float local_18;
  float local_14;
  
  piVar2 = (int *)(param_1 + 0x7b0);
  if (*(int *)(*(long *)(param_1 + 0x930) + 0x28) != 0) {
    piVar2 = (int *)(param_1 + 0x7ac);
  }
  iVar8 = *piVar2;
  lVar1 = param_1 + 0x8e4;
  iVar7 = FUN_0215c4dc(*(long *)(param_1 + 0x930),lVar1);
  lVar9 = *(long *)(param_1 + 0x880);
  local_14 = *(float *)(lVar9 + 0x1d4) + (float)(iVar7 * iVar8);
  local_18 = *(float *)(lVar9 + 0x1a0);
  pfVar3 = &local_18;
  if (*(float *)(lVar9 + 0x1a0) <= local_14) {
    pfVar3 = &local_14;
  }
  local_14 = *pfVar3;
  local_34 = *(float *)(lVar9 + 0x1a4);
  pfVar4 = &local_34;
  if (*pfVar3 <= *(float *)(lVar9 + 0x1a4)) {
    pfVar4 = &local_14;
  }
  fVar5 = *pfVar4;
  local_14 = fVar5;
  iVar8 = FUN_0215c4dc(*(undefined8 *)(param_1 + 0x930),lVar1);
  if ((iVar8 < 1) ||
     (*(float *)(*(long *)(param_1 + 0x880) + 0x1d4) <
      *(float *)(*(long *)(param_1 + 0x880) + 0x1a4))) {
    iVar8 = FUN_0215c4dc(*(undefined8 *)(param_1 + 0x930),lVar1);
    if ((-1 < iVar8) ||
       (*(float *)(*(long *)(param_1 + 0x880) + 0x1a0) <
        *(float *)(*(long *)(param_1 + 0x880) + 0x1d4))) {
      *(undefined1 *)(param_1 + 0xb3b) = 1;
      if (*(code **)(param_1 + 0x450) != (code *)0x0) {
        (**(code **)(param_1 + 0x450))(param_1 + 0x470);
      }
      FUN_01733b00(fVar5,*(undefined8 *)(param_1 + 0x880),*(undefined4 *)(param_1 + 0xa2c));
      FUN_01282188(param_1 + 0xac0);
      if (*(char *)(param_1 + 0x99a) == '\0') {
        FUN_01733c20(param_1);
      }
      *(undefined1 *)(param_1 + 0x84) = 0;
      *(undefined1 *)(param_1 + 0x81) = 1;
      return 1;
    }
    if (*(int *)(*(long *)(param_1 + 0x930) + 0x14) == 0) {
      return 0;
    }
    uVar6 = *(undefined4 *)(*(long *)(param_1 + 0x930) + 0x10);
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_017a4180(*(undefined8 *)(param_1 + 0x930));
    if (*(int *)(*(long *)(param_1 + 0x930) + 0x14) == iVar8) {
      return 0;
    }
    uVar6 = *(undefined4 *)(*(long *)(param_1 + 0x930) + 0x10);
  }
  FUN_01327c88(param_1,iVar8,uVar6);
  FUN_01282188(param_1 + 0xa60);
  return 0;
}


