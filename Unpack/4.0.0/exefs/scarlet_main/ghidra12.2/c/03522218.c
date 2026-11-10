/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03522218; name: FUN_03522218
 */


void FUN_03522218(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int *piVar4;
  ulong uVar5;
  long *plVar6;
  
  *param_1 = &PTR_LAB_047c7db8;
  puVar2 = PTR_DAT_047e71c8;
  param_1[-100] = PTR_DAT_047e71c8 + 0x10;
  param_1[-0x62] = puVar2 + 0xf0;
  param_1[-0x61] = puVar2 + 0x108;
  if ((undefined8 *)param_1[-3] != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + -2) = 0;
    if (param_1 + -4 != (undefined8 *)param_1[-3]) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    }
    param_1[-3] = 0;
    *(undefined4 *)((long)param_1 + -0xc) = 0;
  }
  piVar4 = *(int **)((long)param_1 + -0x10c);
  if ((piVar4 != (int *)0x0) &&
     (iVar1 = *piVar4, *piVar4 = iVar1 + -1, puVar2 = PTR_DAT_047e2fd0, iVar1 + -1 == 0)) {
    uVar3 = piVar4[1];
    if (uVar3 != 0) {
      uVar5 = 0;
      plVar6 = (long *)(piVar4 + 4);
      do {
        if (*plVar6 != 0) {
          (**(code **)(puVar2 + 0x30))(0);
          uVar3 = piVar4[1];
        }
        uVar5 = uVar5 + 1;
        plVar6 = plVar6 + 4;
      } while (uVar5 < uVar3);
    }
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,piVar4);
  }
  FUN_0346d538(param_1 + -0x61);
  return;
}


