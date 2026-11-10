/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0352200c; name: FUN_0352200c
 */


void FUN_0352200c(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int *piVar4;
  ulong uVar5;
  long *plVar6;
  
  param_1[100] = (long)&PTR_LAB_047c7db8;
  puVar2 = PTR_DAT_047e71c8;
  *param_1 = (long)(PTR_DAT_047e71c8 + 0x10);
  param_1[2] = (long)(puVar2 + 0xf0);
  param_1[3] = (long)(puVar2 + 0x108);
  if ((long *)param_1[0x61] != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x62) = 0;
    if (param_1 + 0x60 != (long *)param_1[0x61]) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    }
    param_1[0x61] = 0;
    *(undefined4 *)((long)param_1 + 0x314) = 0;
  }
  piVar4 = *(int **)((long)param_1 + 0x214);
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
  FUN_0346d538(param_1 + 3);
  return;
}


