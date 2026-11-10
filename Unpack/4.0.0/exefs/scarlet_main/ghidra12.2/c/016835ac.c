/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016835ac; name: FUN_016835ac
 */


void FUN_016835ac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  
  if (*(char *)(param_3[1] + 8) == '\t') {
    plVar14 = (long *)param_3[3];
    *(undefined1 *)(plVar14 + 0x15) = 0;
    if (*(char *)((long)plVar14 + 0xa6) != '\0') {
      plVar9 = (long *)*plVar14;
      *(undefined1 *)(plVar14 + 0x15) = 1;
      while (plVar9 != (long *)0x0) {
        sVar3 = (**(code **)(*plVar9 + 0x230))(plVar9);
        if ((sVar3 == 3) && (iVar6 = FUN_01684710(plVar14,plVar9), iVar6 == 1)) {
          FUN_02982adc(param_1,plVar9);
        }
        bVar1 = *(byte *)(plVar14 + 0x15);
        if (*(byte *)((long)plVar14 + 0xa6) <= bVar1) break;
        *(byte *)(plVar14 + 0x15) = bVar1 + 1;
        plVar9 = (long *)plVar14[bVar1];
      }
    }
  }
  lVar13 = param_3[3];
  uVar11 = (ulong)*(byte *)(lVar13 + 0xa6);
  if (uVar11 != 0) {
    uVar15 = 0;
    uVar16 = uVar11 - 1;
    while( true ) {
      if (uVar15 < uVar11) {
        plVar14 = *(long **)(lVar13 + uVar15 * 8);
      }
      else {
        plVar14 = (long *)0x0;
      }
      lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x38);
      if (((*(byte *)(lVar12 + 0x499) >> 2 & 1) == 0) && (*(uint *)(lVar12 + 0x30) < 2)) {
        lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x290);
        uVar5 = (**(code **)(*plVar14 + 0x98))(plVar14);
        piVar8 = (int *)FUN_011e2dd4(*(undefined8 *)(*(long *)(lVar12 + 8) + 0x50),uVar5);
        if (((piVar8 == (int *)0x0) || (4 < *piVar8 || *piVar8 == 0)) &&
           ((cVar2 = (**(code **)(*plVar14 + 0x460))(plVar14), cVar2 == -1 &&
            (uVar11 = (**(code **)(*plVar14 + 0x200))(plVar14), (uVar11 & 1) == 0)))) {
          uVar4 = (**(code **)(*plVar14 + 0x108))(plVar14);
          uVar7 = (**(code **)(*plVar14 + 0x110))(plVar14);
          if (((uint)uVar4 * 0x100 <= (uVar7 & 0xffff) * 0x80) &&
             ((uVar4 != 0 && ((uint)uVar4 * 0x100 <= ((uVar7 & 0xffff) << 8) / 5)))) {
            uVar5 = (**(code **)(*plVar14 + 0x98))(plVar14);
            uVar10 = FUN_01243584(param_1);
            FUN_02982b74(uVar10,uVar5,1,1,0x2e9,uVar5,0);
          }
        }
      }
      if (uVar16 == uVar15) break;
      uVar11 = (ulong)*(byte *)(lVar13 + 0xa6);
      uVar15 = uVar15 + 1;
    }
    lVar13 = param_3[3];
  }
  FUN_01683930(*(undefined8 *)(param_1 + 0x38),param_3[2],lVar13,*param_3,param_3[1],
               *(undefined1 *)(param_3 + 4),0,0xab);
  FUN_01683930(*(undefined8 *)(param_1 + 0x38),param_3[2],param_3[3],*param_3,param_3[1],
               *(undefined1 *)(param_3 + 4),1,0xaa);
  FUN_01683930(*(undefined8 *)(param_1 + 0x38),param_3[2],param_3[3],*param_3,param_3[1],
               *(undefined1 *)(param_3 + 4),0,0xac);
  plVar14 = (long *)param_3[3];
  *(undefined1 *)(plVar14 + 0x15) = 0;
  if (*(char *)((long)plVar14 + 0xa6) != '\0') {
    plVar9 = (long *)*plVar14;
    *(undefined1 *)(plVar14 + 0x15) = 1;
    while (plVar9 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar9 + 0x98))();
      lVar13 = *(long *)(*(long *)(param_1 + 0x78) + 0x2e0);
      plVar9 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(lVar13 + 0x10) + 0x30),uVar5);
      sVar3 = (**(code **)(*plVar9 + 0x2a8))();
      if (sVar3 != 0) {
        FUN_01877748(*(undefined8 *)(lVar13 + 0x38),plVar9,1);
      }
      bVar1 = *(byte *)(plVar14 + 0x15);
      if (*(byte *)((long)plVar14 + 0xa6) <= bVar1) break;
      *(byte *)(plVar14 + 0x15) = bVar1 + 1;
      plVar9 = (long *)plVar14[bVar1];
    }
  }
  FUN_01683930(*(undefined8 *)(param_1 + 0x38),param_3[2],param_3[3],*param_3,param_3[1],
               *(undefined1 *)(param_3 + 4),0,0xad);
  FUN_01683930(*(undefined8 *)(param_1 + 0x38),param_3[2],param_3[3],*param_3,param_3[1],
               *(undefined1 *)(param_3 + 4),0,0xae);
  FUN_01683930(*(undefined8 *)(param_1 + 0x38),param_3[2],param_3[3],*param_3,param_3[1],
               *(undefined1 *)(param_3 + 4),1,0xaf);
  FUN_016843b0(*(undefined8 *)(param_1 + 0x38),param_3[2],param_3[3],param_3[1],
               *(undefined1 *)(param_3 + 4));
  return;
}


