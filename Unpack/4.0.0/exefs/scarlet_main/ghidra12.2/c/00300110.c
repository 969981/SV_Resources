/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00300110; name: FUN_00300110
 */


undefined8 FUN_00300110(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_120 [256];
  
  if (*param_3 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = FUN_003b3bc0();
  if (0 < (int)uVar1) {
    uVar3 = 0;
    *param_3 = (ulong)uVar1;
switchD_00300188_caseD_3:
    return uVar3;
  }
  uVar2 = FUN_003b51b0(param_1);
  uVar3 = 6;
  switch(uVar2) {
  case 1:
    uVar4 = FUN_00480980(6);
    while (uVar4 != 0) {
      FUN_00480ca0(uVar4 & 0xffffffff,auStack_120,0x100);
      uVar4 = FUN_00480980();
    }
    return 8;
  case 2:
  case 6:
    *param_3 = 0;
    return 0;
  case 3:
    goto switchD_00300188_caseD_3;
  default:
    return 10;
  }
}


