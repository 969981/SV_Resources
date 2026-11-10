/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ea1c84; name: FUN_00ea1c84
 */


int FUN_00ea1c84(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_38;
  int local_34;
  
  puVar1 = PTR_DAT_047d2730;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    uVar6 = 0;
    uVar4 = 0;
    lVar2 = *(long *)(param_1 + 0x10);
  }
  else {
    uVar4 = *(uint *)(lVar2 + 0x28);
    uVar6 = *(uint *)(lVar2 + 0x2c);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  uVar3 = uVar4;
  uVar5 = uVar6;
  if (lVar2 != 0) {
    uVar3 = *(uint *)(lVar2 + 0x28);
    if (*(uint *)(lVar2 + 0x28) <= uVar4) {
      uVar3 = uVar4;
    }
    uVar5 = *(uint *)(lVar2 + 0x2c);
    if (*(uint *)(lVar2 + 0x2c) <= uVar6) {
      uVar5 = uVar6;
    }
  }
  lVar2 = *(long *)(param_1 + 0x18);
  uVar4 = uVar3;
  uVar6 = uVar5;
  if (lVar2 != 0) {
    uVar4 = *(uint *)(lVar2 + 0x28);
    if (*(uint *)(lVar2 + 0x28) <= uVar3) {
      uVar4 = uVar3;
    }
    uVar6 = *(uint *)(lVar2 + 0x2c);
    if (*(uint *)(lVar2 + 0x2c) <= uVar5) {
      uVar6 = uVar5;
    }
  }
  lVar2 = *(long *)(param_1 + 0x20);
  uVar3 = uVar4;
  uVar5 = uVar6;
  if (lVar2 != 0) {
    uVar3 = *(uint *)(lVar2 + 0x28);
    if (*(uint *)(lVar2 + 0x28) <= uVar4) {
      uVar3 = uVar4;
    }
    uVar5 = *(uint *)(lVar2 + 0x2c);
    if (*(uint *)(lVar2 + 0x2c) <= uVar6) {
      uVar5 = uVar6;
    }
  }
  lVar2 = *(long *)(param_1 + 0x28);
  uVar4 = uVar3;
  uVar6 = uVar5;
  if (lVar2 != 0) {
    uVar4 = *(uint *)(lVar2 + 0x28);
    if (*(uint *)(lVar2 + 0x28) <= uVar3) {
      uVar4 = uVar3;
    }
    uVar6 = *(uint *)(lVar2 + 0x2c);
    if (*(uint *)(lVar2 + 0x2c) <= uVar5) {
      uVar6 = uVar5;
    }
  }
  lVar2 = *(long *)(param_1 + 0x30);
  uVar3 = uVar4;
  uVar5 = uVar6;
  if (lVar2 != 0) {
    uVar3 = *(uint *)(lVar2 + 0x28);
    if (*(uint *)(lVar2 + 0x28) <= uVar4) {
      uVar3 = uVar4;
    }
    uVar5 = *(uint *)(lVar2 + 0x2c);
    if (*(uint *)(lVar2 + 0x2c) <= uVar6) {
      uVar5 = uVar6;
    }
  }
  if (uVar3 == 0) {
    if (uVar5 == 0) {
      return 0;
    }
    (**(code **)PTR_DAT_047d2730)(*param_2,0x18,&local_34);
    uVar3 = local_34 * uVar5;
  }
  (**(code **)puVar1)(*param_2,0x1a,&local_38);
  uVar4 = 0;
  if (local_38 != 0) {
    uVar4 = ((uVar3 + local_38) - 1) / local_38;
  }
  return uVar4 * local_38;
}


