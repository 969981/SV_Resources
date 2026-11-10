/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03514184; name: FUN_03514184
 */


void FUN_03514184(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  (**(code **)*param_1)();
  if (*(char *)(param_1 + 1) == '\x02') {
    if ((long *)param_1[4] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[4] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[4] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[4];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[4] = 0;
    }
    if (param_1[5] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[5] = 0;
    }
    if (param_1[7] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[7] = 0;
    }
    *(undefined4 *)(param_1 + 9) = 0;
    if (param_1[10] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[10] = 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  if (*(char *)((long)param_1 + 9) == '\x02') {
    if ((long *)param_1[0xf] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0xf] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0xf] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0xf];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0xf] = 0;
    }
    if (param_1[0x10] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x10] = 0;
    }
    if (param_1[0x12] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x12] = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (param_1[0x15] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x15] = 0;
    }
    *(undefined4 *)(param_1 + 0x17) = 0;
    *(undefined1 *)((long)param_1 + 9) = 0;
  }
  if (*(char *)((long)param_1 + 10) == '\x02') {
    if ((long *)param_1[0x1a] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0x1a] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0x1a] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0x1a];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0x1a] = 0;
    }
    if (param_1[0x1b] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x1b] = 0;
    }
    if (param_1[0x1d] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x1d] = 0;
    }
    *(undefined4 *)(param_1 + 0x1f) = 0;
    if (param_1[0x20] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x20] = 0;
    }
    *(undefined4 *)(param_1 + 0x22) = 0;
    *(undefined1 *)((long)param_1 + 10) = 0;
  }
  if (*(char *)((long)param_1 + 0xb) == '\x02') {
    if ((long *)param_1[0x25] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0x25] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0x25] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0x25];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0x25] = 0;
    }
    if (param_1[0x26] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x26] = 0;
    }
    if (param_1[0x28] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x28] = 0;
    }
    *(undefined4 *)(param_1 + 0x2a) = 0;
    if (param_1[0x2b] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x2b] = 0;
    }
    *(undefined4 *)(param_1 + 0x2d) = 0;
    *(undefined1 *)((long)param_1 + 0xb) = 0;
  }
  if (*(char *)((long)param_1 + 0xc) == '\x02') {
    if ((long *)param_1[0x30] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0x30] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0x30] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0x30];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0x30] = 0;
    }
    if (param_1[0x31] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x31] = 0;
    }
    if (param_1[0x33] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x33] = 0;
    }
    *(undefined4 *)(param_1 + 0x35) = 0;
    if (param_1[0x36] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x36] = 0;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined1 *)((long)param_1 + 0xc) = 0;
  }
  if (*(char *)((long)param_1 + 0xd) == '\x02') {
    if ((long *)param_1[0x3b] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0x3b] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0x3b] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0x3b];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0x3b] = 0;
    }
    if (param_1[0x3c] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x3c] = 0;
    }
    if (param_1[0x3e] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x3e] = 0;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (param_1[0x41] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x41] = 0;
    }
    *(undefined4 *)(param_1 + 0x43) = 0;
    *(undefined1 *)((long)param_1 + 0xd) = 0;
  }
  if (*(char *)((long)param_1 + 0xe) == '\x02') {
    if ((long *)param_1[0x46] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0x46] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0x46] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0x46];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0x46] = 0;
    }
    if (param_1[0x47] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x47] = 0;
    }
    if (param_1[0x49] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x49] = 0;
    }
    *(undefined4 *)(param_1 + 0x4b) = 0;
    if (param_1[0x4c] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x4c] = 0;
    }
    *(undefined4 *)(param_1 + 0x4e) = 0;
    *(undefined1 *)((long)param_1 + 0xe) = 0;
  }
  if (*(char *)((long)param_1 + 0xf) == '\x02') {
    if ((long *)param_1[0x51] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0x51] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0x51] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0x51];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0x51] = 0;
    }
    if (param_1[0x52] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x52] = 0;
    }
    if (param_1[0x54] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x54] = 0;
    }
    *(undefined4 *)(param_1 + 0x56) = 0;
    if (param_1[0x57] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x57] = 0;
    }
    *(undefined4 *)(param_1 + 0x59) = 0;
    *(undefined1 *)((long)param_1 + 0xf) = 0;
  }
  if (*(char *)(param_1 + 2) == '\x02') {
    if ((long *)param_1[0x5c] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0x5c] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0x5c] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0x5c];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0x5c] = 0;
    }
    if (param_1[0x5d] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x5d] = 0;
    }
    if (param_1[0x5f] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x5f] = 0;
    }
    *(undefined4 *)(param_1 + 0x61) = 0;
    if (param_1[0x62] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x62] = 0;
    }
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (*(char *)((long)param_1 + 0x11) == '\x02') {
    if ((long *)param_1[0x67] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0x67] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0x67] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0x67];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0x67] = 0;
    }
    if (param_1[0x68] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x68] = 0;
    }
    if (param_1[0x6a] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x6a] = 0;
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
    if (param_1[0x6d] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x6d] = 0;
    }
    *(undefined4 *)(param_1 + 0x6f) = 0;
    *(undefined1 *)((long)param_1 + 0x11) = 0;
  }
  if (*(char *)((long)param_1 + 0x12) == '\x02') {
    if ((long *)param_1[0x72] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0x72] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0x72] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0x72];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0x72] = 0;
    }
    if (param_1[0x73] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x73] = 0;
    }
    if (param_1[0x75] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x75] = 0;
    }
    *(undefined4 *)(param_1 + 0x77) = 0;
    if (param_1[0x78] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x78] = 0;
    }
    *(undefined4 *)(param_1 + 0x7a) = 0;
    *(undefined1 *)((long)param_1 + 0x12) = 0;
  }
  if (*(char *)((long)param_1 + 0x13) == '\x02') {
    if ((long *)param_1[0x7d] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0x7d] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0x7d] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0x7d];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0x7d] = 0;
    }
    if (param_1[0x7e] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x7e] = 0;
    }
    if (param_1[0x80] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x80] = 0;
    }
    *(undefined4 *)(param_1 + 0x82) = 0;
    if (param_1[0x83] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x83] = 0;
    }
    *(undefined4 *)(param_1 + 0x85) = 0;
    *(undefined1 *)((long)param_1 + 0x13) = 0;
  }
  if (*(char *)((long)param_1 + 0x14) == '\x02') {
    if ((long *)param_1[0x88] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0x88] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0x88] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0x88];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0x88] = 0;
    }
    if (param_1[0x89] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x89] = 0;
    }
    if (param_1[0x8b] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x8b] = 0;
    }
    *(undefined4 *)(param_1 + 0x8d) = 0;
    if (param_1[0x8e] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x8e] = 0;
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)((long)param_1 + 0x14) = 0;
  }
  if (*(char *)((long)param_1 + 0x15) == '\x02') {
    if ((long *)param_1[0x93] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0x93] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0x93] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0x93];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0x93] = 0;
    }
    if (param_1[0x94] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x94] = 0;
    }
    if (param_1[0x96] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x96] = 0;
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (param_1[0x99] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x99] = 0;
    }
    *(undefined4 *)(param_1 + 0x9b) = 0;
    *(undefined1 *)((long)param_1 + 0x15) = 0;
  }
  if (*(char *)((long)param_1 + 0x16) == '\x02') {
    if ((long *)param_1[0x9e] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0x9e] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0x9e] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0x9e];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0x9e] = 0;
    }
    if (param_1[0x9f] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0x9f] = 0;
    }
    if (param_1[0xa1] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xa1] = 0;
    }
    *(undefined4 *)(param_1 + 0xa3) = 0;
    if (param_1[0xa4] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xa4] = 0;
    }
    *(undefined4 *)(param_1 + 0xa6) = 0;
    *(undefined1 *)((long)param_1 + 0x16) = 0;
  }
  if (*(char *)((long)param_1 + 0x17) == '\x02') {
    if ((long *)param_1[0xa9] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0xa9] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0xa9] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0xa9];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0xa9] = 0;
    }
    if (param_1[0xaa] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xaa] = 0;
    }
    if (param_1[0xac] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xac] = 0;
    }
    *(undefined4 *)(param_1 + 0xae) = 0;
    if (param_1[0xaf] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xaf] = 0;
    }
    *(undefined4 *)(param_1 + 0xb1) = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
  }
  if (*(char *)(param_1 + 3) == '\x02') {
    if ((long *)param_1[0xb4] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0xb4] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0xb4] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0xb4];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0xb4] = 0;
    }
    if (param_1[0xb5] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xb5] = 0;
    }
    if (param_1[0xb7] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xb7] = 0;
    }
    *(undefined4 *)(param_1 + 0xb9) = 0;
    if (param_1[0xba] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xba] = 0;
    }
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (*(char *)((long)param_1 + 0x19) == '\x02') {
    if ((long *)param_1[0xbf] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0xbf] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0xbf] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0xbf];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0xbf] = 0;
    }
    if (param_1[0xc0] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xc0] = 0;
    }
    if (param_1[0xc2] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xc2] = 0;
    }
    *(undefined4 *)(param_1 + 0xc4) = 0;
    if (param_1[0xc5] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xc5] = 0;
    }
    *(undefined4 *)(param_1 + 199) = 0;
    *(undefined1 *)((long)param_1 + 0x19) = 0;
  }
  if (*(char *)((long)param_1 + 0x1a) == '\x02') {
    if ((long *)param_1[0xca] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0xca] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0xca] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0xca];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0xca] = 0;
    }
    if (param_1[0xcb] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xcb] = 0;
    }
    if (param_1[0xcd] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xcd] = 0;
    }
    *(undefined4 *)(param_1 + 0xcf) = 0;
    if (param_1[0xd0] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xd0] = 0;
    }
    *(undefined4 *)(param_1 + 0xd2) = 0;
    *(undefined1 *)((long)param_1 + 0x1a) = 0;
  }
  if (*(char *)((long)param_1 + 0x1b) == '\x02') {
    if ((long *)param_1[0xd5] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0xd5] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0xd5] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0xd5];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0xd5] = 0;
    }
    if (param_1[0xd6] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xd6] = 0;
    }
    if (param_1[0xd8] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xd8] = 0;
    }
    *(undefined4 *)(param_1 + 0xda) = 0;
    if (param_1[0xdb] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xdb] = 0;
    }
    *(undefined4 *)(param_1 + 0xdd) = 0;
    *(undefined1 *)((long)param_1 + 0x1b) = 0;
  }
  if (*(char *)((long)param_1 + 0x1c) == '\x02') {
    if ((long *)param_1[0xe0] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0xe0] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0xe0] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0xe0];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0xe0] = 0;
    }
    if (param_1[0xe1] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xe1] = 0;
    }
    if (param_1[0xe3] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xe3] = 0;
    }
    *(undefined4 *)(param_1 + 0xe5) = 0;
    if (param_1[0xe6] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xe6] = 0;
    }
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined1 *)((long)param_1 + 0x1c) = 0;
  }
  if (*(char *)((long)param_1 + 0x1d) == '\x02') {
    if ((long *)param_1[0xeb] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0xeb] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0xeb] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0xeb];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0xeb] = 0;
    }
    if (param_1[0xec] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xec] = 0;
    }
    if (param_1[0xee] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xee] = 0;
    }
    *(undefined4 *)(param_1 + 0xf0) = 0;
    if (param_1[0xf1] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xf1] = 0;
    }
    *(undefined4 *)(param_1 + 0xf3) = 0;
    *(undefined1 *)((long)param_1 + 0x1d) = 0;
  }
  if (*(char *)((long)param_1 + 0x1e) == '\x02') {
    if ((long *)param_1[0xf6] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0xf6] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0xf6] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0xf6];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,puVar3);
      }
      param_1[0xf6] = 0;
    }
    if (param_1[0xf7] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xf7] = 0;
    }
    if (param_1[0xf9] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xf9] = 0;
    }
    *(undefined4 *)(param_1 + 0xfb) = 0;
    if (param_1[0xfc] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
      param_1[0xfc] = 0;
    }
    *(undefined4 *)(param_1 + 0xfe) = 0;
    *(undefined1 *)((long)param_1 + 0x1e) = 0;
  }
  puVar1 = PTR_DAT_047e2fd0;
  if (*(char *)((long)param_1 + 0x1f) == '\x02') {
    if ((long *)param_1[0x101] != (long *)0x0) {
      uVar2 = (**(code **)(*(long *)param_1[0x101] + 0x18))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(*(long *)param_1[0x101] + 0x28))();
      }
      puVar3 = (undefined8 *)param_1[0x101];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        (**(code **)(puVar1 + 0x30))(5,puVar3);
      }
      param_1[0x101] = 0;
    }
    if (param_1[0x102] != 0) {
      (**(code **)(puVar1 + 0x30))(5);
      param_1[0x102] = 0;
    }
    if (param_1[0x104] != 0) {
      (**(code **)(puVar1 + 0x30))(5);
      param_1[0x104] = 0;
    }
    *(undefined4 *)(param_1 + 0x106) = 0;
    if (param_1[0x107] != 0) {
      (**(code **)(puVar1 + 0x30))(5);
      param_1[0x107] = 0;
    }
    *(undefined4 *)(param_1 + 0x109) = 0;
    *(undefined1 *)((long)param_1 + 0x1f) = 0;
  }
  return;
}


