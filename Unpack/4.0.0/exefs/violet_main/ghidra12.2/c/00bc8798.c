/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bc8798; name: FUN_00bc8798
 */


void FUN_00bc8798(long param_1)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  if ((*(uint *)(param_1 + 0x10) & 5) != 0) {
    if (((*(uint *)(param_1 + 0x10) & 1) != 0) &&
       (pbVar1 = *(byte **)(param_1 + 0x18), pbVar1 != *(byte **)PTR_DAT_047dabb0)) {
      if ((*pbVar1 & 1) == 0) {
        pbVar1[0] = 0;
        pbVar1[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar1 + 0x10) = 0;
        pbVar1[8] = 0;
        pbVar1[9] = 0;
        pbVar1[10] = 0;
        pbVar1[0xb] = 0;
        pbVar1[0xc] = 0;
        pbVar1[0xd] = 0;
        pbVar1[0xe] = 0;
        pbVar1[0xf] = 0;
      }
    }
    if (((*(byte *)(param_1 + 0x10) >> 2 & 1) != 0) &&
       (lVar5 = *(long *)(param_1 + 0x38), lVar5 != 0)) {
      plVar7 = *(long **)(lVar5 + 8);
      while (plVar7 != (long *)(lVar5 + 0x10)) {
        FUN_00c1ffb4(plVar7 + 5);
        plVar2 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          plVar2 = plVar7 + 2;
          if (*(long **)*plVar2 == plVar7) {
            plVar7 = (long *)*plVar2;
          }
          else {
            do {
              lVar4 = *plVar2;
              plVar2 = (long *)(lVar4 + 0x10);
              plVar7 = (long *)*plVar2;
            } while (*plVar7 != lVar4);
          }
        }
        else {
          do {
            plVar7 = plVar2;
            plVar2 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
      }
      uVar6 = (ulong)*(uint *)(lVar5 + 0x40);
      *(undefined2 *)(lVar5 + 0x50) = 0;
      if (0 < (int)*(uint *)(lVar5 + 0x40)) {
        puVar3 = *(undefined8 **)(lVar5 + 0x48);
        do {
          puVar3 = puVar3 + 1;
          (**(code **)(*(long *)*puVar3 + 0x38))();
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        *(undefined4 *)(lVar5 + 0x40) = 0;
      }
      *(undefined4 *)(lVar5 + 0x30) = 0;
      if (((*(ulong *)(lVar5 + 0x28) & 1) != 0) &&
         (*(long *)(*(ulong *)(lVar5 + 0x28) & 0xfffffffffffffffe) != 0)) {
        FUN_00bfee44();
      }
    }
  }
  uVar6 = (ulong)*(uint *)(param_1 + 0x28);
  if (0 < (int)*(uint *)(param_1 + 0x28)) {
    puVar3 = *(undefined8 **)(param_1 + 0x30);
    do {
      puVar3 = puVar3 + 1;
      (**(code **)(*(long *)*puVar3 + 0x38))();
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(ulong *)(param_1 + 8) & 1) == 0) ||
     (*(long *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) == 0)) {
    return;
  }
  FUN_00bfee44();
  return;
}


