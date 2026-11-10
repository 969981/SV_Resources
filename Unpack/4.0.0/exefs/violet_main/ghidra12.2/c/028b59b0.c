/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b59b0; name: FUN_028b59b0
 */


undefined4 FUN_028b59b0(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  long lVar19;
  
  if (*param_2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = FUN_028b5bc0(param_1);
  }
  puVar18 = (undefined8 *)param_2[1];
  if (puVar18 == (undefined8 *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = FUN_028b5c00(param_1,*puVar18,puVar18[1]);
  }
  lVar2 = param_2[2];
  lVar3 = param_2[3];
  lVar6 = param_2[4];
  cVar4 = *(char *)((long)param_2 + 0x21);
  if (param_2[5] == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = FUN_028b5c80(param_1);
  }
  lVar7 = param_2[6];
  uVar1 = *(undefined4 *)((long)param_2 + 0x34);
  puVar18 = (undefined8 *)param_2[7];
  if (puVar18 == (undefined8 *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar13 = FUN_028b5cb0(param_1,*puVar18,puVar18[1],*(undefined1 *)(puVar18 + 2),
                          *(undefined1 *)((long)puVar18 + 0x11));
  }
  if (param_2[8] == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = FUN_028b5e10(param_1);
  }
  lVar19 = param_2[9];
  if ((lVar19 == 0) || (**(char **)(lVar19 + 0x38) == '\0')) {
    uVar15 = FUN_028b5e50(param_1,&DAT_03c886bc,0);
  }
  else {
    uVar15 = FUN_01571da0(param_1,*(char **)(lVar19 + 0x38),*(undefined8 *)(lVar19 + 0x40));
  }
  lVar19 = param_2[10];
  uVar5 = *(undefined1 *)((long)param_2 + 0x54);
  lVar8 = param_2[0xb];
  if (param_2[0xc] == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = FUN_028b5f30(param_1);
  }
  lVar9 = param_2[0xd];
  if (param_2[0xe] == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = FUN_028b6040(param_1);
  }
  uVar10 = FUN_028b6070(param_1,uVar10,uVar11,lVar2,lVar3,(char)lVar6,cVar4 != '\0',uVar12,
                        (int)lVar7,uVar1,uVar13,uVar14,uVar15,(int)lVar19,uVar5,(int)lVar8,uVar16,
                        (char)lVar9 != '\0',uVar17);
  return uVar10;
}


