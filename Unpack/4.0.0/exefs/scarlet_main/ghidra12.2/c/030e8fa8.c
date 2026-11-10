/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030e8fa8; name: FUN_030e8fa8
 */


void FUN_030e8fa8(undefined8 *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar2 = (undefined4 *)
               (**(code **)(*param_2 + 0x18))(param_2,(long)*(int *)(param_1 + 1) << 4);
      iVar3 = *(int *)(param_1 + 1);
      if (0 < iVar3) {
        puVar4 = (undefined4 *)*param_1;
        puVar5 = puVar2;
        do {
          *puVar5 = *puVar4;
          puVar5[1] = puVar4[1];
          *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(puVar4 + 2);
          *(undefined2 *)((long)puVar5 + 10) = *(undefined2 *)((long)puVar4 + 10);
          puVar1 = puVar4 + 3;
          iVar3 = iVar3 + -1;
          puVar4 = puVar4 + 4;
          *(undefined1 *)(puVar5 + 3) = *(undefined1 *)puVar1;
          puVar5 = puVar5 + 4;
        } while (iVar3 != 0);
        iVar3 = *(int *)(param_1 + 1);
      }
      *param_1 = puVar2;
      *(int *)((long)param_1 + 0xc) = iVar3;
    }
  }
  return;
}


