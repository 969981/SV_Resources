/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0346e510; name: FUN_0346e510
 */


void FUN_0346e510(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,ulong param_4)

{
  long lVar1;
  
  if ((*(byte *)(param_3 + 0x198) >> 6 & 1) != 0) {
    return;
  }
  if ((uint)param_4 < 0x3b) {
    if ((1L << (param_4 & 0x3f) & 0x1f800000U) != 0) {
LAB_0346e5b4:
      FUN_0346e610(param_3,param_4 & 0xffffffff);
      return;
    }
    if ((1L << (param_4 & 0x3f) & 0x4000000007c0000U) != 0) {
      FUN_0346e610(param_2._0_8_,param_3,param_4 & 0xffffffff);
      goto LAB_0346e570;
    }
    if ((param_4 & 0xffffffff) == 0x2e) {
      *(undefined4 *)(param_3 + 0x150) = 0;
      goto LAB_0346e5b4;
    }
  }
  if (((0x4003fe718700U >> (param_4 & 0x3f) & 1) == 0) &&
     (*(uint *)(PTR_DAT_047e7180 +
               (ulong)*(uint *)(PTR_DAT_047e7178 + (param_4 & 0xffffffff) * 4) * 4) != 0x1b)) {
    lVar1 = param_3 + (ulong)*(uint *)(PTR_DAT_047e7180 +
                                      (ulong)*(uint *)(PTR_DAT_047e7178 + (param_4 & 0xffffffff) * 4
                                                      ) * 4) * 4;
    *(float *)(lVar1 + 0x60) = *(float *)(lVar1 + 0x60) + param_2._0_4_;
  }
LAB_0346e570:
  if ((((uint)param_4 == 0x2f) && ((*(ushort *)(param_3 + 0x198) & 1) != 0)) &&
     (*(long **)(param_3 + 0x178) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0346e598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_3 + 0x178) + 0x20))();
    return;
  }
  return;
}


