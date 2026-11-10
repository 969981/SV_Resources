/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00191cd0; name: FUN_00191cd0
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_00191cd0(long *param_1,long param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  int *piVar18;
  
  if (param_4 <= param_3) {
    return;
  }
  lVar5 = param_1[2];
  puVar14 = (uint *)(param_2 + (long)param_4 * 0x14 + 0x10);
  uVar2 = *puVar14;
  while( true ) {
    iVar3 = param_4;
    if (uVar2 != 0) {
      uVar6 = param_1[2] + 1;
      if ((ulong)param_1[1] < uVar6) {
        iVar3 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,
                             "needmakefit","newsize <= m_capacity");
        if (iVar3 != 0) {
          halt_baddata();
        }
        uVar6 = param_1[2] + 1;
      }
      param_1[2] = uVar6;
      iVar3 = (param_4 - (uVar2 >> 8)) - (uVar2 & 0xff);
      lVar15 = *param_1 + uVar6 * 0xc;
      *(undefined4 *)(lVar15 + -4) = 0;
      *(uint *)(lVar15 + -8) = *puVar14 >> 8;
      *(uint *)(lVar15 + -0xc) = (uint)(byte)*puVar14;
    }
    lVar15 = (long)param_4;
    lVar16 = param_2 + lVar15 * 0x14;
    piVar17 = (int *)(lVar16 + 4);
    iVar13 = *piVar17;
    piVar18 = (int *)(lVar16 + 8);
    param_4 = *piVar18;
    uVar6 = param_1[2] + 1;
    if ((ulong)param_1[1] < uVar6) {
      iVar4 = FUN_0015ed20("v:/devel/projects/oodle2/core/templates/rrvector_a.h",0x3f,"needmakefit"
                           ,"newsize <= m_capacity");
      if (iVar4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar6 = param_1[2] + 1;
    }
    param_1[2] = uVar6;
    lVar16 = *param_1 + uVar6 * 0xc;
    *(int *)(lVar16 + -0xc) = *piVar18;
    param_4 = (iVar3 - iVar13) - param_4;
    *(int *)(lVar16 + -8) = *piVar17;
    iVar13 = *(int *)(param_2 + lVar15 * 0x14 + 0xc);
    iVar3 = 0;
    if (iVar13 != *(int *)(param_2 + (long)param_4 * 0x14 + 0xc)) {
      iVar3 = iVar13;
    }
    *(int *)(lVar16 + -4) = iVar3;
    if (param_4 <= param_3) break;
    puVar14 = (uint *)(param_2 + (long)param_4 * 0x14 + 0x10);
    uVar2 = *puVar14;
  }
  iVar3 = (int)param_1[2];
  iVar13 = (int)lVar5;
  if (iVar3 <= iVar13) {
    return;
  }
  lVar5 = 0;
  if (param_1[2] != 0) {
    lVar5 = *param_1;
  }
  puVar7 = (undefined8 *)((lVar5 + (long)iVar3 * 0xc) - 0xc);
  if (puVar7 <= (undefined8 *)(lVar5 + (long)iVar13 * 0xc)) {
    return;
  }
  puVar10 = (undefined8 *)(lVar5 + (long)iVar13 * 0xc);
  do {
    puVar9 = (undefined8 *)((long)puVar10 + 0xc);
    uVar11 = *puVar10;
    uVar1 = *(undefined4 *)(puVar10 + 1);
    uVar12 = *puVar7;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar7 + 1);
    *puVar10 = uVar12;
    *(undefined4 *)(puVar7 + 1) = uVar1;
    puVar8 = (undefined8 *)((long)puVar7 - 0xc);
    *puVar7 = uVar11;
    puVar7 = puVar8;
    puVar10 = puVar9;
  } while (puVar9 < puVar8);
  return;
}


