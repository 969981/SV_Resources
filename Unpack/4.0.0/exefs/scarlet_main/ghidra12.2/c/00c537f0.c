/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c537f0; name: FUN_00c537f0
 */


void FUN_00c537f0(long param_1,uint param_2,undefined4 param_3,char *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  puVar4 = PTR_DAT_047e1eb0;
  puVar3 = PTR_DAT_047e0bf8;
  puVar2 = PTR_DAT_047e0be8;
  if ((*param_4 != '\0') && (param_2 != 0)) {
    uVar8 = *(undefined8 *)(*(long *)(param_4 + 8) + 0x20);
    if ((param_2 & 1) != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      uVar5 = (**(code **)PTR_DAT_047e0be8)(uVar8);
      uVar6 = (**(code **)puVar3)(uVar8);
      (**(code **)puVar4)(uVar10,0,param_3,uVar5,uVar6);
    }
    if (1 < param_2) {
      if ((param_2 >> 1 & 1) != 0) {
        uVar10 = *(undefined8 *)(param_1 + 0x28);
        uVar5 = (**(code **)puVar2)(uVar8);
        uVar6 = (**(code **)puVar3)(uVar8);
        (**(code **)puVar4)(uVar10,1,param_3,uVar5,uVar6);
      }
      if (3 < param_2) {
        uVar9 = 4;
        do {
          if ((uVar9 & param_2) != 0) {
            uVar1 = uVar9 - 4 >> 2;
            if (uVar1 < 8) {
              uVar7 = *(undefined4 *)(&DAT_03cbf080 + (long)(int)uVar1 * 4);
            }
            else {
              uVar7 = 1;
            }
            uVar10 = *(undefined8 *)(param_1 + 0x28);
            uVar5 = (**(code **)puVar2)(uVar8);
            uVar6 = (**(code **)puVar3)(uVar8);
            (**(code **)puVar4)(uVar10,uVar7,param_3,uVar5,uVar6);
          }
          uVar9 = uVar9 * 2;
        } while (uVar9 <= param_2);
      }
    }
  }
  return;
}


