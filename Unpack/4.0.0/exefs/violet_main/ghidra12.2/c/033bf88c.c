/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033bf88c; name: FUN_033bf88c
 */


void FUN_033bf88c(long *param_1)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = (void *)param_1[1];
  if ((pvVar1 == (void *)0x0) || (*param_1 == 0)) {
    *(undefined4 *)(param_1 + 3) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    param_1[2] = (long)pvVar1;
    memset(pvVar1,0,(ulong)(uint)((int)*param_1 << 2));
  }
  pvVar1 = (void *)param_1[5];
  if ((pvVar1 == (void *)0x0) || (lVar2 = param_1[4], lVar2 == 0)) {
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  else {
    param_1[6] = (long)pvVar1;
    memset(pvVar1,0,(ulong)(uint)((int)lVar2 << 2));
  }
  pvVar1 = (void *)param_1[9];
  if ((pvVar1 == (void *)0x0) || (lVar2 = param_1[8], lVar2 == 0)) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  else {
    param_1[10] = (long)pvVar1;
    memset(pvVar1,0,(ulong)(uint)((int)lVar2 << 2));
  }
  pvVar1 = (void *)param_1[0xd];
  if ((pvVar1 == (void *)0x0) || (lVar2 = param_1[0xc], lVar2 == 0)) {
    *(undefined4 *)(param_1 + 0xf) = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  else {
    param_1[0xe] = (long)pvVar1;
    memset(pvVar1,0,(ulong)(uint)((int)lVar2 << 2));
  }
  pvVar1 = (void *)param_1[0x11];
  if ((pvVar1 == (void *)0x0) || (lVar2 = param_1[0x10], lVar2 == 0)) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  else {
    param_1[0x12] = (long)pvVar1;
    memset(pvVar1,0,(ulong)(uint)((int)lVar2 << 2));
  }
  pvVar1 = (void *)param_1[0x15];
  if ((pvVar1 == (void *)0x0) || (lVar2 = param_1[0x14], lVar2 == 0)) {
    *(undefined4 *)(param_1 + 0x17) = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
  }
  else {
    param_1[0x16] = (long)pvVar1;
    memset(pvVar1,0,(ulong)(uint)((int)lVar2 << 2));
  }
  pvVar1 = (void *)param_1[0x19];
  if ((pvVar1 == (void *)0x0) || (lVar2 = param_1[0x18], lVar2 == 0)) {
    *(undefined4 *)(param_1 + 0x1b) = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
  }
  else {
    param_1[0x1a] = (long)pvVar1;
    memset(pvVar1,0,(ulong)(uint)((int)lVar2 << 2));
  }
  pvVar1 = (void *)param_1[0x1d];
  if ((pvVar1 == (void *)0x0) || (lVar2 = param_1[0x1c], lVar2 == 0)) {
    *(undefined4 *)(param_1 + 0x1f) = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
  }
  else {
    param_1[0x1e] = (long)pvVar1;
    memset(pvVar1,0,(ulong)(uint)((int)lVar2 << 2));
  }
  pvVar1 = (void *)param_1[0x21];
  if ((pvVar1 == (void *)0x0) || (lVar2 = param_1[0x20], lVar2 == 0)) {
    *(undefined4 *)(param_1 + 0x23) = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
  }
  else {
    param_1[0x22] = (long)pvVar1;
    memset(pvVar1,0,(ulong)(uint)((int)lVar2 << 2));
  }
  pvVar1 = (void *)param_1[0x25];
  if ((pvVar1 == (void *)0x0) || (lVar2 = param_1[0x24], lVar2 == 0)) {
    *(undefined4 *)(param_1 + 0x27) = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
  }
  else {
    param_1[0x26] = (long)pvVar1;
    memset(pvVar1,0,(ulong)(uint)((int)lVar2 << 2));
  }
  pvVar1 = (void *)param_1[0x29];
  if ((pvVar1 == (void *)0x0) || (lVar2 = param_1[0x28], lVar2 == 0)) {
    *(undefined4 *)(param_1 + 0x2b) = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
  }
  else {
    param_1[0x2a] = (long)pvVar1;
    memset(pvVar1,0,(ulong)(uint)((int)lVar2 << 2));
  }
  pvVar1 = (void *)param_1[0x2d];
  if ((pvVar1 == (void *)0x0) || (lVar2 = param_1[0x2c], lVar2 == 0)) {
    *(undefined4 *)(param_1 + 0x2f) = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
  }
  else {
    param_1[0x2e] = (long)pvVar1;
    memset(pvVar1,0,(ulong)(uint)((int)lVar2 << 2));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x40] = 0;
  param_1[0x31] = 0x3ff0000000000000;
  param_1[0x32] = 0;
  param_1[0x41] = 0x3fe0000000000000;
  param_1[0x42] = 0x3fe69fbe76c8b439;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0x3fe0000000000000;
  param_1[0x37] = 0x3fe69fbe76c8b439;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0x3ff0000000000000;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  return;
}


