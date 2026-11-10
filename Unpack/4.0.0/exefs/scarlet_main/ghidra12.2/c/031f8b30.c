/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031f8b30; name: FUN_031f8b30
 */


uint FUN_031f8b30(int param_1,long *param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  
  puVar4 = (undefined8 *)(*param_2 + (long)param_1 * 0x18);
  puVar5 = (ulong *)*puVar4;
  uVar3 = *(uint *)((long)puVar4 + 0xc);
  uVar1 = param_3 + 1;
  uVar2 = uVar1;
  if (-1 < (int)uVar3) {
    do {
      uVar2 = FUN_031f8b30(uVar3,param_2,uVar2,param_4);
      uVar3 = *(uint *)(*param_2 + (ulong)uVar3 * 0x18 + 0x10);
    } while (-1 < (int)uVar3);
  }
  while( true ) {
    uVar3 = (uint)*puVar5;
    if ((uVar3 >> 0xd & 1) != 0) {
      if (puVar5 != (ulong *)0x0) {
        uVar3 = uVar3 & 0x1fff;
        puVar5[(ulong)(byte)(POPCOUNT((char)uVar3) + POPCOUNT((char)(uVar3 >> 8))) + 2] =
             (long)(int)(uVar1 * 0x20000 | param_4 & 3 | (uVar2 & 0x7fff) << 2);
      }
      return uVar2;
    }
    if ((*puVar5 & 1) != 0) break;
    puVar5 = (ulong *)puVar5[1];
    if (puVar5 == (ulong *)0x0) {
      return uVar2;
    }
  }
  return uVar2;
}


