/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0352b3d0; name: FUN_0352b3d0
 */


void FUN_0352b3d0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  param_1[0x2a] = 0;
  *param_1 = &PTR_FUN_047c88c8;
  param_1[1] = &PTR_LAB_047c8b38;
  param_1[4] = &PTR_LAB_047c8b78;
  lVar2 = param_1[0x1f];
  param_1[7] = &PTR_FUN_047c8c10;
  uVar4 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x23) = 0;
  puVar1 = PTR_DAT_047e2fd0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (uVar4 != 0) {
    lVar6 = lVar2;
    do {
      puVar5 = *(undefined8 **)(lVar6 + 8);
      if (puVar5 != (undefined8 *)0x0) {
        uVar3 = *(ushort *)((long)puVar5 + 0xc);
        if (((uVar3 & 0x7c) == 4) && (puVar5[2] != 0)) {
          (**(code **)(puVar1 + 0x30))(0);
          uVar3 = *(ushort *)((long)puVar5 + 0xc);
          puVar5[2] = 0;
        }
        *puVar5 = 0xffffffff00000000;
        *(undefined4 *)(puVar5 + 1) = 0;
        puVar5[2] = 0;
        *(ushort *)((long)puVar5 + 0xc) = uVar3 & 0xf800;
        (**(code **)(puVar1 + 0x30))(2,puVar5);
        lVar2 = param_1[0x1f];
        uVar4 = *(uint *)(param_1 + 0x20);
      }
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != lVar2 + (ulong)uVar4 * 0x10);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    param_1[0x1f] = 0;
    *(undefined4 *)((long)param_1 + 0x104) = 0;
  }
  if (param_1[0x24] != 0) {
    *(undefined4 *)(param_1 + 0x25) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    param_1[0x24] = 0;
    *(undefined4 *)((long)param_1 + 300) = 0;
  }
  lVar2 = param_1[0x21];
  if (lVar2 != 0) {
    if (*(uint *)(param_1 + 0x22) != 0) {
      lVar6 = (ulong)*(uint *)(param_1 + 0x22) << 5;
      puVar5 = (undefined8 *)(lVar2 + 0x10);
      do {
        if (puVar5[-1] != 0) {
          (**(code **)(puVar1 + 0x30))(0);
          puVar5[-1] = 0;
        }
        lVar6 = lVar6 + -0x20;
        *puVar5 = 0;
        puVar5 = puVar5 + 4;
      } while (lVar6 != 0);
      lVar2 = param_1[0x21];
    }
    (**(code **)(puVar1 + 0x30))(0,lVar2);
    param_1[0x21] = 0;
    param_1[0x22] = 0;
  }
  lVar2 = param_1[0x28];
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x10) != 0) {
      *(undefined4 *)(lVar2 + 0x18) = 0;
      (**(code **)(puVar1 + 0x30))(0);
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined4 *)(lVar2 + 0x1c) = 0;
    }
    (**(code **)(puVar1 + 0x30))(2,lVar2);
  }
  FUN_034a68b4(param_1);
  return;
}


