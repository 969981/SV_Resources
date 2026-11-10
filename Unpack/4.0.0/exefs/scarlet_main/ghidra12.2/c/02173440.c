/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02173440; name: FUN_02173440
 */


short * FUN_02173440(undefined8 param_1,undefined1 *param_2,short *param_3)

{
  ulong uVar1;
  short *psVar2;
  
  uVar1 = FUN_021734c8(param_3);
  if ((uVar1 & 1) == 0) {
    psVar2 = (short *)FUN_021734fc(param_1,param_2,param_3);
    return psVar2;
  }
  if ((*param_3 == 0x10) && (1 < (ushort)param_3[1])) {
    uVar1 = (ulong)(ushort)param_3[3];
  }
  else {
    uVar1 = 0;
  }
  *param_2 = 1;
  return param_3 + uVar1 + 5;
}


