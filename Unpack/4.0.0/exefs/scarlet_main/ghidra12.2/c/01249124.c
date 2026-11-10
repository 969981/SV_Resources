/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01249124; name: FUN_01249124
 */


void FUN_01249124(undefined8 param_1,undefined1 *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  
  *param_2 = 1;
  uVar7 = FUN_01249340();
  cVar1 = FUN_01249348();
  if (cVar1 != '\0') {
    puVar8 = (undefined4 *)FUN_01249354(uVar7,0);
    if (puVar8 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar9 = FUN_01243584(param_1);
      FUN_01249414(uVar9,*puVar8,7);
      uVar9 = FUN_01582534(param_1);
      uVar3 = FUN_012493a0(uVar9,*puVar8);
      uVar3 = ~uVar3 & 1;
    }
    bVar2 = FUN_01249348(uVar7);
    if (1 < bVar2) {
      puVar8 = (undefined4 *)FUN_01249354(uVar7,1);
      if (puVar8 != (undefined4 *)0x0) {
        uVar9 = FUN_01243584(param_1);
        FUN_01249414(uVar9,*puVar8,7);
        uVar9 = FUN_01582534(param_1);
        uVar4 = FUN_012493a0(uVar9,*puVar8);
        uVar3 = uVar3 + (~uVar4 & 1);
      }
      bVar2 = FUN_01249348(uVar7);
      if (2 < bVar2) {
        puVar8 = (undefined4 *)FUN_01249354(uVar7,2);
        if (puVar8 != (undefined4 *)0x0) {
          uVar9 = FUN_01243584(param_1);
          FUN_01249414(uVar9,*puVar8,7);
          uVar9 = FUN_01582534(param_1);
          uVar4 = FUN_012493a0(uVar9,*puVar8);
          uVar3 = uVar3 + (~uVar4 & 1);
        }
        bVar2 = FUN_01249348(uVar7);
        if (3 < bVar2) {
          uVar4 = 3;
          do {
            puVar8 = (undefined4 *)FUN_01249354(uVar7,uVar4);
            if (puVar8 != (undefined4 *)0x0) {
              uVar9 = FUN_01243584(param_1);
              FUN_01249414(uVar9,*puVar8,7);
              uVar9 = FUN_01582534(param_1);
              uVar6 = FUN_012493a0(uVar9,*puVar8);
              uVar3 = uVar3 + (~uVar6 & 1);
            }
            uVar4 = uVar4 + 1;
            uVar6 = FUN_01249348(uVar7);
          } while (uVar4 < (uVar6 & 0xff));
        }
      }
    }
    if (0 < (int)uVar3) {
      FUN_01582534(param_1);
      uVar7 = FUN_01249378();
      lVar10 = FUN_01249380(uVar7,3);
      uVar11 = lVar10 + 1;
      FUN_01582534(param_1);
      iVar5 = FUN_01249478();
      if ((ulong)(long)iVar5 <= uVar11) {
        uVar11 = 0;
        *param_2 = 0;
      }
      uVar7 = FUN_01243584(param_1);
      FUN_012494a4(uVar7,3,uVar11 & 0xffffffff);
      return;
    }
  }
  return;
}


