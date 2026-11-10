/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030cad00; name: FUN_030cad00
 */


void FUN_030cad00(long param_1,long param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  *(undefined1 *)(param_2 + 0x5c) = 1;
  iVar1 = *(int *)(param_2 + 0x40);
  lVar2 = (long)iVar1;
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(int *)(param_2 + 0x54) = param_3;
  if ((int)(*(uint *)(param_2 + 0x44) & 0x7fffffff) <= iVar1) {
    FUN_030cb414(param_2 + 0x38,lVar2 + 1);
    iVar1 = *(int *)(param_2 + 0x40);
  }
  puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + (long)iVar1 * 0x30);
  *(int *)(param_2 + 0x40) = (int)(lVar2 + 1);
  *(undefined1 *)(puVar3 + 5) = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puVar3[1] = *(undefined8 *)(param_1 + 0x28);
  *puVar3 = uVar5;
  *(uint *)((long)puVar3 + 0x24) = *(uint *)(param_1 + 0x40) >> 0x16;
  iVar1 = *(int *)(param_2 + 0x40);
  lVar2 = (long)iVar1;
  if ((int)(*(uint *)(param_2 + 0x44) & 0x7fffffff) <= iVar1) {
    FUN_030cb414(param_2 + 0x38,lVar2 + 1);
    iVar1 = *(int *)(param_2 + 0x40);
  }
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x38) + (long)iVar1 * 0x30);
  *(int *)(param_2 + 0x40) = (int)(lVar2 + 1);
  *(undefined1 *)(puVar4 + 5) = 0;
  *(undefined4 *)(puVar4 + 4) = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar3 = (undefined8 *)(*(long *)(param_1 + 0x30) + (long)param_3 * 0x10);
  uVar5 = *puVar3;
  puVar4[1] = puVar3[1];
  *puVar4 = uVar5;
  *(uint *)((long)puVar4 + 0x24) = *(uint *)(*(long *)(param_1 + 0x48) + (long)param_3 * 4) >> 0x16;
  if ((param_4 != 0) && (param_5 == 0)) {
    iVar1 = *(int *)(param_2 + 0x20);
    lVar2 = (long)iVar1;
    if ((int)(*(uint *)(param_2 + 0x24) & 0x7fffffff) <= iVar1) {
      FUN_03086764(param_2 + 0x18,PTR_PTR_047d1a50,lVar2 + 1);
      iVar1 = *(int *)(param_2 + 0x20);
    }
    *(undefined4 *)(*(long *)(param_2 + 0x18) + (long)iVar1 * 4) = *(undefined4 *)(param_1 + 0x40);
    *(int *)(param_2 + 0x20) = (int)(lVar2 + 1);
  }
  return;
}


