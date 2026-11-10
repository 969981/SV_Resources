/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d08584; name: FUN_01d08584
 */


void FUN_01d08584(long *param_1)

{
  *param_1 = (long)(PTR_DAT_047cfd80 + 0x10);
  if ((*(byte *)(param_1 + 0x27) & 1) != 0) {
    (**(code **)(*(long *)param_1[0x2a] + 0x18))
              ((long *)param_1[0x2a],param_1[0x29],param_1[0x27] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 0x23) & 1) != 0) {
    (**(code **)(*(long *)param_1[0x26] + 0x18))
              ((long *)param_1[0x26],param_1[0x25],param_1[0x23] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 0x1f) & 1) != 0) {
    (**(code **)(*(long *)param_1[0x22] + 0x18))
              ((long *)param_1[0x22],param_1[0x21],param_1[0x1f] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    (**(code **)(*(long *)param_1[0x1e] + 0x18))
              ((long *)param_1[0x1e],param_1[0x1d],param_1[0x1b] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    (**(code **)(*(long *)param_1[0x1a] + 0x18))
              ((long *)param_1[0x1a],param_1[0x19],param_1[0x17] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    (**(code **)(*(long *)param_1[0x16] + 0x18))
              ((long *)param_1[0x16],param_1[0x15],param_1[0x13] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
    (**(code **)(*(long *)param_1[0x12] + 0x18))
              ((long *)param_1[0x12],param_1[0x11],param_1[0xf] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    (**(code **)(*(long *)param_1[0xe] + 0x18))
              ((long *)param_1[0xe],param_1[0xd],param_1[0xb] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    (**(code **)(*(long *)param_1[10] + 0x18))
              ((long *)param_1[10],param_1[9],param_1[7] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01d0871c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[5] + 0x18))
            ((long *)param_1[5],param_1[4],param_1[2] & 0xfffffffffffffffe,1);
  return;
}


