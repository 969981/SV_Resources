/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030d3aa0; name: FUN_030d3aa0
 */


void FUN_030d3aa0(ulong *param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  
  puVar3 = PTR_DAT_047e3360;
  if (*PTR_DAT_047e3360 != '\0') {
    plVar4 = (long *)(param_1[0x1f] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[0x1f] & 3) == 0) {
        param_1[0x1f] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[0x1f] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[0x1e] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[0x1e] & 3) == 0) {
        param_1[0x1e] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[0x1e] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[0x1d] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[0x1d] & 3) == 0) {
        param_1[0x1d] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[0x1d] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[0x1c] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[0x1c] & 3) == 0) {
        param_1[0x1c] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[0x1c] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[0x1b] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[0x1b] & 3) == 0) {
        param_1[0x1b] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[0x1b] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[0x1a] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[0x1a] & 3) == 0) {
        param_1[0x1a] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[0x1a] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[0x19] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[0x19] & 3) == 0) {
        param_1[0x19] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[0x19] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[0x18] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[0x18] & 3) == 0) {
        param_1[0x18] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[0x18] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[0x17] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[0x17] & 3) == 0) {
        param_1[0x17] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[0x17] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[0x16] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[0x16] & 3) == 0) {
        param_1[0x16] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[0x16] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[0x15] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[0x15] & 3) == 0) {
        param_1[0x15] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[0x15] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[0x14] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[0x14] & 3) == 0) {
        param_1[0x14] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[0x14] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[0x13] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[0x13] & 3) == 0) {
        param_1[0x13] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[0x13] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[0x12] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[0x12] & 3) == 0) {
        param_1[0x12] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[0x12] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[0x11] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[0x11] & 3) == 0) {
        param_1[0x11] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[0x11] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[0x10] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[0x10] & 3) == 0) {
        param_1[0x10] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[0x10] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[0xf] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[0xf] & 3) == 0) {
        param_1[0xf] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[0xf] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[0xe] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[0xe] & 3) == 0) {
        param_1[0xe] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[0xe] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[0xd] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[0xd] & 3) == 0) {
        param_1[0xd] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[0xd] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[0xc] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[0xc] & 3) == 0) {
        param_1[0xc] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[0xc] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[0xb] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[0xb] & 3) == 0) {
        param_1[0xb] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[0xb] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[10] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[10] & 3) == 0) {
        param_1[10] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[10] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[9] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[9] & 3) == 0) {
        param_1[9] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[9] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[8] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[8] & 3) == 0) {
        param_1[8] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[8] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[7] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[7] & 3) == 0) {
        param_1[7] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[7] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[6] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[6] & 3) == 0) {
        param_1[6] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[6] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[5] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[5] & 3) == 0) {
        param_1[5] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[5] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[4] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[4] & 3) == 0) {
        param_1[4] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[4] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[3] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[3] & 3) == 0) {
        param_1[3] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[3] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[2] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[2] & 3) == 0) {
        param_1[2] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[2] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1[1] & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((param_1[1] & 3) == 0) {
        param_1[1] = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        param_1[1] = 0;
        if (*puVar3 == '\0') {
          return;
        }
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
    plVar4 = (long *)(*param_1 & 0xfffffffffffffffc);
    if (plVar4 != (long *)0x0) {
      if ((*param_1 & 3) == 0) {
        *param_1 = (ulong)plVar4 | 1;
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          (**(code **)(lVar2 + 8))();
        } while (plVar4 != (long *)0x0);
        *param_1 = 0;
      }
      else {
        do {
          plVar1 = (long *)(plVar4[1] & 0xfffffffffffffffc);
          plVar4[1] = (ulong)plVar1 | 1;
          plVar4 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
    }
  }
  return;
}


