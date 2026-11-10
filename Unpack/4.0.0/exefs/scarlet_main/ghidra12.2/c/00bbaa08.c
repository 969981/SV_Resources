/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bbaa08; name: FUN_00bbaa08
 */


void FUN_00bbaa08(long param_1)

{
  long *plVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 8);
  while (plVar6 != (long *)(param_1 + 0x10)) {
    FUN_00c1ffb4(plVar6 + 5);
    plVar1 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      plVar1 = plVar6 + 2;
      if (*(long **)*plVar1 == plVar6) {
        plVar6 = (long *)*plVar1;
      }
      else {
        do {
          lVar4 = *plVar1;
          plVar1 = (long *)(lVar4 + 0x10);
          plVar6 = (long *)*plVar1;
        } while (*plVar6 != lVar4);
      }
    }
    else {
      do {
        plVar6 = plVar1;
        plVar1 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  if (*(byte *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (((*(byte *)(param_1 + 0x30) & 1) != 0) &&
       (pbVar2 = *(byte **)(param_1 + 0x38), pbVar2 != *(byte **)PTR_DAT_047dabb0)) {
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
      }
    }
    if (((*(byte *)(param_1 + 0x30) >> 1 & 1) != 0) &&
       (pbVar2 = *(byte **)(param_1 + 0x40), pbVar2 != *(byte **)PTR_DAT_047dabb0)) {
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x4c) = 1;
    if (((*(byte *)(param_1 + 0x30) >> 6 & 1) != 0) &&
       (pbVar2 = *(byte **)(param_1 + 0x50), pbVar2 != *(byte **)PTR_DAT_047dabb0)) {
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
      }
    }
  }
  if ((*(uint *)(param_1 + 0x30) & 0x3f00) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (((*(uint *)(param_1 + 0x30) >> 0xc & 1) != 0) &&
       (pbVar2 = *(byte **)(param_1 + 0x58), pbVar2 != *(byte **)PTR_DAT_047dabb0)) {
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
      }
    }
    if (((*(byte *)(param_1 + 0x31) >> 5 & 1) != 0) &&
       (pbVar2 = *(byte **)(param_1 + 0x60), pbVar2 != *(byte **)PTR_DAT_047dabb0)) {
      if ((*pbVar2 & 1) == 0) {
        pbVar2[0] = 0;
        pbVar2[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar2 + 0x10) = 0;
        pbVar2[8] = 0;
        pbVar2[9] = 0;
        pbVar2[10] = 0;
        pbVar2[0xb] = 0;
        pbVar2[0xc] = 0;
        pbVar2[0xd] = 0;
        pbVar2[0xe] = 0;
        pbVar2[0xf] = 0;
      }
    }
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x70);
  if (0 < (int)*(uint *)(param_1 + 0x70)) {
    puVar3 = *(undefined8 **)(param_1 + 0x78);
    do {
      puVar3 = puVar3 + 1;
      (**(code **)(*(long *)*puVar3 + 0x38))();
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (((*(ulong *)(param_1 + 0x28) & 1) == 0) ||
     (*(long *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffe) == 0)) {
    return;
  }
  FUN_00bfee44();
  return;
}


