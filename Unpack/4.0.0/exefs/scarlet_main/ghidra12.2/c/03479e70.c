/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03479e70; name: FUN_03479e70
 */


undefined8 FUN_03479e70(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 local_70;
  undefined4 local_64;
  
  if (((*(uint *)(param_1 + 0x48) | 2) == 2) && (*(int *)(param_1 + 0xa8) == 0)) {
    *(undefined4 *)(param_1 + 0x48) = 1;
    puVar2 = PTR_DAT_047e6f38;
    puVar1 = PTR_DAT_047e2fd0;
    local_64 = 0;
    while( true ) {
      local_70 = 0;
      iVar3 = FUN_03479ab4(param_1,&local_64,&local_70);
      piVar7 = *(int **)(param_1 + 0xa0);
      piVar6 = *(int **)(param_1 + 0x58);
      if ((piVar6 != (int *)0x0) && (iVar4 = *piVar6, *piVar6 = iVar4 + -1, iVar4 + -1 == 0)) {
        uVar5 = piVar6[1];
        if (uVar5 != 0) {
          uVar8 = 0;
          plVar9 = (long *)(piVar6 + 4);
          do {
            if (*plVar9 != 0) {
              (**(code **)(puVar1 + 0x30))(0);
              uVar5 = piVar6[1];
            }
            uVar8 = uVar8 + 1;
            plVar9 = plVar9 + 4;
          } while (uVar8 < uVar5);
        }
        (**(code **)(puVar1 + 0x30))(0,piVar6);
      }
      if (piVar7 != (int *)0x0) {
        *piVar7 = *piVar7 + 1;
      }
      *(int **)(param_1 + 0x58) = piVar7;
      if ((iVar3 == 0) || (iVar4 = FUN_03479fc8(param_1,iVar3,local_64,param_2,param_3), iVar4 == 1)
         ) break;
      FUN_034b3738(*(undefined8 *)puVar2,*(undefined4 *)(param_1 + 0x6c),iVar3,local_70);
    }
  }
  return 1;
}


