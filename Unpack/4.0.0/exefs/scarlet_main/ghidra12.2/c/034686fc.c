/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034686fc; name: FUN_034686fc
 */


int FUN_034686fc(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  iVar4 = (int)param_2[4] + -1;
  *(int *)(param_2 + 4) = iVar4;
  if (iVar4 == 0) {
    if (*param_2 != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(*(undefined4 *)((long)param_2 + 0xc));
      *param_2 = 0;
      param_2[1] = -0x100000000;
      if ((int)param_2[4] != 0) {
        return (int)param_2[4];
      }
    }
    uVar1 = *(uint *)(param_1 + 0x98);
    if (uVar1 != 0) {
      uVar2 = *(uint *)((long)param_2 + 0x24);
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar2 / uVar1;
      }
      uVar5 = (ulong)(uVar2 - uVar3 * uVar1);
      puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x90) + uVar5 * 8);
      if (puVar6 != (undefined8 *)0x0) {
        if (*(uint *)(puVar6 + 1) == uVar2) {
          *(undefined8 *)(*(long *)(param_1 + 0x90) + uVar5 * 8) = *puVar6;
        }
        else {
          do {
            puVar7 = puVar6;
            puVar6 = (undefined8 *)*puVar7;
            if (puVar6 == (undefined8 *)0x0) goto LAB_034687f8;
          } while (*(uint *)(puVar6 + 1) != uVar2);
          *puVar7 = *puVar6;
        }
        if (puVar6[4] != 0) {
          *(undefined4 *)(puVar6 + 5) = 0;
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
          puVar6[4] = 0;
          *(undefined4 *)((long)puVar6 + 0x2c) = 0;
        }
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar6);
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
        return 0;
      }
    }
LAB_034687f8:
    iVar4 = 0;
  }
  return iVar4;
}


