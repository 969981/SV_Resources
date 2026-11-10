/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d2d7c; name: FUN_031d2d7c
 */


void FUN_031d2d7c(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  
  *(undefined1 *)*param_1 = 1;
  iVar4 = *(int *)((long)param_1 + 0x1c);
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      iVar2 = *(int *)((long)param_1 + 0x14);
      puVar1 = (undefined8 *)(param_1[1] + (long)iVar2 * 0x10);
      local_40 = *puVar1;
      uStack_38 = puVar1[1];
      *(int *)((long)param_1 + 0x1c) = iVar4 + -1;
      iVar4 = 0;
      if (iVar2 + 1 != *(int *)(param_1 + 2)) {
        iVar4 = iVar2 + 1;
      }
      *(int *)((long)param_1 + 0x14) = iVar4;
      lVar3 = FUN_031d0950(&local_40);
      lVar5 = lVar3 + lVar5;
    } while ((lVar5 != -1) && (iVar4 = *(int *)((long)param_1 + 0x1c), 0 < iVar4));
  }
  *(undefined1 *)*param_1 = 0;
  *(undefined1 *)*param_1 = 1;
  if (*(int *)((long)param_1 + 0x1c) == 0) {
    *(undefined8 *)((long)param_1 + 0x14) = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 2) != 0) {
      (**(code **)(PTR_PTR_046a5408 + 0x20))
                (&PTR_PTR_046a5408,param_1[1],(long)*(int *)(param_1 + 2) << 4);
      *(undefined4 *)(param_1 + 2) = 0;
      param_1[1] = 0;
    }
  }
  *(undefined1 *)*param_1 = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  if (*(int *)(param_1 + 2) != 0) {
    (**(code **)(PTR_PTR_046a5408 + 0x20))
              (&PTR_PTR_046a5408,param_1[1],(long)*(int *)(param_1 + 2) << 4);
    *(undefined4 *)(param_1 + 2) = 0;
    param_1[1] = 0;
  }
  return;
}


