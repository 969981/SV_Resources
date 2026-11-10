/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00138770; name: FUN_00138770
 */


void FUN_00138770(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  char *pcVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  
  iVar8 = *(int *)(param_1 + 0x10);
  auVar13 = FUN_00138780();
  lVar2 = auVar13._0_8_;
  uVar3 = FUN_001261b0(*(undefined8 *)(lVar2 + 0x38),auVar13._8_8_,*(undefined8 *)(lVar2 + 0x60),
                       *(undefined4 *)(lVar2 + 4));
  if (iVar8 == 0) goto LAB_001388c8;
  uVar11 = *(undefined8 *)(lVar2 + 0x38);
  if (iVar8 - 0x121U < 4) {
    plVar12 = *(long **)(lVar2 + 0x48);
    lVar9 = plVar12[1];
    uVar1 = plVar12[2];
    uVar10 = lVar9 + 1;
    if (uVar1 < uVar10) {
      if (0x3ffffffffffffffe < uVar1) {
        FUN_00138780(lVar2,"lexical element too long",0);
        goto LAB_001387f8;
      }
      lVar4 = FUN_0012d4f0(uVar11,*plVar12,uVar1,uVar1 << 1);
      lVar9 = plVar12[1];
      uVar10 = lVar9 + 1;
      *plVar12 = lVar4;
      plVar12[2] = uVar1 << 1;
    }
    else {
      lVar4 = *plVar12;
    }
    plVar12[1] = uVar10;
    *(undefined1 *)(lVar4 + lVar9) = 0;
    uVar5 = *(undefined8 *)(lVar2 + 0x38);
    puVar6 = (undefined *)**(undefined8 **)(lVar2 + 0x48);
LAB_00138894:
    puVar6 = (undefined *)FUN_0012e860(uVar5,&DAT_03c16014,puVar6);
  }
  else {
LAB_001387f8:
    if (iVar8 < 0x100) {
      if (((byte)(&DAT_03cb5f2b)[iVar8] >> 2 & 1) == 0) {
        pcVar7 = "\'<\\%d>\'";
      }
      else {
        pcVar7 = "\'%c\'";
      }
      puVar6 = (undefined *)FUN_0012e860(uVar11,pcVar7,iVar8);
    }
    else {
      puVar6 = (&PTR_DAT_04483148)[iVar8 - 0x100];
      if (iVar8 < 0x120) {
        uVar5 = uVar11;
        goto LAB_00138894;
      }
    }
  }
  FUN_0012e860(uVar11,"%s near %s",uVar3,puVar6);
LAB_001388c8:
                    /* WARNING: Subroutine does not return */
  FUN_00126bd0(*(undefined8 *)(lVar2 + 0x38),3);
}


