/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03526b88; name: FUN_03526b88
 */


void FUN_03526b88(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  int *piVar5;
  
  *param_1 = &PTR_LAB_047c8748;
  param_1[3] = &PTR_LAB_047c8860;
  param_1[5] = &PTR_FUN_047c8888;
  puVar2 = PTR_DAT_047e2fd0;
  lVar3 = param_1[0x16];
  if (lVar3 != 0) {
    if (*(uint *)(param_1 + 0x17) != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x10);
      lVar3 = (ulong)*(uint *)(param_1 + 0x17) << 5;
      do {
        piVar5 = (int *)*puVar4;
        if ((piVar5 != (int *)0x0) && (iVar1 = *piVar5, *piVar5 = iVar1 + -1, iVar1 + -1 == 0)) {
          (**(code **)(puVar2 + 0x30))(*(undefined4 *)((long)puVar4 + 0xc),*puVar4);
        }
        *puVar4 = 0;
        lVar3 = lVar3 + -0x20;
        *(undefined4 *)(puVar4 + 1) = 0;
        puVar4 = puVar4 + 4;
      } while (lVar3 != 0);
      lVar3 = param_1[0x16];
    }
    *(undefined4 *)(param_1 + 0x17) = 0;
    (**(code **)(puVar2 + 0x30))(0,lVar3);
    param_1[0x16] = 0;
    *(undefined4 *)((long)param_1 + 0xbc) = 0;
  }
  puVar4 = (undefined8 *)param_1[0x10];
  if (puVar4 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x11) != 0) {
      lVar3 = (ulong)*(uint *)(param_1 + 0x11) * 0x18;
      do {
        (**(code **)*puVar4)(puVar4);
        lVar3 = lVar3 + -0x18;
        puVar4 = puVar4 + 3;
      } while (lVar3 != 0);
      puVar4 = (undefined8 *)param_1[0x10];
    }
    *(undefined4 *)(param_1 + 0x11) = 0;
    (**(code **)(puVar2 + 0x30))(0,puVar4);
    param_1[0x10] = 0;
    *(undefined4 *)((long)param_1 + 0x8c) = 0;
  }
  if ((long *)param_1[0xf] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf] + 0x30))();
  }
  FUN_0351bd94(param_1);
  return;
}


