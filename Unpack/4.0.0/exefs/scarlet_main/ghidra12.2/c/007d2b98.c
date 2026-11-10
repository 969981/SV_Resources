/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d2b98; name: FUN_007d2b98
 */


void FUN_007d2b98(long *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  *(undefined2 *)(param_1 + 1) = 0;
  puVar1 = PTR_DAT_047d1300;
  *(short *)((long)param_1 + 10) = (short)param_2;
  *param_1 = (long)(puVar1 + 0x10);
  uVar2 = FUN_0078a12c();
  lVar3 = FUN_007bf9f0((param_2 & 0xffff) << 3,uVar2);
  if ((lVar3 != 0) && ((param_2 & 0xffff) != 0)) {
    uVar4 = param_2 & 3;
    if ((param_2 & 0xffff) - 1 < 3) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      puVar6 = (undefined8 *)(lVar3 + 0x10);
      do {
        uVar5 = uVar5 + 4;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6 = puVar6 + 4;
      } while ((param_2 & 0xfffc) != uVar5);
    }
    if (uVar4 != 0) {
      puVar6 = (undefined8 *)(lVar3 + uVar5 * 8);
      do {
        uVar4 = uVar4 - 1;
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      } while (uVar4 != 0);
    }
  }
  param_1[2] = lVar3;
  return;
}


