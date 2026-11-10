/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0346d538; name: FUN_0346d538
 */


void FUN_0346d538(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 local_38;
  
  *param_1 = (long)&PTR_FUN_047c1bc8;
  puVar2 = PTR_DAT_047e2fd0;
  if (param_1[0x29] != 0) {
    *(undefined4 *)(param_1 + 0x2a) = 0;
    (**(code **)(puVar2 + 0x30))(0);
    param_1[0x29] = 0;
    *(undefined4 *)((long)param_1 + 0x154) = 0;
  }
  if (param_1[0x2b] != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    (**(code **)(puVar2 + 0x30))(0);
    param_1[0x2b] = 0;
    *(undefined4 *)((long)param_1 + 0x164) = 0;
  }
  puVar3 = (undefined8 *)param_1[0x31];
  if (puVar3 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x32) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 0x32) * 0x60;
      do {
        (**(code **)*puVar3)(puVar3);
        lVar4 = lVar4 + -0x60;
        puVar3 = puVar3 + 0xc;
      } while (lVar4 != 0);
      puVar3 = (undefined8 *)param_1[0x31];
    }
    *(undefined4 *)(param_1 + 0x32) = 0;
    (**(code **)(puVar2 + 0x30))(0,puVar3);
    param_1[0x31] = 0;
    *(undefined4 *)((long)param_1 + 0x194) = 0;
  }
  if ((long *)param_1[0x28] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x28] + 0x18))();
    param_1[0x28] = 0;
  }
  plVar5 = (long *)param_1[10];
  if (plVar5 != (long *)0x0) {
    plVar6 = (long *)*plVar5;
    if (plVar6 != (long *)0x0) {
      do {
        lVar4 = plVar6[1];
        *(undefined8 *)(lVar4 + 0x18) = 0;
        if (*(long *)(lVar4 + 0x20) != 0) {
          *(undefined4 *)(lVar4 + 0x28) = 0;
          (**(code **)(puVar2 + 0x30))(0);
          *(undefined8 *)(lVar4 + 0x20) = 0;
          *(undefined4 *)(lVar4 + 0x2c) = 0;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
      plVar5 = (long *)param_1[10];
    }
    iVar1 = (int)plVar5[5] + -1;
    *(int *)(plVar5 + 5) = iVar1;
    if (iVar1 == 0) {
      FUN_03499444(plVar5);
      (**(code **)(puVar2 + 0x30))(0,plVar5);
    }
    param_1[10] = 0;
  }
  *param_1 = (long)(PTR_DAT_047e7168 + 0x10);
  local_38 = 0xffffffffffffffff;
  if (param_1[8] != 0) {
    FUN_034be534(&DAT_048b0298,param_1);
    FUN_034afae0(param_1[8],param_1,&local_38,1);
    param_1[8] = 0;
  }
  return;
}


