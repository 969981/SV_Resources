/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034de108; name: FUN_034de108
 */


void FUN_034de108(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  
  if ((int)param_1[1] != 0) {
    puVar8 = (uint *)*param_1;
    do {
      if (DAT_048b0538 != 0) {
        uVar2 = *puVar8;
        iVar4 = 0;
        uVar5 = DAT_048b0538;
        do {
          uVar1 = iVar4 + (uVar5 >> 1);
          uVar3 = *(uint *)(DAT_048b0530 +
                           (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4));
          if (uVar3 == uVar2) {
            puVar9 = (undefined8 *)(DAT_048b0530 + (long)(int)uVar1 * 0x10 + 8);
            iVar4 = (**(code **)(*(long *)*puVar9 + 0x20))();
            if (iVar4 == 0) {
              *puVar9 = 0;
              if (DAT_048b0538 != 0) {
                iVar4 = 0;
                uVar5 = DAT_048b0538;
                goto LAB_034de1c4;
              }
            }
            break;
          }
          if (uVar3 < uVar2) {
            iVar4 = uVar1 + 1;
          }
          uVar5 = uVar5 - (uVar3 < uVar2) >> 1;
        } while (uVar5 != 0);
      }
LAB_034de190:
      puVar8 = puVar8 + 1;
    } while (puVar8 != (uint *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 4));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((DAT_048b0538 == 0) && (DAT_048b0530 != 0)) {
    DAT_048b0538 = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    DAT_048b0530 = 0;
    DAT_048b053c = 0;
  }
  return;
LAB_034de1c4:
  uVar1 = iVar4 + (uVar5 >> 1);
  uVar3 = *(uint *)(DAT_048b0530 +
                   (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4));
  if (uVar3 != uVar2) goto code_r0x034de1dc;
  puVar9 = (undefined8 *)(DAT_048b0530 + (long)(int)uVar1 * 0x10);
  puVar7 = (undefined8 *)((DAT_048b0530 + (ulong)DAT_048b0538 * 0x10) - 0x10);
  if (puVar9 < puVar7) {
    do {
      puVar6 = puVar9 + 2;
      *puVar9 = *puVar6;
      puVar9[1] = puVar9[3];
      puVar9 = puVar6;
    } while (puVar6 < puVar7);
  }
  DAT_048b0538 = DAT_048b0538 - 1;
  goto LAB_034de190;
code_r0x034de1dc:
  if (uVar3 < uVar2) {
    iVar4 = uVar1 + 1;
  }
  uVar5 = uVar5 - (uVar3 < uVar2) >> 1;
  if (uVar5 == 0) goto LAB_034de190;
  goto LAB_034de1c4;
}


