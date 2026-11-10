/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01733984; name: FUN_01733984
 */


void FUN_01733984(long param_1)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  int iVar11;
  
  if (*(code **)(param_1 + 0x450) != (code *)0x0) {
    (**(code **)(param_1 + 0x450))(param_1 + 0x470);
  }
  if (*(char *)(param_1 + 0x99a) == '\0') {
    FUN_01733c20(param_1);
  }
  *(undefined1 *)(param_1 + 0x81) = 1;
  lVar9 = *(long *)(param_1 + 0x930);
  *(undefined1 *)(param_1 + 0x84) = 0;
  piVar1 = (int *)(param_1 + 0x8e4);
  bVar7 = *(int *)(lVar9 + 0x28) != 0;
  piVar2 = (int *)(param_1 + 0x8e8);
  if (bVar7) {
    piVar2 = piVar1;
  }
  iVar11 = *piVar2;
  fVar10 = *(float *)(*(long *)(param_1 + 0x880) + 0x1d4);
  iVar4 = *(int *)(lVar9 + 0x14);
  piVar2 = (int *)(lVar9 + 0x20);
  if (bVar7) {
    piVar2 = (int *)(lVar9 + 0x24);
  }
  iVar5 = *piVar2;
  iVar8 = (**(code **)(**(long **)(param_1 + 0x148) + 0x80))();
  if (iVar8 <= iVar4 + iVar5 * (int)(fVar10 + (float)iVar11)) {
    FUN_01734874(param_1);
  }
  *(undefined4 *)(param_1 + 0xb04) = 0;
  lVar9 = *(long *)(param_1 + 0x930);
  *(undefined4 *)(param_1 + 0xb10) = 0;
  *(undefined8 *)(param_1 + 0xb08) = *(undefined8 *)piVar1;
  iVar4 = *(int *)(lVar9 + 0x10);
  iVar11 = *(int *)(lVar9 + 0x14);
  piVar2 = (int *)(lVar9 + 0x20);
  if (*(int *)(lVar9 + 0x28) != 0) {
    piVar2 = (int *)(lVar9 + 0x24);
  }
  iVar5 = *piVar2;
  iVar8 = FUN_01733ac4(lVar9,piVar1);
  lVar3 = 0x20;
  if (*(int *)(lVar9 + 0x28) != 0) {
    lVar3 = 0x24;
  }
  iVar6 = 0;
  if (iVar5 != 0) {
    iVar6 = (iVar11 + iVar5 * iVar4) / iVar5;
  }
  iVar4 = 0;
  if (*(int *)(lVar9 + lVar3) != 0) {
    iVar4 = iVar8 / *(int *)(lVar9 + lVar3);
  }
  FUN_01733b00((float)((iVar4 - iVar6) + *(int *)(*(long *)(param_1 + 0x930) + 0x10)),
               *(undefined8 *)(param_1 + 0x880),*(undefined4 *)(param_1 + 0xa24));
  return;
}


