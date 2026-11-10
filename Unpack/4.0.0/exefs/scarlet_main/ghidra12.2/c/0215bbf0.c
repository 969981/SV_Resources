/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0215bbf0; name: FUN_0215bbf0
 */


void FUN_0215bbf0(long param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(code **)(param_1 + 0x450) != (code *)0x0) {
    (**(code **)(param_1 + 0x450))(param_1 + 0x470);
  }
  lVar7 = *(long *)(param_1 + 0x930);
  piVar1 = (int *)(lVar7 + 0x20);
  if (*(int *)(lVar7 + 0x28) != 0) {
    piVar1 = (int *)(lVar7 + 0x24);
  }
  iVar6 = *piVar1;
  iVar3 = 0;
  if (iVar6 != 0) {
    iVar3 = (*(int *)(lVar7 + 0x14) + iVar6 * *(int *)(lVar7 + 0x10)) / iVar6;
  }
  iVar6 = FUN_01733ac4(lVar7,param_1 + 0x8e4);
  lVar2 = 0x20;
  if (*(int *)(lVar7 + 0x28) != 0) {
    lVar2 = 0x24;
  }
  lVar8 = *(long *)(param_1 + 0x910);
  iVar4 = 0;
  if (*(int *)(lVar7 + lVar2) != 0) {
    iVar4 = iVar6 / *(int *)(lVar7 + lVar2);
  }
  fVar12 = (float)((iVar4 - iVar3) + *(int *)(*(long *)(param_1 + 0x930) + 0x10));
  if (*(char *)(lVar8 + 8) != '\0') {
    FUN_00f6bf24(lVar8);
    uVar9 = (**(code **)(**(long **)(lVar8 + 0x10) + 0x30))(*(long **)(lVar8 + 0x10),lVar8 + 0x58);
    uStack_38 = *(undefined8 *)(lVar8 + 0xf8);
    fVar11 = (float)uVar9 + *(float *)(lVar8 + 0xe0) * 0.5;
    uVar10 = (undefined4)((ulong)uVar9 >> 0x20);
    fVar5 = (float)(int)fVar12;
    if (*(char *)(lVar8 + 0x104) != '\0') {
      fVar5 = fVar12;
    }
    *(undefined8 *)(lVar8 + 0xf8) = uStack_38;
    *(ulong *)(lVar8 + 0xf0) = CONCAT44(uVar10,fVar11);
    local_40 = CONCAT44(uVar10,fVar11 + *(float *)(lVar8 + 0x100) * fVar5);
    (**(code **)(**(long **)(lVar8 + 0x10) + 0x28))(*(long **)(lVar8 + 0x10),lVar8 + 0x38,&local_40)
    ;
  }
  FUN_0215bd60(param_1);
  FUN_0215bf24(param_1,0);
  FUN_01733b00(fVar12,*(undefined8 *)(param_1 + 0x880),*(undefined4 *)(param_1 + 0xa28));
  if (*(char *)(param_1 + 0x99a) == '\0') {
    FUN_01733c20(param_1);
  }
  *(undefined1 *)(param_1 + 0x81) = 1;
  *(undefined1 *)(param_1 + 0x84) = 0;
  return;
}


