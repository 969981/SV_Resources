/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021512d4; name: FUN_021512d4
 */


void FUN_021512d4(long param_1,undefined8 *param_2,int *param_3,int *param_4,uint param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  
  iVar10 = *param_4;
  if (0 < iVar10) {
    iVar9 = *param_3;
    iVar6 = param_3[1];
    uVar7 = 3;
    if ((param_5 & 1) == 0) {
      uVar7 = 1;
    }
    iVar8 = param_4[1];
    iVar15 = iVar6;
    iVar14 = iVar9;
    do {
      if (0 < iVar8) {
        do {
          lVar16 = *(long *)(param_1 + 0x4a8);
          if (*(int *)(lVar16 + 0x1c) == 0) {
            iVar10 = *(int *)(lVar16 + 0xc);
            iVar9 = *(int *)(lVar16 + 0x10);
            uVar11 = iVar14 + iVar10 * iVar15;
          }
          else {
            iVar10 = *(int *)(lVar16 + 0xc);
            iVar9 = *(int *)(lVar16 + 0x10);
            uVar11 = iVar15 + iVar14 * iVar9;
          }
          if ((int)uVar11 < iVar9 * iVar10) {
            uVar1 = *param_2;
            uVar3 = param_2[1];
            uVar2 = param_2[2];
            plVar4 = (long *)param_2[3];
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x18))(plVar4);
            }
            lVar16 = *(long *)(*(long *)(lVar16 + 0x40) + 0x20);
            puVar12 = (undefined8 *)(lVar16 + (ulong)uVar11 * 0x28);
            *puVar12 = uVar1;
            puVar12[1] = uVar3;
            puVar12[2] = uVar2;
            plVar13 = puVar12 + 3;
            plVar5 = (long *)*plVar13;
            *plVar13 = 0;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x20))();
            }
            *plVar13 = (long)plVar4;
            *(undefined1 *)(lVar16 + (ulong)uVar11 * 0x28 + 0x20) = uVar7;
            iVar6 = param_3[1];
            iVar8 = param_4[1];
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < iVar8 + iVar6);
        iVar9 = *param_3;
        iVar10 = *param_4;
        iVar15 = iVar6;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar9 + iVar10);
  }
  return;
}


