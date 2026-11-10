/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d0240; name: FUN_031d0240
 */


void FUN_031d0240(ulong param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  undefined2 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  
  if ((((param_3 < 8) || ((param_3 & 7) != 0)) || ((param_1 & 7) != 0)) || ((param_2 & 7) != 0)) {
    if (((param_3 < 4) || ((param_3 & 3) != 0)) || (((param_1 & 3) != 0 || ((param_2 & 3) != 0)))) {
      if (((param_3 < 2) || ((param_3 & 1) != 0)) || (((param_1 & 1) != 0 || ((param_2 & 1) != 0))))
      {
        if (0 < (long)param_3) {
          do {
            uVar3 = param_3 - 1;
            *(undefined1 *)(param_1 + uVar3) = *(undefined1 *)(param_2 + uVar3);
            bVar1 = 1 < (long)param_3;
            param_3 = uVar3;
          } while (bVar1);
        }
      }
      else if (1 < (long)param_3) {
        lVar6 = (param_3 & 0xfffffffffffffffe) - 2;
        lVar10 = param_3 + 2;
        puVar2 = (undefined2 *)(param_1 + lVar6);
        puVar7 = (undefined2 *)(param_2 + lVar6);
        do {
          lVar10 = lVar10 + -2;
          *puVar2 = *puVar7;
          puVar2 = puVar2 + -1;
          puVar7 = puVar7 + -1;
        } while (3 < lVar10);
      }
    }
    else if (3 < (long)param_3) {
      lVar6 = (param_3 & 0xfffffffffffffffc) - 4;
      lVar10 = param_3 + 4;
      puVar5 = (undefined4 *)(param_1 + lVar6);
      puVar9 = (undefined4 *)(param_2 + lVar6);
      do {
        lVar10 = lVar10 + -4;
        *puVar5 = *puVar9;
        puVar5 = puVar5 + -1;
        puVar9 = puVar9 + -1;
      } while (7 < lVar10);
    }
  }
  else if (7 < (long)param_3) {
    lVar6 = (param_3 & 0xfffffffffffffff8) - 8;
    lVar10 = param_3 + 8;
    puVar4 = (undefined8 *)(param_1 + lVar6);
    puVar8 = (undefined8 *)(param_2 + lVar6);
    do {
      lVar10 = lVar10 + -8;
      *puVar4 = *puVar8;
      puVar4 = puVar4 + -1;
      puVar8 = puVar8 + -1;
    } while (0xf < lVar10);
  }
  return;
}


