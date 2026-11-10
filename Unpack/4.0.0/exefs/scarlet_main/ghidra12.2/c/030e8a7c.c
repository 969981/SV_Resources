/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030e8a7c; name: FUN_030e8a7c
 */


void FUN_030e8a7c(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      puVar1 = (undefined1 *)
               (**(code **)(*param_2 + 0x18))(param_2,(long)*(int *)(param_1 + 1) * 0xc);
      uVar2 = *(uint *)(param_1 + 1);
      if (0 < (int)uVar2) {
        puVar3 = (undefined1 *)*param_1;
        puVar4 = puVar1;
        if (uVar2 != 1) {
          iVar5 = -(uVar2 & 0xfffffffe);
          do {
            *puVar4 = *puVar3;
            *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar3 + 4);
            *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(puVar3 + 8);
            puVar4[0xc] = puVar3[0xc];
            *(undefined4 *)(puVar4 + 0x10) = *(undefined4 *)(puVar3 + 0x10);
            *(undefined4 *)(puVar4 + 0x14) = *(undefined4 *)(puVar3 + 0x14);
            puVar4 = puVar4 + 0x18;
            puVar3 = puVar3 + 0x18;
            iVar5 = iVar5 + 2;
          } while (iVar5 != 0);
        }
        if ((uVar2 & 1) != 0) {
          *puVar4 = *puVar3;
          *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(puVar3 + 4);
          *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(puVar3 + 8);
        }
        uVar2 = *(uint *)(param_1 + 1);
      }
      *param_1 = puVar1;
      *(uint *)((long)param_1 + 0xc) = uVar2;
    }
  }
  return;
}


