/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034272f4; name: FUN_034272f4
 */


void FUN_034272f4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_78 [4];
  ulong local_74;
  ulong uStack_6c;
  undefined1 auStack_64 [4];
  
  uVar7 = (ulong)*(uint *)(param_1 + 0x80);
  if (*(uint *)(param_1 + 0x80) != 0) {
    uVar9 = 0;
    lVar11 = 0;
    bVar2 = false;
    do {
      lVar12 = *(long *)(param_1 + uVar9 * 8);
      uVar1 = uVar9 + 1;
      lVar8 = param_2;
      if (uVar1 < uVar7) {
        lVar8 = *(long *)(param_1 + uVar9 * 8 + 0x48);
      }
      if ((*(long *)(lVar8 + 0xa8) == 0) || (*(long *)(*(long *)(lVar8 + 0xa8) + 0x30) == 0)) {
LAB_034273ec:
        bVar3 = false;
      }
      else {
        if (*(int *)(lVar12 + 0x58) == 0) {
          lVar13 = -1;
        }
        else {
          lVar13 = *(long *)(**(long **)(lVar12 + 0x50) + 0x70);
        }
        lVar8 = *(long *)(lVar8 + 0x70);
        if ((ulong)*(uint *)PTR_DAT_047e6e78 <=
            *(ulong *)(lVar12 + (ulong)(lVar13 != lVar8) * 0x38 + 0x620)) goto LAB_034273ec;
        plVar4 = (long *)FUN_03424870(param_3,lVar12,auStack_78);
        if (plVar4 != (long *)0x0) {
          *plVar4 = lVar12;
          if (lVar13 == lVar8) {
            uVar6 = *(uint *)(plVar4 + 1) | 1;
          }
          else {
            uVar6 = *(uint *)(plVar4 + 1) | 2;
          }
          *(uint *)(plVar4 + 1) = uVar6;
        }
        bVar3 = true;
      }
      if ((lVar11 != 0) && ((bool)(bVar2 | bVar3))) {
        uVar9 = *(ulong *)(lVar12 + 0x68);
        uVar10 = *(ulong *)(lVar11 + 0x68);
        local_74 = 0;
        uStack_6c = 0;
        uVar7 = uVar10;
        if (uVar10 <= uVar9) {
          uVar7 = uVar9;
          uVar9 = uVar10;
        }
        puVar5 = (ulong *)FUN_03428c48(param_4,uVar9,uVar7,auStack_64);
        if (puVar5 != (ulong *)0x0) {
          *puVar5 = uVar9;
          puVar5[1] = uVar7;
          *(undefined4 *)(puVar5 + 5) = 0;
          puVar5[6] = local_74;
          puVar5[7] = uStack_6c;
          puVar5[3] = 0;
          puVar5[4] = 0;
        }
      }
      uVar7 = (ulong)*(uint *)(param_1 + 0x80);
      uVar9 = uVar1;
      lVar11 = lVar12;
      bVar2 = bVar3;
    } while (uVar1 < uVar7);
    if (bVar3) {
      *param_5 = 1;
    }
  }
  return;
}


