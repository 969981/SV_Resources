/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cfa274; name: FUN_01cfa274
 */


void FUN_01cfa274(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_047cfbb0 + 0x10);
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    (**(code **)(*(long *)param_1[0x3b] + 0x18))
              ((long *)param_1[0x3b],param_1[0x3a],param_1[0x38] & 0xfffffffffffffffe,1);
  }
  FUN_01cfa410(param_1 + 0x32);
  lVar1 = param_1[0x2b];
  if (lVar1 != 0) {
    param_1[0x2c] = lVar1;
    (**(code **)(*(long *)param_1[0x2e] + 0x18))
              ((long *)param_1[0x2e],lVar1,param_1[0x2d] - lVar1,4);
  }
  if ((*(byte *)(param_1 + 0x26) & 1) != 0) {
    (**(code **)(*(long *)param_1[0x29] + 0x18))
              ((long *)param_1[0x29],param_1[0x28],param_1[0x26] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    (**(code **)(*(long *)param_1[0x23] + 0x18))
              ((long *)param_1[0x23],param_1[0x22],param_1[0x20] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    (**(code **)(*(long *)param_1[0x1f] + 0x18))
              ((long *)param_1[0x1f],param_1[0x1e],param_1[0x1c] & 0xfffffffffffffffe,1);
  }
  lVar1 = param_1[0x18];
  if (lVar1 != 0) {
    param_1[0x19] = lVar1;
    (**(code **)(*(long *)param_1[0x1b] + 0x18))
              ((long *)param_1[0x1b],lVar1,param_1[0x1a] - lVar1,4);
  }
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    param_1[0x15] = lVar1;
    (**(code **)(*(long *)param_1[0x17] + 0x18))
              ((long *)param_1[0x17],lVar1,param_1[0x16] - lVar1,4);
  }
  FUN_01cfa44c(param_1 + 0xe,param_1[0xf]);
  FUN_01cfa44c(param_1 + 10,param_1[0xb]);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    (**(code **)(*(long *)param_1[8] + 0x18))
              ((long *)param_1[8],param_1[7],param_1[5] & 0xfffffffffffffffe,1);
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01cfa408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x18))
            ((long *)param_1[4],param_1[3],param_1[1] & 0xfffffffffffffffe,1);
  return;
}


