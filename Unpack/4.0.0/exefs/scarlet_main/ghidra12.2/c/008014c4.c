/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008014c4; name: FUN_008014c4
 */


void FUN_008014c4(ushort *param_1,ushort *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (*param_1 == *param_2) {
    *(char *)(param_1 + 8) = (char)param_2[8];
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    if ((*(undefined8 **)(param_1 + 4) != (undefined8 *)0x0) && (*(long *)(param_2 + 4) != 0)) {
      if (*param_1 == 0) {
LAB_00801598:
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      }
      else {
        puVar4 = (undefined8 *)**(undefined8 **)(param_1 + 4);
        if (puVar4 != (undefined8 *)0x0) {
          uVar3 = 0;
          while (puVar5 = *(undefined8 **)(*(long *)(param_2 + 4) + uVar3 * 8),
                puVar5 != (undefined8 *)0x0) {
            uVar1 = *puVar5;
            uVar2 = puVar5[1];
            *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar5 + 2);
            *puVar4 = uVar1;
            puVar4[1] = uVar2;
            FUN_0284e39c(puVar4 + 3,puVar5 + 3);
            FUN_0284e39c(puVar4 + 7,puVar5 + 7);
            puVar4[0xb] = puVar5[0xb];
            if (*(long *)(param_1 + 0x14) == 0) {
              return;
            }
            if (*(long *)(param_2 + 0x14) == 0) {
              return;
            }
            *(undefined8 *)(*(long *)(param_1 + 0x14) + uVar3 * 8) =
                 *(undefined8 *)(*(long *)(param_2 + 0x14) + uVar3 * 8);
            if ((ulong)*param_1 <= uVar3 + 1) goto LAB_00801598;
            puVar4 = *(undefined8 **)(*(long *)(param_1 + 4) + uVar3 * 8 + 8);
            uVar3 = uVar3 + 1;
            if (puVar4 == (undefined8 *)0x0) {
              return;
            }
          }
        }
      }
    }
  }
  return;
}


