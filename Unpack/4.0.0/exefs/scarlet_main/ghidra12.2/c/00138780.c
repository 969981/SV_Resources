/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00138780; name: FUN_00138780
 */


void FUN_00138780(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  
  uVar2 = FUN_001261b0(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x60),
                       *(undefined4 *)(param_1 + 4));
  if (param_3 == 0) goto LAB_001388c8;
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  if (param_3 - 0x121U < 4) {
    plVar10 = *(long **)(param_1 + 0x48);
    lVar7 = plVar10[1];
    uVar1 = plVar10[2];
    uVar8 = lVar7 + 1;
    if (uVar1 < uVar8) {
      if (0x3ffffffffffffffe < uVar1) {
        FUN_00138780(param_1,"lexical element too long",0);
        goto LAB_001387f8;
      }
      lVar3 = FUN_0012d4f0(uVar9,*plVar10,uVar1,uVar1 << 1);
      lVar7 = plVar10[1];
      uVar8 = lVar7 + 1;
      *plVar10 = lVar3;
      plVar10[2] = uVar1 << 1;
    }
    else {
      lVar3 = *plVar10;
    }
    plVar10[1] = uVar8;
    *(undefined1 *)(lVar3 + lVar7) = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    puVar5 = (undefined *)**(undefined8 **)(param_1 + 0x48);
LAB_00138894:
    puVar5 = (undefined *)FUN_0012e860(uVar4,&DAT_03c16014,puVar5);
  }
  else {
LAB_001387f8:
    if (param_3 < 0x100) {
      if (((byte)(&DAT_03cb5f2b)[param_3] >> 2 & 1) == 0) {
        pcVar6 = "\'<\\%d>\'";
      }
      else {
        pcVar6 = "\'%c\'";
      }
      puVar5 = (undefined *)FUN_0012e860(uVar9,pcVar6,param_3);
    }
    else {
      puVar5 = (&PTR_DAT_04483148)[param_3 - 0x100];
      if (param_3 < 0x120) {
        uVar4 = uVar9;
        goto LAB_00138894;
      }
    }
  }
  FUN_0012e860(uVar9,"%s near %s",uVar2,puVar5);
LAB_001388c8:
                    /* WARNING: Subroutine does not return */
  FUN_00126bd0(*(undefined8 *)(param_1 + 0x38),3);
}


