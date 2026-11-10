/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c45a4; name: FUN_031c45a4
 */


void FUN_031c45a4(float param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long local_28;
  
  uVar5 = (long)((float)param_3 / param_1) + 6;
  *param_2 = 0;
  if (uVar5 < 7) {
    uVar5 = 0;
  }
  else {
    uVar5 = uVar5 / 7;
    uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
  }
  uVar2 = 7L << (uVar5 & 0x3f);
  while ((ulong)(long)((float)uVar2 * param_1) < param_3) {
    uVar2 = uVar2 << 1;
    uVar5 = uVar5 + 1;
  }
  local_28 = 0x80L << (uVar5 & 0x3f);
  puVar1 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0x80);
  *param_2 = (long)puVar1;
  param_2[1] = ~(-1L << (uVar5 & 0x3f));
  *(int *)(param_2 + 2) = 0x38 - (int)uVar5;
  *puVar1 = 0;
  puVar1[1] = 0;
  if (param_2[1] != 0) {
    uVar5 = 1;
    lVar3 = 0x80;
    do {
      lVar4 = *param_2;
      uVar5 = uVar5 + 1;
      *(undefined8 *)(lVar4 + lVar3) = 0;
      ((undefined8 *)(lVar4 + lVar3))[1] = 0;
      lVar3 = lVar3 + 0x80;
    } while (uVar5 <= (ulong)param_2[1]);
  }
  return;
}


