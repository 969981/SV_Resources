/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0344b328; name: FUN_0344b328
 */


void FUN_0344b328(long *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = PTR_DAT_047e2fd0;
  puVar3 = (undefined8 *)param_2[1];
  while (puVar3 != (undefined8 *)0x0) {
    if (puVar3[4] == 0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      param_2[1] = puVar3[4];
    }
    if (*(uint *)(puVar3 + 3) >> 0x1e == 2) {
      (**(code **)(*param_1 + 8))(param_1,param_2,puVar3);
    }
    FUN_0344b418(param_1,*puVar3,puVar3 + 1,*(undefined4 *)((long)puVar3 + 0x14),0,0);
    puVar4 = (undefined8 *)*puVar3;
    iVar1 = *(int *)((long)puVar4 + 0x4c) + -1;
    *(int *)((long)puVar4 + 0x4c) = iVar1;
    if (iVar1 == 0) {
      (**(code **)*puVar4)(puVar4);
      (**(code **)(puVar2 + 0x30))(0,puVar4);
    }
    (**(code **)(puVar2 + 0x30))(0,puVar3);
    puVar3 = (undefined8 *)param_2[1];
  }
  FUN_0344b9fc(param_1,param_3);
  return;
}


