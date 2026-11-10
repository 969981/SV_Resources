/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00888ee4; name: FUN_00888ee4
 */


void FUN_00888ee4(undefined8 *param_1,code *param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  *param_1 = 0;
  *(uint *)(param_1 + 3) = param_4;
  lVar2 = (*param_2)((ulong)param_4 * 0x58,8);
  uVar1 = param_4 - 1;
  param_1[1] = lVar2;
  if (1 < (int)param_4) {
    if (uVar1 == 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      plVar3 = (long *)(lVar2 + 0x58);
      do {
        uVar4 = uVar4 + 2;
        plVar3[-0xb] = (long)plVar3;
        *plVar3 = (long)(plVar3 + 0xb);
        plVar3 = plVar3 + 0x16;
      } while (((ulong)uVar1 & 0xfffffffe) != uVar4);
    }
    if ((uVar1 & 1) != 0) {
      plVar3 = (long *)(lVar2 + uVar4 * 0x58);
      *plVar3 = (long)(plVar3 + 0xb);
    }
  }
  *(undefined8 *)(lVar2 + (long)(int)(uVar1 * 0xb) * 8) = 0;
  param_1[2] = lVar2;
  return;
}


