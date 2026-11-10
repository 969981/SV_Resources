/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bc48cc; name: FUN_00bc48cc
 */


void FUN_00bc48cc(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if (((uVar1 & 1) != 0) &&
       (pbVar2 = *(byte **)(param_1 + 0x18), pbVar2 != *(byte **)PTR_DAT_047dabb0)) {
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
    *(undefined8 *)(param_1 + 0x20) = 0x100000000;
    *(undefined4 *)(param_1 + 0x38) = 1;
    if (((*(byte *)(param_1 + 0x10) >> 4 & 1) != 0) &&
       (pbVar2 = *(byte **)(param_1 + 0x28), pbVar2 != *(byte **)PTR_DAT_047dabb0)) {
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
    if (((*(byte *)(param_1 + 0x10) >> 5 & 1) != 0) &&
       (pbVar2 = *(byte **)(param_1 + 0x30), pbVar2 != *(byte **)PTR_DAT_047dabb0)) {
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
    if (((*(byte *)(param_1 + 0x10) >> 6 & 1) != 0) &&
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
    uVar1 = *(uint *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if ((uVar1 & 0x300) != 0) {
    if (((uVar1 >> 8 & 1) != 0) &&
       (pbVar2 = *(byte **)(param_1 + 0x48), pbVar2 != *(byte **)PTR_DAT_047dabb0)) {
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
    if (((*(byte *)(param_1 + 0x11) >> 1 & 1) != 0) &&
       (lVar6 = *(long *)(param_1 + 0x50), lVar6 != 0)) {
      plVar8 = *(long **)(lVar6 + 8);
      while (plVar8 != (long *)(lVar6 + 0x10)) {
        FUN_00c1ffb4(plVar8 + 5);
        plVar3 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          plVar3 = plVar8 + 2;
          if (*(long **)*plVar3 == plVar8) {
            plVar8 = (long *)*plVar3;
          }
          else {
            do {
              lVar5 = *plVar3;
              plVar3 = (long *)(lVar5 + 0x10);
              plVar8 = (long *)*plVar3;
            } while (*plVar8 != lVar5);
          }
        }
        else {
          do {
            plVar8 = plVar3;
            plVar3 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
      }
      if ((*(byte *)(lVar6 + 0x30) & 0x3f) != 0) {
        *(undefined8 *)(lVar6 + 0x38) = 0;
        *(undefined4 *)(lVar6 + 0x58) = 0;
      }
      uVar7 = (ulong)*(uint *)(lVar6 + 0x48);
      if (0 < (int)*(uint *)(lVar6 + 0x48)) {
        puVar4 = *(undefined8 **)(lVar6 + 0x50);
        do {
          puVar4 = puVar4 + 1;
          (**(code **)(*(long *)*puVar4 + 0x38))();
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        *(undefined4 *)(lVar6 + 0x48) = 0;
      }
      *(undefined4 *)(lVar6 + 0x30) = 0;
      if (((*(ulong *)(lVar6 + 0x28) & 1) != 0) &&
         (*(long *)(*(ulong *)(lVar6 + 0x28) & 0xfffffffffffffffe) != 0)) {
        FUN_00bfee44();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(ulong *)(param_1 + 8) & 1) == 0) ||
     (*(long *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) == 0)) {
    return;
  }
  FUN_00bfee44();
  return;
}


