/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00330eac; name: FUN_00330eac
 */


void FUN_00330eac(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar2;
  undefined8 uVar1;
  ulong local_38;
  long local_30;
  ulong local_28;
  undefined8 local_18;
  
  if (DAT_047ef4c0 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_18 = 0;
  local_28 = 0;
  local_38 = 0;
  local_30 = 0;
                    /* try { // try from 00330ed8 to 00330f27 has its CatchHandler @ 00330f58 */
  FUN_00330930(DAT_047ef4c0,param_2,&local_18,&local_38);
  FUN_0037bfa0(local_18);
  if ((local_38 & 1) == 0) {
    if ((byte)local_38 < 2) {
LAB_00330f20:
      uVar1 = FUN_0038ccb0(param_2);
      goto LAB_00330f28;
    }
    uVar2 = (ulong)&local_38 | 1;
  }
  else {
    if (local_30 == 0) goto LAB_00330f20;
    uVar2 = local_28;
  }
  uVar1 = FUN_0038ccb0(uVar2);
LAB_00330f28:
  *param_1 = uVar1;
  if ((local_38 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_28);
  }
  return;
}


